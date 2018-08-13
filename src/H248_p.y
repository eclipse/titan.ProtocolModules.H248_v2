%{

/******************************************************************************
* Copyright (c) 2000-2018 Ericsson Telecom AB
* All rights reserved. This program and the accompanying materials
* are made available under the terms of the Eclipse Public License v2.0
* which accompanies this distribution, and is available at
* https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
*
* Contributors:
* Csaba Koppany
* Eduard Czimbalmos
* Gabor Szalai
* Janos Zoltan Szabo
* Timea Moder
******************************************************************************/
//
//  File:               H248_p.y
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002),
//                      ITU-T H.248.1 V2 Corrigendum 1 (03/2004)
//                      ITU-T H.248.1 V3 Draft (09/2004)
//                      updates from ITU-T H.248.1 V3 Draft (08/2005)
//                              except TermIDList

/*********************************************************************
 * C/C++ declarations
 *********************************************************************/

#include <stdarg.h>
#include <memory.h>
#include "H248_Types.hh"
#include "H248_p_types.hh"

/* defined in lexer c-file: */
using namespace H248__Types;
  extern int H248_yylex();
  extern void init_H248_yylex();
  struct yy_buffer_state;
  extern yy_buffer_state *H248_yy_scan_bytes(const char*, int);
  extern void H248_yy_delete_buffer(yy_buffer_state*);
  extern char *H248_yytext;

/* defined in this file: */
  static void H248_yyerror(const char *fmt, ...)
    __attribute__ ((__format__ (__printf__, 1, 2)));

  static PDU__H248 *decoded_message = NULL;

#define YYERROR_VERBOSE

  /* local functions */

  static void Merge_ContextProperty(ContextRequest& to,
    const ContextProperty& from);
  static void Free_ContextProperty(const ContextProperty& parm);

  static void Merge_ContextAuditProperties(ContextAttrAuditRequest& to,
    const ContextAuditProperties& from);
  static void Free_ContextAuditProperties(const ContextAuditProperties& parm);

  static void Merge_MediaParm(StreamParm& to, const MediaParm& from);
  static void Merge_MediaParm(MediaDescriptor& to, const MediaParm& from);
  static void Free_MediaParm(const MediaParm& parm);

  static void Merge_TerminationStateParm(TerminationStateDescriptor& to,
    const TerminationStateParm& from);
  static void Free_TerminationStateParm(const TerminationStateParm& parm);

  static void Merge_EventParm(FirstEventParameters& to, const EventParm& from);
  static void Merge_EventParm(SecondEventParameters& to, const EventParm& from);
  static void Free_EventParm(const EventParm& parm);

  static void Merge_IndAudMediaParm(IndAudMediaDescriptor& to,
    const IndAudMediaParm& from);
  static void Free_IndAudMediaParm(const IndAudMediaParm& parm);

  static void Merge_SignalParameter(SignalParams& to,
    const SignalParameter& from);
  static void Free_SignalParameter(const SignalParameter& parm);

  static void Merge_ServiceChangeParm(ServiceChangeResParm& to,
    const ServiceChangeParm &from);
  static void Merge_ServiceChangeParm(ServiceChangeDescriptor& to,
    const ServiceChangeParm &from);
  static void Free_ServiceChangeParm(const ServiceChangeParm& parm);

%}

/*********************************************************************
 * Bison declarations
 *********************************************************************/

%name-prefix="H248_yy"
%output="H248_p.cc"
%defines
%expect 0
%debug

/*********************************************************************
 * The union-type
 *********************************************************************/

%union {
  boolean b;
  int i;
  char *str;
  CHARSTRING *charstring;

  H248__Types::ActionReply *actionReply;
  H248__Types::ActionReplyList *actionReplyList;
  H248__Types::ActionRequest *actionRequest;
  H248__Types::ActionRequestList *actionRequestList;
  H248__Types::AmmDescriptor *ammDescriptor;
  H248__Types::AmmDescriptorList *ammDescriptorList;
  H248__Types::AmmRequest *ammRequest;
  H248__Types::AmmsReply *ammsReply;
  H248__Types::AuditDescriptor *auditDescriptor;
  H248__Types::AuditItem *auditItem;
  H248__Types::AuditReply *auditReply;
  H248__Types::AuditRequest *auditRequest;
  H248__Types::AuditResult *auditResult;
  H248__Types::AuditReturnParameter *auditReturnParameter;
  H248__Types::AuditSelectionLogic::enum_type auditSelectionLogic;
  H248__Types::AuditTokens::enum_type auditTokens;
  H248__Types::AuthenticationHeader *authenticationHeader;
  H248__Types::Command *command;
  H248__Types::CommandReply *commandReply;
  H248__Types::CommandReplyList *commandReplyList;
  H248__Types::CommandRequest *commandRequest;
  H248__Types::CommandRequestList *commandRequestList;
  H248__Types::ContextAttrAuditRequest *contextAttrAuditRequest;
  H248__Types::ContextAttrDescriptor *contextAttrDescriptor;
  ContextAuditProperties contextAuditProperties;
  H248__Types::ContextBody *contextBody;
  H248__Types::ContextIdList *contextIdList;
  ContextProperty contextProperty;
  H248__Types::ContextReplyBody *contextReplyBody;
  H248__Types::ContextRequest *contextRequest;
  H248__Types::DigitMapDescriptor *digitMapDescriptor;
  H248__Types::DigitMapValue *digitMapValue;
  H248__Types::DigitStringList *digitStringList;
  H248__Types::DigitstringSingleOrList *digitstringSingleOrList;
  H248__Types::EmbedFirst *embedFirst;
  H248__Types::EmbedSig *embedSig;
  H248__Types::Emergency::enum_type emergency;
  H248__Types::ErrorDescriptor *errorDescriptor;
  H248__Types::EventBufferControl::enum_type eventBufferControl;
  H248__Types::EventBufferDescriptor *eventBufferDescriptor;
  H248__Types::EventDM *eventDM;
  H248__Types::EventParNameOrStream *eventParNameOrStream;
  H248__Types::EventParOrStream *eventParOrStream;
  H248__Types::EventParOrStreamList *eventParOrStreamList;
  H248__Types::EventParameter *eventParameter;
  EventParm eventParm;
  H248__Types::EventSpec *eventSpec;
  H248__Types::EventSpecList *eventSpecList;
  H248__Types::EventsDescriptor *eventsDescriptor;
  H248__Types::Extension *extension;
  H248__Types::FirstEventParameters *firstEventParameters;
  H248__Types::IndAudDigitMapDescriptor *indAudDigitMapDescriptor;
  H248__Types::IndAudEventBufferDescriptor *indAudEventBufferDescriptor;
  H248__Types::IndAudEventsDescriptor *indAudEventsDescriptor;
  H248__Types::IndAudLocalControlDescriptor *indAudLocalControlDescriptor;
  H248__Types::IndAudLocalParm *indAudLocalParm;
  H248__Types::IndAudMediaDescriptor *indAudMediaDescriptor;
  IndAudMediaParm indAudMediaParm;
  H248__Types::IndAudPackagesDescriptor *indAudPackagesDescriptor;
  H248__Types::IndAudSignalList *indAudSignalList;
  H248__Types::IndAudSignalParm *indAudSignalParm;
  H248__Types::IndAudSignalRequest *indAudSignalRequest;
  H248__Types::IndAudSignalRequestParm *indAudSignalRequestParm;
  H248__Types::IndAudSignalRequestParmList *indAudSignalRequestParmList;
  H248__Types::IndAudSignalsDescriptor *indAudSignalsDescriptor;
  H248__Types::IndAudStatisticsDescriptor *indAudStatisticsDescriptor;
  H248__Types::IndAudStreamDescriptor *indAudStreamDescriptor;
  H248__Types::IndAudTerminationStateDescriptor *indAudTerminationStateDescriptor;
  H248__Types::IndAudTerminationStateParm *indAudTerminationStateParm;
  H248__Types::LocalControlDescriptor *localControlDescriptor;
  H248__Types::LocalParm *localParm;
  H248__Types::MId *mId;
  H248__Types::MediaDescriptor *mediaDescriptor;
  MediaParm mediaParm;
  H248__Types::Message *message;
  H248__Types::MessageBody *messageBody;
  H248__Types::ModemDescriptor *modemDescriptor;
  H248__Types::ModemType::enum_type modemType;
  H248__Types::ModemTypeList *modemTypeList;
  H248__Types::Modems *modems;
  H248__Types::MuxDescriptor *muxDescriptor;
  H248__Types::MuxType::enum_type muxType;
  NotificationReason notificationReason;
  NotificationReasonList notificationReasonList;
  H248__Types::NotifyBehaviour *notifyBehaviour;
  H248__Types::NotifyBody *notifyBody;
  H248__Types::NotifyRegulated *notifyRegulated;
  H248__Types::NotifyReply *notifyReply;
  H248__Types::NotifyRequest *notifyRequest;
  H248__Types::ObservedEvent *observedEvent;
  H248__Types::ObservedEventList *observedEventList;
  H248__Types::ObservedEventsDescriptor *observedEventsDescriptor;
  H248__Types::PackagesDescriptor *packagesDescriptor;
  H248__Types::PackagesItem *packagesItem;
  H248__Types::ParmValue *parmValue;
  H248__Types::PkgdName *pkgdName;
  H248__Types::PropertyParm *propertyParm;
  H248__Types::PropertyParmList *propertyParmList;
  H248__Types::RequestedEvent *requestedEvent;
  H248__Types::RequestedEventList *requestedEventList;
  H248__Types::SecondRequestedEvent *secondRequestedEvent;
  H248__Types::SecondRequestedEventList *secondRequestedEventList;
  H248__Types::SegmentReply *segmentReply;
  H248__Types::SeqSigList *seqSigList;
  H248__Types::SecondEventParameters *secondEventParameters;
  H248__Types::ServiceChangeAddress *serviceChangeAddress;
  H248__Types::ServiceChangeDescriptor *serviceChangeDescriptor;
  H248__Types::ServiceChangeMethod::enum_type serviceChangeMethod;
  ServiceChangeParm serviceChangeParm;
  H248__Types::ServiceChangeProfile *serviceChangeProfile;
  H248__Types::ServiceChangeReply *serviceChangeReply;
  H248__Types::ServiceChangeRequest *serviceChangeRequest;
  H248__Types::ServiceChangeResParm *serviceChangeResParm;
  H248__Types::ServiceChangeResult *serviceChangeResult;
  H248__Types::ServiceState::enum_type serviceState;
  H248__Types::SigDirection::enum_type sigDirection;
  H248__Types::SigParameter *sigParameter;
  H248__Types::Signal *signal;
  H248__Types::SignalList *signalList;
  SignalParameter signalParameter;
  H248__Types::SignalParams *signalParams;
  H248__Types::SignalRequest *signalRequest;
  H248__Types::SignalRequestList *signalRequestList;
  H248__Types::SignalType::enum_type signalType;
  H248__Types::SignalsDescriptor *signalsDescriptor;
  H248__Types::StatisticsDescriptor *statisticsDescriptor;
  H248__Types::StatisticsParameter *statisticsParameter;
  H248__Types::StreamDescriptor *streamDescriptor;
  H248__Types::StreamMode::enum_type streamMode;
  H248__Types::StreamParm *streamParm;
  H248__Types::SubtractRequest *subtractRequest;
  H248__Types::TerminationAudit *terminationAudit;
  H248__Types::TerminationIDList *terminationIDList;
  H248__Types::TerminationStateDescriptor *terminationStateDescriptor;
  TerminationStateParm terminationStateParm;
  H248__Types::TimeAndEvent *timeAndEvent;
  H248__Types::TimeNotation *timeNotation;
  H248__Types::TopologyDirection::enum_type topologyDirection;
  H248__Types::TopologyRequest *topologyRequest;
  H248__Types::TopologyRequestList *topologyRequestList;
  H248__Types::Transaction *transaction;
  H248__Types::TransactionAck *transactionAck;
  H248__Types::TransactionList *transactionList;
  H248__Types::TransactionPending *transactionPending;
  H248__Types::TransactionReply *transactionReply;
  H248__Types::TransactionReplyOrError *transactionReplyOrError;
  H248__Types::TransactionRequest *transactionRequest;
  H248__Types::TransactionResponseAck *transactionResponseAck;
  H248__Types::ValueList *valueList;
}

/*********************************************************************
 * Tokens
 *********************************************************************/

%token SEP
%token GREATERTHAN
%token LESSTHAN
%token NOTEQUAL
%token LSBRKT
%token RSBRKT
%token EQUAL
%token LBRKT
%token RBRKT
%token COMMA
%token ON
%token OFF
%token OptionalCommand "O-"
%token WildcardedResponse "W-"

%token <str> NUMBER
%token <str> HEXDIGITS
%token <charstring> NAME
%token <charstring> quotedString
%token <charstring> octetString
%token <charstring> domainname
%token <charstring> IPv4address
%token <charstring> IPv6address
%token <charstring> devicename
%token <charstring> terminationid
%token <str> extensionParameter
%token <pkgdName> pkgdname
%token <charstring> SafeCharValue
%token <timeNotation> TimeStamp
%token <i> TTimer
%token <i> STimer
%token <i> LTimer
%token <i> ZTimer
%token <charstring> digitString

/*********************************************************************
 * Keywords
 *********************************************************************/

%token AddToken
%token AndAUDITselectToken
%token AuditToken
%token AuditCapToken
%token AuditValueToken
%token AuthToken
%token BothToken
%token BothwayToken
%token BriefToken
%token BufferToken
%token CtxToken
%token ContextAuditToken
%token ContextAttrToken
%token ContextListToken
%token DigitMapToken
%token DirectionToken
%token DisconnectedToken
%token DelayToken
%token DurationToken
%token EmbedToken
%token EmergencyToken
%token EmergencyOffToken
%token EmergencyValueToken
%token ErrorToken
%token EventBufferToken
%token EventsToken
%token ExternalToken
%token FailoverToken
%token ForcedToken
%token GracefulToken
%token H221Token
%token H223Token
%token H226Token
%token HandOffToken
%token IEPSToken
%token ImmAckRequiredToken
%token InactiveToken
%token InternalToken
/*%token IntsigDelayToken*/
%token InSvcToken
%token InterruptByEventToken
%token InterruptByNewSignalsDescrToken
%token IterationToken
%token IsolateToken
%token KeepActiveToken
%token LocalToken
%token LocalControlToken
%token LockStepToken
%token LoopbackToken
%token MediaToken
%token MegacopToken
%token MessageSegmentToken
%token MethodToken
%token MgcIdToken
%token ModeToken
%token ModifyToken
%token ModemToken
%token MoveToken
%token MTPToken
%token MuxToken
%token NeverNotifyToken
%token NotifyToken
%token NotifyCompletionToken
%token NotifyImmediateToken
%token NotifyRegulatedToken
%token Nx64kToken
%token ObservedEventsToken
%token OnewayToken
%token OnewayBothToken
%token OnewayExternalToken
%token OnOffToken
%token OrAUDITselectToken
%token OtherReasonToken
%token OutOfSvcToken
%token PackagesToken
%token PendingToken
%token PriorityToken
%token ProfileToken
%token ReasonToken
%token RecvonlyToken
%token ReplyToken
%token ResetEventsDescriptorToken
%token RestartToken
%token RemoteToken
%token RequestIDToken
%token ReservedGroupToken
%token ReservedValueToken
%token SegmentationCompleteToken
%token SendonlyToken
%token SendrecvToken
%token ServicesToken
%token ServiceStatesToken
%token ServiceChangeIncompleteToken
%token ServiceChangeToken
%token ServiceChangeAddressToken
%token SignalListToken
%token SignalsToken
%token SignalTypeToken
%token StatsToken
%token StreamToken
%token SubtractToken
%token SynchISDNToken
%token TerminationStateToken
%token TestToken
%token TimeOutToken
%token TopologyToken
%token TransToken
%token ResponseAckToken
%token V18Token
%token V22Token
%token V22bisToken
%token V32Token
%token V32bisToken
%token V34Token
%token V76Token
%token V90Token
%token V91Token
%token VersionToken

%token COMMAStreamToken

/*********************************************************************
 * semantic types of nonterminals
 *********************************************************************/

%type <b> iepsValue reservedGroupMode reservedValueMode
%type <i> COMMAeventStream ErrorCode UINT16 StreamID Version eventStream optLTimer optSTimer optTTimer optZTimer portNumber priority segmentNumber serviceChangeVersion sigDuration sigStream signalListId
%type <str> AuthData ContextID RequestID SecurityParmIndex SequenceNum TransactionID UINT32 mtpAddress serviceChangeDelay sigRequestID
%type <charstring> VALUE digitMapName eventParameterName indAudlocalDescriptor indAudremoteDescriptor localDescriptor remoteDescriptor serviceChangeReason sigParameterName termIDList terminationA terminationB

%type <actionReply> actionReply
%type <actionReplyList> actionReplyList
%type <actionRequest> actionRequest
%type <actionRequestList> actionRequestList
%type <ammDescriptor> ammParameter
%type <ammDescriptorList> ammParameterList
%type <ammRequest> addRequest modifyRequest moveRequest
%type <ammsReply> addReply modifyReply moveReply subtractReply
%type <auditDescriptor> auditDescriptor auditItemList
%type <auditItem> auditItem indAudauditReturnParameter indAudterminationAudit
%type <auditReply> auditCapReply auditReply auditValueReply contextTerminationAudit
%type <auditRequest> auditCapRequest auditValueRequest
%type <auditResult> auditOther
%type <auditReturnParameter> auditReturnParameter
%type <auditSelectionLogic> auditSelectLogic
%type <auditTokens> auditReturnItem
%type <authenticationHeader> authenticationHeader
%type <command> command
%type <commandReply> commandReplys
%type <commandReplyList> commandReplyList
%type <commandRequest> commandRequest
%type <commandRequestList> commandRequestList
%type <contextAttrAuditRequest> contextAudit contextAuditPropertiesList indAudcontextAttrDescriptor
%type <contextAttrDescriptor> contextAttrDescriptor
%type <contextAuditProperties> contextAuditProperties contextAuditSelector
%type <contextBody> contextBody
%type <contextIdList> contextIDList contextIdList
%type <contextProperty> contextProperty
%type <contextReplyBody> contextReplyBody
%type <contextRequest> contextProperties
%type <digitMapDescriptor> digitMapDescriptor
%type <digitMapValue> digitMapValue
%type <digitStringList> digitStringList
%type <digitstringSingleOrList> digitMap
%type <embedFirst> embedFirst
%type <embedSig> embedNoSig embedWithSig
%type <emergency> emergencyValue
%type <errorDescriptor> errorDescriptor
%type <eventBufferControl> eventBufferControl eventBufferControlValue
%type <eventBufferDescriptor> eventBufferDescriptor
%type <eventDM> eventDM
%type <eventParNameOrStream> indAudeventSpecParameter
%type <eventParOrStream> eventSpecParameter observedEventParameter
%type <eventParOrStreamList> eventSpecParameterList observedEventParameterList
%type <eventParameter> eventOther
%type <eventParm> eventParameter secondEventParameter
%type <eventSpec> eventSpec
%type <eventSpecList> eventSpecList
%type <eventsDescriptor> eventsDescriptor
%type <extension> extension
%type <firstEventParameters> eventParameterList
%type <indAudDigitMapDescriptor> indAuddigitMapDescriptor
%type <indAudEventBufferDescriptor> indAudeventBufferDescriptor indAudeventSpec
%type <indAudEventsDescriptor> indAudeventsDescriptor
%type <indAudLocalControlDescriptor> indAudlocalControlDescriptor indAudlocalParmList
%type <indAudLocalParm> indAudlocalParm
%type <indAudMediaDescriptor> indAudmediaDescriptor indAudmediaParmList
%type <indAudMediaParm> indAudmediaParm indAudstreamParm
%type <indAudPackagesDescriptor> indAudpackagesDescriptor
%type <indAudSignalList> indAudsignalList
%type <indAudSignalParm> indAudsignalParm
%type <indAudSignalRequest> indAudsignalListParm indAudsignalRequest
%type <indAudSignalRequestParm> indAudsignalRequestParm
%type <indAudSignalRequestParmList> indAudsignalRequestParmList
%type <indAudSignalsDescriptor> indAudsignalsDescriptor
%type <indAudStatisticsDescriptor> indAudstatisticsDescriptor
%type <indAudStreamDescriptor> indAudstreamDescriptor
%type <indAudTerminationStateDescriptor> indAudterminationStateDescriptor indAudterminationStateParmList
%type <indAudTerminationStateParm> indAudterminationStateParm
%type <localControlDescriptor> localControlDescriptor localParmList
%type <localParm> localParm
%type <mId> mId serviceChangeMgcId
%type <mediaDescriptor> mediaDescriptor mediaParmList
%type <mediaParm> mediaParm streamParm
%type <message> message
%type <messageBody> messageBody
%type <modemDescriptor> modemDescriptor
%type <modemType> modemType
%type <modemTypeList> modemTypeList
%type <modems> modems
%type <muxDescriptor> muxDescriptor
%type <muxType> MuxType
%type <notificationReason> notificationReason
%type <notificationReasonList> notificationReasonList notifyCompletion
%type <notifyBehaviour> notifyBehaviour
%type <notifyBody> notifyBody
%type <notifyRegulated> notifyRegulated
%type <notifyReply> notifyReply
%type <notifyRequest> notifyRequest
%type <observedEvent> observedEvent
%type <observedEventList> observedEventList
%type <observedEventsDescriptor> observedEventsDescriptor
%type <packagesDescriptor> packagesDescriptor packagesItemList
%type <packagesItem> packagesItem
%type <parmValue> parmValue
%type <pkgdName> indAudrequestedEvent signalName
%type <propertyParm> propertyParm
%type <propertyParmList> propertyParmList
%type <requestedEvent> requestedEvent
%type <requestedEventList> requestedEventList
%type <secondEventParameters> secondEventParameterList
%type <secondRequestedEvent> secondRequestedEvent
%type <secondRequestedEventList> secondRequestedEventList
%type <segmentReply> segmentReply
%type <seqSigList> signalList
%type <serviceChangeAddress> serviceChangeAddress
%type <serviceChangeDescriptor> serviceChangeDescriptor serviceChangeParmList
%type <serviceChangeMethod> serviceChangeMethod serviceChangeMethodValue
%type <serviceChangeParm> servChgReplyParm serviceChangeParm
%type <serviceChangeProfile> serviceChangeProfile
%type <serviceChangeReply> serviceChangeReply
%type <serviceChangeRequest> serviceChangeRequest
%type <serviceChangeResParm> serviceChangeReplyDescriptor servChgReplyParmList
%type <serviceChangeResult> serviceChangeResult
%type <serviceState> serviceStates serviceStatesValue
%type <sigDirection> direction sigDirection
%type <sigParameter> sigOther
%type <signal> signalListParm signalRequest
%type <signalList> signalListParmList
%type <signalParameter> sigParameter
%type <signalParams> sigParameterList
%type <signalRequest> signalParm
%type <signalRequestList> signalParmList
%type <signalType> sigSignalType signalType
%type <signalsDescriptor> embedSig signalsDescriptor
%type <statisticsDescriptor> statisticsDescriptor statisticsParameterList
%type <statisticsParameter> statisticsParameter
%type <streamDescriptor> streamDescriptor
%type <streamMode> streamMode streamModes
%type <streamParm> streamParmList
%type <subtractRequest> subtractRequest
%type <terminationAudit> terminationAudit
%type <terminationIDList> terminationIDList
%type <terminationStateDescriptor> terminationStateDescriptor terminationStateParmList
%type <terminationStateParm> terminationStateParm
%type <timeAndEvent> timeAndEvent
%type <topologyDirection> topologyDirection
%type <topologyRequest> topologyTriple
%type <topologyRequestList> topologyDescriptor topologyTripleList
%type <transaction> transaction
%type <transactionAck> transactionAck
%type <transactionList> transactionList
%type <transactionPending> transactionPending
%type <transactionReply> transactionReply
%type <transactionReplyOrError> transactionReplyOrError
%type <transactionRequest> transactionRequest
%type <transactionResponseAck> transactionAckList transactionResponseAck
%type <valueList> valueList

/*********************************************************************
 * Destructors
 *********************************************************************/

%destructor { delete $$; }
IPv4address
IPv6address
NAME
SafeCharValue
TimeStamp
VALUE
actionReply
actionReplyList
actionRequest
actionRequestList
addReply
addRequest
ammParameter
ammParameterList
auditCapReply
auditCapRequest
auditDescriptor
auditItem
auditItemList
auditOther
auditReply
auditReturnParameter
auditValueReply
auditValueRequest
authenticationHeader
command
commandReplys
commandReplyList
commandRequest
commandRequestList
contextAudit
contextAuditPropertiesList
contextAttrDescriptor
contextBody
contextIDList
contextIdList
contextProperties
contextReplyBody
contextTerminationAudit
devicename
digitMap
digitMapDescriptor
digitMapName
digitMapValue
digitString
digitStringList
domainname
embedFirst
embedNoSig
embedSig
embedWithSig
errorDescriptor
eventBufferDescriptor
eventDM
eventOther
eventParameterList
eventParameterName
eventSpec
eventSpecList
eventSpecParameter
eventSpecParameterList
eventsDescriptor
extension
indAudauditReturnParameter
indAudcontextAttrDescriptor
indAuddigitMapDescriptor
indAudeventBufferDescriptor
indAudeventSpec
indAudeventSpecParameter
indAudeventsDescriptor
indAudlocalControlDescriptor
indAudlocalDescriptor
indAudlocalParm
indAudlocalParmList
indAudmediaDescriptor
indAudmediaParmList
indAudpackagesDescriptor
indAudremoteDescriptor
indAudrequestedEvent
indAudsignalList
indAudsignalListParm
indAudsignalParm
indAudsignalRequest
indAudsignalRequestParm
indAudsignalRequestParmList
indAudsignalsDescriptor
indAudstatisticsDescriptor
indAudstreamDescriptor
indAudterminationAudit
indAudterminationStateDescriptor
indAudterminationStateParm
indAudterminationStateParmList
localDescriptor
localControlDescriptor
localParm
localParmList
mId
mediaDescriptor
mediaParmList
message
messageBody
modemDescriptor
modemTypeList
modems
modifyReply
modifyRequest
moveReply
moveRequest
notifyBehaviour
notifyBody
notifyRegulated
notifyReply
notifyRequest
observedEvent
observedEventList
observedEventParameter
observedEventParameterList
observedEventsDescriptor
octetString
packagesDescriptor
packagesItem
packagesItemList
parmValue
pkgdname
propertyParm
propertyParmList
quotedString
remoteDescriptor
requestedEvent
requestedEventList
secondEventParameterList
secondRequestedEvent
secondRequestedEventList
segmentReply
servChgReplyParmList
serviceChangeAddress
serviceChangeDescriptor
serviceChangeMgcId
serviceChangeParmList
serviceChangeProfile
serviceChangeReason
serviceChangeReply
serviceChangeReplyDescriptor
serviceChangeRequest
serviceChangeResult
sigParameterList
sigOther
signalList
signalListParm
signalListParmList
signalName
signalParm
signalParmList
signalRequest
signalsDescriptor
sigParameterName
statisticsDescriptor
statisticsParameter
statisticsParameterList
streamDescriptor
streamParmList
subtractReply
subtractRequest
termIDList
terminationA
terminationAudit
terminationB
terminationIDList
terminationid
terminationStateDescriptor
terminationStateParmList
timeAndEvent
topologyDescriptor
topologyTriple
topologyTripleList
transaction
transactionAck
transactionAckList
transactionList
transactionPending
transactionReply
transactionReplyOrError
transactionRequest
transactionResponseAck
valueList

%destructor { Free($$); }
AuthData
ContextID
HEXDIGITS
NUMBER
RequestID
SecurityParmIndex
SequenceNum
TransactionID
UINT32
extensionParameter
mtpAddress
serviceChangeDelay
sigRequestID

%destructor { Free_ContextAuditProperties($$); }
contextAuditProperties
contextAuditSelector

%destructor { Free_ContextProperty($$); }
contextProperty

%destructor { Free_MediaParm($$); }
mediaParm
streamParm

%destructor { Free_TerminationStateParm($$); }
terminationStateParm

%destructor { Free_EventParm($$); }
eventParameter
secondEventParameter

%destructor { Free_IndAudMediaParm($$); }
indAudmediaParm
indAudstreamParm

%destructor { Free_SignalParameter($$); }
sigParameter

%destructor { Free_ServiceChangeParm($$); }
servChgReplyParm
serviceChangeParm

%%

/*********************************************************************
 * Grammar
 *********************************************************************/

megacoMessage:
  message
  {
    decoded_message = new PDU__H248(OMIT_VALUE, *$1);
    delete $1;
  }
| SEP message
  {
    decoded_message = new PDU__H248(OMIT_VALUE, *$2);
    delete $2;
  }
| authenticationHeader SEP message
  {
    decoded_message = new PDU__H248(*$1, *$3);
    delete $1;
    delete $3;
  }
| SEP authenticationHeader SEP message
  {
    decoded_message = new PDU__H248(*$2, *$4);
    delete $2;
    delete $4;
  }
;

authenticationHeader:
  AuthToken EQUAL SecurityParmIndex ':' SequenceNum ':' AuthData
  {
    $$ = new AuthenticationHeader(str2oct($3), str2oct($5), str2oct($7));
    Free($3);
    Free($5);
    Free($7);
  }
;

SecurityParmIndex:
  HEXDIGITS { $$ = $1; }
;

SequenceNum:
  HEXDIGITS { $$ = $1; }
;

AuthData:
  HEXDIGITS { $$ = $1; }
;

message:
  MegacopToken '/' Version SEP mId SEP messageBody
  {
    $$ = new Message($3, *$5, *$7);
    delete $5;
    delete $7;
  }
;

messageBody:
  errorDescriptor
  {
    $$ = new MessageBody;
    $$->messageError() = *$1;
    delete $1;
  }
| transactionList
  {
    $$ = new MessageBody;
    $$->transactions() = *$1;
    delete $1;
  }
;

transactionList:
  transaction
  {
    $$ = new TransactionList;
    (*$$)[0] = *$1;
    delete $1;
  }
| transactionList transaction
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$2;
    delete $2;
  }
;

transaction:
  transactionRequest
  {
    $$ = new Transaction;
    $$->transactionRequest() = *$1;
    delete $1;
  }
| transactionReply
  {
    $$ = new Transaction;
    $$->transactionReply() = *$1;
    delete $1;
  }
| transactionPending
  {
    $$ = new Transaction;
    $$->transactionPending() = *$1;
    delete $1;
  }
| transactionResponseAck
  {
    $$ = new Transaction;
    $$->transactionResponseAck() = *$1;
    delete $1;
  }
| segmentReply
  {
    $$ = new Transaction;
    $$->segmentReply() = *$1;
    delete $1;
  }
;

transactionPending:
  PendingToken EQUAL TransactionID LBRKT RBRKT
  {
    $$ = new TransactionPending($3);
    Free($3);
  }
;

transactionResponseAck:
  ResponseAckToken LBRKT transactionAckList RBRKT { $$ = $3; }
;

transactionAckList:
  transactionAck
  {
    $$ = new TransactionResponseAck;
    (*$$)[0] = *$1;
    delete $1;
  }
| transactionAckList COMMA transactionAck
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

transactionAck:
  TransactionID
  {
    $$ = new TransactionAck($1, OMIT_VALUE);
    Free($1);
  }
| TransactionID '-' TransactionID
  {
    $$ = new TransactionAck($1, $3);
    Free($1);
    Free($3);
  }
;

transactionRequest:
  TransToken EQUAL TransactionID LBRKT actionRequestList RBRKT
  {
    $$ = new TransactionRequest($3, *$5);
    Free($3);
    delete $5;
  }
;

actionRequestList:
  actionRequest
  {
    $$ = new ActionRequestList;
    (*$$)[0] = *$1;
    delete $1;
  }
| actionRequestList COMMA actionRequest
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

actionRequest:
  CtxToken EQUAL ContextID LBRKT contextBody RBRKT
  {
    $$ = new ActionRequest($3, *$5);
    Free($3);
    delete $5;
  }
;

contextBody:
  contextProperties
  {
    $$ = new ContextBody(*$1, OMIT_VALUE, OMIT_VALUE);
    delete $1;
  }
| contextProperties COMMA contextAudit
  {
    $$ = new ContextBody(*$1, *$3, OMIT_VALUE);
    delete $1;
    delete $3;
  }
| contextProperties COMMA contextAudit COMMA commandRequestList
  {
    $$ = new ContextBody(*$1, *$3, *$5);
    delete $1;
    delete $3;
    delete $5;
  }
| contextProperties COMMA commandRequestList
  {
    $$ = new ContextBody(*$1, OMIT_VALUE, *$3);
    delete $1;
    delete $3;
  }
| contextAudit
  {
    $$ = new ContextBody(OMIT_VALUE, *$1, OMIT_VALUE);
    delete $1;
  }
| contextAudit COMMA commandRequestList
  {
    $$ = new ContextBody(OMIT_VALUE, *$1, *$3);
    delete $1;
    delete $3;
  }
| commandRequestList
  {
    $$ = new ContextBody(OMIT_VALUE, OMIT_VALUE, *$1);
    delete $1;
  }
;

contextProperties:
  contextProperty
  {
    $$ = new ContextRequest(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE);
    Merge_ContextProperty(*$$, $1);
    Free_ContextProperty($1);
  }
| contextProperties COMMA contextProperty
  {
    $$ = $1;
    Merge_ContextProperty(*$$, $3);
    Free_ContextProperty($3);
  }
;

contextProperty:
  topologyDescriptor
  {
    $$.selector = ContextProperty::S_topologyDescriptor;
    $$.topologyDescriptor = $1;
  }
| priority
  {
    $$.selector = ContextProperty::S_priority;
    $$.priority = $1;
  }
| EmergencyToken
  {
    $$.selector = ContextProperty::S_emergency;
    $$.emergency = Emergency::emergency;
  }
| EmergencyOffToken
  {
    $$.selector = ContextProperty::S_emergency;
    $$.emergency = Emergency::emergencyOff;
  }
| iepsValue
  {
    $$.selector = ContextProperty::S_iepsValue;
    $$.iepsValue = $1;
  }
| contextAttrDescriptor
  {
    $$.selector = ContextProperty::S_contextAttrDescriptor;
    $$.contextAttrDescriptor = $1;
  }
;

contextAudit:
  ContextAuditToken LBRKT indAudcontextAttrDescriptor RBRKT { $$ = $3; }
| ContextAuditToken LBRKT contextAuditPropertiesList RBRKT { $$ = $3; }
;

contextAuditPropertiesList:
  contextAuditProperties
  {
    $$ = new ContextAttrAuditRequest(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE);
    Merge_ContextAuditProperties(*$$, $1);
    Free_ContextAuditProperties($1);
  }
| contextAuditPropertiesList COMMA contextAuditProperties
  {
    $$ = $1;
    Merge_ContextAuditProperties(*$$, $3);
    Free_ContextAuditProperties($3);
  }
;

contextAuditProperties:
  TopologyToken
  {
    $$.selector = ContextAuditProperties::S_TopologyToken;
  }
| EmergencyToken
  {
    $$.selector = ContextAuditProperties::S_EmergencyToken;
  }
| PriorityToken
  {
    $$.selector = ContextAuditProperties::S_PriorityToken;
  }
| IEPSToken
  {
    $$.selector = ContextAuditProperties::S_IEPSToken;
  }
| pkgdname
  {
    $$.selector = ContextAuditProperties::S_pkgdName;
    $$.pkgdName = $1;
  }
| contextAuditSelector { $$ = $1; }
;

contextAuditSelector:
  priority
  {
    $$.selector = ContextAuditProperties::S_priority;
    $$.priority = $1;
  }
| emergencyValue
  {
    $$.selector = ContextAuditProperties::S_emergencyValue;
    $$.emergencyValue = $1;
  }
| iepsValue
  {
    $$.selector = ContextAuditProperties::S_iepsValue;
    $$.iepsValue = $1;
  }
| contextAttrDescriptor
  {
    $$.selector = ContextAuditProperties::S_contextAttrDescriptor;
    $$.contextAttrDescriptor = $1;
  }
| auditSelectLogic
  {
    $$.selector = ContextAuditProperties::S_auditSelectLogic;
    $$.auditSelectLogic = $1;
  }
;

auditSelectLogic:
  AndAUDITselectToken { $$ = AuditSelectionLogic::ANDLgc; }
| OrAUDITselectToken { $$ = AuditSelectionLogic::ORLgc; }
;

indAudcontextAttrDescriptor:
  ContextAttrToken LBRKT contextAuditPropertiesList RBRKT { $$ = $3; }

commandRequestList:
  commandRequest
  {
    $$ = new CommandRequestList;
    (*$$)[0] = *$1;
    delete $1;
  }
| commandRequestList COMMA commandRequest
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

commandRequest:
  command
  {
    $$ = new CommandRequest(FALSE, FALSE, *$1);
    delete $1;
  }
| OptionalCommand command
  {
    $$ = new CommandRequest(TRUE, FALSE, *$2);
    delete $2;
  }
| OptionalCommand WildcardedResponse command
  {
    $$ = new CommandRequest(TRUE, TRUE, *$3);
    delete $3;
  }
| WildcardedResponse command
  {
    $$ = new CommandRequest(FALSE, TRUE, *$2);
    delete $2;
  }
;

command:
  addRequest
  {
    $$ = new Command;
    $$->addReq() = *$1;
    delete $1;
  }
| moveRequest
  {
    $$ = new Command;
    $$->moveReq() = *$1;
    delete $1;
  }
| modifyRequest
  {
    $$ = new Command;
    $$->modReq() = *$1;
    delete $1;
  }
| subtractRequest
  {
    $$ = new Command;
    $$->subtractReq() = *$1;
    delete $1;
  }
| auditValueRequest
  {
    $$ = new Command;
    $$->auditValueRequest() = *$1;
    delete $1;
  }
| auditCapRequest
  {
    $$ = new Command;
    $$->auditCapRequest() = *$1;
    delete $1;
  }
| notifyRequest
  {
    $$ = new Command;
    $$->notifyReq() = *$1;
    delete $1;
  }
| serviceChangeRequest
  {
    $$ = new Command;
    $$->serviceChangeReq() = *$1;
    delete $1;
  }
;

transactionReply:
  ReplyToken EQUAL TransactionID LBRKT transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, *$5);
    Free($3);
    delete $5;
  }
| ReplyToken EQUAL TransactionID LBRKT ImmAckRequiredToken COMMA
  transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, OMIT_VALUE, OMIT_VALUE, H248__token::present__, *$7);
    Free($3);
    delete $7;
  }
| ReplyToken EQUAL TransactionID '/' segmentNumber LBRKT
  transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, $5, OMIT_VALUE, OMIT_VALUE, *$7);
    Free($3);
    delete $7;
  }
| ReplyToken EQUAL TransactionID '/' segmentNumber LBRKT ImmAckRequiredToken
  COMMA transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, $5, OMIT_VALUE, H248__token::present__, *$9);
    Free($3);
    delete $9;
  }
| ReplyToken EQUAL TransactionID '/' segmentNumber '/'
  SegmentationCompleteToken LBRKT transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, $5, H248__token::present__, OMIT_VALUE, *$9);
    Free($3);
    delete $9;
  }
| ReplyToken EQUAL TransactionID '/' segmentNumber '/'
  SegmentationCompleteToken LBRKT ImmAckRequiredToken COMMA
  transactionReplyOrError RBRKT
  {
    $$ = new TransactionReply($3, $5, H248__token::present__, H248__token::present__, *$11);
    Free($3);
    delete $11;
  }
;

transactionReplyOrError:
  errorDescriptor
  {
    $$ = new TransactionReplyOrError;
    $$->transactionError() = *$1;
    delete $1;
  }
| actionReplyList
  {
    $$ = new TransactionReplyOrError;
    $$->actionReplies() = *$1;
    delete $1;
  }
;

segmentReply:
  MessageSegmentToken EQUAL TransactionID '/' segmentNumber
  {
    $$ = new SegmentReply($3, $5, OMIT_VALUE);
    Free($3);
  }
| MessageSegmentToken EQUAL TransactionID '/' segmentNumber '/' SegmentationCompleteToken
  {
    $$ = new SegmentReply($3, $5, H248__token::present__);
    Free($3);
  }
;

segmentNumber:
  UINT16 { $$ = $1; }
;

actionReplyList:
  actionReply
  {
    $$ = new ActionReplyList;
    (*$$)[0] = *$1;
    delete $1;
  }
| actionReplyList COMMA actionReply
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

actionReply:
  CtxToken EQUAL ContextID
  {
    $$ = new ActionReply($3, OMIT_VALUE);
    Free($3);
  }
| CtxToken EQUAL ContextID LBRKT contextReplyBody RBRKT
  {
    $$ = new ActionReply($3, *$5);
    Free($3);
    delete $5;
  }
;

contextReplyBody:
  contextProperties
  {
    $$ = new ContextReplyBody(*$1, OMIT_VALUE, OMIT_VALUE);
    delete $1;
  }
| contextProperties COMMA commandReplyList
  {
    $$ = new ContextReplyBody(*$1, *$3, OMIT_VALUE);
    delete $1;
    delete $3;
  }
| contextProperties COMMA commandReplyList COMMA errorDescriptor
  {
    $$ = new ContextReplyBody(*$1, *$3, *$5);
    delete $1;
    delete $3;
    delete $5;
  }
| contextProperties COMMA errorDescriptor
  {
    $$ = new ContextReplyBody(*$1, OMIT_VALUE, *$3);
    delete $1;
    delete $3;
  }
| commandReplyList
  {
    $$ = new ContextReplyBody(OMIT_VALUE, *$1, OMIT_VALUE);
    delete $1;
  }
| commandReplyList COMMA errorDescriptor
  {
    $$ = new ContextReplyBody(OMIT_VALUE, *$1, *$3);
    delete $1;
    delete $3;
  }
| errorDescriptor
  {
    $$ = new ContextReplyBody(OMIT_VALUE, OMIT_VALUE, *$1);
    delete $1;
  }
;

commandReplyList:
  commandReplys
  {
    $$ = new CommandReplyList;
    (*$$)[0] = *$1;
    delete $1;
  }
| commandReplyList COMMA commandReplys
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

commandReplys:
  serviceChangeReply
  {
    $$ = new CommandReply;
    $$->serviceChangeReply() = *$1;
    delete $1;
  }
| auditValueReply
  {
    $$ = new CommandReply;
    $$->auditValueReply() = *$1;
    delete $1;
  }
| auditCapReply
  {
    $$ = new CommandReply;
    $$->auditCapReply() = *$1;
    delete $1;
  }
| addReply
  {
    $$ = new CommandReply;
    $$->addReply() = *$1;
    delete $1;
  }
| moveReply
  {
    $$ = new CommandReply;
    $$->moveReply() = *$1;
    delete $1;
  }
| modifyReply
  {
    $$ = new CommandReply;
    $$->modReply() = *$1;
    delete $1;
  }
| subtractReply
  {
    $$ = new CommandReply;
    $$->subtractReply() = *$1;
    delete $1;
  }
| notifyReply
  {
    $$ = new CommandReply;
    $$->notifyReply() = *$1;
    delete $1;
  }
;

addRequest:
  AddToken EQUAL termIDList
  {
    $$ = new AmmRequest(*$3, OMIT_VALUE);
    delete $3;
  }
| AddToken EQUAL termIDList LBRKT ammParameterList RBRKT
  {
    $$ = new AmmRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

moveRequest:
  MoveToken EQUAL termIDList
  {
    $$ = new AmmRequest(*$3, OMIT_VALUE);
    delete $3;
  }
| MoveToken EQUAL termIDList LBRKT ammParameterList RBRKT
  {
    $$ = new AmmRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

modifyRequest:
  ModifyToken EQUAL termIDList
  {
    $$ = new AmmRequest(*$3, OMIT_VALUE);
    delete $3;
  }
| ModifyToken EQUAL termIDList LBRKT ammParameterList RBRKT
  {
    $$ = new AmmRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

ammParameterList:
  ammParameter
  {
    $$ = new AmmDescriptorList;
    (*$$)[0] = *$1;
    delete $1;
  }
| ammParameterList COMMA ammParameter
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

ammParameter:
  mediaDescriptor
  {
    $$ = new AmmDescriptor;
    $$->mediaDescriptor() = *$1;
    delete $1;
  }
| modemDescriptor
  {
    $$ = new AmmDescriptor;
    $$->modemDescriptor() = *$1;
    delete $1;
  }
| muxDescriptor
  {
    $$ = new AmmDescriptor;
    $$->muxDescriptor() = *$1;
    delete $1;
  }
| eventsDescriptor
  {
    $$ = new AmmDescriptor;
    $$->eventsDescriptor() = *$1;
    delete $1;
  }
| signalsDescriptor
  {
    $$ = new AmmDescriptor;
    $$->signalsDescriptor() = *$1;
    delete $1;
  }
| digitMapDescriptor
  {
    $$ = new AmmDescriptor;
    $$->digitMapDescriptor() = *$1;
    delete $1;
  }
| eventBufferDescriptor
  {
    $$ = new AmmDescriptor;
    $$->eventBufferDescriptor() = *$1;
    delete $1;
  }
| auditDescriptor
  {
    $$ = new AmmDescriptor;
    $$->auditDescriptor() = *$1;
    delete $1;
  }
| statisticsDescriptor
  {
    $$ = new AmmDescriptor;
    $$->statisticsDescriptor() = *$1;
    delete $1;
  }
;

addReply:
  AddToken EQUAL termIDList
  {
    $$ = new AmmsReply(*$3, OMIT_VALUE);
    delete $3;
  }
| AddToken EQUAL termIDList LBRKT terminationAudit RBRKT
  {
    $$ = new AmmsReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

moveReply:
  MoveToken EQUAL termIDList
  {
    $$ = new AmmsReply(*$3, OMIT_VALUE);
    delete $3;
  }
| MoveToken EQUAL termIDList LBRKT terminationAudit RBRKT
  {
    $$ = new AmmsReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

modifyReply:
  ModifyToken EQUAL termIDList
  {
    $$ = new AmmsReply(*$3, OMIT_VALUE);
    delete $3;
  }
| ModifyToken EQUAL termIDList LBRKT terminationAudit RBRKT
  {
    $$ = new AmmsReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

subtractReply:
  SubtractToken EQUAL termIDList
  {
    $$ = new AmmsReply(*$3, OMIT_VALUE);
    delete $3;
  }
| SubtractToken EQUAL termIDList LBRKT terminationAudit RBRKT
  {
    $$ = new AmmsReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

subtractRequest:
  SubtractToken EQUAL termIDList
  {
    $$ = new SubtractRequest(*$3, OMIT_VALUE);
    delete $3;
  }
| SubtractToken EQUAL termIDList LBRKT auditDescriptor RBRKT
  {
    $$ = new SubtractRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

auditValueRequest:
  AuditValueToken EQUAL termIDList LBRKT auditDescriptor RBRKT
  {
    $$ = new AuditRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

auditCapRequest:
  AuditCapToken EQUAL termIDList LBRKT auditDescriptor RBRKT
  {
    $$ = new AuditRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

auditValueReply:
  AuditValueToken auditReply { $$ = $2; }
;

auditCapReply:
  AuditCapToken auditReply { $$ = $2; }
;

auditReply:
  contextTerminationAudit { $$ = $1; }
| auditOther
  {
    $$ = new AuditReply;
    $$->auditResult() = *$1;
    delete $1;
  }
;

auditOther:
  EQUAL termIDList
  {
    $$ = new AuditResult(*$2, OMIT_VALUE);
    delete $2;
  }
| EQUAL termIDList LBRKT terminationAudit RBRKT
  {
    $$ = new AuditResult(*$2, *$4);
    delete $2;
    delete $4;
  }
;

terminationAudit:
  auditReturnParameter
  {
    $$ = new TerminationAudit;
    (*$$)[0] = *$1;
    delete $1;
  }
| terminationAudit COMMA auditReturnParameter
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

contextTerminationAudit:
  EQUAL CtxToken LBRKT terminationIDList RBRKT
  {
    $$ = new AuditReply;
    $$->contextAuditResult() = *$4;
    delete $4;
  }
| EQUAL CtxToken LBRKT errorDescriptor RBRKT
  {
    $$ = new AuditReply;
    $$->field__error() = *$4;
    delete $4;
  }
;

auditReturnParameter:
  mediaDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->mediaDescriptor() = *$1;
    delete $1;
  }
| modemDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->modemDescriptor() = *$1;
    delete $1;
  }
| muxDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->muxDescriptor() = *$1;
    delete $1;
  }
| eventsDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->eventsDescriptor() = *$1;
    delete $1;
  }
| signalsDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->signalsDescriptor() = *$1;
    delete $1;
  }
| digitMapDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->digitMapDescriptor() = *$1;
    delete $1;
  }
| observedEventsDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->observedEventsDescriptor() = *$1;
    delete $1;
  }
| eventBufferDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->eventBufferDescriptor() = *$1;
    delete $1;
  }
| statisticsDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->statisticsDescriptor() = *$1;
    delete $1;
  }
| packagesDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->packagesDescriptor() = *$1;
    delete $1;
  }
| errorDescriptor
  {
    $$ = new AuditReturnParameter;
    $$->errorDescriptor() = *$1;
    delete $1;
  }
| auditReturnItem
  {
    $$ = new AuditReturnParameter;
    $$->emptyDescriptors() = $1;
  }
;

auditReturnItem:
  MuxToken { $$ = AuditTokens::muxToken; }
| ModemToken { $$ = AuditTokens::modemToken; }
| MediaToken { $$ = AuditTokens::mediaToken; }
| DigitMapToken { $$ = AuditTokens::digitMapToken; }
| StatsToken { $$ = AuditTokens::statsToken; }
| ObservedEventsToken { $$ = AuditTokens::observedEventsToken; }
| PackagesToken { $$ = AuditTokens::packagesToken; }
;

auditDescriptor:
  AuditToken LBRKT RBRKT
  {
    $$ = new AuditDescriptor(NULL_VALUE);
  }
| AuditToken LBRKT auditItemList RBRKT { $$ = $3; }
;

auditItemList:
  auditItem
  {
    $$ = new AuditDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| auditItemList COMMA auditItem
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

notifyRequest:
  NotifyToken EQUAL termIDList LBRKT notifyBody RBRKT
  {
    $$ = new NotifyRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

notifyBody:
  observedEventsDescriptor
  {
    $$ = new NotifyBody(*$1, OMIT_VALUE);
    delete $1;
  }
| observedEventsDescriptor COMMA errorDescriptor
  {
    $$ = new NotifyBody(*$1, *$3);
    delete $1;
    delete $3;
  }
;

notifyReply:
  NotifyToken EQUAL termIDList
  {
    $$ = new NotifyReply(*$3, OMIT_VALUE);
    delete $3;
  }
| NotifyToken EQUAL termIDList LBRKT errorDescriptor RBRKT
  {
    $$ = new NotifyReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

serviceChangeRequest:
  ServiceChangeToken EQUAL termIDList LBRKT serviceChangeDescriptor RBRKT
  {
    $$ = new ServiceChangeRequest(*$3, *$5);
    delete $3;
    delete $5;
  }
;

serviceChangeReply:
  ServiceChangeToken EQUAL termIDList
  {
    $$ = new ServiceChangeReply(*$3, OMIT_VALUE);
    delete $3;
  }
| ServiceChangeToken EQUAL termIDList LBRKT serviceChangeResult RBRKT
  {
    $$ = new ServiceChangeReply(*$3, *$5);
    delete $3;
    delete $5;
  }
;

serviceChangeResult:
  errorDescriptor
  {
    $$ = new ServiceChangeResult;
    $$->errorDescriptor() = *$1;
    delete $1;
  }
| serviceChangeReplyDescriptor
  {
    $$ = new ServiceChangeResult;
    $$->serviceChangeResParms() = *$1;
    delete $1;
  }
;

errorDescriptor:
  ErrorToken EQUAL ErrorCode LBRKT RBRKT
  {
    $$ = new ErrorDescriptor($3, OMIT_VALUE);
  }
| ErrorToken EQUAL ErrorCode LBRKT quotedString RBRKT
  {
    $$ = new ErrorDescriptor($3, substr(*$5, 1, $5->lengthof() - 2));
    delete $5;
  }
;

ErrorCode:
  NUMBER
  {
    /* 1*4(DIGIT) ; could be extended */
    if (strlen($1) > 4) yyerror("Number %s is too long for ErrorCode", $1);
    $$ = atoi($1);
    Free($1);
  }
;

TransactionID:
  UINT32 { $$ = $1; }
;

mId:
  IPv4address
  {
    $$ = new MId;
    IP4Address& addr = $$->ip4Address();
    addr.field__address() = *$1;
    addr.portNumber() = OMIT_VALUE;
    delete $1;
  }
| IPv4address ':' portNumber
  {
    $$ = new MId;
    IP4Address& addr = $$->ip4Address();
    addr.field__address() = *$1;
    addr.portNumber() = $3;
    delete $1;
  }
| IPv6address
  {
    $$ = new MId;
    IP6Address& addr = $$->ip6Address();
    addr.field__address() = *$1;
    addr.portNumber() = OMIT_VALUE;
    delete $1;
  }
| IPv6address ':' portNumber
  {
    $$ = new MId;
    IP6Address& addr = $$->ip6Address();
    addr.field__address() = *$1;
    addr.portNumber() = $3;
    delete $1;
  }
| domainname
  {
    $$ = new MId;
    DomainName& name = $$->domainName();
    name.name() = *$1;
    name.portNumber() = OMIT_VALUE;
    delete $1;
  }
| domainname ':' portNumber
  {
    $$ = new MId;
    DomainName& name = $$->domainName();
    name.name() = *$1;
    name.portNumber() = $3;
    delete $1;
  }
| mtpAddress
  {
    $$ = new MId;
    $$->mtpAddress() = hex2oct(str2hex($1));
    Free($1);
  }
| devicename
  {
    $$ = new MId;
    $$->deviceName() = *$1;
    delete $1;
  }
;

ContextID:
  UINT32 { $$ = $1; }
| '*' { $$ = mcopystr("*"); }
| '-' { $$ = mcopystr("-"); }
| '$' { $$ = mcopystr("$"); }
;

portNumber:
  UINT16 { $$ = $1; }
;

mtpAddress:
  MTPToken LBRKT HEXDIGITS RBRKT { $$ = $3; }
;

termIDList:
  terminationid { $$ = $1; }
| LSBRKT terminationIDList RSBRKT
  {
    delete $2;
    yyerror("Not supported: multiple TerminationIDs in termIDList");
  }
;

terminationIDList:
  terminationid
  {
    $$ = new TerminationIDList;
    (*$$)[0] = *$1;
    delete $1;
  }
| terminationIDList COMMA terminationid
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

mediaDescriptor:
  MediaToken LBRKT mediaParmList RBRKT { $$ = $3; }
;

mediaParmList:
  mediaParm
  {
    $$ = new MediaDescriptor(OMIT_VALUE, OMIT_VALUE);
    Merge_MediaParm(*$$, $1);
    Free_MediaParm($1);
  }
| mediaParmList COMMA mediaParm
  {
    $$ = $1;
    Merge_MediaParm(*$$, $3);
    Free_MediaParm($3);
  }
;

mediaParm:
  streamParm { $$ = $1; }
| streamDescriptor
  {
    $$.selector = MediaParm::S_streamDescriptor;
    $$.streamDescriptor = $1;
  }
| terminationStateDescriptor
  {
    $$.selector = MediaParm::S_terminationStateDescriptor;
    $$.terminationStateDescriptor = $1;
  }
;

streamParm:
  localDescriptor
  {
    $$.selector = MediaParm::S_localDescriptor;
    $$.localDescriptor = $1;
  }
| remoteDescriptor
  {
    $$.selector = MediaParm::S_remoteDescriptor;
    $$.remoteDescriptor = $1;
  }
| localControlDescriptor
  {
    $$.selector = MediaParm::S_localControlDescriptor;
    $$.localControlDescriptor = $1;
  }
| statisticsDescriptor
  {
    $$.selector = MediaParm::S_statisticsDescriptor;
    $$.statisticsDescriptor = $1;
  }
;

streamDescriptor:
  StreamToken EQUAL StreamID LBRKT streamParmList RBRKT
  {
    $$ = new StreamDescriptor($3, *$5);
    delete $5;
  }
;

streamParmList:
  streamParm
  {
    $$ = new StreamParm(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_MediaParm(*$$, $1);
    Free_MediaParm($1);
  }
| streamParmList COMMA streamParm
  {
    $$ = $1;
    Merge_MediaParm(*$$, $3);
    Free_MediaParm($3);
  }
;

localControlDescriptor:
  LocalControlToken LBRKT localParmList RBRKT { $$ = $3; }
;

localParmList:
  localParm
  {
    $$ = new LocalControlDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| localParmList COMMA localParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

localParm:
  streamMode
  {
    $$ = new LocalParm;
    $$->streamMode() = $1;
  }
| propertyParm
  {
    $$ = new LocalParm;
    $$->propertyParm() = *$1;
    delete $1;
  }
| reservedValueMode
  {
    $$ = new LocalParm;
    $$->reserveValue() = $1;
  }
| reservedGroupMode
  {
    $$ = new LocalParm;
    $$->reserveGroup() = $1;
  }
;

reservedValueMode:
  ReservedValueToken EQUAL ON { $$ = TRUE; }
| ReservedValueToken EQUAL OFF { $$ = FALSE; }
;

reservedGroupMode:
  ReservedGroupToken EQUAL ON { $$ = TRUE; }
| ReservedGroupToken EQUAL OFF { $$ = FALSE; }
;

streamMode:
  ModeToken EQUAL streamModes { $$ = $3; }
;

streamModes:
  SendonlyToken { $$ = StreamMode::sendOnly; }
| RecvonlyToken { $$ = StreamMode::recvOnly; }
| SendrecvToken { $$ = StreamMode::sendRecv; }
| InactiveToken { $$ = StreamMode::inactive; }
| LoopbackToken { $$ = StreamMode::loopBack; }
;

propertyParm:
  pkgdname parmValue
  {
    $$ = new PropertyParm(*$1, *$2);
    delete $1;
    delete $2;
  }
;

parmValue:
  EQUAL VALUE
  {
    $$ = new ParmValue;
    $$->equal() = *$2;
    delete $2;
  }
| EQUAL LSBRKT valueList RSBRKT
  {
    $$ = new ParmValue;
    $$->alternatives() = *$3;
    delete $3;
  }
| EQUAL LBRKT valueList RBRKT
  {
    $$ = new ParmValue;
    $$->sublist() = *$3;
    delete $3;
  }
| EQUAL LSBRKT VALUE ':' VALUE RSBRKT
  {
    $$ = new ParmValue;
    Range& range = $$->range();
    range.lower() = *$3;
    range.upper() = *$5;
    delete $3;
    delete $5;
  }
| GREATERTHAN VALUE
  {
    $$ = new ParmValue;
    $$->greaterthan() = *$2;
    delete $2;
  }
| LESSTHAN VALUE
  {
    $$ = new ParmValue;
    $$->lessthan() = *$2;
    delete $2;
  }
| NOTEQUAL VALUE
  {
    $$ = new ParmValue;
    $$->notequal() = *$2;
    delete $2;
  }
;

valueList:
  VALUE
  {
    $$ = new ValueList;
    (*$$)[0] = *$1;
    delete $1;
  }
| valueList COMMA VALUE
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

localDescriptor:
  LocalToken LBRKT RBRKT { $$ = new CHARSTRING(0, NULL); }
| LocalToken LBRKT octetString RBRKT { $$ = $3; }
;

remoteDescriptor:
  RemoteToken LBRKT RBRKT { $$ = new CHARSTRING(0, NULL); }
| RemoteToken LBRKT octetString RBRKT { $$ = $3; }
;

eventBufferDescriptor:
  EventBufferToken
  {
    $$ = new EventBufferDescriptor(OMIT_VALUE);
  }
| EventBufferToken LBRKT eventSpecList RBRKT
  {
    $$ = new EventBufferDescriptor(*$3);
    delete $3;
  }
;

eventSpecList:
  eventSpec
  {
    $$ = new EventSpecList;
    (*$$)[0] = *$1;
    delete $1;
  }
| eventSpecList COMMA eventSpec
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

eventSpec:
  pkgdname
  {
    $$ = new EventSpec(*$1, OMIT_VALUE);
    delete $1;
  }
| pkgdname LBRKT eventSpecParameterList RBRKT
  {
    $$ = new EventSpec(*$1, *$3);
    delete $1;
    delete $3;
  }
;

eventSpecParameterList:
  eventSpecParameter
  {
    $$ = new EventParOrStreamList;
    (*$$)[0] = *$1;
    delete $1;
  }
| eventSpecParameterList COMMA eventSpecParameter
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

eventSpecParameter:
  eventStream
  {
    $$ = new EventParOrStream;
    $$->streamID() = $1;
  }
| eventOther
  {
    $$ = new EventParOrStream;
    $$->eventPar() = *$1;
    delete $1;
  }
;

eventBufferControl:
  BufferToken EQUAL eventBufferControlValue { $$ = $3; }
;

eventBufferControlValue:
  OFF { $$ = EventBufferControl::off; }
| LockStepToken { $$ = EventBufferControl::lockStep; }
;

terminationStateDescriptor:
  TerminationStateToken LBRKT terminationStateParmList RBRKT { $$ = $3; }
;

terminationStateParmList:
  terminationStateParm
  {
    $$ = new TerminationStateDescriptor(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_TerminationStateParm(*$$, $1);
    Free_TerminationStateParm($1);
  }
| terminationStateParmList COMMA terminationStateParm
  {
    $$ = $1;
    Merge_TerminationStateParm(*$$, $3);
    Free_TerminationStateParm($3);
  }
;

terminationStateParm:
  propertyParm
  {
    $$.selector = TerminationStateParm::S_propertyParm;
    $$.propertyParm = $1;
  }
| serviceStates
  {
    $$.selector = TerminationStateParm::S_serviceStates;
    $$.serviceStates = $1;
  }
| eventBufferControl
  {
    $$.selector = TerminationStateParm::S_eventBufferControl;
    $$.eventBufferControl = $1;
  }
;

serviceStates:
  ServiceStatesToken EQUAL serviceStatesValue { $$ = $3; }
;

serviceStatesValue:
  TestToken { $$ = ServiceState::test; }
| OutOfSvcToken { $$ = ServiceState::outOfSvc; }
| InSvcToken { $$ = ServiceState::inSvc; }
;

muxDescriptor:
  MuxToken EQUAL MuxType LBRKT terminationIDList RBRKT
  {
    $$ = new MuxDescriptor($3, *$5);
    delete $5;
  }
;

MuxType:
  H221Token { $$ = MuxType::h221; }
| H223Token { $$ = MuxType::h223; }
| H226Token { $$ = MuxType::h226; }
| V76Token { $$ = MuxType::v76; }
| extensionParameter
  {
    $$ = MuxType::extMxT;
    Free($1);
  }
| Nx64kToken { $$ = MuxType::nx64k; }
;

StreamID:
  UINT16 { $$ = $1; }
;

eventsDescriptor:
  EventsToken
  {
    $$ = new EventsDescriptor(OMIT_VALUE);
  }
| EventsToken EQUAL RequestID LBRKT requestedEventList RBRKT
  {
    $$ = new EventsDescriptor;
    EventList& eventList = $$->events();
    eventList.requestID() = $3;
    Free($3);
    eventList.eventList() = *$5;
    delete $5;
  }
;

requestedEventList:
  requestedEvent
  {
    $$ = new RequestedEventList;
    (*$$)[0] = *$1;
    delete $1;
  }
| requestedEventList COMMA requestedEvent
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

requestedEvent:
  pkgdname
  {
    $$ = new RequestedEvent(*$1, OMIT_VALUE);
    delete $1;
  }
| pkgdname LBRKT eventParameterList RBRKT
  {
    $$ = new RequestedEvent(*$1, *$3);
    delete $1;
    delete $3;
  }
;

notifyRegulated:
  NotifyRegulatedToken
  {
    $$ = new NotifyRegulated(OMIT_VALUE);
  }
| NotifyRegulatedToken LBRKT embedWithSig RBRKT
  {
    $$ = new NotifyRegulated(*$3);
    delete $3;
  }
| NotifyRegulatedToken LBRKT embedNoSig RBRKT
  {
    $$ = new NotifyRegulated(*$3);
    delete $3;
  }
;

notifyBehaviour:
  NotifyImmediateToken
  {
    $$ = new NotifyBehaviour;
    $$->notifyImmediate() = H248__token::present__;
  }
| notifyRegulated
  {
    $$ = new NotifyBehaviour;
    $$->notifyRegulated() = *$1;
    delete $1;
  }
| NeverNotifyToken
  {
    $$ = new NotifyBehaviour;
    $$->neverNotify() = H248__token::present__;
  }
;

eventParameterList:
  eventParameter
  {
    $$ = new FirstEventParameters(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_EventParm(*$$, $1);
    Free_EventParm($1);
  }
| eventParameterList COMMA eventParameter
  {
    $$ = $1;
    Merge_EventParm(*$$, $3);
    Free_EventParm($3);
  }
;

eventParameter:
  embedWithSig
  {
    $$.selector = EventParm::S_embedWithOrNoSig;
    $$.embedWithOrNoSig = $1;
  }
| embedNoSig
  {
    $$.selector = EventParm::S_embedWithOrNoSig;
    $$.embedWithOrNoSig = $1;
  }
| KeepActiveToken
  {
    $$.selector = EventParm::S_KeepActiveToken;
  }
| eventDM
  {
    $$.selector = EventParm::S_eventDM;
    $$.eventDM = $1;
  }
| eventStream
  {
    $$.selector = EventParm::S_eventStream;
    $$.eventStream = $1;
  }
| eventOther
  {
    $$.selector = EventParm::S_eventOther;
    $$.eventOther = $1;
  }
| notifyBehaviour
  {
    $$.selector = EventParm::S_notifyBehaviour;
    $$.notifyBehaviour = $1;
  }
| ResetEventsDescriptorToken
  {
    $$.selector = EventParm::S_ResetEventsDescriptorToken;
  }
;

embedWithSig:
  EmbedToken LBRKT signalsDescriptor RBRKT
  {
    $$ = new EmbedSig(*$3, OMIT_VALUE);
    delete $3;
  }
| EmbedToken LBRKT signalsDescriptor COMMA embedFirst RBRKT
  {
    $$ = new EmbedSig(*$3, *$5);
    delete $3;
    delete $5;
  }
;

embedNoSig:
  EmbedToken LBRKT embedFirst RBRKT
  {
    $$ = new EmbedSig(OMIT_VALUE, *$3);
    delete $3;
  }
;

embedFirst:
  EventsToken
  {
    $$ = new EmbedFirst(OMIT_VALUE);
  }
| EventsToken EQUAL RequestID LBRKT secondRequestedEventList RBRKT
  {
    $$ = new EmbedFirst;
    SecondEventList& secondEventList = $$->events();
    secondEventList.requestID() = $3;
    secondEventList.eventList() = *$5;
    Free($3);
    delete $5;
  }
;

secondRequestedEventList:
  secondRequestedEvent
  {
    $$ = new SecondRequestedEventList;
    (*$$)[0] = *$1;
    delete $1;
  }
| secondRequestedEventList COMMA secondRequestedEvent
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

secondRequestedEvent:
  pkgdname
  {
    $$ = new SecondRequestedEvent(*$1, OMIT_VALUE);
    delete $1;
  }
| pkgdname LBRKT secondEventParameterList RBRKT
  {
    $$ = new SecondRequestedEvent(*$1, *$3);
    delete $1;
    delete $3;
  }
;

secondEventParameterList:
  secondEventParameter
  {
    $$ = new SecondEventParameters(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_EventParm(*$$, $1);
    Free_EventParm($1);
  }
| secondEventParameterList COMMA secondEventParameter
  {
    $$ = $1;
    Merge_EventParm(*$$, $3);
    Free_EventParm($3);
  }
;

secondEventParameter:
  embedSig
  {
    $$.selector = EventParm::S_embedSig;
    $$.embedSig = $1;
  }
| KeepActiveToken
  {
    $$.selector = EventParm::S_KeepActiveToken;
  }
| eventDM
  {
    $$.selector = EventParm::S_eventDM;
    $$.eventDM = $1;
  }
| eventStream
  {
    $$.selector = EventParm::S_eventStream;
    $$.eventStream = $1;
  }
| eventOther
  {
    $$.selector = EventParm::S_eventOther;
    $$.eventOther = $1;
  }
| notifyBehaviour
  {
    $$.selector = EventParm::S_notifyBehaviour;
    $$.notifyBehaviour = $1;
  }
| ResetEventsDescriptorToken
  {
    $$.selector = EventParm::S_ResetEventsDescriptorToken;
  }
;

embedSig:
  EmbedToken LBRKT signalsDescriptor RBRKT { $$ = $3; }
;

eventStream:
  StreamToken EQUAL StreamID { $$ = $3; }
;

COMMAeventStream:
  COMMAStreamToken EQUAL StreamID { $$ = $3; }
;

eventOther:
  eventParameterName parmValue
  {
    $$ = new EventParameter(*$1, *$2);
    delete $1;
    delete $2;
  }
;

eventParameterName:
  NAME { $$ = $1; }
;

eventDM:
  DigitMapToken EQUAL digitMapName
  {
    $$ = new EventDM;
    $$->digitMapName() = *$3;
    delete $3;
  }
| DigitMapToken EQUAL LBRKT digitMapValue RBRKT
  {
    $$ = new EventDM;
    $$->digitMapValue() = *$4;
    delete $4;
  }
;

signalsDescriptor:
  SignalsToken
  {
    $$ = new SignalsDescriptor(OMIT_VALUE);
  }
| SignalsToken LBRKT RBRKT
  {
    $$ = new SignalsDescriptor(NULL_VALUE);
  }
| SignalsToken LBRKT signalParmList RBRKT
  {
    $$ = new SignalsDescriptor(*$3);
    delete $3;
  }
;

signalParmList:
  signalParm
  {
    $$ = new SignalRequestList;
    (*$$)[0] = *$1;
    delete $1;
  }
| signalParmList COMMA signalParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

signalParm:
  signalList
  {
    $$ = new SignalRequest;
    $$->seqSigList() = *$1;
    delete $1;
  }
| signalRequest
  {
    $$ = new SignalRequest;
    $$->signal() = *$1;
    delete $1;
  }
;

signalRequest:
  signalName
  {
    $$ = new Signal(*$1, OMIT_VALUE);
    delete $1;
  }
| signalName LBRKT sigParameterList RBRKT
  {
    $$ = new Signal(*$1, *$3);
    delete $1;
    delete $3;
  }
;

sigParameterList:
  sigParameter
  {
    $$ = new SignalParams(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_SignalParameter(*$$, $1);
    Free_SignalParameter($1);
  }
| sigParameterList COMMA sigParameter
  {
    $$ = $1;
    Merge_SignalParameter(*$$, $3);
    Free_SignalParameter($3);
  }
;

signalList:
  SignalListToken EQUAL signalListId LBRKT signalListParmList RBRKT
  {
    $$ = new SeqSigList($3, *$5);
    delete $5;
  }
;

signalListId:
  UINT16 { $$ = $1; }
;

signalListParmList:
  signalListParm
  {
    $$ = new SignalList;
    (*$$)[0] = *$1;
    delete $1;
  }
| signalListParmList COMMA signalListParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

signalListParm:
  signalRequest { $$ = $1; }
;

signalName:
  pkgdname { $$ = $1; }
;

sigParameter:
  sigStream
  {
    $$.selector = SignalParameter::S_sigStream;
    $$.sigStream = $1;
  }
| sigSignalType
  {
    $$.selector = SignalParameter::S_sigSignalType;
    $$.sigSignalType = $1;
  }
| sigDuration
  {
    $$.selector = SignalParameter::S_sigDuration;
    $$.sigDuration = $1;
  }
| sigOther
  {
    $$.selector = SignalParameter::S_sigOther;
    $$.sigOther = $1;
  }
| notifyCompletion
  {
    $$.selector = SignalParameter::S_notifyCompletion;
    $$.notifyCompletion = $1;
  }
| KeepActiveToken
  {
    $$.selector = SignalParameter::S_KeepActiveToken;
  }
| sigDirection
  {
    $$.selector = SignalParameter::S_sigDirection;
    $$.sigDirection = $1;
  }
| sigRequestID
  {
    $$.selector = SignalParameter::S_sigRequestID;
    $$.sigRequestID = $1;
  }
;

sigStream:
  StreamToken EQUAL StreamID { $$ = $3; }
;

sigOther:
  sigParameterName parmValue
  {
    $$ = new SigParameter(*$1, *$2);
    delete $1;
    delete $2;
  }
;

sigParameterName:
  NAME { $$ = $1; }
;

sigSignalType:
  SignalTypeToken EQUAL signalType { $$ = $3; }
;

signalType:
  OnOffToken { $$ = SignalType::onOff; }
| TimeOutToken { $$ = SignalType::timeOut; }
| BriefToken { $$ = SignalType::brief; }
;

sigDuration:
  DurationToken EQUAL UINT16 { $$ = $3; }
;

sigDirection:
  DirectionToken EQUAL direction { $$ = $3; }
;

direction:
  ExternalToken { $$ = SigDirection::External; }
| InternalToken { $$ = SigDirection::Internal; }
| BothToken { $$ = SigDirection::Both; }
;

sigRequestID:
  RequestIDToken EQUAL RequestID { $$ = $3; }
;

/* useless rule
sigIntsigDelay:
  IntsigDelayToken EQUAL UINT16
;
*/

notifyCompletion:
  NotifyCompletionToken EQUAL LBRKT notificationReasonList RBRKT { $$ = $4; }
;

notificationReasonList:
  notificationReason
  {
    $$.TimeOut = ($1 == NR_TimeOut);
    $$.InterruptByEvent = ($1 == NR_InterruptByEvent);
    $$.InterruptByNewSignalsDescr = ($1 == NR_InterruptByNewSignalsDescr);
    $$.OtherReason = ($1 == NR_OtherReason);
    $$.Iteration = ($1 == NR_Iteration);
  }
| notificationReasonList COMMA notificationReason
  {
    $$ = $1;
    switch ($3) {
    case NR_TimeOut:
      if ($$.TimeOut) yyerror("Duplicate TimeOutToken in notifyCompletion");
      $$.TimeOut = TRUE;
      break;
    case NR_InterruptByEvent:
      if ($$.InterruptByEvent) yyerror("Duplicate InterruptByEventToken in "
	"notifyCompletion");
      $$.InterruptByEvent = TRUE;
      break;
    case NR_InterruptByNewSignalsDescr:
      if ($$.InterruptByNewSignalsDescr) yyerror("Duplicate "
	"InterruptByNewSignalsDescrToken in notifyCompletion");
      $$.InterruptByNewSignalsDescr = TRUE;
      break;
    case NR_OtherReason:
      if ($$.OtherReason) yyerror("Duplicate OtherReasonToken in "
	"notifyCompletion");
      $$.OtherReason = TRUE;
      break;
    case NR_Iteration:
      if ($$.Iteration) yyerror("Duplicate IterationToken in notifyCompletion");
      $$.Iteration = TRUE;
      break;
    default:
      yyerror("Internal error: invalid notificationReason");
    }
  }
;

notificationReason:
  TimeOutToken { $$ = NR_TimeOut; }
| InterruptByEventToken { $$ = NR_InterruptByEvent; }
| InterruptByNewSignalsDescrToken { $$ = NR_InterruptByNewSignalsDescr; }
| OtherReasonToken { $$ = NR_OtherReason; }
| IterationToken { $$ = NR_Iteration; }
;

observedEventsDescriptor:
  ObservedEventsToken EQUAL RequestID LBRKT observedEventList RBRKT
  {
    $$ = new ObservedEventsDescriptor($3, *$5);
    Free($3);
    delete $5;
  }
;

observedEventList:
  observedEvent
  {
    $$ = new ObservedEventList;
    (*$$)[0] = *$1;
    delete $1;
  }
| observedEventList COMMA observedEvent
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

observedEvent:
  timeAndEvent
  {
    $$ = new ObservedEvent(*$1, OMIT_VALUE);
    delete $1;
  }
| timeAndEvent LBRKT observedEventParameterList RBRKT
  {
    $$ = new ObservedEvent(*$1, *$3);
    delete $1;
    delete $3;
  }
;

timeAndEvent:
  pkgdname
  {
    $$ = new TimeAndEvent(OMIT_VALUE, *$1);
    delete $1;
  }
| TimeStamp LWSP_COLON_LWSP pkgdname
  {
    $$ = new TimeAndEvent(*$1, *$3);
    delete $1;
    delete $3;
  }
;

observedEventParameterList:
  observedEventParameter
  {
    $$ = new EventParOrStreamList;
    (*$$)[0] = *$1;
    delete $1;
  }
| observedEventParameterList COMMA observedEventParameter
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

observedEventParameter:
  eventStream
  {
    $$ = new EventParOrStream;
    $$->streamID() = $1;
  }
| eventOther
  {
    $$ = new EventParOrStream;
    $$->eventPar() = *$1;
    delete $1;
  }
;

RequestID:
  UINT32 { $$ = $1; }
| '*' { $$ = mcopystr("*"); }
;

modemDescriptor:
  ModemToken modems
  {
    $$ = new ModemDescriptor(*$2, OMIT_VALUE);
    delete $2;
  }
| ModemToken modems LBRKT propertyParmList RBRKT
  {
    $$ = new ModemDescriptor(*$2, *$4);
    delete $2;
    delete $4;
  }
;

modems:
  EQUAL modemType
  {
    $$ = new Modems;
    $$->single() = $2;
  }
| LSBRKT modemTypeList RSBRKT
  {
    $$ = new Modems;
    $$->list() = *$2;
    delete $2;
  }
;

propertyParmList:
  propertyParm
  {
    $$ = new PropertyParmList;
    (*$$)[0] = *$1;
    delete $1;
  }
| propertyParmList COMMA propertyParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

modemTypeList:
  modemType
  {
    $$ = new ModemTypeList;
    (*$$)[0] = $1;
  }
| modemTypeList COMMA modemType
  {
    $$ = $1;
    (*$$)[$$->size_of()] = $3;
  }
;

modemType:
  V32bisToken { $$ = ModemType::v32bis; }
| V22bisToken { $$ = ModemType::v22bis; }
| V18Token { $$ = ModemType::v18; }
| V22Token { $$ = ModemType::v22; }
| V32Token { $$ = ModemType::v32; }
| V34Token { $$ = ModemType::v34; }
| V90Token { $$ = ModemType::v90; }
| V91Token { $$ = ModemType::v91; }
| SynchISDNToken { $$ = ModemType::synchISDN; }
| extensionParameter
  {
    $$ = ModemType::extMT;
    Free($1);
  }
;

digitMapDescriptor:
  DigitMapToken EQUAL digitMapName
  {
    $$ = new DigitMapDescriptor(*$3, OMIT_VALUE);
    delete $3;
  }
| DigitMapToken EQUAL digitMapName LBRKT digitMapValue RBRKT
  {
    $$ = new DigitMapDescriptor(*$3, *$5);
    delete $3;
    delete $5;
  }
| DigitMapToken EQUAL LBRKT digitMapValue RBRKT
  {
    $$ = new DigitMapDescriptor(OMIT_VALUE, *$4);
    delete $4;
  }
;

digitMapName:
  NAME { $$ = $1; }
;

digitMapValue:
  optTTimer optSTimer optLTimer optZTimer digitMap
  {
    $$ = new DigitMapValue;
    if ($1 < 0) $$->startTimer() = OMIT_VALUE;
    else $$->startTimer()() = $1;
    if ($2 < 0) $$->shortTimer() = OMIT_VALUE;
    else $$->shortTimer()() = $2;
    if ($3 < 0) $$->longTimer() = OMIT_VALUE;
    else $$->longTimer()() = $3;
    if ($4 < 0) $$->durationTimer() = OMIT_VALUE;
    else $$->durationTimer()() = $4;
    $$->digitMapBody() = *$5;
    delete $5;
  }
;

optTTimer:
  /* empty */ { $$ = -1; }
| TTimer COMMA { $$ = $1; }
;

optSTimer:
  /* empty */ { $$ = -1; }
| STimer COMMA { $$ = $1; }
;

optLTimer:
  /* empty */ { $$ = -1; }
| LTimer COMMA { $$ = $1; }
;

optZTimer:
  /* empty */ { $$ = -1; }
| ZTimer COMMA { $$ = $1; }
;

digitMap:
  digitString
  {
    $$ = new DigitstringSingleOrList;
    $$->single() = *$1;
    delete $1;
  }
| LWSP_LPAREN_LWSP digitStringList LWSP_RPAREN_LWSP
  {
    $$ = new DigitstringSingleOrList;
    $$->list() = *$2;
    delete $2;
  }
;

digitStringList:
  digitString
  {
    $$ = new DigitStringList;
    (*$$)[0] = *$1;
    delete $1;
  }
| digitStringList LWSP_VBAR_LWSP digitString
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

auditItem:
  auditReturnItem
  {
    $$ = new AuditItem;
    $$->auditToken() = $1;
  }
| SignalsToken
  {
    $$ = new AuditItem;
    $$->auditToken() = AuditTokens::signalsToken;
  }
| EventBufferToken
  {
    $$ = new AuditItem;
    $$->auditToken() = AuditTokens::eventBufferToken;
  }
| EventsToken
  {
    $$ = new AuditItem;
    $$->auditToken() = AuditTokens::eventsToken;
  }
| indAudterminationAudit { $$ = $1; }
;

indAudterminationAudit:
  indAudauditReturnParameter { $$ = $1; }
;

indAudauditReturnParameter:
  indAudmediaDescriptor
  {
    $$ = new AuditItem;
    $$->indaudmediaDescriptor() = *$1;
    delete $1;
  }
| indAudeventsDescriptor
  {
    $$ = new AuditItem;
    $$->indaudeventsDescriptor() = *$1;
    delete $1;
  }
| indAudsignalsDescriptor
  {
    $$ = new AuditItem;
    $$->indaudsignalsDescriptor() = *$1;
    delete $1;
  }
| indAuddigitMapDescriptor
  {
    $$ = new AuditItem;
    $$->indauddigitMapDescriptor() = *$1;
    delete $1;
  }
| indAudeventBufferDescriptor
  {
    $$ = new AuditItem;
    $$->indaudeventBufferDescriptor() = *$1;
    delete $1;
  }
| indAudstatisticsDescriptor
  {
    $$ = new AuditItem;
    $$->indaudstatisticsDescriptor() = *$1;
    delete $1;
  }
| indAudpackagesDescriptor
  {
    $$ = new AuditItem;
    $$->indaudpackagesDescriptor() = *$1;
    delete $1;
  }
;

indAudmediaDescriptor:
  MediaToken LBRKT indAudmediaParmList RBRKT { $$ = $3; }
;

indAudmediaParmList:
  indAudmediaParm
  {
    $$ = new IndAudMediaDescriptor(OMIT_VALUE, OMIT_VALUE);
    Merge_IndAudMediaParm(*$$, $1);
    Free_IndAudMediaParm($1);
  }
| indAudmediaParmList COMMA indAudmediaParm
  {
    $$ = $1;
    Merge_IndAudMediaParm(*$$, $3);
    Free_IndAudMediaParm($3);
  }
;

indAudmediaParm:
  indAudstreamParm { $$ = $1; }
| indAudstreamDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudstreamDescriptor;
    $$.indAudstreamDescriptor = $1;
  }
| indAudterminationStateDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudterminationStateDescriptor;
    $$.indAudterminationStateDescriptor = $1;
  }
;

indAudstreamParm:
  indAudlocalControlDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudlocalControlDescriptor;
    $$.indAudlocalControlDescriptor = $1;
  }
| indAudstatisticsDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudstatisticsDescriptor;
    $$.indAudstatisticsDescriptor = $1;
  }
| indAudremoteDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudremoteDescriptor;
    $$.indAudremoteDescriptor = $1;
  }
| indAudlocalDescriptor
  {
    $$.selector = IndAudMediaParm::S_indAudlocalDescriptor;
    $$.indAudlocalDescriptor = $1;
  }
;

indAudremoteDescriptor:
  RemoteToken LBRKT RBRKT { $$ = new CHARSTRING(0, NULL); }
| RemoteToken LBRKT octetString RBRKT { $$ = $3; }
;

indAudlocalDescriptor:
  LocalToken LBRKT RBRKT { $$ = new CHARSTRING(0, NULL); }
| LocalToken LBRKT octetString RBRKT { $$ = $3; }
;

indAudstreamDescriptor:
  StreamToken EQUAL StreamID LBRKT indAudstreamParm RBRKT
  {
    $$ = new IndAudStreamDescriptor;
    $$->streamID() = $3;
    IndAudStreamParms& streamParms = $$->streamParms();
    if ($5.selector == IndAudMediaParm::S_indAudlocalControlDescriptor)
      streamParms.localControlDescriptor()() = *$5.indAudlocalControlDescriptor;
    else streamParms.localControlDescriptor() = OMIT_VALUE;
    if ($5.selector == IndAudMediaParm::S_indAudstatisticsDescriptor)
      streamParms.statisticsDescriptor()() = *$5.indAudstatisticsDescriptor;
    else streamParms.statisticsDescriptor() = OMIT_VALUE;
    if ($5.selector == IndAudMediaParm::S_indAudremoteDescriptor)
      streamParms.remoteDescriptor()() = *$5.indAudremoteDescriptor;
    else streamParms.remoteDescriptor() = OMIT_VALUE;
    if ($5.selector == IndAudMediaParm::S_indAudlocalDescriptor)
      streamParms.localDescriptor()() = *$5.indAudlocalDescriptor;
    else streamParms.localDescriptor() = OMIT_VALUE;
    Free_IndAudMediaParm($5);
  }

indAudlocalControlDescriptor:
  LocalControlToken LBRKT indAudlocalParmList RBRKT { $$ = $3; }
;

indAudlocalParmList:
  indAudlocalParm
  {
    $$ = new IndAudLocalControlDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| indAudlocalParmList COMMA indAudlocalParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

indAudlocalParm:
  ModeToken
  {
    $$ = new IndAudLocalParm;
    $$->streamModes().tokenOnly() = H248__token::present__;
  }
| ModeToken EQUAL streamModes
  {
    $$ = new IndAudLocalParm;
    $$->streamModes().equal() = $3;
  }
| ModeToken GREATERTHAN streamModes
  {
    $$ = new IndAudLocalParm;
    $$->streamModes().greaterthan() = $3;
  }
| ModeToken LESSTHAN streamModes
  {
    $$ = new IndAudLocalParm;
    $$->streamModes().lessthan() = $3;
  }
| ModeToken NOTEQUAL streamModes
  {
    $$ = new IndAudLocalParm;
    $$->streamModes().notequal() = $3;
  }
| pkgdname
  {
    $$ = new IndAudLocalParm;
    $$->pkgdName() = *$1;
    delete $1;
  }
| propertyParm
  {
    $$ = new IndAudLocalParm;
    $$->propertyParm() = *$1;
    delete $1;
  }
| ReservedValueToken
  {
    $$ = new IndAudLocalParm;
    $$->reservedValue() = H248__token::present__;
  }
| ReservedGroupToken
  {
    $$ = new IndAudLocalParm;
    $$->reservedGroup() = H248__token::present__;
  }
;

indAudterminationStateDescriptor:
  TerminationStateToken LBRKT indAudterminationStateParmList RBRKT { $$ = $3; }
;

indAudterminationStateParmList:
  indAudterminationStateParm
  {
    $$ = new IndAudTerminationStateDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| indAudterminationStateParmList COMMA indAudterminationStateParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

indAudterminationStateParm:
  pkgdname
  {
    $$ = new IndAudTerminationStateParm;
    $$->pkgdName() = *$1;
    delete $1;
  }
| propertyParm
  {
    $$ = new IndAudTerminationStateParm;
    $$->propertyParm() = *$1;
    delete $1;
  }
| ServiceStatesToken
  {
    $$ = new IndAudTerminationStateParm;
    $$->serviceStates().tokenOnly() = H248__token::present__;
  }
| ServiceStatesToken EQUAL serviceStatesValue
  {
    $$ = new IndAudTerminationStateParm;
    $$->serviceStates().equal() = $3;
  }
| ServiceStatesToken GREATERTHAN serviceStatesValue
  {
    $$ = new IndAudTerminationStateParm;
    $$->serviceStates().greaterthan() = $3;
  }
| ServiceStatesToken LESSTHAN serviceStatesValue
  {
    $$ = new IndAudTerminationStateParm;
    $$->serviceStates().lessthan() = $3;
  }
| ServiceStatesToken NOTEQUAL serviceStatesValue
  {
    $$ = new IndAudTerminationStateParm;
    $$->serviceStates().notequal() = $3;
  }
| BufferToken
  {
    $$ = new IndAudTerminationStateParm;
    $$->buffer() = H248__token::present__;
  }
;

indAudeventBufferDescriptor:
  EventBufferToken LBRKT indAudeventSpec RBRKT { $$ = $3; }
;

indAudeventSpec:
  pkgdname
  {
    $$ = new IndAudEventBufferDescriptor(*$1, OMIT_VALUE);
    delete $1;
  }
| pkgdname LBRKT indAudeventSpecParameter RBRKT
  {
    $$ = new IndAudEventBufferDescriptor(*$1, *$3);
    delete $1;
    delete $3;
  }
;

indAudeventSpecParameter:
  eventStream
  {
    $$ = new EventParNameOrStream;
    $$->streamID() = $1;
  }
| eventParameterName
  {
    $$ = new EventParNameOrStream;
    $$->eventParName() = *$1;
    delete $1;
  }
;

indAudeventsDescriptor:
  EventsToken LBRKT indAudrequestedEvent RBRKT
  {
    $$ = new IndAudEventsDescriptor(OMIT_VALUE, *$3);
    delete $3;
  }
| EventsToken EQUAL RequestID LBRKT indAudrequestedEvent RBRKT
  {
    $$ = new IndAudEventsDescriptor($3, *$5);
    Free($3);
    delete $5;
  }
;

indAudrequestedEvent:
  pkgdname { $$ = $1; }
;

indAudsignalsDescriptor:
  SignalsToken LBRKT RBRKT
  {
    $$ = new IndAudSignalsDescriptor(OMIT_VALUE);
  }
| SignalsToken LBRKT indAudsignalParm RBRKT
  {
    $$ = new IndAudSignalsDescriptor(*$3);
    delete $3;
  }
;

indAudsignalParm:
  indAudsignalList
  {
    $$ = new IndAudSignalParm;
    $$->signalList() = *$1;
    delete $1;
  }
| indAudsignalRequest
  {
    $$ = new IndAudSignalParm;
    $$->signal() = *$1;
    delete $1;
  }
;

indAudsignalRequest:
  signalName
  {
    $$ = new IndAudSignalRequest(*$1, OMIT_VALUE);
    delete $1;
  }
| signalName LBRKT indAudsignalRequestParmList RBRKT
  {
    $$ = new IndAudSignalRequest(*$1, *$3);
    delete $1;
    delete $3;
  }
;

indAudsignalRequestParmList:
  indAudsignalRequestParm
  {
    $$ = new IndAudSignalRequestParmList;
    (*$$)[0] = *$1;
    delete $1;
  }
| indAudsignalRequestParmList COMMA indAudsignalRequestParm
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

indAudsignalRequestParm:
  sigStream
  {
    $$ = new IndAudSignalRequestParm;
    $$->streamID() = $1;
  }
| sigRequestID
  {
    $$ = new IndAudSignalRequestParm;
    $$->sigRequestId() = $1;
    Free($1);
  }
;

indAudsignalList:
  SignalListToken EQUAL signalListId
  {
    $$ = new IndAudSignalList($3, OMIT_VALUE);
  }
| SignalListToken EQUAL signalListId LBRKT indAudsignalListParm RBRKT
  {
    $$ = new IndAudSignalList($3, *$5);
    delete $5;
  }
;

indAudsignalListParm:
  indAudsignalRequest { $$ = $1; }
;

indAuddigitMapDescriptor:
  DigitMapToken EQUAL digitMapName
  {
    $$ = new IndAudDigitMapDescriptor(*$3);
    delete $3;
  }
;

indAudstatisticsDescriptor:
  StatsToken LBRKT pkgdname RBRKT
  {
    $$ = new IndAudStatisticsDescriptor(*$3);
    delete $3;
  }
;

indAudpackagesDescriptor:
  PackagesToken LBRKT packagesItem RBRKT { $$ = $3; }
;

serviceChangeDescriptor:
  ServicesToken LBRKT serviceChangeParmList RBRKT
  {
    $$ = $3;
    if (!$$->serviceChangeMethod().is_bound()) yyerror("Mandatory parameter "
      "serviceChangeMethod is missing from serviceChangeParmList");
    if (!$$->serviceChangeReason().is_bound()) yyerror("Mandatory parameter "
      "serviceChangeReason is missing from serviceChangeParmList");
  }
;

serviceChangeParmList:
  serviceChangeParm
  {
    $$ = new ServiceChangeDescriptor;
    $$->serviceChangeAddress() = OMIT_VALUE;
    $$->serviceChangeVersion() = OMIT_VALUE;
    $$->serviceChangeProfile() = OMIT_VALUE;
    $$->serviceChangeDelay() = OMIT_VALUE;
    $$->serviceChangeMgcId() = OMIT_VALUE;
    $$->timeStamp() = OMIT_VALUE;
    $$->serviceChangeIncomplete() = OMIT_VALUE;
    $$->nonStandardData() = OMIT_VALUE;
    $$->serviceChangeInfo() = OMIT_VALUE;
    Merge_ServiceChangeParm(*$$, $1);
    Free_ServiceChangeParm($1);
  }
| serviceChangeParmList COMMA serviceChangeParm
  {
    $$ = $1;
    Merge_ServiceChangeParm(*$$, $3);
    Free_ServiceChangeParm($3);
  }
;

serviceChangeParm:
  serviceChangeMethod
  {
    $$.selector = ServiceChangeParm::S_serviceChangeMethod;
    $$.serviceChangeMethod = $1;
  }
| serviceChangeReason
  {
    $$.selector = ServiceChangeParm::S_serviceChangeReason;
    $$.serviceChangeReason = $1;
  }
| serviceChangeDelay
  {
    $$.selector = ServiceChangeParm::S_serviceChangeDelay;
    $$.serviceChangeDelay = $1;
  }
| serviceChangeAddress
  {
    $$.selector = ServiceChangeParm::S_serviceChangeAddress;
    $$.serviceChangeAddress = $1;
  }
| serviceChangeProfile
  {
    $$.selector = ServiceChangeParm::S_serviceChangeProfile;
    $$.serviceChangeProfile = $1;
  }
| extension
  {
    $$.selector = ServiceChangeParm::S_extension;
    $$.extension = $1;
  }
| TimeStamp
  {
    $$.selector = ServiceChangeParm::S_TimeStamp;
    $$.timeStamp = $1;
  }
| serviceChangeMgcId
  {
    $$.selector = ServiceChangeParm::S_serviceChangeMgcId;
    $$.serviceChangeMgcId = $1;
  }
| serviceChangeVersion
  {
    $$.selector = ServiceChangeParm::S_serviceChangeVersion;
    $$.serviceChangeVersion = $1;
  }
| ServiceChangeIncompleteToken
  {
    $$.selector = ServiceChangeParm::S_ServiceChangeIncompleteToken;
  }
| auditItem
  {
    $$.selector = ServiceChangeParm::S_auditItem;
    $$.auditItem = $1;
  }
;

serviceChangeReplyDescriptor:
  ServicesToken LBRKT servChgReplyParmList RBRKT { $$ = $3; }
;

servChgReplyParmList:
  servChgReplyParm
  {
    $$ = new ServiceChangeResParm(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE);
    Merge_ServiceChangeParm(*$$, $1);
    Free_ServiceChangeParm($1);
  }
| servChgReplyParmList COMMA servChgReplyParm
  {
    $$ = $1;
    Merge_ServiceChangeParm(*$$, $3);
    Free_ServiceChangeParm($3);
  }
;

servChgReplyParm:
  serviceChangeAddress
  {
    $$.selector = ServiceChangeParm::S_serviceChangeAddress;
    $$.serviceChangeAddress = $1;
  }
| serviceChangeMgcId
  {
    $$.selector = ServiceChangeParm::S_serviceChangeMgcId;
    $$.serviceChangeMgcId = $1;
  }
| serviceChangeProfile
  {
    $$.selector = ServiceChangeParm::S_serviceChangeProfile;
    $$.serviceChangeProfile = $1;
  }
| serviceChangeVersion
  {
    $$.selector = ServiceChangeParm::S_serviceChangeVersion;
    $$.serviceChangeVersion = $1;
  }
| TimeStamp
  {
    $$.selector = ServiceChangeParm::S_TimeStamp;
    $$.timeStamp = $1;
  }
;

serviceChangeMethod:
  MethodToken EQUAL serviceChangeMethodValue { $$ = $3; }
;

serviceChangeMethodValue:
  FailoverToken { $$ = ServiceChangeMethod::failover; }
| ForcedToken { $$ = ServiceChangeMethod::forced; }
| GracefulToken { $$ = ServiceChangeMethod::graceful; }
| RestartToken { $$ = ServiceChangeMethod::restart; }
| DisconnectedToken { $$ = ServiceChangeMethod::disconnected; }
| HandOffToken { $$ = ServiceChangeMethod::handOff; }
| extensionParameter
  {
    $$ = ServiceChangeMethod::unknown;
    Free($1);
  }
;

serviceChangeReason:
  ReasonToken EQUAL VALUE { $$ = $3; }
;

serviceChangeDelay:
  DelayToken EQUAL UINT32 { $$ = $3; }
;

serviceChangeAddress:
  ServiceChangeAddressToken EQUAL mId
  {
    $$ = new ServiceChangeAddress;
    switch ($3->get_selection()) {
    case MId::ALT_ip4Address:
      $$->ip4Address() = $3->ip4Address();
      break;
    case MId::ALT_ip6Address:
      $$->ip6Address() = $3->ip6Address();
      break;
    case MId::ALT_domainName:
      $$->domainName() = $3->domainName();
      break;
    case MId::ALT_mtpAddress:
      $$->mtpAddress() = $3->mtpAddress();
      break;
    case MId::ALT_deviceName:
      $$->deviceName() = $3->deviceName();
      break;
    default:
      yyerror("Invalid selection within mId of serviceChangeAddress");
    }
    delete $3;
  }
| ServiceChangeAddressToken EQUAL portNumber
  {
    $$ = new ServiceChangeAddress;
    $$->portNumber() = $3;
  }
;

serviceChangeMgcId:
  MgcIdToken EQUAL mId { $$ = $3; }
;

serviceChangeProfile:
  ProfileToken EQUAL NAME '/' Version
  {
    $$ = new ServiceChangeProfile(*$3, $5);
    delete $3;
  }
;

serviceChangeVersion:
  VersionToken EQUAL Version { $$ = $3; }
;

extension:
  extensionParameter parmValue
  {
    $$ = new Extension($1, *$2);
    Free($1);
    delete $2;
  }
;

packagesDescriptor:
  PackagesToken LBRKT packagesItemList RBRKT { $$ = $3; }
;

packagesItemList:
  packagesItem
  {
    $$ = new PackagesDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| packagesItemList COMMA packagesItem
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

Version:
  NUMBER
  {
    /* 1*2(DIGIT) */
    if (strlen($1) > 2) yyerror("Number %s is too long for Version", $1);
    $$ = atoi($1);
    Free($1);
  }
;

packagesItem:
  NAME '-' UINT16
  {
    $$ = new PackagesItem(*$1, $3);
    delete $1;
  }
;

statisticsDescriptor:
  StatsToken LBRKT statisticsParameterList RBRKT { $$ = $3; }
;

statisticsParameterList:
  statisticsParameter
  {
    $$ = new StatisticsDescriptor;
    (*$$)[0] = *$1;
    delete $1;
  }
| statisticsParameterList COMMA statisticsParameter
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

statisticsParameter:
  pkgdname
  {
    $$ = new StatisticsParameter(*$1, OMIT_VALUE);
    delete $1;
  }
| pkgdname EQUAL VALUE
  {
    $$ = new StatisticsParameter;
    $$->statName() = *$1;
    $$->values()()[0] = *$3;
    delete $1;
    delete $3;
  }
| pkgdname EQUAL LSBRKT valueList RSBRKT
  {
    $$ = new StatisticsParameter(*$1, *$4);
    delete $1;
    delete $4;
  }
;

topologyDescriptor:
  TopologyToken LBRKT topologyTripleList RBRKT { $$ = $3; }
;

topologyTripleList:
  topologyTriple
  {
    $$ = new TopologyRequestList;
    (*$$)[0] = *$1;
    delete $1;
  }
| topologyTripleList COMMA topologyTriple
  {
    $$ = $1;
    (*$$)[$$->size_of()] = *$3;
    delete $3;
  }
;

topologyTriple:
  terminationA COMMA terminationB COMMA topologyDirection
  {
    $$ = new TopologyRequest(*$1, *$3, $5, OMIT_VALUE);
    delete $1;
    delete $3;
  }
| terminationA COMMA terminationB COMMA topologyDirection COMMAeventStream
  {
    $$ = new TopologyRequest(*$1, *$3, $5, $6);
    delete $1;
    delete $3;
  }
;

terminationA:
  terminationid { $$ = $1; }
;

terminationB:
  terminationid { $$ = $1; }
;

topologyDirection:
  BothwayToken { $$ = TopologyDirection::bothway; }
| IsolateToken { $$ = TopologyDirection::isolate; }
| OnewayToken { $$ = TopologyDirection::oneway; }
| OnewayExternalToken { $$ = TopologyDirection::onewayExternal; }
| OnewayBothToken { $$ = TopologyDirection::onewayBoth; }
;

priority:
  PriorityToken EQUAL UINT16 { $$ = $3; }
;

iepsValue:
  IEPSToken EQUAL ON { $$ = TRUE; }
| IEPSToken EQUAL OFF { $$ = FALSE; }
;

emergencyValue:
  EmergencyValueToken EQUAL EmergencyToken { $$ = Emergency::emergency; }
| EmergencyValueToken EQUAL EmergencyOffToken { $$ = Emergency::emergencyOff; }
;

contextAttrDescriptor:
  ContextAttrToken LBRKT contextIdList RBRKT
  {
    $$ = new ContextAttrDescriptor;
    $$->contextIds() = *$3;
    delete $3;
  }
| ContextAttrToken LBRKT propertyParmList RBRKT
  {
    $$ = new ContextAttrDescriptor;
    $$->propertyParms() = *$3;
    delete $3;
  }
;

contextIdList:
  ContextListToken EQUAL LBRKT contextIDList RBRKT { $$ = $4; }
;

contextIDList:
  ContextID
  {
    $$ = new ContextIdList;
    (*$$)[0] = $1;
    Free($1);
  }
| contextIDList COMMA ContextID
  {
    $$ = $1;
    (*$$)[$$->size_of()] = $3;
    Free($3);
  }
;

UINT16:
  NUMBER
  {
    /* 1*5(DIGIT) ; %x0-FFFF */
    if (strlen($1) > 5) yyerror("Number %s is too long for UINT16", $1);
    $$ = atoi($1);
    if ($$ < 0 || $$ > 0xFFFF) yyerror("Number %s is not a valid UINT16 SafeCharValue", $1);
    Free($1);
  }
;

UINT32:
  NUMBER
  {
    /* 1*10(DIGIT) ; %x0-FFFFFFFF */
    if (strlen($1) > 10) yyerror("Number %s is too long for UINT32", $1);
    $$ = $1;
  }
;

VALUE:
  quotedString { $$ = $1; }
| SafeCharValue { $$ = $1; }
;

LWSP_COLON_LWSP:
  ':'
| ':' SEP
| SEP ':'
| SEP ':' SEP
;

LWSP_LPAREN_LWSP:
  '('
| '(' SEP
| SEP '('
| SEP '(' SEP
;

LWSP_RPAREN_LWSP:
  ')'
| ')' SEP
| SEP ')'
| SEP ')' SEP
;

LWSP_VBAR_LWSP:
  '|'
| '|' SEP
| SEP '|'
| SEP '|' SEP
;

%%

/*********************************************************************
 * Interface
 *********************************************************************/

PDU__H248 H248__Types::f__H248__Dec(const CHARSTRING& pl__stream)
{
  /* if you want to debug */
  //H248_yydebug = 1;
  //check_mem_leak("H248_Test");

  if (par__H248__EncDec__debug && TTCN_Logger::log_this_event(TTCN_DEBUG)) {
    TTCN_Logger::begin_event(TTCN_DEBUG);
    TTCN_Logger::log_event("Decoding message: ");
    pl__stream.log();
    TTCN_Logger::end_event();
  }

  yy_buffer_state *flex_buffer = H248_yy_scan_bytes((const char*)pl__stream,
    pl__stream.lengthof());
  if (flex_buffer == NULL) {
    TTCN_error("Flex buffer creation failed.");
  }

  init_H248_yylex();
  try {
    if (H248_yyparse()) TTCN_error("Decoding of H.248 message failed.");
    H248_yy_delete_buffer(flex_buffer);
  } catch (...) {
    H248_yy_delete_buffer(flex_buffer);
    throw;
  }

  PDU__H248 retv;
  if (decoded_message != NULL) {
    if (par__H248__EncDec__debug && TTCN_Logger::log_this_event(TTCN_DEBUG)) {
      TTCN_Logger::begin_event(TTCN_DEBUG);
      TTCN_Logger::log_event("Decoded message: ");
      decoded_message->log();
      TTCN_Logger::end_event();
    }
    retv = *decoded_message;
    delete decoded_message;
    decoded_message = NULL;
  }
  return retv;
}

/*********************************************************************
 * Functions for internal purposes
 *********************************************************************/

static void H248_yyerror(const char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  char *error_str = mprintf_va_list(fmt, args);
  va_end(args);
  try {
    TTCN_error("parse error at or before token `%s': %s", H248_yytext, error_str);
  } catch (...) {
    Free(error_str);
    throw;
  }
}

static void Merge_ContextProperty(ContextRequest& to,
  const ContextProperty& from)
{
  switch (from.selector) {
  case ContextProperty::S_topologyDescriptor:
    if (to.topologyReq().ispresent())
      yyerror("Duplicate topologyDescriptor in contextProperties");
    to.topologyReq()() = *from.topologyDescriptor;
    break;
  case ContextProperty::S_priority:
    if (to.priority().ispresent())
      yyerror("Duplicate priority in contextProperties");
    to.priority()() = from.priority;
    break;
  case ContextProperty::S_emergency:
    if (to.emergency().ispresent())
      yyerror("Duplicate emergency token in contextProperties");
    to.emergency()() = from.emergency;
    break;
  case ContextProperty::S_iepsValue:
    if (to.iepsValue().ispresent())
      yyerror("Duplicate iepsValue in contextProperties");
    to.iepsValue()() = from.iepsValue;
    break;
  case ContextProperty::S_contextAttrDescriptor:
    if (to.contextAttrDescriptor().ispresent())
      yyerror("Duplicate contextAttrDescriptor in contextProperties");
    to.contextAttrDescriptor()() = *from.contextAttrDescriptor;
    break;
  default:
    yyerror("Merge_ContextProperty(): internal error");
  }
}

static void Free_ContextProperty(const ContextProperty& parm)
{
  switch (parm.selector) {
  case ContextProperty::S_topologyDescriptor:
    delete parm.topologyDescriptor;
    break;
  case ContextProperty::S_priority:
  case ContextProperty::S_emergency:
  case ContextProperty::S_iepsValue:
    break;
  case ContextProperty::S_contextAttrDescriptor:
    delete parm.contextAttrDescriptor;
    break;
  default:
    yyerror("Free_ContextProperty(): internal error");
  }
}

static void Merge_ContextAuditProperties(ContextAttrAuditRequest& to,
  const ContextAuditProperties& from)
{
  switch (from.selector) {
  case ContextAuditProperties::S_TopologyToken:
    if (to.topology().ispresent())
      yyerror("Duplicate TopologyToken in contextAudit");
    to.topology()() = H248__token::present__;
    break;
  case ContextAuditProperties::S_EmergencyToken:
    if (to.emergency().ispresent())
      yyerror("Duplicate EmergencyToken in contextAudit");
    to.emergency()() = H248__token::present__;
    break;
  case ContextAuditProperties::S_PriorityToken:
    if (to.priority().ispresent())
      yyerror("Duplicate PriorityToken in contextAudit");
    to.priority()() = H248__token::present__;
    break;
  case ContextAuditProperties::S_IEPSToken:
    if (to.iEPS().ispresent())
      yyerror("Duplicate IEPSToken in contextAudit");
    to.iEPS()() = H248__token::present__;
    break;
  case ContextAuditProperties::S_pkgdName:
    if (to.pkgdName().ispresent())
      yyerror("Duplicate pkgdName in contextAudit");
    to.pkgdName()() = *from.pkgdName;
    break;
  case ContextAuditProperties::S_priority:
    if (to.priorityValue().ispresent())
      yyerror("Duplicate priority in contextAudit");
    to.priorityValue()() = from.priority;
    break;
  case ContextAuditProperties::S_emergencyValue:
    if (to.emergencyValue().ispresent())
      yyerror("Duplicate emergencyValue in contextAudit");
    to.emergencyValue()() = from.emergencyValue;
    break;
  case ContextAuditProperties::S_iepsValue:
    if (to.iepsValue().ispresent())
      yyerror("Duplicate iepsValue in contextAudit");
    to.iepsValue()() = from.iepsValue;
    break;
  case ContextAuditProperties::S_contextAttrDescriptor:
    if (to.contextAttrDescriptor().ispresent())
      yyerror("Duplicate contextAttrDescriptor in contextAudit");
    to.contextAttrDescriptor()() = *from.contextAttrDescriptor;
    break;
  case ContextAuditProperties::S_auditSelectLogic:
    if (to.auditSelectionLogic().ispresent())
      yyerror("Duplicate auditSelectLogic in contextAudit");
    to.auditSelectionLogic()() = from.auditSelectLogic;
    break;
  default:
    yyerror("Merge_ContextAuditProperties(): internal error");
  }
}

static void Free_ContextAuditProperties(const ContextAuditProperties& parm)
{
  switch (parm.selector) {
  case ContextAuditProperties::S_TopologyToken:
  case ContextAuditProperties::S_EmergencyToken:
  case ContextAuditProperties::S_PriorityToken:
  case ContextAuditProperties::S_IEPSToken:
    break;
  case ContextAuditProperties::S_pkgdName:
    delete parm.pkgdName;
    break;
  case ContextAuditProperties::S_priority:
  case ContextAuditProperties::S_emergencyValue:
  case ContextAuditProperties::S_iepsValue:
    break;
  case ContextAuditProperties::S_contextAttrDescriptor:
    delete parm.contextAttrDescriptor;
    break;
  case ContextAuditProperties::S_auditSelectLogic:
    break;
  default:
    yyerror("Free_ContextAuditProperties(): internal error");
  }
}

static void Merge_MediaParm(StreamParm& to, const MediaParm& from)
{
  switch (from.selector) {
  case MediaParm::S_localDescriptor:
    if (to.localDescriptor().ispresent())
      yyerror("Duplicate localDescriptor in streamDescriptor");
    to.localDescriptor()() = *from.localDescriptor;
    break;
  case MediaParm::S_remoteDescriptor:
    if (to.remoteDescriptor().ispresent())
      yyerror("Duplicate remoteDescriptor in streamDescriptor");
    to.remoteDescriptor()() = *from.remoteDescriptor;
    break;
  case MediaParm::S_localControlDescriptor:
    if (to.localControlDescriptor().ispresent())
      yyerror("Duplicate localControlDescriptor in streamDescriptor");
    to.localControlDescriptor()() = *from.localControlDescriptor;
    break;
  case MediaParm::S_statisticsDescriptor:
    if (to.statisticsDescriptor().ispresent())
      yyerror("Duplicate statisticsDescriptor in streamDescriptor");
    to.statisticsDescriptor()() = *from.statisticsDescriptor;
    break;
  default:
    yyerror("Merge_MediaParm(): internal error");
  }

}

static void Merge_MediaParm(MediaDescriptor& to, const MediaParm& from)
{
  switch (from.selector) {
  case MediaParm::S_localDescriptor:
    if (to.streams().ispresent()) {
      MediaDescriptorStreams& streams = to.streams();
      switch (streams.get_selection()) {
      case MediaDescriptorStreams::ALT_multiStream:
	yyerror("streamDescriptor and localDescriptor cannot be both present "
	  "in mediaDescriptor");
	break;
      case MediaDescriptorStreams::ALT_oneStream: {
        StreamParm& streamParm = streams.oneStream();
        if (streamParm.localDescriptor().ispresent())
	  yyerror("Duplicate localDescriptor in mediaDescriptor");
	streamParm.localDescriptor()() = *from.localDescriptor;
	break; }
      default:
	yyerror("Merge_MediaParm(): internal error");
      }
    } else {
      StreamParm& streamParm = to.streams()().oneStream();
      streamParm.localControlDescriptor() = OMIT_VALUE;
      streamParm.localDescriptor()() = *from.localDescriptor;
      streamParm.remoteDescriptor() = OMIT_VALUE;
      streamParm.statisticsDescriptor() = OMIT_VALUE;
    }
    break;
  case MediaParm::S_remoteDescriptor:
    if (to.streams().ispresent()) {
      MediaDescriptorStreams& streams = to.streams();
      switch (streams.get_selection()) {
      case MediaDescriptorStreams::ALT_multiStream:
	yyerror("streamDescriptor and remoteDescriptor cannot be both present "
	  "in mediaDescriptor");
	break;
      case MediaDescriptorStreams::ALT_oneStream: {
        StreamParm& streamParm = streams.oneStream();
        if (streamParm.remoteDescriptor().ispresent())
	  yyerror("Duplicate remoteDescriptor in mediaDescriptor");
  	streamParm.remoteDescriptor()() = *from.remoteDescriptor;
	break; }
      default:
	yyerror("Merge_MediaParm(): internal error");
      }
    } else {
      StreamParm& streamParm = to.streams()().oneStream();
      streamParm.localControlDescriptor() = OMIT_VALUE;
      streamParm.localDescriptor() = OMIT_VALUE;
      streamParm.remoteDescriptor()() = *from.remoteDescriptor;
      streamParm.statisticsDescriptor() = OMIT_VALUE;
    }
    break;
  case MediaParm::S_localControlDescriptor:
    if (to.streams().ispresent()) {
      MediaDescriptorStreams& streams = to.streams();
      switch (streams.get_selection()) {
      case MediaDescriptorStreams::ALT_multiStream:
	yyerror("streamDescriptor and localControlDescriptor cannot be both "
	  "present in mediaDescriptor");
	break;
      case MediaDescriptorStreams::ALT_oneStream: {
        StreamParm& streamParm = streams.oneStream();
        if (streamParm.localControlDescriptor().ispresent())
	  yyerror("Duplicate localControlDescriptor in mediaDescriptor");
  	streamParm.localControlDescriptor()() = *from.localControlDescriptor;
	break; }
      default:
	yyerror("Merge_MediaParm(): internal error");
      }
    } else {
      StreamParm& streamParm = to.streams()().oneStream();
      streamParm.localControlDescriptor()() = *from.localControlDescriptor;
      streamParm.localDescriptor() = OMIT_VALUE;
      streamParm.remoteDescriptor() = OMIT_VALUE;
      streamParm.statisticsDescriptor() = OMIT_VALUE;
    }
    break;
  case MediaParm::S_statisticsDescriptor:
    if (to.streams().ispresent()) {
      MediaDescriptorStreams& streams = to.streams();
      switch (streams.get_selection()) {
      case MediaDescriptorStreams::ALT_multiStream:
	yyerror("streamDescriptor and statisticsDescriptor cannot be both "
	  "present in mediaDescriptor");
	break;
      case MediaDescriptorStreams::ALT_oneStream: {
        StreamParm& streamParm = streams.oneStream();
        if (streamParm.statisticsDescriptor().ispresent())
	  yyerror("Duplicate statisticsDescriptor in mediaDescriptor");
  	streamParm.statisticsDescriptor()() = *from.statisticsDescriptor;
	break; }
      default:
	yyerror("Merge_MediaParm(): internal error");
      }
    } else {
      StreamParm& streamParm = to.streams()().oneStream();
      streamParm.localControlDescriptor() = OMIT_VALUE;
      streamParm.localDescriptor() = OMIT_VALUE;
      streamParm.remoteDescriptor() = OMIT_VALUE;
      streamParm.statisticsDescriptor()() = *from.statisticsDescriptor;
    }
    break;
  case MediaParm::S_streamDescriptor:
    if (to.streams().ispresent()) {
      MediaDescriptorStreams& streams = to.streams();
      if (streams.get_selection() == MediaDescriptorStreams::ALT_oneStream)
	yyerror("streamParm and streamDescriptor cannot be both present in "
	  "mediaDescriptor");
      StreamDescriptorList& streamDescriptorList = streams.multiStream();
      streamDescriptorList[streamDescriptorList.size_of()] =
	*from.streamDescriptor;
    } else to.streams()().multiStream()[0] = *from.streamDescriptor;
    break;
  case MediaParm::S_terminationStateDescriptor:
    if (to.termStateDescr().ispresent())
      yyerror("Duplicate terminationStateDescriptor in mediaDescriptor");
    to.termStateDescr()() = *from.terminationStateDescriptor;
    break;
  default:
    yyerror("Merge_MediaParm(): internal error");
  }
}

static void Free_MediaParm(const MediaParm& parm)
{
  switch (parm.selector) {
  case MediaParm::S_localDescriptor:
    delete parm.localDescriptor;
    break;
  case MediaParm::S_remoteDescriptor:
    delete parm.remoteDescriptor;
    break;
  case MediaParm::S_localControlDescriptor:
    delete parm.localControlDescriptor;
    break;
  case MediaParm::S_statisticsDescriptor:
    delete parm.statisticsDescriptor;
    break;
  case MediaParm::S_streamDescriptor:
    delete parm.streamDescriptor;
    break;
  case MediaParm::S_terminationStateDescriptor:
    delete parm.terminationStateDescriptor;
    break;
  default:
    yyerror("Free_MediaParm(): internal error");
  }
}

static void Merge_TerminationStateParm(TerminationStateDescriptor& to,
  const TerminationStateParm& from)
{
  switch (from.selector) {
  case TerminationStateParm::S_propertyParm:
    if (to.propertyParms().ispresent()) {
      PropertyParmList& propertyParmList = to.propertyParms()();
      propertyParmList[propertyParmList.size_of()] = *from.propertyParm;
    } else to.propertyParms()()[0] = *from.propertyParm;
    break;
  case TerminationStateParm::S_serviceStates:
    if (to.serviceState().ispresent())
      yyerror("Duplicate serviceState in terminationStateDescriptor");
    to.serviceState()() = from.serviceStates;
    break;
  case TerminationStateParm::S_eventBufferControl:
    if (to.eventBufferControl().ispresent())
      yyerror("Duplicate eventBufferControl in terminationStateDescriptor");
    to.eventBufferControl()() = from.eventBufferControl;
    break;
  default:
    yyerror("Merge_TerminationStateParm(): internal error");
  }
}

static void Free_TerminationStateParm(const TerminationStateParm& parm)
{
  switch (parm.selector) {
  case TerminationStateParm::S_propertyParm:
    delete parm.propertyParm;
    break;
  case TerminationStateParm::S_serviceStates:
  case TerminationStateParm::S_eventBufferControl:
    break;
  default:
    yyerror("Free_TerminationStateParm(): internal error");
  }
}

static void Merge_EventParm(FirstEventParameters& to, const EventParm& from)
{
  switch (from.selector) {
  case EventParm::S_embedWithOrNoSig:
    if (to.embed().ispresent()) yyerror("Duplicate embedWithSig or embedNoSig "
      "in requestedEvent");
    if (from.embedWithOrNoSig->signal().ispresent() &&
        to.keepActive().ispresent()) yyerror("KeepActiveToken and "
	"embedWithSig cannot be both present in requestedEvent");
    to.embed()() = *from.embedWithOrNoSig;
    break;
  case EventParm::S_KeepActiveToken:
    if (to.keepActive().ispresent()) yyerror("Duplicate KeepActiveToken "
      "in requestedEvent");
    if (to.embed().ispresent() && to.embed()().signal().ispresent())
      yyerror("embedWithSig and KeepActiveToken cannot be both present in "
	"requestedEvent");
    to.keepActive()() = H248__token::present__;
    break;
  case EventParm::S_eventDM:
    if (to.eventDM().ispresent()) yyerror("Duplicate eventDM in "
      "requestedEvent");
    to.eventDM()() = *from.eventDM;
    break;
  case EventParm::S_eventStream:
    if (to.streamID().ispresent()) yyerror("Duplicate eventStream in "
      "requestedEvent");
    to.streamID()() = from.eventStream;
    break;
  case EventParm::S_eventOther:
    if (to.eventOther().ispresent()) {
      EventParameterList& eventParameterList = to.eventOther()();
      eventParameterList[eventParameterList.size_of()] = *from.eventOther;
    } else to.eventOther()()[0] = *from.eventOther;
    break;
  case EventParm::S_notifyBehaviour:
    if (to.notifyBehaviour().ispresent())
      yyerror("Duplicate notifyBehaviour in requestedEvent");
    to.notifyBehaviour()() = *from.notifyBehaviour;
    break;
  case EventParm::S_ResetEventsDescriptorToken:
    if (to.resetEventsDescriptor().ispresent())
      yyerror("Duplicate ResetEventsDescriptorToken in requestedEvent");
    to.resetEventsDescriptor()() = H248__token::present__;
    break;
  default:
    yyerror("Merge_EventParm(): internal error");
  }
}

static void Merge_EventParm(SecondEventParameters& to, const EventParm& from)
{
  switch (from.selector) {
  case EventParm::S_embedSig:
    if (to.embed().ispresent()) yyerror("Duplicate embedSig in "
      "secondRequestedEvent");
    if (to.keepActive().ispresent()) yyerror("KeepActiveToken and "
      "embedSig cannot be both present in secondRequestedEvent");
    to.embed()() = *from.embedSig;
    break;
  case EventParm::S_KeepActiveToken:
    if (to.keepActive().ispresent()) yyerror("Duplicate KeepActiveToken "
      "in secondRequestedEvent");
    if (to.embed().ispresent()) yyerror("embedSig and KeepActiveToken cannot "
      "be both present in secondRequestedEvent");
    to.keepActive()() = H248__token::present__;
    break;
  case EventParm::S_eventDM:
    if (to.eventDM().ispresent()) yyerror("Duplicate eventDM in "
      "secondRequestedEvent");
    to.eventDM()() = *from.eventDM;
    break;
  case EventParm::S_eventStream:
    if (to.streamID().ispresent()) yyerror("Duplicate eventStream in "
      "secondRequestedEvent");
    to.streamID()() = from.eventStream;
    break;
  case EventParm::S_eventOther:
    if (to.eventOther().ispresent()) {
      EventParameterList& eventParameterList = to.eventOther()();
      eventParameterList[eventParameterList.size_of()] = *from.eventOther;
    } else to.eventOther()()[0] = *from.eventOther;
    break;
  case EventParm::S_notifyBehaviour:
    if (to.notifyBehaviour().ispresent())
      yyerror("Duplicate notifyBehaviour in secondRequestedEvent");
    to.notifyBehaviour()() = *from.notifyBehaviour;
    break;
  case EventParm::S_ResetEventsDescriptorToken:
    if (to.resetEventsDescriptor().ispresent())
      yyerror("Duplicate ResetEventsDescriptorToken in secondRequestedEvent");
    to.resetEventsDescriptor()() = H248__token::present__;
    break;
  default:
    yyerror("Merge_EventParm(): internal error");
  }
}

static void Free_EventParm(const EventParm& parm)
{
  switch (parm.selector) {
  case EventParm::S_embedWithOrNoSig:
    delete parm.embedWithOrNoSig;
    break;
  case EventParm::S_embedSig:
    delete parm.embedSig;
    break;
  case EventParm::S_KeepActiveToken:
    break;
  case EventParm::S_eventDM:
    delete parm.eventDM;
    break;
  case EventParm::S_eventStream:
    break;
  case EventParm::S_eventOther:
    delete parm.eventOther;
    break;
  case EventParm::S_notifyBehaviour:
    delete parm.notifyBehaviour;
    break;
  case EventParm::S_ResetEventsDescriptorToken:
    break;
  default:
    yyerror("Free_EventParm(): internal error");
  }
}

static void Merge_IndAudMediaParm(IndAudMediaDescriptor& to,
  const IndAudMediaParm& from)
{
  switch (from.selector) {
  case IndAudMediaParm::S_indAudlocalControlDescriptor:
    if (to.streams().ispresent()) {
      Stream& stream = to.streams();
      switch (stream.get_selection()) {
      case Stream::ALT_multiStream:
	yyerror("indAudstreamDescriptor and indAudlocalControlDescriptor "
	  "cannot be both present in indAudmediaDescriptor");
	break;
      case Stream::ALT_oneStream: {
        IndAudStreamParms& indAudStreamParms = stream.oneStream();
        if (indAudStreamParms.localControlDescriptor().ispresent())
	  yyerror("Duplicate indAudlocalControlDescriptor in "
	    "indAudmediaDescriptor");
	indAudStreamParms.localControlDescriptor()() =
	  *from.indAudlocalControlDescriptor;
	break; }
      default:
        yyerror("Merge_IndAudMediaParm(): internal error");
      }
    } else {
      IndAudStreamParms& indAudStreamParms = to.streams()().oneStream();
      indAudStreamParms.localControlDescriptor()() =
	*from.indAudlocalControlDescriptor;
      indAudStreamParms.statisticsDescriptor() = OMIT_VALUE;
      indAudStreamParms.localDescriptor() = OMIT_VALUE;
      indAudStreamParms.remoteDescriptor() = OMIT_VALUE;
    }
    break;
  case IndAudMediaParm::S_indAudstatisticsDescriptor:
    if (to.streams().ispresent()) {
      Stream& stream = to.streams();
      switch (stream.get_selection()) {
      case Stream::ALT_multiStream:
	yyerror("indAudstreamDescriptor and indAudstatisticsDescriptor "
	  "cannot be both present in indAudmediaDescriptor");
	break;
      case Stream::ALT_oneStream: {
        IndAudStreamParms& indAudStreamParms = stream.oneStream();
        if (indAudStreamParms.statisticsDescriptor().ispresent())
	  yyerror("Duplicate indAudstatisticsDescriptor in "
	    "indAudmediaDescriptor");
	indAudStreamParms.statisticsDescriptor()() =
	  *from.indAudstatisticsDescriptor;
	break; }
      default:
	yyerror("Merge_IndAudMediaParm(): internal error");
      }
    } else {
      IndAudStreamParms& indAudStreamParms = to.streams()().oneStream();
      indAudStreamParms.localControlDescriptor() = OMIT_VALUE;
      indAudStreamParms.statisticsDescriptor()() =
	*from.indAudstatisticsDescriptor;
      indAudStreamParms.localDescriptor() = OMIT_VALUE;
      indAudStreamParms.remoteDescriptor() = OMIT_VALUE;
    }
    break;
  case IndAudMediaParm::S_indAudremoteDescriptor:
    if (to.streams().ispresent()) {
      Stream& stream = to.streams();
      switch (stream.get_selection()) {
      case Stream::ALT_multiStream:
	yyerror("indAudstreamDescriptor and indAudremoteDescriptor cannot be "
	  "both present in indAudmediaDescriptor");
	break;
      case Stream::ALT_oneStream: {
        IndAudStreamParms& indAudStreamParms = stream.oneStream();
        if (indAudStreamParms.remoteDescriptor().ispresent())
	  yyerror("Duplicate indAudremoteDescriptor in indAudmediaDescriptor");
	indAudStreamParms.remoteDescriptor()() = *from.indAudremoteDescriptor;
	break; }
      default:
	yyerror("Merge_IndAudMediaParm(): internal error");
      }
    } else {
      IndAudStreamParms& indAudStreamParms = to.streams()().oneStream();
      indAudStreamParms.localControlDescriptor() = OMIT_VALUE;
      indAudStreamParms.statisticsDescriptor() = OMIT_VALUE;
      indAudStreamParms.localDescriptor() = OMIT_VALUE;
      indAudStreamParms.remoteDescriptor()() = *from.indAudremoteDescriptor;
    }
    break;
  case IndAudMediaParm::S_indAudlocalDescriptor:
    if (to.streams().ispresent()) {
      Stream& stream = to.streams();
      switch (stream.get_selection()) {
      case Stream::ALT_multiStream:
	yyerror("indAudstreamDescriptor and indAudlocalDescriptor cannot be "
	  "both present in indAudmediaDescriptor");
	break;
      case Stream::ALT_oneStream: {
        IndAudStreamParms& indAudStreamParms = stream.oneStream();
        if (indAudStreamParms.localDescriptor().ispresent())
	  yyerror("Duplicate indAudlocalDescriptor in indAudmediaDescriptor");
	indAudStreamParms.localDescriptor()() = *from.indAudlocalDescriptor;
	break; }
      default:
	yyerror("Merge_IndAudMediaParm(): internal error");
      }
    } else {
      IndAudStreamParms& indAudStreamParms = to.streams()().oneStream();
      indAudStreamParms.localControlDescriptor() = OMIT_VALUE;
      indAudStreamParms.statisticsDescriptor() = OMIT_VALUE;
      indAudStreamParms.localDescriptor()() = *from.indAudlocalDescriptor;
      indAudStreamParms.remoteDescriptor() = OMIT_VALUE;
    }
    break;
  case IndAudMediaParm::S_indAudstreamDescriptor:
    if (to.streams().ispresent()) {
      Stream& stream = to.streams();
      if (stream.get_selection() == Stream::ALT_oneStream)
	yyerror("indAudstreamParm and indAudstreamDescriptor cannot be both "
	  "present in indAudmediaDescriptor");
      IndAudStreamDescriptorList& indAudStreamDescriptorList =
	stream.multiStream();
      indAudStreamDescriptorList[indAudStreamDescriptorList.size_of()] =
	*from.indAudstreamDescriptor;
    } else to.streams()().multiStream()[0] = *from.indAudstreamDescriptor;
    break;
  case IndAudMediaParm::S_indAudterminationStateDescriptor:
    if (to.termStateDescr().ispresent()) yyerror("Duplicate "
      "indAudterminationStateDescriptor in indAudmediaDescriptor");
    to.termStateDescr()() = *from.indAudterminationStateDescriptor;
    break;
  default:
    yyerror("Merge_IndAudMediaParm(): internal error");
  }
}

static void Free_IndAudMediaParm(const IndAudMediaParm& parm)
{
  switch (parm.selector) {
  case IndAudMediaParm::S_indAudlocalControlDescriptor:
    delete parm.indAudlocalControlDescriptor;
    break;
  case IndAudMediaParm::S_indAudstatisticsDescriptor:
    delete parm.indAudstatisticsDescriptor;
    break;
  case IndAudMediaParm::S_indAudremoteDescriptor:
    delete parm.indAudremoteDescriptor;
    break;
  case IndAudMediaParm::S_indAudlocalDescriptor:
    delete parm.indAudlocalDescriptor;
    break;
  case IndAudMediaParm::S_indAudstreamDescriptor:
    delete parm.indAudstreamDescriptor;
    break;
  case IndAudMediaParm::S_indAudterminationStateDescriptor:
    delete parm.indAudterminationStateDescriptor;
    break;
  default:
    yyerror("Free_IndAudMediaParm(): internal error");
  }
}

static void Merge_SignalParameter(SignalParams& to,
  const SignalParameter& from)
{
  switch (from.selector) {
  case SignalParameter::S_sigStream:
    if (to.streamID().ispresent())
      yyerror("Duplicate sigStream in signalRequest");
    to.streamID()() = from.sigStream;
    break;
  case SignalParameter::S_sigSignalType:
    if (to.sigType().ispresent())
      yyerror("Duplicate sigSignalType in signalRequest");
    to.sigType()() = from.sigSignalType;
    break;
  case SignalParameter::S_sigDuration:
    if (to.duration().ispresent())
      yyerror("Duplicate sigDuration in signalRequest");
    to.duration()() = from.sigDuration;
    break;
  case SignalParameter::S_sigOther:
    if (to.sigParList().ispresent()) {
      SigParameterList& sigParameterList = to.sigParList()();
      sigParameterList[sigParameterList.size_of()] = *from.sigOther;
    } else to.sigParList()()[0] = *from.sigOther;
    break;
  case SignalParameter::S_notifyCompletion: {
    if (!to.notifyCompletion().ispresent())
      to.notifyCompletion()() = NotifyCompletion(OMIT_VALUE, OMIT_VALUE,
	OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    NotifyCompletion& notifyCompletion = to.notifyCompletion()();
    if (from.notifyCompletion.TimeOut) {
      if (notifyCompletion.onTimeOut().ispresent())
	yyerror("Duplicate TimeOutToken in signalRequest");
      notifyCompletion.onTimeOut()() = H248__token::present__;
    }
    if (from.notifyCompletion.InterruptByEvent) {
      if (notifyCompletion.onInterruptByEvent().ispresent())
	yyerror("Duplicate InterruptByEventToken in signalRequest");
      notifyCompletion.onInterruptByEvent()() = H248__token::present__;
    }
    if (from.notifyCompletion.InterruptByNewSignalsDescr) {
      if (notifyCompletion.onInterruptByNewSignalDescr().ispresent())
	yyerror("Duplicate InterruptByNewSignalsDescrToken in signalRequest");
      notifyCompletion.onInterruptByNewSignalDescr()() = H248__token::present__;
    }
    if (from.notifyCompletion.OtherReason) {
      if (notifyCompletion.otherReason().ispresent())
	yyerror("Duplicate OtherReasonToken in signalRequest");
      notifyCompletion.otherReason()() = H248__token::present__;
    }
    if (from.notifyCompletion.Iteration) {
      if (notifyCompletion.onIteration().ispresent())
	yyerror("Duplicate IterationToken in signalRequest");
      notifyCompletion.onIteration()() = H248__token::present__;
    }
    break; }
  case SignalParameter::S_KeepActiveToken:
    if (to.keepActive().ispresent())
      yyerror("Duplicate KeepActiveToken in signalRequest");
    to.keepActive()() = H248__token::present__;
    break;
  case SignalParameter::S_sigDirection:
    if (to.sigDirection().ispresent())
      yyerror("Duplicate sigDirection in signalRequest");
    to.sigDirection()() = from.sigDirection;
    break;
  case SignalParameter::S_sigRequestID:
    if (to.sigRequestId().ispresent())
      yyerror("Duplicate sigRequestID in signalRequest");
    to.sigRequestId()() = from.sigRequestID;
    break;
  default:
    yyerror("Merge_SignalParameter(): internal error");
  }
}

static void Free_SignalParameter(const SignalParameter& parm)
{
  switch (parm.selector) {
  case SignalParameter::S_sigStream:
  case SignalParameter::S_sigSignalType:
  case SignalParameter::S_sigDuration:
    break;
  case SignalParameter::S_sigOther:
    delete parm.sigOther;
    break;
  case SignalParameter::S_notifyCompletion:
  case SignalParameter::S_KeepActiveToken:
  case SignalParameter::S_sigDirection:
    break;
  case SignalParameter::S_sigRequestID:
    Free(parm.sigRequestID);
    break;
  default:
    yyerror("Free_SignalParameter(): internal error");
  }
}

static void Merge_ServiceChangeParm(ServiceChangeResParm& to,
  const ServiceChangeParm &from)
{
  switch (from.selector) {
  case ServiceChangeParm::S_serviceChangeAddress:
    if (to.serviceChangeAddress().ispresent())
      yyerror("Duplicate serviceChangeAddress in serviceChangeReplyDescriptor");
    if (to.serviceChangeMgcId().ispresent())
      yyerror("serviceChangeMgcId and serviceChangeAddress cannot be both "
	"present in serviceChangeReplyDescriptor");
    to.serviceChangeAddress()() = *from.serviceChangeAddress;
    break;
  case ServiceChangeParm::S_serviceChangeProfile:
    if (to.serviceChangeProfile().ispresent())
      yyerror("Duplicate serviceChangeProfile in serviceChangeReplyDescriptor");
    to.serviceChangeProfile()() = *from.serviceChangeProfile;
    break;
  case ServiceChangeParm::S_TimeStamp:
    if (to.timestamp().ispresent())
      yyerror("Duplicate TimeStamp in serviceChangeReplyDescriptor");
    to.timestamp()() = *from.timeStamp;
    break;
  case ServiceChangeParm::S_serviceChangeMgcId:
    if (to.serviceChangeMgcId().ispresent())
      yyerror("Duplicate serviceChangeMgcId in serviceChangeReplyDescriptor");
    if (to.serviceChangeAddress().ispresent())
      yyerror("serviceChangeAddress and serviceChangeMgcId cannot be both "
	"present in serviceChangeReplyDescriptor");
    to.serviceChangeMgcId()() = *from.serviceChangeMgcId;
    break;
  case ServiceChangeParm::S_serviceChangeVersion:
    if (to.serviceChangeVersion().ispresent())
      yyerror("Duplicate serviceChangeVersion in serviceChangeReplyDescriptor");
    to.serviceChangeVersion()() = from.serviceChangeVersion;
    break;
  default:
    yyerror("Merge_ServiceChangeParm(): internal error");
  }
}

static void Merge_ServiceChangeParm(ServiceChangeDescriptor& to,
  const ServiceChangeParm &from)
{
  switch (from.selector) {
  case ServiceChangeParm::S_serviceChangeMethod:
    if (to.serviceChangeMethod().is_bound())
      yyerror("Duplicate serviceChangeMethod in serviceChangeDescriptor");
    to.serviceChangeMethod() = from.serviceChangeMethod;
    break;
  case ServiceChangeParm::S_serviceChangeReason:
    if (to.serviceChangeReason().is_bound())
      yyerror("Duplicate serviceChangeReason in serviceChangeDescriptor");
    to.serviceChangeReason() = *from.serviceChangeReason;
    break;
  case ServiceChangeParm::S_serviceChangeDelay:
    if (to.serviceChangeDelay().ispresent())
      yyerror("Duplicate serviceChangeDelay in serviceChangeDescriptor");
    to.serviceChangeDelay()() = from.serviceChangeDelay;
    break;
  case ServiceChangeParm::S_serviceChangeAddress:
    if (to.serviceChangeAddress().ispresent())
      yyerror("Duplicate serviceChangeAddress in serviceChangeDescriptor");
    if (to.serviceChangeMgcId().ispresent())
      yyerror("serviceChangeMgcId and serviceChangeAddress cannot be both "
	"present in serviceChangeDescriptor");
    to.serviceChangeAddress()() = *from.serviceChangeAddress;
    break;
  case ServiceChangeParm::S_serviceChangeProfile:
    if (to.serviceChangeProfile().ispresent())
      yyerror("Duplicate serviceChangeProfile in serviceChangeDescriptor");
    to.serviceChangeProfile()() = *from.serviceChangeProfile;
    break;
  case ServiceChangeParm::S_extension:
    if (to.nonStandardData().ispresent())
      yyerror("Duplicate extension in serviceChangeDescriptor");
    to.nonStandardData()() = *from.extension;
    break;
  case ServiceChangeParm::S_TimeStamp:
    if (to.timeStamp().ispresent())
      yyerror("Duplicate timeStamp in serviceChangeDescriptor");
    to.timeStamp()() = *from.timeStamp;
    break;
  case ServiceChangeParm::S_serviceChangeMgcId:
    if (to.serviceChangeMgcId().ispresent())
      yyerror("Duplicate serviceChangeMgcId in serviceChangeDescriptor");
    if (to.serviceChangeAddress().ispresent())
      yyerror("serviceChangeAddress and serviceChangeMgcId cannot be both "
	"present in serviceChangeDescriptor");
    to.serviceChangeMgcId()() = *from.serviceChangeMgcId;
    break;
  case ServiceChangeParm::S_serviceChangeVersion:
    if (to.serviceChangeVersion().ispresent())
      yyerror("Duplicate serviceChangeVersion in serviceChangeDescriptor");
    to.serviceChangeVersion()() = from.serviceChangeVersion;
    break;
  case ServiceChangeParm::S_ServiceChangeIncompleteToken:
    if (to.serviceChangeIncomplete().ispresent())
      yyerror("Duplicate ServiceChangeIncompleteToken in "
	"serviceChangeDescriptor");
    to.serviceChangeIncomplete()() = H248__token::present__;
    break;
  case ServiceChangeParm::S_auditItem:
    if (to.serviceChangeInfo().ispresent())
      yyerror("Not supported: multiple auditItem's in serviceChangeDescriptor");
    to.serviceChangeInfo()() = *from.auditItem;
    break;
  default:
    yyerror("Merge_ServiceChangeParm(): internal error");
  }
}

static void Free_ServiceChangeParm(const ServiceChangeParm& parm)
{
  switch (parm.selector) {
  case ServiceChangeParm::S_serviceChangeMethod:
    break;
  case ServiceChangeParm::S_serviceChangeReason:
    delete parm.serviceChangeReason;
    break;
  case ServiceChangeParm::S_serviceChangeDelay:
    Free(parm.serviceChangeDelay);
    break;
  case ServiceChangeParm::S_serviceChangeAddress:
    delete parm.serviceChangeAddress;
    break;
  case ServiceChangeParm::S_serviceChangeProfile:
    delete parm.serviceChangeProfile;
    break;
  case ServiceChangeParm::S_extension:
    delete parm.extension;
    break;
  case ServiceChangeParm::S_TimeStamp:
    delete parm.timeStamp;
    break;
  case ServiceChangeParm::S_serviceChangeMgcId:
    delete parm.serviceChangeMgcId;
    break;
  case ServiceChangeParm::S_serviceChangeVersion:
  case ServiceChangeParm::S_ServiceChangeIncompleteToken:
    break;
  case ServiceChangeParm::S_auditItem:
    delete parm.auditItem;
    break;
  default:
    yyerror("Free_ServiceChangeParm(): internal error");
  }
}
