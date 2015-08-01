/******************************************************************************
* Copyright (c) 2005, 2015  Ericsson AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v1.0
* which accompanies this distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*
* Contributors:
* Csaba Koppany
* Eduard Czimbalmos
* Gabor Szalai
* Janos Zoltan Szabo
* Timea Moder
******************************************************************************/
//
//  File:               H248_EncDec.cc
//  Rev:                R6A
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002),
//                      ITU-T H.248.1 V2 Corrigendum 1 (03/2004)
//                      ITU-T H.248.1 V3 Draft (09/2004)
//                      updates from ITU-T H.248.1 V3 Draft (08/2005)
//                              except TermIDList
#include "H248_Types.hh"
#include "memory.h"
#include <cstdlib>
namespace H248__Types {

static bool H248_header_length() {
//  static bool initialized=false;
  static unsigned value=1+int(65535*rand()/(RAND_MAX + 1.0));
  if (par__H248__Enc__header__format==
              H248__header__format__enum::H248__LONG__TOKENS)
    return true;
  else if (par__H248__Enc__header__format==
              H248__header__format__enum::H248__SHORT__TOKENS)
    return false;
  else {
    bool ret_val=value&0x01;
    value=(value>>1)|((value&0x01)<<15);
    return ret_val;
  }
}
static void H248_Encoder_encode_Mid(TTCN_Buffer &bb, const MId &data);
static void H248_Encoder_encode_ErrorDescriptor(TTCN_Buffer &bb, 
                                        const ErrorDescriptor &data);
static void H248_Encoder_encode_TransactionRequest(TTCN_Buffer &bb,
                                        const TransactionRequest &data);
static void H248_Encoder_encode_ContextRequest(TTCN_Buffer &bb,
                                        const ContextRequest &data);
static void H248_Encoder_encode_PropertyParm(TTCN_Buffer &bb,
                                        const PropertyParm &data);
static void H248_Encoder_encode_PkgdName(TTCN_Buffer &bb,
                                        const PkgdName &data);
static void H248_Encoder_encode_ParmValue(TTCN_Buffer &bb,
                                        const ParmValue &data);
static void H248_Encoder_encode_AmmRequest(TTCN_Buffer &bb,
                                        const AmmRequest &data);
static void H248_Encoder_encode_ModemDescriptor(TTCN_Buffer &bb,
                                        const ModemDescriptor &data);
static void H248_Encoder_encode_MuxDescriptor(TTCN_Buffer &bb,
                                        const MuxDescriptor &data);
static void H248_Encoder_encode_MediaDescriptor(TTCN_Buffer &bb,
                                        const MediaDescriptor &data);
static void H248_Encoder_encode_StreamParm(TTCN_Buffer &bb,
                                        const StreamParm &data);
static void H248_Encoder_encode_StatisticsDescriptor(TTCN_Buffer &bb,
                                        const StatisticsDescriptor &data);
static void H248_Encoder_encode_EventBufferDescriptor(TTCN_Buffer &bb,
                                        const EventBufferDescriptor &data);
static void H248_Encoder_encode_EventParOrStreamList(TTCN_Buffer &bb,
                                        const EventParOrStreamList &data);
static void H248_Encoder_encode_EventParameter(TTCN_Buffer &bb,
                                        const EventParameter &data);
static void H248_Encoder_encode_DigitMapDescriptor(TTCN_Buffer &bb,
                                        const DigitMapDescriptor &data);
static void H248_Encoder_encode_DigitMapValue(TTCN_Buffer &bb,
                                        const DigitMapValue &data);
static void H248_Encoder_encode_EventsDescriptor(TTCN_Buffer &bb,
                                        const EventsDescriptor &data);
static void H248_Encoder_encode_SignalsDescriptor(TTCN_Buffer &bb,
                                        const SignalsDescriptor &data);
static void H248_Encoder_encode_SecondRequestedEvent(TTCN_Buffer &bb,
                                        const SecondRequestedEvent &data);
static void H248_Encoder_encode_Signal(TTCN_Buffer &bb,
                                        const Signal &data);
static void H248_Encoder_encode_EmbedSig(TTCN_Buffer &bb,
                                        const EmbedSig &data);
static void H248_Encoder_encode_AuditDescriptor(TTCN_Buffer &bb,
                                        const AuditDescriptor &data);
static void H248_Encoder_encode_IndAudTerminationStateParm(TTCN_Buffer &bb,
                                        const IndAudTerminationStateParm &data);
static void H248_Encoder_encode_ServiceState(TTCN_Buffer &bb,
                                        const ServiceState &data);
static void H248_Encoder_encode_IndAudStreamParms(TTCN_Buffer &bb,
                                        const IndAudStreamParms &data);
static void H248_Encoder_encode_StreamMode(TTCN_Buffer &bb,
                                        const StreamMode &data);
static void H248_Encoder_encode_IndAudStatisticsDescriptor(TTCN_Buffer &bb,
                                        const IndAudStatisticsDescriptor &data);
static void H248_Encoder_encode_AuditItem(TTCN_Buffer &bb,
                                        const AuditItem &data);
static void H248_Encoder_encode_IndAudSignalRequest(TTCN_Buffer &bb,
                                        const IndAudSignalRequest &data);
static void H248_Encoder_encode_PackagesItem(TTCN_Buffer &bb,
                                        const PackagesItem &data);
static void H248_Encoder_encode_PackagesDescriptor(TTCN_Buffer &bb,
                                        const PackagesDescriptor &data);
static void H248_Encoder_encode_AuditTokens(TTCN_Buffer &bb,
                                        const AuditTokens &data);
static void H248_Encoder_encode_AuditRequest(TTCN_Buffer &bb,
                                        const AuditRequest &data);
static void H248_Encoder_encode_ObservedEventsDescriptor(TTCN_Buffer &bb,
                                        const ObservedEventsDescriptor &data);
static void H248_Encoder_encode_TimeNotation(TTCN_Buffer &bb,
                                        const TimeNotation &data);
static void H248_Encoder_encode_ServiceChangeDescriptor(TTCN_Buffer &bb,
                                        const ServiceChangeDescriptor &data);
static void H248_Encoder_encode_ServiceChangeAddress(TTCN_Buffer &bb,
                                        const ServiceChangeAddress &data);
static void H248_Encoder_encode_ServiceChangeProfile(TTCN_Buffer &bb,
                                        const ServiceChangeProfile &data);
static void H248_Encoder_encode_TransactionReply(TTCN_Buffer &bb,
                                        const TransactionReply &data);
static void H248_Encoder_encode_CommandReply(TTCN_Buffer &bb,
                                        const CommandReply &data);
static void H248_Encoder_encode_AmmsReply(TTCN_Buffer &bb,
                                        const AmmsReply &data);
static void H248_Encoder_encode_TerminationAudit(TTCN_Buffer &bb,
                                        const TerminationAudit &data);
static void H248_Encoder_encode_AuditReply(TTCN_Buffer &bb,
                                        const AuditReply &data);
CHARSTRING f__H248__Enc(const PDU__H248& pl__msg)
{
	TTCN_Buffer bb;
  const char* atm;
  int atm_len;
  if(pl__msg.authHeader().ispresent()){
    if(H248_header_length()){
      atm="Authentication=";
      atm_len=15;
    } else {
      atm="AU=";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_s(2,(const unsigned char *)"0x");
    bb.put_cs(oct2str(pl__msg.authHeader()().secParmIndex()));
    bb.put_c((unsigned char)':');
    bb.put_s(2,(const unsigned char *)"0x");
    bb.put_cs(oct2str(pl__msg.authHeader()().seqNum()));
    bb.put_c((unsigned char)':');
    bb.put_s(2,(const unsigned char *)"0x");
    bb.put_cs(oct2str(pl__msg.authHeader()().ad()));
    bb.put_c((unsigned char)' ');
  }
  if(H248_header_length()){
    atm="MEGACO/";
    atm_len=7;
  } else {
    atm="!/";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(int2str(pl__msg.mess().version()));
  bb.put_c((unsigned char)' ');
  H248_Encoder_encode_Mid(bb,pl__msg.mess().mId());
  bb.put_c((unsigned char)' ');
  
  // Message Body

  switch(pl__msg.mess().messageBody().get_selection()){
    case MessageBody::ALT_messageError:
      H248_Encoder_encode_ErrorDescriptor(bb,
                                   pl__msg.mess().messageBody().messageError());
      break;
    case MessageBody::ALT_transactions:
      {
        int len=pl__msg.mess().messageBody().transactions().size_of();
        for(int i=0;i<len;i++){
          const Transaction *trans=
                                &pl__msg.mess().messageBody().transactions()[i];
          switch(trans->get_selection()){
            case Transaction::ALT_transactionRequest:
             H248_Encoder_encode_TransactionRequest(bb,
                                                   trans->transactionRequest());
              break;
            case Transaction::ALT_transactionPending:
              if(H248_header_length()){
                atm="Pending=";
                atm_len=8;
              } else {
                atm="PN=";
                atm_len=3;
              }
              bb.put_s(atm_len,(const unsigned char *)atm);
              bb.put_cs(trans->transactionPending().transactionId());
              bb.put_s(2,(const unsigned char *)"{}");
              break;
            case Transaction::ALT_transactionReply:
              H248_Encoder_encode_TransactionReply(bb,
                                                   trans->transactionReply());
              break;
            case Transaction::ALT_transactionResponseAck:{
              const TransactionResponseAck *tr_resp_ack=
                                               &trans->transactionResponseAck();
              int tr_len=tr_resp_ack->size_of();
              if(H248_header_length()){
                atm="TransactionResponseAck{";
                atm_len=23;
              } else {
                atm="K{";
                atm_len=2;
              }
              bb.put_s(atm_len,(const unsigned char *)atm);

              for(int j=0;j<tr_len; j++){
                const TransactionAck *tr_ack=&(*tr_resp_ack)[j];
                if(j) bb.put_c((unsigned char)',');
                bb.put_cs(tr_ack->firstAck());
                if(tr_ack->lastAck().ispresent()){
                  bb.put_c((unsigned char)'-');
                  bb.put_cs(tr_ack->lastAck()());
                }
              }

              bb.put_c((unsigned char)'}');
              }
              break;
            case Transaction::ALT_segmentReply:{
              const SegmentReply *seg_rep=&trans->segmentReply();
              if(H248_header_length()){
                atm="Segment=";
                atm_len=8;
              } else {
                atm="SM=";
                atm_len=3;
              }
              bb.put_s(atm_len,(const unsigned char *)atm);
              bb.put_cs(seg_rep->transactionId());
              bb.put_c((unsigned char)'/');
              bb.put_cs(int2str(seg_rep->segmentNumber()));
              if(seg_rep->segmentationComplete().ispresent()){
                bb.put_c((unsigned char)'/');
                if(H248_header_length()){
                  atm="END";
                  atm_len=3;
                } else {
                  atm="&";
                  atm_len=1;
                }
                bb.put_s(atm_len,(const unsigned char *)atm);
              }
              }
              break;
            default:
              TTCN_error("Encoding of unbound Transaction.");
          }
        }
      } 
      break;
    default:
      TTCN_error("Encoding of unbound MessageBody.");
    
  }
	return CHARSTRING (bb.get_len(),(char *)bb.get_data());
}

static void H248_Encoder_encode_TransactionReply(TTCN_Buffer &bb,
                                        const TransactionReply &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Reply=";
    atm_len=6;
  } else {
    atm="P=";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(data.transactionId());
  if(data.segmentNumber().ispresent()){
    bb.put_c((unsigned char)'/');
    bb.put_cs(int2str(data.segmentNumber()()));
  }
  if(data.segmentationComplete().ispresent()){
    bb.put_c((unsigned char)'/');
    if(H248_header_length()){
      atm="END";
      atm_len=3;
    } else {
      atm="&";
      atm_len=1;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
  }
  bb.put_c((unsigned char)'{');
  if(data.immAckRequired().ispresent()){
    if(H248_header_length()){
      atm="ImmAckRequired";
      atm_len=14;
    } else {
      atm="IA";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_c((unsigned char)',');
  }
  switch(data.transactionResult().get_selection()){
    case TransactionReplyOrError::ALT_transactionError:
      H248_Encoder_encode_ErrorDescriptor(bb,
                                   data.transactionResult().transactionError());
      break;
    case TransactionReplyOrError::ALT_actionReplies:
      {
      int list_len=data.transactionResult().actionReplies().size_of();
      for(int i=0;i<list_len;i++){
        const ActionReply *ar=&data.transactionResult().actionReplies()[i];
        if(i) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Context=";
          atm_len=8;
        } else {
          atm="C=";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(ar->contextId());
        if(ar->contextBody().ispresent()){
          bool comma_needed=false;
          bb.put_c((unsigned char)'{');
          if(ar->contextBody()().contextRequest().ispresent()){
            H248_Encoder_encode_ContextRequest(bb,
                                        ar->contextBody()().contextRequest()());
            comma_needed=true;
          }
          if(ar->contextBody()().commandReply().ispresent()){
            int ll=ar->contextBody()().commandReply()().size_of();
            if(comma_needed) bb.put_c((unsigned char)',');
            for(int k=0;k<ll;k++){
              if(k) bb.put_c((unsigned char)',');
              H248_Encoder_encode_CommandReply(bb,
                                       ar->contextBody()().commandReply()()[k]);
            }
            comma_needed=true;
          }
          if(ar->contextBody()().errorDescriptor().ispresent()){
            if(comma_needed) bb.put_c((unsigned char)',');
            H248_Encoder_encode_ErrorDescriptor(bb,
                                       ar->contextBody()().errorDescriptor()());
          }
          bb.put_c((unsigned char)'}');
        }
      }
    }
    break;
    default: ;
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_CommandReply(TTCN_Buffer &bb,
                                        const CommandReply &data){
  const char* atm;
  int atm_len;
  switch(data.get_selection()){
    case CommandReply::ALT_addReply:
      if(H248_header_length()){
        atm="Add=";
        atm_len=4;
      } else {
        atm="A=";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AmmsReply(bb,data.addReply());
      break;
    case CommandReply::ALT_moveReply:
      if(H248_header_length()){
        atm="Move=";
        atm_len=5;
      } else {
        atm="MV=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AmmsReply(bb,data.moveReply());
      break;
    case CommandReply::ALT_modReply:
      if(H248_header_length()){
        atm="Modify=";
        atm_len=7;
      } else {
        atm="MF=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AmmsReply(bb,data.modReply());
      break;
    case CommandReply::ALT_subtractReply:
      if(H248_header_length()){
        atm="Subtract=";
        atm_len=9;
      } else {
        atm="S=";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AmmsReply(bb,data.subtractReply());
      break;
    case CommandReply::ALT_auditCapReply:
      if(H248_header_length()){
        atm="AuditCapability=";
        atm_len=16;
      } else {
        atm="AC=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AuditReply(bb,data.auditCapReply());
      break;
    case CommandReply::ALT_auditValueReply:
      if(H248_header_length()){
        atm="AuditValue=";
        atm_len=11;
      } else {
        atm="AV=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_AuditReply(bb,data.auditValueReply());
      break;
    case CommandReply::ALT_notifyReply:
      if(H248_header_length()){
        atm="Notify=";
        atm_len=7;
      } else {
        atm="N=";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(data.notifyReply().terminationID());
      if(data.notifyReply().errorDescriptor().ispresent()){
        bb.put_c((unsigned char)'{');
        H248_Encoder_encode_ErrorDescriptor(bb,
                                        data.notifyReply().errorDescriptor()());
        bb.put_c((unsigned char)'}');
      }
      break;
    case CommandReply::ALT_serviceChangeReply:
      if(H248_header_length()){
        atm="ServiceChange=";
        atm_len=14;
      } else {
        atm="SC=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(data.serviceChangeReply().terminationID());
      if(data.serviceChangeReply().serviceChangeResult().ispresent()){
        const ServiceChangeResult *scr=
                             &data.serviceChangeReply().serviceChangeResult()();
        bb.put_c((unsigned char)'{');
        switch(scr->get_selection()){
          case ServiceChangeResult::ALT_errorDescriptor:
            H248_Encoder_encode_ErrorDescriptor(bb,scr->errorDescriptor());
            break;
          case ServiceChangeResult::ALT_serviceChangeResParms:
            {
              bool comma_needed=false;
              if(H248_header_length()){
                atm="Services{";
                atm_len=9;
              } else {
                atm="SV{";
                atm_len=3;
              }
              bb.put_s(atm_len,(const unsigned char *)atm);
              if(scr->serviceChangeResParms().
                                            serviceChangeAddress().ispresent()){
                H248_Encoder_encode_ServiceChangeAddress(bb,
                         scr->serviceChangeResParms().serviceChangeAddress()());
                comma_needed=true;
              }
              if(scr->serviceChangeResParms().
                                            serviceChangeVersion().ispresent()){
                if(comma_needed) bb.put_c((unsigned char)',');
                if(H248_header_length()){
                  atm="Version=";
                  atm_len=8;
                } else {
                  atm="V=";
                  atm_len=2;
                }
                bb.put_s(atm_len,(const unsigned char *)atm);
                bb.put_cs(int2str(scr->serviceChangeResParms().
                                                     serviceChangeVersion()()));
                comma_needed=true;
              }
              if(scr->serviceChangeResParms().
                                            serviceChangeProfile().ispresent()){
                if(comma_needed) bb.put_c((unsigned char)',');
                H248_Encoder_encode_ServiceChangeProfile(bb,
                         scr->serviceChangeResParms().serviceChangeProfile()());
                comma_needed=true;
              }
              if(scr->serviceChangeResParms().serviceChangeMgcId().ispresent()){
                if(comma_needed) bb.put_c((unsigned char)',');
                if(H248_header_length()){
                  atm="MgcIdToTry=";
                  atm_len=11;
                } else {
                  atm="MG=";
                  atm_len=3;
                }
                bb.put_s(atm_len,(const unsigned char *)atm);
                H248_Encoder_encode_Mid(bb,
                           scr->serviceChangeResParms().serviceChangeMgcId()());
                comma_needed=true;
              }
              if(scr->serviceChangeResParms().timestamp().ispresent()){
                if(comma_needed) bb.put_c((unsigned char)',');
                H248_Encoder_encode_TimeNotation(bb,
                                    scr->serviceChangeResParms().timestamp()());
              }

              bb.put_c((unsigned char)'}');
            }
            break;
          default: ;
        }
        bb.put_c((unsigned char)'}');
      }
      break;
    default:
      TTCN_error("Encoding of unbound CommandReply.");
  }
}

static void H248_Encoder_encode_AuditReply(TTCN_Buffer &bb,
                                        const AuditReply &data){
  const char* atm;
  int atm_len;
  switch(data.get_selection()){
    case AuditReply::ALT_field__error:
      if(H248_header_length()){
        atm="Context{";
        atm_len=8;
      } else {
        atm="C{";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_ErrorDescriptor(bb,data.field__error());
      bb.put_c((unsigned char)'}');
      break;
    case AuditReply::ALT_contextAuditResult:{
      int ll=data.contextAuditResult().size_of();
      if(H248_header_length()){
        atm="Context{";
        atm_len=8;
      } else {
        atm="C{";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      for(int i=0;i<ll;i++){
        if(i) bb.put_c((unsigned char)',');
        bb.put_cs(data.contextAuditResult()[i]);
      }
      bb.put_c((unsigned char)'}');
      }
      break;
    case AuditReply::ALT_auditResult:
      bb.put_cs(data.auditResult().terminationID());
      if(data.auditResult().terminationAuditResult().ispresent()){
        H248_Encoder_encode_TerminationAudit(bb,
                                 data.auditResult().terminationAuditResult()());
      }
      break;
    default:
      TTCN_error("Encoding of unbound AuditReply.");
  }
}

static void H248_Encoder_encode_AmmsReply(TTCN_Buffer &bb,
                                        const AmmsReply &data){
  bb.put_cs(data.terminationID());
  if(data.terminationAudit().ispresent()){
    H248_Encoder_encode_TerminationAudit(bb,data.terminationAudit()());
  }
}

static void H248_Encoder_encode_TerminationAudit(TTCN_Buffer &bb,
                                        const TerminationAudit &data){
  int list_len=data.size_of();
  if(list_len==0) return;
  bb.put_c((unsigned char)'{');
  for(int i=0;i<list_len;i++){
    const AuditReturnParameter *arp=&data[i];
    if(i) bb.put_c((unsigned char)',');
    switch(arp->get_selection()){
      case AuditReturnParameter::ALT_errorDescriptor:
        H248_Encoder_encode_ErrorDescriptor(bb,arp->errorDescriptor());
        break;
      case AuditReturnParameter::ALT_mediaDescriptor:
        H248_Encoder_encode_MediaDescriptor(bb,arp->mediaDescriptor());
        break;
      case AuditReturnParameter::ALT_modemDescriptor:
        H248_Encoder_encode_ModemDescriptor(bb,arp->modemDescriptor());
        break;
      case AuditReturnParameter::ALT_muxDescriptor:
        H248_Encoder_encode_MuxDescriptor(bb,arp->muxDescriptor());
        break;
      case AuditReturnParameter::ALT_eventBufferDescriptor:
        H248_Encoder_encode_EventBufferDescriptor(bb,
                                        arp->eventBufferDescriptor());
        break;
      case AuditReturnParameter::ALT_eventsDescriptor:
        H248_Encoder_encode_EventsDescriptor(bb,arp->eventsDescriptor());
        break;
      case AuditReturnParameter::ALT_signalsDescriptor:
        H248_Encoder_encode_SignalsDescriptor(bb,arp->signalsDescriptor());
        break;
      case AuditReturnParameter::ALT_digitMapDescriptor:
        H248_Encoder_encode_DigitMapDescriptor(bb,arp->digitMapDescriptor());
        break;
      case AuditReturnParameter::ALT_observedEventsDescriptor:
        H248_Encoder_encode_ObservedEventsDescriptor(bb,
                                        arp->observedEventsDescriptor());
        break;
      case AuditReturnParameter::ALT_statisticsDescriptor:
        H248_Encoder_encode_StatisticsDescriptor(bb,
                                        arp->statisticsDescriptor());
        break;
      case AuditReturnParameter::ALT_packagesDescriptor:
        H248_Encoder_encode_PackagesDescriptor(bb,arp->packagesDescriptor());
        break;
      case AuditReturnParameter::ALT_emptyDescriptors:
        H248_Encoder_encode_AuditTokens(bb,arp->emptyDescriptors());
        break;
      default:
        TTCN_error("Encoding of unbound AuditReturnParameter.");
    }
  }
  bb.put_c((unsigned char)'}');

}

static void H248_Encoder_encode_TransactionRequest(TTCN_Buffer &bb,
                                         const TransactionRequest &data){
  const char* atm;
  int atm_len;
  const ActionRequestList *act_list=&data.actions();
  if(H248_header_length()){
    atm="Transaction=";
    atm_len=12;
  } else {
    atm="T=";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(data.transactionId());
  bb.put_c((unsigned char)'{');
  
  int act_list_len = act_list->size_of();
  for(int i=0;i<act_list_len;i++){
    bool need_comma=false;
    if(i) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Context=";
      atm_len=8;
    } else {
      atm="C=";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs((*act_list)[i].contextId());
    bb.put_c((unsigned char)'{');
    if((*act_list)[i].contextBody().contextRequest().ispresent()){
      H248_Encoder_encode_ContextRequest(bb,
                               (*act_list)[i].contextBody().contextRequest()());
      need_comma=true;
    }
    if((*act_list)[i].contextBody().contextAttrAuditReq().ispresent()){
      bool comma_needed=false;
      const ContextAttrAuditRequest *c_aud_req=
                          &(*act_list)[i].contextBody().contextAttrAuditReq()();
      if(need_comma) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="ContextAudit{";
        atm_len=13;
      } else {
        atm="CA{";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(c_aud_req->priorityValue().ispresent()){
        if(H248_header_length()){
          atm="Priority=";
          atm_len=9;
        } else {
          atm="PR=";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(int2str(c_aud_req->priorityValue()()));
        comma_needed=true;
      }
      if(c_aud_req->emergencyValue().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="EmergencyValue=";
          atm_len=15;
        } else {
          atm="EGV=";
          atm_len=4;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        if(c_aud_req->emergencyValue()()==Emergency::emergencyOff){
          if(H248_header_length()){
            atm="EmergencyOff";
            atm_len=12;
          } else {
            atm="EGO";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
        } else {
          if(H248_header_length()){
            atm="Emergency";
            atm_len=9;
          } else {
            atm="EG";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
        }
        comma_needed=true;
      }
      if(c_aud_req->iepsValue().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="IEPSCall=";
          atm_len=9;
        } else {
          atm="IEPS=";
          atm_len=5;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        if(c_aud_req->iepsValue()()) bb.put_s(2,(const unsigned char *)"ON");
        else bb.put_s(3,(const unsigned char *)"OFF");
        comma_needed=true;
      }
      if(c_aud_req->contextAttrDescriptor().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="ContextAttr{";
          atm_len=12;
        } else {
          atm="CT{";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        switch(c_aud_req->contextAttrDescriptor()().get_selection()){
          case ContextAttrDescriptor::ALT_contextIds:
            {
              if(H248_header_length()){
                atm="ContextList={";
                atm_len=13;
              } else {
                atm="CLT={";
                atm_len=5;
              }
              bb.put_s(atm_len,(const unsigned char *)atm);
              int clt_len=
                    c_aud_req->contextAttrDescriptor()().contextIds().size_of();
              for(int j=0;j<clt_len;j++){
                if(j) bb.put_c((unsigned char)',');
                bb.put_cs(c_aud_req->contextAttrDescriptor()().contextIds()[j]);
              }
              bb.put_c((unsigned char)'}');
            }
            break;
          case ContextAttrDescriptor::ALT_propertyParms: 
            {
              int clt_len=
                 c_aud_req->contextAttrDescriptor()().propertyParms().size_of();
              for(int j=0;j<clt_len;j++){
                if(j) bb.put_c((unsigned char)',');
                H248_Encoder_encode_PropertyParm(bb,
                       c_aud_req->contextAttrDescriptor()().propertyParms()[j]);
              }
            }
            break;
          default: ;
        }
        bb.put_c((unsigned char)'}');
        comma_needed=true;
      }
      if(c_aud_req->auditSelectionLogic().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(c_aud_req->auditSelectionLogic()()==AuditSelectionLogic::ANDLgc)
          bb.put_s(6,(const unsigned char *)"ANDLgc");
        else bb.put_s(5,(const unsigned char *)"ORLgc");
        comma_needed=true;
      }
      if(c_aud_req->topology().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Topology";
          atm_len=8;
        } else {
          atm="TP";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        comma_needed=true;
      }
      if(c_aud_req->emergency().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Emergency";
          atm_len=9;
        } else {
          atm="EG";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        comma_needed=true;
      }
      if(c_aud_req->priority().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Priority";
          atm_len=8;
        } else {
          atm="PR";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        comma_needed=true;
      }
      if(c_aud_req->iEPS().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="IEPSCall";
          atm_len=8;
        } else {
          atm="IEPS";
          atm_len=4;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        comma_needed=true;
      }
      if(c_aud_req->pkgdName().ispresent()){
        if(comma_needed) bb.put_c((unsigned char)',');
        H248_Encoder_encode_PkgdName(bb,c_aud_req->pkgdName()());
      }
      bb.put_c((unsigned char)'}');
      need_comma=true;
    } // if() contextAttrAuditReq
    if((*act_list)[i].contextBody().commandRequests().ispresent()){
      const CommandRequestList *req_list=
                              &(*act_list)[i].contextBody().commandRequests()();
      int list_len=req_list->size_of();
      if(need_comma) bb.put_c((unsigned char)',');
      for(int k=0;k<list_len;k++){
        if(k) bb.put_c((unsigned char)',');
        if((*req_list)[k].optionalField()) 
          bb.put_s(2,(const unsigned char *)"O-");
        if((*req_list)[k].wildcardReturn())
          bb.put_s(2,(const unsigned char *)"W-");
        const Command *com=&(*req_list)[k].command();
        switch(com->get_selection()){
          case Command::ALT_addReq:
            if(H248_header_length()){
              atm="Add=";
              atm_len=4;
            } else {
              atm="A=";
              atm_len=2;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            H248_Encoder_encode_AmmRequest(bb,com->addReq());
            break;
          case Command::ALT_moveReq:
            if(H248_header_length()){
              atm="Move=";
              atm_len=5;
            } else {
              atm="MV=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            H248_Encoder_encode_AmmRequest(bb,com->moveReq());
            break;
          case Command::ALT_modReq:
            if(H248_header_length()){
              atm="Modify=";
              atm_len=7;
            } else {
              atm="MF=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            H248_Encoder_encode_AmmRequest(bb,com->modReq());
            break;
          case Command::ALT_subtractReq:
            if(H248_header_length()){
              atm="Subtract=";
              atm_len=9;
            } else {
              atm="S=";
              atm_len=2;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            bb.put_cs(com->subtractReq().terminationID());
            if(com->subtractReq().auditDescriptor().ispresent()){
              bb.put_c((unsigned char)'{');
              H248_Encoder_encode_AuditDescriptor(bb,
                                        com->subtractReq().auditDescriptor()());
              bb.put_c((unsigned char)'}');
            }
            break;
          case Command::ALT_auditCapRequest:
            if(H248_header_length()){
              atm="AuditCapability=";
              atm_len=16;
            } else {
              atm="AC=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            H248_Encoder_encode_AuditRequest(bb,com->auditCapRequest());
            break;
          case Command::ALT_auditValueRequest:
            if(H248_header_length()){
              atm="AuditValue=";
              atm_len=11;
            } else {
              atm="AV=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            H248_Encoder_encode_AuditRequest(bb,com->auditValueRequest());
            break;
          case Command::ALT_notifyReq:
            if(H248_header_length()){
              atm="Notify=";
              atm_len=7;
            } else {
              atm="N=";
              atm_len=2;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            bb.put_cs(com->notifyReq().terminationID());
            bb.put_c((unsigned char)'{');
            H248_Encoder_encode_ObservedEventsDescriptor(bb,
                      com->notifyReq().notifyBody().observedEventsDescriptor());
            if(com->notifyReq().notifyBody().errorDescriptor().ispresent()){
              bb.put_c((unsigned char)',');
              H248_Encoder_encode_ErrorDescriptor(bb,
                      com->notifyReq().notifyBody().errorDescriptor()());
            }
            bb.put_c((unsigned char)'}');
            break;
          case Command::ALT_serviceChangeReq:
            if(H248_header_length()){
              atm="ServiceChange=";
              atm_len=14;
            } else {
              atm="SC=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            bb.put_cs(com->serviceChangeReq().terminationID());
            bb.put_c((unsigned char)'{');
            H248_Encoder_encode_ServiceChangeDescriptor(bb,
                      com->serviceChangeReq().serviceChangeParms());
            bb.put_c((unsigned char)'}');
            break;
          default:
            TTCN_error("Encoding of unbound Command.");
        } // switch(sel_com)
      }
    }
    bb.put_c((unsigned char)'}');
  }
  
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_ServiceChangeDescriptor(TTCN_Buffer &bb,
                                        const ServiceChangeDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Services{";
    atm_len=9;
  } else {
    atm="SV{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(H248_header_length()){
    atm="Method=";
    atm_len=7;
  } else {
    atm="MT=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  switch(data.serviceChangeMethod()){
    case ServiceChangeMethod::failover:
      if(H248_header_length()){
        atm="Failover";
        atm_len=8;
      } else {
        atm="FL";
        atm_len=2;
      }
      break;
    case ServiceChangeMethod::forced:
      if(H248_header_length()){
        atm="Forced";
        atm_len=6;
      } else {
        atm="FO";
        atm_len=2;
      }
      break;
    case ServiceChangeMethod::graceful:
      if(H248_header_length()){
        atm="Graceful";
        atm_len=8;
      } else {
        atm="GR";
        atm_len=2;
      }
      break;
    case ServiceChangeMethod::restart:
      if(H248_header_length()){
        atm="Restart";
        atm_len=7;
      } else {
        atm="RS";
        atm_len=2;
      }
      break;
    case ServiceChangeMethod::disconnected:
      if(H248_header_length()){
        atm="Disconnected";
        atm_len=12;
      } else {
        atm="DC";
        atm_len=2;
      }
      break;
    case ServiceChangeMethod::handOff:
      if(H248_header_length()){
        atm="HandOff";
        atm_len=7;
      } else {
        atm="HO";
        atm_len=2;
      }
      break;
    default:
      atm="X+UNKNOW";
      atm_len=8;
      break;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.serviceChangeAddress().ispresent()){
    bb.put_c((unsigned char)',');
    H248_Encoder_encode_ServiceChangeAddress(bb,data.serviceChangeAddress()());
  }
  if(data.serviceChangeVersion().ispresent()){
    bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Version=";
      atm_len=8;
    } else {
      atm="V=";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(int2str(data.serviceChangeVersion()()));
  }
  if(data.serviceChangeProfile().ispresent()){
    bb.put_c((unsigned char)',');
    H248_Encoder_encode_ServiceChangeProfile(bb,data.serviceChangeProfile()());
  }
  bb.put_c((unsigned char)',');
  if(H248_header_length()){
    atm="Reason=";
    atm_len=7;
  } else {
    atm="RE=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(data.serviceChangeReason());
  if(data.serviceChangeDelay().ispresent()){
    bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Delay=";
      atm_len=6;
    } else {
      atm="DL=";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(data.serviceChangeDelay()());
  }
  if(data.serviceChangeMgcId().ispresent()){
    bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="MgcIdToTry=";
      atm_len=11;
    } else {
      atm="MG=";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    H248_Encoder_encode_Mid(bb,data.serviceChangeMgcId()());
  }
  if(data.timeStamp().ispresent()){
    bb.put_c((unsigned char)',');
    H248_Encoder_encode_TimeNotation(bb,data.timeStamp()());
  }
  if(data.serviceChangeIncomplete().ispresent()){
    bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="ServiceChangeInc";
      atm_len=16;
    } else {
      atm="SIC";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
  }
  if(data.nonStandardData().ispresent()){
    bb.put_c((unsigned char)',');
    bb.put_cs(data.nonStandardData()().nonStandardIdentifier());
    H248_Encoder_encode_ParmValue(bb,data.nonStandardData()().data());
  }
  if(data.serviceChangeInfo().ispresent()){
    bb.put_c((unsigned char)',');
    H248_Encoder_encode_AuditItem(bb,data.serviceChangeInfo()());
  }


  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_ServiceChangeProfile(TTCN_Buffer &bb,
                                        const ServiceChangeProfile &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Profile=";
    atm_len=8;
  } else {
    atm="PF=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(data.profileName());
  bb.put_c((unsigned char)'/');
  bb.put_cs(int2str(data.version()));
}

static void H248_Encoder_encode_ServiceChangeAddress(TTCN_Buffer &bb,
                                        const ServiceChangeAddress &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="ServiceChangeAddress=";
    atm_len=21;
  } else {
    atm="AD=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  switch(data.get_selection()){
    case ServiceChangeAddress::ALT_ip4Address:
      bb.put_c((unsigned char)'[');
      bb.put_cs(data.ip4Address().field__address());
      bb.put_c((unsigned char)']');
      if(data.ip4Address().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.ip4Address().portNumber()()));
      }
      break;
    case ServiceChangeAddress::ALT_ip6Address:
      bb.put_c((unsigned char)'[');
      bb.put_cs(data.ip6Address().field__address());
      bb.put_c((unsigned char)']');
      if(data.ip6Address().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.ip6Address().portNumber()()));
      }
      break;
    case ServiceChangeAddress::ALT_domainName:
      bb.put_c((unsigned char)'<');
      bb.put_cs(data.domainName().name());
      bb.put_c((unsigned char)'>');
      if(data.domainName().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.domainName().portNumber()()));
      }
      break;
    case ServiceChangeAddress::ALT_mtpAddress:
      bb.put_s(4,(const unsigned char*)"MTP{");
      bb.put_cs(oct2str(data.mtpAddress()));
      bb.put_c((unsigned char)'}');
      break;
    case ServiceChangeAddress::ALT_deviceName:
      bb.put_cs(data.deviceName());
      break;
    case ServiceChangeAddress::ALT_portNumber:
      bb.put_cs(int2str(data.portNumber()));
      break;
    default:
      TTCN_error("Encoding of unbound MId value.");
  }
}

static void H248_Encoder_encode_AuditRequest(TTCN_Buffer &bb,
                                        const AuditRequest &data){
  bb.put_cs(data.terminationID());
  bb.put_c((unsigned char)'{');
  H248_Encoder_encode_AuditDescriptor(bb,data.auditDescriptor());
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_AmmRequest(TTCN_Buffer &bb,
                                         const AmmRequest &data){
  bb.put_cs(data.terminationID());
  if(data.descriptors().ispresent()){
    int list_len=data.descriptors()().size_of();
    bb.put_c((unsigned char)'{');
    for(int i=0;i<list_len;i++){
      const AmmDescriptor *desc=&data.descriptors()()[i];
      if(i) bb.put_c((unsigned char)',');
      switch (desc->get_selection()){
        case AmmDescriptor::ALT_modemDescriptor:
          H248_Encoder_encode_ModemDescriptor(bb,desc->modemDescriptor());
          break;
        case AmmDescriptor::ALT_muxDescriptor:
          H248_Encoder_encode_MuxDescriptor(bb,desc->muxDescriptor());
          break;
        case AmmDescriptor::ALT_mediaDescriptor:
          H248_Encoder_encode_MediaDescriptor(bb,desc->mediaDescriptor());
          break;
        case AmmDescriptor::ALT_eventBufferDescriptor:
          H248_Encoder_encode_EventBufferDescriptor(bb,
                                                 desc->eventBufferDescriptor());
          break;
        case AmmDescriptor::ALT_eventsDescriptor:
          H248_Encoder_encode_EventsDescriptor(bb,desc->eventsDescriptor());
          break;
        case AmmDescriptor::ALT_signalsDescriptor:
          H248_Encoder_encode_SignalsDescriptor(bb,desc->signalsDescriptor());
          break;
        case AmmDescriptor::ALT_digitMapDescriptor:
          H248_Encoder_encode_DigitMapDescriptor(bb,desc->digitMapDescriptor());
          break;
        case AmmDescriptor::ALT_auditDescriptor:
          H248_Encoder_encode_AuditDescriptor(bb,desc->auditDescriptor());
          break;
        case AmmDescriptor::ALT_statisticsDescriptor:
          H248_Encoder_encode_StatisticsDescriptor(bb,
                                                  desc->statisticsDescriptor());
          break;
        default:
          TTCN_error("Encoding of unbound AmmDescriptor.");
      } // switch (desc_sel)
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_ObservedEventsDescriptor(TTCN_Buffer &bb,
                                        const ObservedEventsDescriptor &data){
  const char* atm;
  int atm_len;
  int list_len=data.observedEventLst().size_of();
  if(H248_header_length()){
    atm="ObservedEvents=";
    atm_len=15;
  } else {
    atm="OE=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(data.requestId());
  bb.put_c((unsigned char)'{');
  for(int i=0;i<list_len;i++){
    if(i) bb.put_c((unsigned char)',');
    if(data.observedEventLst()[i].timeAndEvent().time().ispresent()){
      H248_Encoder_encode_TimeNotation(bb,
                            data.observedEventLst()[i].timeAndEvent().time()());
      bb.put_c((unsigned char)':');
    }
    H248_Encoder_encode_PkgdName(bb,
                             data.observedEventLst()[i].timeAndEvent().event());
    if(data.observedEventLst()[i].eventParList().ispresent()){
      bb.put_c((unsigned char)'{');
      H248_Encoder_encode_EventParOrStreamList(bb,
                                   data.observedEventLst()[i].eventParList()());
      bb.put_c((unsigned char)'}');
    }
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_TimeNotation(TTCN_Buffer &bb,
                                        const TimeNotation &data){
  bb.put_cs(data.date());
  bb.put_c((unsigned char)'T');
  bb.put_cs(data.time());
}

static void H248_Encoder_encode_AuditDescriptor(TTCN_Buffer &bb,
                                         const AuditDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Audit{";
    atm_len=6;
  } else {
    atm="AT{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  int lis_len=data.size_of();
  for(int i=0;i<lis_len;i++){
    if(i) bb.put_c((unsigned char)',');
    H248_Encoder_encode_AuditItem(bb,data[i]);
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_AuditItem(TTCN_Buffer &bb,
                                        const AuditItem &data){
  const char* atm;
  int atm_len;
  switch(data.get_selection()){
    case AuditItem::ALT_indaudmediaDescriptor:
      if(H248_header_length()){
        atm="Media{";
        atm_len=6;
      } else {
        atm="M{";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(data.indaudmediaDescriptor().termStateDescr().ispresent()){
        if(H248_header_length()){
          atm="TerminationState{";
          atm_len=17;
        } else {
          atm="TS{";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        int ll=data.indaudmediaDescriptor().termStateDescr()().size_of();
        for(int k=0;k<ll;k++){
          if(k) bb.put_c((unsigned char)',');
          H248_Encoder_encode_IndAudTerminationStateParm(bb,data.
                                 indaudmediaDescriptor().termStateDescr()()[k]);
        }
        bb.put_c((unsigned char)'}');
      }
      if(data.indaudmediaDescriptor().streams().ispresent()){
        if(data.indaudmediaDescriptor().termStateDescr().ispresent())
          bb.put_c((unsigned char)',');
        if(data.indaudmediaDescriptor().streams()().get_selection() ==
            Stream::ALT_multiStream){
          const IndAudStreamDescriptorList *sd=&data.indaudmediaDescriptor().
                                                      streams()().multiStream();
          int ll=sd->size_of();
          for(int k=0;k<ll;k++){
            if(k) bb.put_c((unsigned char)',');
            if(H248_header_length()){
              atm="Stream=";
              atm_len=7;
            } else {
              atm="ST=";
              atm_len=3;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
            bb.put_cs(int2str((*sd)[k].streamID()));
            bb.put_c((unsigned char)'{');
            H248_Encoder_encode_IndAudStreamParms(bb,(*sd)[k].streamParms());
            bb.put_c((unsigned char)'}');
          }
        } else {
          H248_Encoder_encode_IndAudStreamParms(bb, data.
                               indaudmediaDescriptor().streams()().oneStream());
        }
      }
      bb.put_c((unsigned char)'}');
      break;
    case AuditItem::ALT_indaudeventBufferDescriptor:
      if(H248_header_length()){
        atm="EventBuffer{";
        atm_len=12;
      } else {
        atm="EB{";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_PkgdName(bb, data.indaudeventBufferDescriptor().
                                                                   eventName());
      if(data.indaudeventBufferDescriptor().streamID().ispresent()){
        const EventParNameOrStream *st=&data.
                                   indaudeventBufferDescriptor().streamID()();
        bb.put_c((unsigned char)'{');
        if(st->get_selection()==EventParNameOrStream::ALT_streamID){
          if(H248_header_length()){
            atm="Stream=";
            atm_len=7;
          } else {
            atm="ST=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          bb.put_cs(int2str(st->streamID()));
        } else {
          bb.put_cs(st->eventParName());
        }
        bb.put_c((unsigned char)'}');
      }
      bb.put_c((unsigned char)'}');
      break;
    case AuditItem::ALT_indaudeventsDescriptor:
      if(H248_header_length()){
        atm="Events";
        atm_len=6;
      } else {
        atm="E";
        atm_len=1;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(data.indaudeventsDescriptor().requestID().ispresent()){
        bb.put_c((unsigned char)'=');
        bb.put_cs(data.indaudeventsDescriptor().requestID()());
      }
      bb.put_c((unsigned char)'{');
      H248_Encoder_encode_PkgdName(bb,data.indaudeventsDescriptor().pkgdName());
      bb.put_c((unsigned char)'}');
      break;
    case AuditItem::ALT_indaudsignalsDescriptor:
      if(H248_header_length()){
        atm="Signals{";
        atm_len=8;
      } else {
        atm="SG{";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(data.indaudsignalsDescriptor().indAudSignalparm().ispresent()){
        if(data.indaudsignalsDescriptor().indAudSignalparm()().
            get_selection()==IndAudSignalParm::ALT_signal){
          H248_Encoder_encode_IndAudSignalRequest(bb, 
                  data.indaudsignalsDescriptor().indAudSignalparm()().signal());
        } else {
          const IndAudSignalList *sl=&data.indaudsignalsDescriptor().
                                              indAudSignalparm()().signalList();
          if(H248_header_length()){
            atm="SignalList=";
            atm_len=11;
          } else {
            atm="SL=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          bb.put_cs(int2str(sl->id()));
          bb.put_c((unsigned char)'{');
          H248_Encoder_encode_IndAudSignalRequest(bb,sl->params());
          bb.put_c((unsigned char)'}');
        }
      }
      bb.put_c((unsigned char)'}');
      break;
    case AuditItem::ALT_indauddigitMapDescriptor:
      if(H248_header_length()){
        atm="DigitMap=";
        atm_len=9;
      } else {
        atm="DM=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(data.indauddigitMapDescriptor().digitMapName());
      break;
    case AuditItem::ALT_indaudstatisticsDescriptor:
      H248_Encoder_encode_IndAudStatisticsDescriptor(bb,
                                             data.indaudstatisticsDescriptor());
      break;
    case AuditItem::ALT_indaudpackagesDescriptor:
      if(H248_header_length()){
        atm="Packages{";
        atm_len=9;
      } else {
        atm="PG{";
        atm_len=3;
      }
      H248_Encoder_encode_PackagesItem(bb,data.indaudpackagesDescriptor());
      bb.put_c((unsigned char)'}');
      break;
    case AuditItem::ALT_auditToken:
      H248_Encoder_encode_AuditTokens(bb,data.auditToken());
      break;
    default:
      TTCN_error("Encoding of unbound AuditItem.");
  }
}

static void H248_Encoder_encode_AuditTokens(TTCN_Buffer &bb,
                                        const AuditTokens &data){
  const char* atm;
  int atm_len;
  switch(data){
    case AuditTokens::muxToken:
      if(H248_header_length()){
        atm="Mux";
        atm_len=3;
      } else {
        atm="MX";
        atm_len=2;
      }
      break;
    case AuditTokens::modemToken:
      if(H248_header_length()){
        atm="Modem";
        atm_len=5;
      } else {
        atm="MD";
        atm_len=2;
      }
      break;
    case AuditTokens::mediaToken:
      if(H248_header_length()){
        atm="Media";
        atm_len=5;
      } else {
        atm="M";
        atm_len=1;
      }
      break;
    case AuditTokens::eventsToken:
      if(H248_header_length()){
        atm="Events";
        atm_len=6;
      } else {
        atm="E";
        atm_len=1;
      }
      break;
    case AuditTokens::signalsToken:
      if(H248_header_length()){
        atm="Signals";
        atm_len=7;
      } else {
        atm="SG";
        atm_len=2;
      }
      break;
    case AuditTokens::digitMapToken:
      if(H248_header_length()){
        atm="DigitMap";
        atm_len=8;
      } else {
        atm="DM";
        atm_len=2;
      }
      break;
    case AuditTokens::statsToken:
      if(H248_header_length()){
        atm="Statistics";
        atm_len=10;
      } else {
        atm="SA";
        atm_len=2;
      }
      break;
    case AuditTokens::observedEventsToken:
      if(H248_header_length()){
        atm="ObservedEvents";
        atm_len=14;
      } else {
        atm="OE";
        atm_len=2;
      }
      break;
    case AuditTokens::packagesToken:
      if(H248_header_length()){
        atm="Packages";
        atm_len=8;
      } else {
        atm="PG";
        atm_len=2;
      }
      break;
    default:
      if(H248_header_length()){
        atm="EventBuffer";
        atm_len=11;
      } else {
        atm="EB";
        atm_len=2;
      }
      break;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
}

static void H248_Encoder_encode_PackagesDescriptor(TTCN_Buffer &bb,
                                        const PackagesDescriptor &data){
  const char* atm;
  int atm_len;
  int list_len=data.size_of();
  if(H248_header_length()){
    atm="Packages{";
    atm_len=9;
  } else {
    atm="PG{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  for(int i=0;i<list_len;i++){
    if(i) bb.put_c((unsigned char)',');
    H248_Encoder_encode_PackagesItem(bb,data[i]);
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_PackagesItem(TTCN_Buffer &bb,
                                        const PackagesItem &data){
  bb.put_cs(data.packageName());
  bb.put_c((unsigned char)'-');
  bb.put_cs(int2str(data.packageVersion()));
}

static void H248_Encoder_encode_IndAudSignalRequest(TTCN_Buffer &bb,
                                        const IndAudSignalRequest &data){
  const char* atm;
  int atm_len;
  H248_Encoder_encode_PkgdName(bb,data.signalName());
  if(data.params().ispresent()){
    int list_len=data.params()().size_of();
    bb.put_c((unsigned char)'{');
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)',');
      if(data.params()()[i].get_selection()==
            IndAudSignalRequestParm::ALT_streamID){
        if(H248_header_length()){
          atm="Stream=";
          atm_len=7;
        } else {
          atm="ST=";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(int2str(data.params()()[i].streamID()));
      } else {
        if(H248_header_length()){
          atm="SPARequestID=";
          atm_len=13;
        } else {
          atm="SPARQ=";
          atm_len=6;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(data.params()()[i].sigRequestId());
      }
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_IndAudStreamParms(TTCN_Buffer &bb,
                                        const IndAudStreamParms &data){
  const char* atm;
  int atm_len;
  bool comma_needed=false;
  if(data.localControlDescriptor().ispresent()){
    if(H248_header_length()){
      atm="LocalControl{";
      atm_len=13;
    } else {
      atm="O{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    int list_len=data.localControlDescriptor()().size_of();
    for(int i=0;i<list_len;i++){
      const IndAudLocalParm *lp=&data.localControlDescriptor()()[i];
      switch(lp->get_selection()){
        case IndAudLocalParm::ALT_streamModes:{
          if(H248_header_length()){
            atm="Mode";
            atm_len=4;
          } else {
            atm="MO";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          switch(lp->streamModes().get_selection()){
            case IndAudStreamMode::ALT_notequal:
              bb.put_c((unsigned char)'#');
              H248_Encoder_encode_StreamMode(bb,lp->streamModes().notequal());
              break;
            case IndAudStreamMode::ALT_greaterthan:
              bb.put_c((unsigned char)'>');
              H248_Encoder_encode_StreamMode(bb,
                                             lp->streamModes().greaterthan());
              break;
            case IndAudStreamMode::ALT_lessthan:
              bb.put_c((unsigned char)'<');
              H248_Encoder_encode_StreamMode(bb,lp->streamModes().lessthan());
              break;
            case IndAudStreamMode::ALT_equal:
              bb.put_c((unsigned char)'=');
              H248_Encoder_encode_StreamMode(bb,lp->streamModes().equal());
              break;
            default:
              break;
          }
          }
          break;
        case IndAudLocalParm::ALT_reservedValue:
          if(H248_header_length()){
            atm="ReservedValue";
            atm_len=13;
          } else {
            atm="RV";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case IndAudLocalParm::ALT_reservedGroup:
          if(H248_header_length()){
            atm="ReservedGroup";
            atm_len=13;
          } else {
            atm="RG";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case IndAudLocalParm::ALT_propertyParm:
          H248_Encoder_encode_PropertyParm(bb,lp->propertyParm());
          break;
        case IndAudLocalParm::ALT_pkgdName:
          H248_Encoder_encode_PkgdName(bb,lp->pkgdName());
          break;
        default:
          TTCN_error("Encoding of unbound IndAudLocalParm.");
      }
    }
    bb.put_c((unsigned char)'}');
    comma_needed=true;
  }
  if(data.statisticsDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    H248_Encoder_encode_IndAudStatisticsDescriptor(bb,
                                                 data.statisticsDescriptor()());
    comma_needed=true;
  }
  if(data.localDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Local{";
      atm_len=6;
    } else {
      atm="L{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(data.localDescriptor()());
    bb.put_c((unsigned char)'}');
    comma_needed=true;
  }
  if(data.remoteDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Remote{";
      atm_len=7;
    } else {
      atm="R{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(data.remoteDescriptor()());
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_IndAudStatisticsDescriptor(TTCN_Buffer &bb,
                                        const IndAudStatisticsDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Statistics{";
    atm_len=11;
  } else {
    atm="SA{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  H248_Encoder_encode_PkgdName(bb,data.statName());
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_StreamMode(TTCN_Buffer &bb,
                                        const StreamMode &data){
  const char* atm;
  int atm_len;
  switch(data){
    case StreamMode::sendOnly:
      if(H248_header_length()){
        atm="SendOnly";
        atm_len=8;
      } else {
        atm="SO";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    case StreamMode::recvOnly:
      if(H248_header_length()){
        atm="ReceiveOnly";
        atm_len=11;
      } else {
        atm="RC";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    case StreamMode::sendRecv:
      if(H248_header_length()){
        atm="SendReceive";
        atm_len=11;
      } else {
        atm="SR";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    case StreamMode::inactive:
      if(H248_header_length()){
        atm="Inactive";
        atm_len=8;
      } else {
        atm="IN";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    case StreamMode::loopBack:
      if(H248_header_length()){
        atm="LoopBack";
        atm_len=8;
      } else {
        atm="LB";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    default:
      TTCN_error("Encoding of unbound StreamMode.");
  }
}

static void H248_Encoder_encode_IndAudTerminationStateParm(TTCN_Buffer &bb,
                                        const IndAudTerminationStateParm &data){
  const char* atm;
  int atm_len;
  switch(data.get_selection()){
    case IndAudTerminationStateParm::ALT_serviceStates:{
      if(H248_header_length()){
        atm="ServiceStates";
        atm_len=13;
      } else {
        atm="SI";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      switch(data.serviceStates().get_selection()){
        case IndAudServiceStates::ALT_notequal:
          bb.put_c((unsigned char)'#');
          H248_Encoder_encode_ServiceState(bb,data.serviceStates().notequal());
          break;
        case IndAudServiceStates::ALT_greaterthan:
          bb.put_c((unsigned char)'>');
          H248_Encoder_encode_ServiceState(bb,
                                            data.serviceStates().greaterthan());
          break;
        case IndAudServiceStates::ALT_lessthan:
          bb.put_c((unsigned char)'<');
          H248_Encoder_encode_ServiceState(bb,data.serviceStates().lessthan());
          break;
        case IndAudServiceStates::ALT_equal:
          bb.put_c((unsigned char)'=');
          H248_Encoder_encode_ServiceState(bb,data.serviceStates().equal());
          break;
        case IndAudServiceStates::ALT_tokenOnly:
          break;
        default:
          TTCN_error("Encoding of unbound IndAudServiceStates.");
      }
      }
      break;
    case IndAudTerminationStateParm::ALT_buffer:
      if(H248_header_length()){
        atm="Buffer";
        atm_len=6;
      } else {
        atm="BF";
        atm_len=2;
      }
      break;
    case IndAudTerminationStateParm::ALT_propertyParm:
      H248_Encoder_encode_PropertyParm(bb,data.propertyParm());
      break;
    case IndAudTerminationStateParm::ALT_pkgdName:
      H248_Encoder_encode_PkgdName(bb,data.pkgdName());
      break;
    default:
      TTCN_error("Encoding of unbound IndAudTerminationStateParm.");
  }
}

static void H248_Encoder_encode_ServiceState(TTCN_Buffer &bb,
                                        const ServiceState &data){
  const char* atm;
  int atm_len;
  if(data==ServiceState::test) {
    if(H248_header_length()){
      atm="Test";
      atm_len=4;
    } else {
      atm="TE";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
  } else if (data==ServiceState::outOfSvc){
    if(H248_header_length()){
      atm="OutOfService";
      atm_len=12;
    } else {
      atm="OS";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
  } else {
    if(H248_header_length()){
      atm="InService";
      atm_len=9;
    } else {
      atm="IV";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
  }
}

static void H248_Encoder_encode_EventsDescriptor(TTCN_Buffer &bb,
                                         const EventsDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Events";
    atm_len=6;
  } else {
    atm="E";
    atm_len=1;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.events().ispresent()){
    bb.put_c((unsigned char)'=');
    bb.put_cs(data.events()().requestID());
    bb.put_c((unsigned char)'{');
    int list_len=data.events()().eventList().size_of();
    for(int i=0;i<list_len;i++){
      const RequestedEvent *reqevent=&data.events()().eventList()[i];
      if(i) bb.put_c((unsigned char)',');
      H248_Encoder_encode_PkgdName(bb,reqevent->pkgdName());
      if(reqevent->eventParameters().ispresent()){
        const FirstEventParameters *fep=&reqevent->eventParameters()();
        bool comma_needed=false;
        bb.put_c((unsigned char)'{');
        if(fep->embed().ispresent()){
          H248_Encoder_encode_EmbedSig(bb,fep->embed()());
          comma_needed=true;
        }
        if(fep->eventDM().ispresent()){
          if(comma_needed) bb.put_c((unsigned char)',');
          if(H248_header_length()){
            atm="DigitMap=";
            atm_len=9;
          } else {
            atm="DM=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          if(fep->eventDM()().get_selection()==EventDM::ALT_digitMapName){
            bb.put_cs(fep->eventDM()().digitMapName());
          } else {
            H248_Encoder_encode_DigitMapValue(bb,
                                              fep->eventDM()().digitMapValue());
          }
          comma_needed=true;
        }
        if(fep->streamID().ispresent()){
          if(comma_needed) bb.put_c((unsigned char)',');
          if(H248_header_length()){
            atm="Stream=";
            atm_len=7;
          } else {
            atm="ST=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          bb.put_cs(int2str(fep->streamID()()));
          comma_needed=true;
        }
        if(fep->eventOther().ispresent()){
          if(comma_needed) bb.put_c((unsigned char)',');
          int list_len2=fep->eventOther()().size_of();
          for(int k=0;k<list_len2;k++){
            if(k) bb.put_c((unsigned char)',');
            H248_Encoder_encode_EventParameter(bb,fep->eventOther()()[k]);
          }
          comma_needed=true;
        }
        if(fep->keepActive().ispresent()){
          if(comma_needed) bb.put_c((unsigned char)',');
          if(H248_header_length()){
            atm="KeepActive";
            atm_len=10;
          } else {
            atm="KA";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          comma_needed=true;
        }
        if(fep->notifyBehaviour().ispresent() ){
          if(comma_needed) bb.put_c((unsigned char)',');
          switch(fep->notifyBehaviour()().get_selection()){
            case NotifyBehaviour::ALT_notifyImmediate:
              if(fep->notifyBehaviour()().notifyImmediate()){
                if(H248_header_length()){
                  atm="ImmediateNotify";
                  atm_len=15;
                } else {
                  atm="NBIN";
                  atm_len=4;
                }
                bb.put_s(atm_len,(const unsigned char *)atm);
              }
              break;
            case NotifyBehaviour::ALT_notifyRegulated:
              if(H248_header_length()){
                atm="RegulatedNotify";
                atm_len=15;
              } else {
                atm="NBRN";
                atm_len=4;
              }
             if(fep->notifyBehaviour()().notifyRegulated().embed().ispresent()){
                bb.put_c((unsigned char)'{');
                H248_Encoder_encode_EmbedSig(bb,
                          fep->notifyBehaviour()().notifyRegulated().embed()());
                bb.put_c((unsigned char)'}');
              }
              bb.put_s(atm_len,(const unsigned char *)atm);
              break;
            case NotifyBehaviour::ALT_neverNotify:
              if(fep->notifyBehaviour()().neverNotify()){
                if(H248_header_length()){
                  atm="NeverNotify";
                  atm_len=11;
                } else {
                  atm="NBNN";
                  atm_len=4;
                }
                bb.put_s(atm_len,(const unsigned char *)atm);
              }
              break;
            default:
              TTCN_error("Encoding of unbound NotifyBehaviour.");
          }
          comma_needed=true;
        }
        if(fep->resetEventsDescriptor().ispresent()){
          if(comma_needed) bb.put_c((unsigned char)',');
          if(H248_header_length()){
            atm="ResetEventsDescriptor";
            atm_len=21;
          } else {
            atm="RSE";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
        }
        bb.put_c((unsigned char)'}');
      }
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_EmbedSig(TTCN_Buffer &bb,
                                         const EmbedSig &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Embed{";
    atm_len=6;
  } else {
    atm="EM{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);

  if(data.signal().ispresent())
    H248_Encoder_encode_SignalsDescriptor(bb,data.signal()());
  if(data.event().ispresent()){
    if(data.signal().ispresent()) 
      bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Events";
      atm_len=6;
    } else {
      atm="E";
      atm_len=1;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    if(data.event()().events().ispresent()){
      bb.put_c((unsigned char)'=');
      bb.put_cs(data.event()().events()().requestID());
      bb.put_c((unsigned char)'{');
      int l_len=data.event()().events()().eventList().size_of();
      for(int k=0;k<l_len;k++){
        if(k) bb.put_c((unsigned char)',');
        H248_Encoder_encode_SecondRequestedEvent(bb,
                    data.event()().events()().eventList()[k]);
      }
      bb.put_c((unsigned char)'}');
    }
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_SignalsDescriptor(TTCN_Buffer &bb,
                                         const SignalsDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Signals";
    atm_len=7;
  } else {
    atm="SG";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.signalRequest().ispresent()){
    int list_len=data.signalRequest()().size_of();
    bb.put_c((unsigned char)'{');
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)',');
      if(data.signalRequest()()[i].get_selection()==SignalRequest::ALT_signal){
        H248_Encoder_encode_Signal(bb,data.signalRequest()()[i].signal());
      } else {
        if(H248_header_length()){
          atm="SignalList=";
          atm_len=11;
        } else {
          atm="SL=";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(int2str(data.signalRequest()()[i].seqSigList().id()));
        bb.put_c((unsigned char)'{');
        int ll=data.signalRequest()()[i].seqSigList().signalList().size_of();
        for(int k=0;k<ll;k++){
          if(k) bb.put_c((unsigned char)',');
          H248_Encoder_encode_Signal(bb,
                        data.signalRequest()()[i].seqSigList().signalList()[k]);
        }
        bb.put_c((unsigned char)'}');
      }
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_Signal(TTCN_Buffer &bb,
                                         const Signal &data){
  const char* atm;
  int atm_len;
  H248_Encoder_encode_PkgdName(bb,data.signalName());
  if(data.signalParams().ispresent()){
    const SignalParams *sp=&data.signalParams()();
    bool comma_needed=false;
    bb.put_c((unsigned char)'{');
    if(sp->streamID().ispresent()){
      if(H248_header_length()){
        atm="Stream=";
        atm_len=7;
      } else {
        atm="ST=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(int2str(sp->streamID()()));
      comma_needed=true;
    }
    if(sp->sigType().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="SignalType=";
        atm_len=11;
      } else {
        atm="SY=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      switch(sp->sigType()()){
        case SignalType::brief:
          if(H248_header_length()){
            atm="Brief";
            atm_len=5;
          } else {
            atm="BR";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case SignalType::onOff:
          if(H248_header_length()){
            atm="OnOff";
            atm_len=5;
          } else {
            atm="OO";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case SignalType::timeOut:
          if(H248_header_length()){
            atm="TimeOut";
            atm_len=7;
          } else {
            atm="TO";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        default:
          TTCN_error("Encoding of unbound SignalType.");
      }
      comma_needed=true;
    }
    if(sp->duration().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="Duration=";
        atm_len=9;
      } else {
        atm="DR=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(int2str(sp->duration()()));
      comma_needed=true;
    }
    if(sp->notifyCompletion().ispresent()){
      bool need_comma=false;
      const NotifyCompletion *nc=&sp->notifyCompletion()();
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="NotifyCompletion={";
        atm_len=18;
      } else {
        atm="NC={";
        atm_len=4;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(nc->onTimeOut().ispresent()){
        if(need_comma) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="TimeOut";
          atm_len=7;
        } else {
          atm="TO";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        need_comma=true;
      }
      if(nc->onInterruptByEvent().ispresent()){
        if(need_comma) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="IntByEvent";
          atm_len=10;
        } else {
          atm="IBE";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        need_comma=true;
      }
      if(nc->onInterruptByNewSignalDescr().ispresent()){
        if(need_comma) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="IntBySigDescr";
          atm_len=13;
        } else {
          atm="IBS";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        need_comma=true;
      }
      if(nc->otherReason().ispresent()){
        if(need_comma) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="OtherReason";
          atm_len=11;
        } else {
          atm="OR";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        need_comma=true;
      }
      if(nc->onIteration().ispresent()){
        if(need_comma) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Iteration";
          atm_len=9;
        } else {
          atm="IR";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        need_comma=true;
      }
      bb.put_c((unsigned char)'}');
      comma_needed=true;
    }
    if(sp->sigParList().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      int ll=sp->sigParList()().size_of();
      for(int k=0;k<ll;k++){
        if(k) bb.put_c((unsigned char)',');
        bb.put_cs(sp->sigParList()()[k].sigParameterName());
        H248_Encoder_encode_ParmValue(bb,sp->sigParList()()[k].valueField());
      }
      comma_needed=true;
    }
    if(sp->keepActive().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="KeepActive";
        atm_len=10;
      } else {
        atm="KA";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      comma_needed=true;
    }
    if(sp->sigDirection().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="Direction=";
        atm_len=10;
      } else {
        atm="DI=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      switch(sp->sigDirection()()){
        case SigDirection::External:
          if(H248_header_length()){
            atm="External";
            atm_len=8;
          } else {
            atm="EX";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case SigDirection::Internal:
          if(H248_header_length()){
            atm="Internal";
            atm_len=8;
          } else {
            atm="IT";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case SigDirection::Both:
          if(H248_header_length()){
            atm="Both";
            atm_len=4;
          } else {
            atm="B";
            atm_len=1;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        default:
          TTCN_error("Encoding of unbound SigDirection.");
      }
      comma_needed=true;
    }
    if(sp->sigRequestId().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="SPARequestID=";
        atm_len=12;
      } else {
        atm="SPARQ=";
        atm_len=6;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(sp->sigRequestId()());
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_SecondRequestedEvent(TTCN_Buffer &bb,
                                         const SecondRequestedEvent &data){
  const char* atm;
  int atm_len;
  H248_Encoder_encode_PkgdName(bb,data.pkgdName());
  if(data.eventParameters().ispresent()){
    bool comma_needed=false;
    bb.put_c((unsigned char)'{');
    if(data.eventParameters()().embed().ispresent()){
      if(H248_header_length()){
        atm="Embed{";
        atm_len=6;
      } else {
        atm="EM{";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_SignalsDescriptor(bb,
                                            data.eventParameters()().embed()());
      bb.put_c((unsigned char)'}');
      comma_needed=true;
    }
    if(data.eventParameters()().keepActive().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="KeepActive";
        atm_len=10;
      } else {
        atm="KA";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      comma_needed=true;
    }
    if(data.eventParameters()().eventDM().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="DigitMap=";
        atm_len=9;
      } else {
        atm="DM=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(data.eventParameters()().eventDM()().get_selection()==
          EventDM::ALT_digitMapName){
        bb.put_cs(data.eventParameters()().eventDM()().digitMapName());
      } else {
        H248_Encoder_encode_DigitMapValue(bb,
                          data.eventParameters()().eventDM()().digitMapValue());
      }
      comma_needed=true;
    }
    if(data.eventParameters()().streamID().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="Stream=";
        atm_len=7;
      } else {
        atm="ST=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(int2str(data.eventParameters()().streamID()()));
      comma_needed=true;
    }
    if(data.eventParameters()().eventOther().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      int list_len2=data.eventParameters()().eventOther()().size_of();
      for(int k=0;k<list_len2;k++){
        if(k) bb.put_c((unsigned char)',');
        H248_Encoder_encode_EventParameter(bb,
                                    data.eventParameters()().eventOther()()[k]);
      }
      comma_needed=true;
    }
    if(data.eventParameters()().notifyBehaviour().ispresent() ){
      if(comma_needed) bb.put_c((unsigned char)',');
      switch(data.eventParameters()().notifyBehaviour()().get_selection()){
        case NotifyBehaviour::ALT_notifyImmediate:
          if(data.eventParameters()().notifyBehaviour()().notifyImmediate()){
            if(H248_header_length()){
              atm="ImmediateNotify";
              atm_len=15;
            } else {
              atm="NBIN";
              atm_len=4;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
          }
          break;
        case NotifyBehaviour::ALT_notifyRegulated:
          if(H248_header_length()){
            atm="RegulatedNotify";
            atm_len=15;
          } else {
            atm="NBRN";
            atm_len=4;
          }
         if(data.eventParameters()().
                     notifyBehaviour()().notifyRegulated().embed().ispresent()){
            bb.put_c((unsigned char)'{');
            H248_Encoder_encode_EmbedSig(bb,data.eventParameters()()
                              .notifyBehaviour()().notifyRegulated().embed()());
            bb.put_c((unsigned char)'}');
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case NotifyBehaviour::ALT_neverNotify:
          if(data.eventParameters()().notifyBehaviour()().neverNotify()){
            if(H248_header_length()){
              atm="NeverNotify";
              atm_len=11;
            } else {
              atm="NBNN";
              atm_len=4;
            }
            bb.put_s(atm_len,(const unsigned char *)atm);
          }
          break;
        default:
          TTCN_error("Encoding of unbound NotifyBehaviour.");
      }
      comma_needed=true;
    }
    if(data.eventParameters()().resetEventsDescriptor().ispresent()){
      if(comma_needed) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="ResetEventsDescriptor";
        atm_len=21;
      } else {
        atm="RSE";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_DigitMapDescriptor(TTCN_Buffer &bb,
                                         const DigitMapDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="DigitMap=";
    atm_len=9;
  } else {
    atm="DM=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.digitMapName().ispresent()) bb.put_cs(data.digitMapName()());
  if(data.digitMapValue().ispresent())
    H248_Encoder_encode_DigitMapValue(bb,data.digitMapValue()());
}

static void H248_Encoder_encode_DigitMapValue(TTCN_Buffer &bb,
                                         const DigitMapValue &data){
  bb.put_c((unsigned char)'{');
  if(data.startTimer().ispresent()){
    bb.put_s(2,(const unsigned char *)"T:");
    bb.put_cs(int2str(data.startTimer()()));
    bb.put_c((unsigned char)',');
  }
  if(data.shortTimer().ispresent()){
    bb.put_s(2,(const unsigned char *)"S:");
    bb.put_cs(int2str(data.shortTimer()()));
    bb.put_c((unsigned char)',');
  }
  if(data.longTimer().ispresent()){
    bb.put_s(2,(const unsigned char *)"L:");
    bb.put_cs(int2str(data.longTimer()()));
    bb.put_c((unsigned char)',');
  }
  if(data.durationTimer().ispresent()){
    bb.put_s(2,(const unsigned char *)"Z:");
    bb.put_cs(int2str(data.durationTimer()()));
    bb.put_c((unsigned char)',');
  }
  if(data.digitMapBody().get_selection()==DigitstringSingleOrList::ALT_list){
    int list_len=data.digitMapBody().list().size_of();
    bb.put_c((unsigned char)'(');
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)'|');
      bb.put_cs(data.digitMapBody().list()[i]);
    }
    bb.put_c((unsigned char)')');
  } else {
    bb.put_cs(data.digitMapBody().single());
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_EventBufferDescriptor(TTCN_Buffer &bb,
                                         const EventBufferDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="EventBuffer";
    atm_len=11;
  } else {
    atm="EB";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.eventSpecs().ispresent()){
    int list_len=data.eventSpecs()().size_of();
    bb.put_c((unsigned char)'{');
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)',');
      H248_Encoder_encode_PkgdName(bb,data.eventSpecs()()[i].eventName());
      if(data.eventSpecs()()[i].eventParList().ispresent()){
        bb.put_c((unsigned char)'{');
        H248_Encoder_encode_EventParOrStreamList(bb,
                                       data.eventSpecs()()[i].eventParList()());
        bb.put_c((unsigned char)'}');
      }
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_EventParOrStreamList(TTCN_Buffer &bb,
                                         const EventParOrStreamList &data){
  const char* atm;
  int atm_len;
  int list_len=data.size_of();
  for(int i=0;i<list_len;i++){
    if(i) bb.put_c((unsigned char)',');
    if(data[i].get_selection()==EventParOrStream::ALT_streamID){
      if(H248_header_length()){
        atm="Stream=";
        atm_len=7;
      } else {
        atm="ST=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      bb.put_cs(int2str(data[i].streamID()));
    } else {
      H248_Encoder_encode_EventParameter(bb,data[i].eventPar());
    }
  }
}

static void H248_Encoder_encode_EventParameter(TTCN_Buffer &bb,
                                         const EventParameter &data){
  bb.put_cs(data.eventParameterName());
  H248_Encoder_encode_ParmValue(bb,data.valueField());
}

static void H248_Encoder_encode_MediaDescriptor(TTCN_Buffer &bb,
                                         const MediaDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Media{";
    atm_len=6;
  } else {
    atm="M{";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.termStateDescr().ispresent()){
    bool comma_need=false;
    if(H248_header_length()){
      atm="TerminationState{";
      atm_len=17;
    } else {
      atm="TS{";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    if(data.termStateDescr()().propertyParms().ispresent()){
      const PropertyParmList *pg= &data.termStateDescr()().propertyParms()();
      int pg_len=pg->size_of();
      for(int i=0;i<pg_len;i++){
        if(i) bb.put_c((unsigned char)',');
        H248_Encoder_encode_PropertyParm(bb,(*pg)[i]);
      }
      comma_need=true;
    }
    if(data.termStateDescr()().eventBufferControl().ispresent()){
      if(comma_need) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="Buffer=";
        atm_len=7;
      } else {
        atm="BF=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(data.termStateDescr()().eventBufferControl()()==
          EventBufferControl::off) 
        bb.put_s(3,(const unsigned char *)"OFF");
      else {
        if(H248_header_length()){
          atm="LockStep";
          atm_len=8;
        } else {
          atm="SP";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
      }
      comma_need=true;
    }
    if(data.termStateDescr()().serviceState().ispresent()){
      if(comma_need) bb.put_c((unsigned char)',');
      if(H248_header_length()){
        atm="ServiceStates=";
        atm_len=14;
      } else {
        atm="SI=";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      H248_Encoder_encode_ServiceState(bb,
                                      data.termStateDescr()().serviceState()());
    }
    bb.put_c((unsigned char)'}');
  }
  if(data.streams().ispresent()){
    if(data.termStateDescr().ispresent()) bb.put_c((unsigned char)',');
    if(data.streams()().get_selection()==
            MediaDescriptorStreams::ALT_multiStream){
      int list_len=data.streams()().multiStream().size_of();
      for(int i=0;i<list_len;i++){
        const StreamDescriptor *sdc=&data.streams()().multiStream()[i];
        if(i) bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Stream=";
          atm_len=7;
        } else {
          atm="ST=";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(int2str(sdc->streamID()));
        bb.put_c((unsigned char)'{');
        H248_Encoder_encode_StreamParm(bb,sdc->streamParms());
        bb.put_c((unsigned char)'}');
      }
    } else {
      H248_Encoder_encode_StreamParm(bb,data.streams()().oneStream());
    }
  }
  

  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_StreamParm(TTCN_Buffer &bb,
                                         const StreamParm &data){
  const char* atm;
  int atm_len;
  bool comma_needed=false;
  if(data.localControlDescriptor().ispresent()){
    comma_needed=true;
    int list_len=data.localControlDescriptor()().size_of();
    if(H248_header_length()){
      atm="LocalControl{";
      atm_len=13;
    } else {
      atm="O{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    for(int i=0;i<list_len;i++){
      const LocalParm *lp=&data.localControlDescriptor()()[i];
      if(i) bb.put_c((unsigned char)',');
      switch(lp->get_selection()){
        case LocalParm::ALT_streamMode:
          if(H248_header_length()){
            atm="Mode=";
            atm_len=5;
          } else {
            atm="MO=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          H248_Encoder_encode_StreamMode(bb,lp->streamMode());
          break;
        case LocalParm::ALT_reserveValue:
          if(H248_header_length()){
            atm="ReservedValue=";
            atm_len=14;
          } else {
            atm="RV=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          if(lp->reserveValue()) bb.put_s(2,(const unsigned char *)"ON");
          else bb.put_s(3,(const unsigned char *)"OFF");
          break;
        case LocalParm::ALT_reserveGroup:
          if(H248_header_length()){
            atm="ReservedGroup=";
            atm_len=14;
          } else {
            atm="RG=";
            atm_len=3;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          if(lp->reserveGroup()) bb.put_s(2,(const unsigned char *)"ON");
          else bb.put_s(3,(const unsigned char *)"OFF");
          break;
        case LocalParm::ALT_propertyParm:
          H248_Encoder_encode_PropertyParm(bb,lp->propertyParm());
          break;
        default:
          TTCN_error("Encoding of unbound LocalParm.");
      }
    }
    bb.put_c((unsigned char)'}');
  }
  if(data.localDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Local{";
      atm_len=6;
    } else {
      atm="L{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(data.localDescriptor()());
    bb.put_c((unsigned char)'}');
    comma_needed=true;
  }
  if(data.remoteDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="Remote{";
      atm_len=7;
    } else {
      atm="R{";
      atm_len=2;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(data.remoteDescriptor()());
    bb.put_c((unsigned char)'}');
    comma_needed=true;
  }
  if(data.statisticsDescriptor().ispresent()){
    if(comma_needed) bb.put_c((unsigned char)',');
    H248_Encoder_encode_StatisticsDescriptor(bb,data.statisticsDescriptor()());
  }
}

static void H248_Encoder_encode_StatisticsDescriptor(TTCN_Buffer &bb,
                                         const StatisticsDescriptor &data){
  const char* atm;
  int atm_len;
  int list_len=data.size_of();
  if(H248_header_length()){
    atm="Statistics{";
    atm_len=11;
  } else {
    atm="SA{";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  for(int i=0;i<list_len;i++){
    const StatisticsParameter *sp=&data[i];
    if(i) bb.put_c((unsigned char)',');
    H248_Encoder_encode_PkgdName(bb,sp->statName());
    if(sp->values().ispresent()){
      bb.put_c((unsigned char)'=');
      int ll=sp->values()().size_of();
      if(ll>1) bb.put_c((unsigned char)'[');
      for(int k=0;k<ll;k++){
        if(k) bb.put_c((unsigned char)',');
        bb.put_cs(sp->values()()[k]);
      }
      if(ll>1) bb.put_c((unsigned char)']');
    }
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_MuxDescriptor(TTCN_Buffer &bb,
                                         const MuxDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Mux=";
    atm_len=4;
  } else {
    atm="MX=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  switch(data.muxType()){
    case MuxType::h221:
      bb.put_s(4,(const unsigned char *)"H221");
      break;
    case MuxType::h223:
      bb.put_s(4,(const unsigned char *)"H223");
      break;
    case MuxType::h226:
      bb.put_s(4,(const unsigned char *)"H226");
      break;
    case MuxType::v76:
      bb.put_s(3,(const unsigned char *)"V76");
      break;
    case MuxType::nx64k:
      if(H248_header_length()){
        atm="Nx64Kservice";
        atm_len=12;
      } else {
        atm="N64";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      break;
    case MuxType::extMxT:
      bb.put_s(5,(const unsigned char *)"X+EXT");
      break;
    default:
      TTCN_error("Encoding of unbound MuxType.");
  }
  bb.put_c((unsigned char)'{');
  int list_len=data.termList().size_of();
  for(int i=0;i<list_len;i++){
    if(i) bb.put_c((unsigned char)',');
    bb.put_cs(data.termList()[i]);
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_ModemDescriptor(TTCN_Buffer &bb,
                                         const ModemDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Modem";
    atm_len=5;
  } else {
    atm="MD";
    atm_len=2;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  if(data.mtl().get_selection()==Modems::ALT_single){
    bb.put_c((unsigned char)'=');
    switch(data.mtl().single()){
      case ModemType::v18:
        bb.put_s(3,(const unsigned char *)"V18");
        break;
      case ModemType::v22bis:
        bb.put_s(4,(const unsigned char *)"V22b");
        break;
      case ModemType::v22:
        bb.put_s(3,(const unsigned char *)"V22");
        break;
      case ModemType::v32bis:
        bb.put_s(4,(const unsigned char *)"V32b");
        break;
      case ModemType::v32:
        bb.put_s(3,(const unsigned char *)"V32");
        break;
      case ModemType::v34:
        bb.put_s(3,(const unsigned char *)"V34");
        break;
      case ModemType::v90:
        bb.put_s(3,(const unsigned char *)"V90");
        break;
      case ModemType::v91:
        bb.put_s(3,(const unsigned char *)"V91");
        break;
      case ModemType::synchISDN:
        if(H248_header_length()){
          atm="SynchISDN";
          atm_len=9;
        } else {
          atm="SN";
          atm_len=2;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        break;
      case ModemType::extMT:
        bb.put_s(5,(const unsigned char *)"X+EXT");
        break;
      default:
        TTCN_error("Encoding of unbound ModemType.");
    }
  } else {
    bb.put_c((unsigned char)'[');
    int list_len=data.mtl().list().size_of();
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)',');
      switch(data.mtl().list()[i]){
        case ModemType::v18:
          bb.put_s(3,(const unsigned char *)"V18");
          break;
        case ModemType::v22bis:
          bb.put_s(4,(const unsigned char *)"V22b");
          break;
        case ModemType::v22:
          bb.put_s(3,(const unsigned char *)"V22");
          break;
        case ModemType::v32bis:
          bb.put_s(4,(const unsigned char *)"V32b");
          break;
        case ModemType::v32:
          bb.put_s(3,(const unsigned char *)"V32");
          break;
        case ModemType::v34:
          bb.put_s(3,(const unsigned char *)"V34");
          break;
        case ModemType::v90:
          bb.put_s(3,(const unsigned char *)"V90");
          break;
        case ModemType::v91:
          bb.put_s(3,(const unsigned char *)"V91");
          break;
        case ModemType::synchISDN:
          if(H248_header_length()){
            atm="SynchISDN";
            atm_len=9;
          } else {
            atm="SN";
            atm_len=2;
          }
          bb.put_s(atm_len,(const unsigned char *)atm);
          break;
        case ModemType::extMT:
          bb.put_s(5,(const unsigned char *)"X+EXT");
          break;
        default:
          TTCN_error("Encoding of unbound ModemType.");
      }
    }
    bb.put_c((unsigned char)']');
  }
  if(data.mpl().ispresent()){
    bb.put_c((unsigned char)'{');
    int list_len=data.mpl()().size_of();
    for(int i=0;i<list_len;i++){
      if(i) bb.put_c((unsigned char)',');
      H248_Encoder_encode_PropertyParm(bb,data.mpl()()[i]);
    }
    bb.put_c((unsigned char)'}');
  }
}
static void H248_Encoder_encode_ContextRequest(TTCN_Buffer &bb,
                                         const ContextRequest &data){
  const char* atm;
  int atm_len;
  bool need_comma=false;
  if(data.priority().ispresent()){
    if(H248_header_length()){
      atm="Priority=";
      atm_len=9;
    } else {
      atm="PR=";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    bb.put_cs(int2str(data.priority()()));
    need_comma=true;
  }
  if(data.emergency().ispresent()){
    if(need_comma) bb.put_c((unsigned char)',');
    if(data.emergency()()==Emergency::emergencyOff){
      if(H248_header_length()){
        atm="EmergencyOff";
        atm_len=12;
      } else {
        atm="EGO";
        atm_len=3;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
    } else {
      if(H248_header_length()){
        atm="Emergency";
        atm_len=9;
      } else {
        atm="EG";
        atm_len=2;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
    }
    need_comma=true;
  }
  if(data.topologyReq().ispresent()){
    if(need_comma) bb.put_c((unsigned char)',');
    int list_len=data.topologyReq()().size_of();
    if(H248_header_length()){
      atm="Topology{";
      atm_len=9;
    } else {
      atm="TP{";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    for(int i=0;i<list_len;i++){
      const TopologyRequest *tp_req=&data.topologyReq()()[i];
      if(i) bb.put_c((unsigned char)',');
      bb.put_cs(tp_req->terminationFrom());
      bb.put_c((unsigned char)',');
      bb.put_cs(tp_req->terminationTo());
      bb.put_c((unsigned char)',');
      switch(tp_req->topologyDirection()){
        case TopologyDirection::bothway:
          if(H248_header_length()){
            atm="Bothway";
            atm_len=7;
          } else {
            atm="BW";
            atm_len=2;
          }
          break;
        case TopologyDirection::isolate:
          if(H248_header_length()){
            atm="Isolate";
            atm_len=7;
          } else {
            atm="IS";
            atm_len=2;
          }
          break;
        case TopologyDirection::oneway:
          if(H248_header_length()){
            atm="Oneway";
            atm_len=6;
          } else {
            atm="OW";
            atm_len=2;
          }
          break;
        case TopologyDirection::onewayExternal:
          if(H248_header_length()){
            atm="OnewayExternal";
            atm_len=14;
          } else {
            atm="OWE";
            atm_len=3;
          }
          break;
        case TopologyDirection::onewayBoth:
          if(H248_header_length()){
            atm="OnewayBoth";
            atm_len=10;
          } else {
            atm="OWB";
            atm_len=3;
          }
          break;
      default:
        TTCN_error("Encoding of unbound TopologyDirection.");
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      if(tp_req->streamID().ispresent()){
        bb.put_c((unsigned char)',');
        if(H248_header_length()){
          atm="Stream=";
          atm_len=7;
        } else {
          atm="ST=";
          atm_len=3;
        }
        bb.put_s(atm_len,(const unsigned char *)atm);
        bb.put_cs(int2str(tp_req->streamID()()));
      }
    }
    bb.put_c((unsigned char)'}');
    need_comma=true;
  }
  if(data.iepsValue().ispresent()){
    if(need_comma) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="IEPSCall=";
      atm_len=9;
    } else {
      atm="IEPS=";
      atm_len=5;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    if(data.iepsValue()()){
      bb.put_s(2,(const unsigned char *)"ON");
    } else {
      bb.put_s(3,(const unsigned char *)"OFF");
    }
    need_comma=true;
  }
  if(data.contextAttrDescriptor().ispresent()){
    if(need_comma) bb.put_c((unsigned char)',');
    if(H248_header_length()){
      atm="ContextAttr{";
      atm_len=12;
    } else {
      atm="CT{";
      atm_len=3;
    }
    bb.put_s(atm_len,(const unsigned char *)atm);
    if(data.contextAttrDescriptor()().get_selection()==
                  ContextAttrDescriptor::ALT_contextIds){
      if(H248_header_length()){
        atm="ContextList={";
        atm_len=13;
      } else {
        atm="CLT={";
        atm_len=5;
      }
      bb.put_s(atm_len,(const unsigned char *)atm);
      int clt_len=data.contextAttrDescriptor()().contextIds().size_of();
      for(int j=0;j<clt_len;j++){
        if(j) bb.put_c((unsigned char)',');
        bb.put_cs(data.contextAttrDescriptor()().contextIds()[j]);
      }
      bb.put_c((unsigned char)'}');
    } else {
      int clt_len=data.contextAttrDescriptor()().propertyParms().size_of();
      for(int j=0;j<clt_len;j++){
        if(j) bb.put_c((unsigned char)',');
        H248_Encoder_encode_PropertyParm(bb,
                             data.contextAttrDescriptor()().propertyParms()[j]);
      }
    }
    bb.put_c((unsigned char)'}');
  }
}

static void H248_Encoder_encode_PropertyParm(TTCN_Buffer &bb,
                                         const PropertyParm &data){
  H248_Encoder_encode_PkgdName(bb,data.name());
  H248_Encoder_encode_ParmValue(bb,data.valueField());
}

static void H248_Encoder_encode_PkgdName(TTCN_Buffer &bb,
                                         const PkgdName &data){
  bb.put_cs(data.name());
  bb.put_c((unsigned char)'/');
  bb.put_cs(data.itemId());
}

static void H248_Encoder_encode_ParmValue(TTCN_Buffer &bb,
                                         const ParmValue &data){
  switch(data.get_selection()){
    case ParmValue::ALT_notequal:
      bb.put_c((unsigned char)'#');
      bb.put_cs(data.notequal());
      break;
    case ParmValue::ALT_greaterthan:
      bb.put_c((unsigned char)'>');
      bb.put_cs(data.greaterthan());
      break;
    case ParmValue::ALT_lessthan:
      bb.put_c((unsigned char)'<');
      bb.put_cs(data.lessthan());
      break;
    case ParmValue::ALT_range:
      bb.put_s(2,(const unsigned char *)"=[");
      bb.put_cs(data.range().lower());
      bb.put_c((unsigned char)':');
      bb.put_cs(data.range().upper());
      bb.put_c((unsigned char)']');
      break;
    case ParmValue::ALT_sublist:{
        bb.put_s(2,(const unsigned char *)"={");
        int list_len=data.sublist().size_of();
        for(int i=0;i<list_len;i++){
          if(i) bb.put_c((unsigned char)',');
          bb.put_cs(data.sublist()[i]);
        }
        bb.put_c((unsigned char)'}');
      }
      break;
    case ParmValue::ALT_alternatives:{
        bb.put_s(2,(const unsigned char *)"=[");
        int list_len=data.alternatives().size_of();
        for(int i=0;i<list_len;i++){
          if(i) bb.put_c((unsigned char)',');
          bb.put_cs(data.alternatives()[i]);
        }
        bb.put_c((unsigned char)']');
      }
      break;
    case ParmValue::ALT_equal:
      bb.put_c((unsigned char)'=');
      bb.put_cs(data.equal());
      break;
    default:
      break;
  }
}

static void H248_Encoder_encode_ErrorDescriptor(TTCN_Buffer &bb, 
                                         const ErrorDescriptor &data){
  const char* atm;
  int atm_len;
  if(H248_header_length()){
    atm="Error=";
    atm_len=6;
  } else {
    atm="ER=";
    atm_len=3;
  }
  bb.put_s(atm_len,(const unsigned char *)atm);
  bb.put_cs(int2str(data.errorCode()));
  bb.put_c((unsigned char)'{');
  if(data.errorText().ispresent()){
    bb.put_c((unsigned char)'"');
    bb.put_cs(data.errorText()());
    bb.put_c((unsigned char)'"');
  }
  bb.put_c((unsigned char)'}');
}

static void H248_Encoder_encode_Mid(TTCN_Buffer &bb, const MId &data){
  switch(data.get_selection()){
    case MId::ALT_ip4Address:
      bb.put_c((unsigned char)'[');
      bb.put_cs(data.ip4Address().field__address());
      bb.put_c((unsigned char)']');
      if(data.ip4Address().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.ip4Address().portNumber()()));
      }
      break;
    case MId::ALT_ip6Address:
      bb.put_c((unsigned char)'[');
      bb.put_cs(data.ip6Address().field__address());
      bb.put_c((unsigned char)']');
      if(data.ip6Address().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.ip6Address().portNumber()()));
      }
      break;
    case MId::ALT_domainName:
      bb.put_c((unsigned char)'<');
      bb.put_cs(data.domainName().name());
      bb.put_c((unsigned char)'>');
      if(data.domainName().portNumber().ispresent()){
        bb.put_c((unsigned char)':');
        bb.put_cs(int2str(data.domainName().portNumber()()));
      }
      break;
    case MId::ALT_mtpAddress:
      bb.put_s(4,(const unsigned char*)"MTP{");
      bb.put_cs(oct2str(data.mtpAddress()));
      bb.put_c((unsigned char)'}');
      break;
    case MId::ALT_deviceName:
      bb.put_cs(data.deviceName());
      break;
    default:
      TTCN_error("Encoding of unbound MId value.");
  }
}
}
