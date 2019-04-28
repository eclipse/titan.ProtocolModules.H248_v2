/******************************************************************************
* Copyright (c) 2000-2019 Ericsson Telecom AB
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
//  File:               H248_p_types.hh
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002),
//                      ITU-T H.248.1 V2 Corrigendum 1 (03/2004)
//                      ITU-T H.248.1 V3 Draft (09/2004)
//                      updates from ITU-T H.248.1 V3 Draft (08/2005)
//                              except TermIDList

#ifndef H248_p_types_HH
#define H248_p_types_HH

#include "H248_Types.hh"

struct ContextProperty {
  enum { S_topologyDescriptor, S_priority, S_emergency, S_iepsValue,
    S_contextAttrDescriptor } selector;
  union {
    H248__Types::TopologyRequestList *topologyDescriptor;
    int priority;
    H248__Types::Emergency::enum_type emergency;
    boolean iepsValue;
    H248__Types::ContextAttrDescriptor *contextAttrDescriptor;
  };
};

struct ContextAuditProperties {
  enum { S_TopologyToken, S_EmergencyToken, S_PriorityToken, S_IEPSToken,
    S_pkgdName, S_priority, S_emergencyValue, S_iepsValue,
    S_contextAttrDescriptor, S_auditSelectLogic } selector;
  union {
    H248__Types::PkgdName *pkgdName;
    int priority;
    H248__Types::Emergency::enum_type emergencyValue;
    boolean iepsValue;
    H248__Types::ContextAttrDescriptor *contextAttrDescriptor;
    H248__Types::AuditSelectionLogic::enum_type auditSelectLogic;
  };
};

struct MediaParm {
  enum { S_localDescriptor, S_remoteDescriptor, S_localControlDescriptor,
    S_statisticsDescriptor, S_streamDescriptor, S_terminationStateDescriptor
  } selector;
  union {
    CHARSTRING *localDescriptor;
    CHARSTRING *remoteDescriptor;
    H248__Types::LocalControlDescriptor *localControlDescriptor;
    H248__Types::StatisticsDescriptor *statisticsDescriptor;
    H248__Types::StreamDescriptor *streamDescriptor;
    H248__Types::TerminationStateDescriptor *terminationStateDescriptor;
  };
};

struct TerminationStateParm {
  enum { S_propertyParm, S_serviceStates, S_eventBufferControl } selector;
  union {
    H248__Types::PropertyParm *propertyParm;
    H248__Types::ServiceState::enum_type serviceStates;
    H248__Types::EventBufferControl::enum_type eventBufferControl;
  };
};

struct EventParm {
  enum { S_embedWithOrNoSig, S_embedSig, S_KeepActiveToken, S_eventDM,
    S_eventStream, S_eventOther, S_notifyBehaviour, S_ResetEventsDescriptorToken
  } selector;
  union {
    H248__Types::EmbedSig *embedWithOrNoSig;
    H248__Types::SignalsDescriptor *embedSig;
    int eventStream;
    H248__Types::EventDM *eventDM;
    H248__Types::EventParameter *eventOther;
    H248__Types::NotifyBehaviour *notifyBehaviour;
  };
};

enum NotificationReason {
  NR_TimeOut, NR_InterruptByEvent, NR_InterruptByNewSignalsDescr,
  NR_OtherReason, NR_Iteration
};

struct NotificationReasonList {
  boolean TimeOut, InterruptByEvent, InterruptByNewSignalsDescr, OtherReason,
    Iteration;
};

struct SignalParameter {
  enum { S_sigStream, S_sigSignalType, S_sigDuration, S_sigOther,
    S_notifyCompletion, S_KeepActiveToken, S_sigDirection, S_sigRequestID
  } selector;
  union {
    int sigStream;
    H248__Types::SignalType::enum_type sigSignalType;
    int sigDuration;
    H248__Types::SigParameter *sigOther;
    NotificationReasonList notifyCompletion;
    H248__Types::SigDirection::enum_type sigDirection;
    char *sigRequestID;
  };
};

struct IndAudMediaParm {
  enum { S_indAudlocalControlDescriptor, S_indAudstatisticsDescriptor,
    S_indAudremoteDescriptor, S_indAudlocalDescriptor,
    S_indAudstreamDescriptor, S_indAudterminationStateDescriptor
  } selector;
  union {
    H248__Types::IndAudLocalControlDescriptor *indAudlocalControlDescriptor;
    H248__Types::IndAudStatisticsDescriptor *indAudstatisticsDescriptor;
    CHARSTRING *indAudremoteDescriptor;
    CHARSTRING *indAudlocalDescriptor;
    H248__Types::IndAudStreamDescriptor *indAudstreamDescriptor;
    H248__Types::IndAudTerminationStateDescriptor *indAudterminationStateDescriptor;
  };
};

struct ServiceChangeParm {
  enum { S_serviceChangeMethod, S_serviceChangeReason, S_serviceChangeDelay,
    S_serviceChangeAddress, S_serviceChangeProfile, S_extension, S_TimeStamp,
    S_serviceChangeMgcId, S_serviceChangeVersion,
    S_ServiceChangeIncompleteToken, S_auditItem } selector;
  union {
    H248__Types::ServiceChangeMethod::enum_type serviceChangeMethod;
    CHARSTRING *serviceChangeReason;
    char *serviceChangeDelay;
    H248__Types::ServiceChangeAddress *serviceChangeAddress;
    H248__Types::ServiceChangeProfile *serviceChangeProfile;
    H248__Types::Extension *extension;
    H248__Types::TimeNotation *timeStamp;
    H248__Types::MId *serviceChangeMgcId;
    int serviceChangeVersion;
    H248__Types::AuditItem *auditItem;
  };
};

#endif
