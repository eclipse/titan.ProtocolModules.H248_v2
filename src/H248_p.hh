/******************************************************************************
* Copyright (c) 2005, 2015  Ericsson AB
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
//  Rev:                R6A
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002),
//                      ITU-T H.248.1 V2 Corrigendum 1 (03/2004)
//                      ITU-T H.248.1 V3 Draft (09/2004)
//                      updates from ITU-T H.248.1 V3 Draft (08/2005)
//                              except TermIDList

/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEP = 258,
     GREATERTHAN = 259,
     LESSTHAN = 260,
     NOTEQUAL = 261,
     LSBRKT = 262,
     RSBRKT = 263,
     EQUAL = 264,
     LBRKT = 265,
     RBRKT = 266,
     COMMA = 267,
     ON = 268,
     OFF = 269,
     OptionalCommand = 270,
     WildcardedResponse = 271,
     NUMBER = 272,
     HEXDIGITS = 273,
     NAME = 274,
     quotedString = 275,
     octetString = 276,
     domainname = 277,
     IPv4address = 278,
     IPv6address = 279,
     devicename = 280,
     terminationid = 281,
     extensionParameter = 282,
     pkgdname = 283,
     SafeCharValue = 284,
     TimeStamp = 285,
     TTimer = 286,
     STimer = 287,
     LTimer = 288,
     ZTimer = 289,
     digitString = 290,
     AddToken = 291,
     AndAUDITselectToken = 292,
     AuditToken = 293,
     AuditCapToken = 294,
     AuditValueToken = 295,
     AuthToken = 296,
     BothToken = 297,
     BothwayToken = 298,
     BriefToken = 299,
     BufferToken = 300,
     CtxToken = 301,
     ContextAuditToken = 302,
     ContextAttrToken = 303,
     ContextListToken = 304,
     DigitMapToken = 305,
     DirectionToken = 306,
     DisconnectedToken = 307,
     DelayToken = 308,
     DurationToken = 309,
     EmbedToken = 310,
     EmergencyToken = 311,
     EmergencyOffToken = 312,
     EmergencyValueToken = 313,
     ErrorToken = 314,
     EventBufferToken = 315,
     EventsToken = 316,
     ExternalToken = 317,
     FailoverToken = 318,
     ForcedToken = 319,
     GracefulToken = 320,
     H221Token = 321,
     H223Token = 322,
     H226Token = 323,
     HandOffToken = 324,
     IEPSToken = 325,
     ImmAckRequiredToken = 326,
     InactiveToken = 327,
     InternalToken = 328,
     InSvcToken = 329,
     InterruptByEventToken = 330,
     InterruptByNewSignalsDescrToken = 331,
     IterationToken = 332,
     IsolateToken = 333,
     KeepActiveToken = 334,
     LocalToken = 335,
     LocalControlToken = 336,
     LockStepToken = 337,
     LoopbackToken = 338,
     MediaToken = 339,
     MegacopToken = 340,
     MessageSegmentToken = 341,
     MethodToken = 342,
     MgcIdToken = 343,
     ModeToken = 344,
     ModifyToken = 345,
     ModemToken = 346,
     MoveToken = 347,
     MTPToken = 348,
     MuxToken = 349,
     NeverNotifyToken = 350,
     NotifyToken = 351,
     NotifyCompletionToken = 352,
     NotifyImmediateToken = 353,
     NotifyRegulatedToken = 354,
     Nx64kToken = 355,
     ObservedEventsToken = 356,
     OnewayToken = 357,
     OnewayBothToken = 358,
     OnewayExternalToken = 359,
     OnOffToken = 360,
     OrAUDITselectToken = 361,
     OtherReasonToken = 362,
     OutOfSvcToken = 363,
     PackagesToken = 364,
     PendingToken = 365,
     PriorityToken = 366,
     ProfileToken = 367,
     ReasonToken = 368,
     RecvonlyToken = 369,
     ReplyToken = 370,
     ResetEventsDescriptorToken = 371,
     RestartToken = 372,
     RemoteToken = 373,
     RequestIDToken = 374,
     ReservedGroupToken = 375,
     ReservedValueToken = 376,
     SegmentationCompleteToken = 377,
     SendonlyToken = 378,
     SendrecvToken = 379,
     ServicesToken = 380,
     ServiceStatesToken = 381,
     ServiceChangeIncompleteToken = 382,
     ServiceChangeToken = 383,
     ServiceChangeAddressToken = 384,
     SignalListToken = 385,
     SignalsToken = 386,
     SignalTypeToken = 387,
     StatsToken = 388,
     StreamToken = 389,
     SubtractToken = 390,
     SynchISDNToken = 391,
     TerminationStateToken = 392,
     TestToken = 393,
     TimeOutToken = 394,
     TopologyToken = 395,
     TransToken = 396,
     ResponseAckToken = 397,
     V18Token = 398,
     V22Token = 399,
     V22bisToken = 400,
     V32Token = 401,
     V32bisToken = 402,
     V34Token = 403,
     V76Token = 404,
     V90Token = 405,
     V91Token = 406,
     VersionToken = 407,
     COMMAStreamToken = 408
   };
#endif
/* Tokens.  */
#define SEP 258
#define GREATERTHAN 259
#define LESSTHAN 260
#define NOTEQUAL 261
#define LSBRKT 262
#define RSBRKT 263
#define EQUAL 264
#define LBRKT 265
#define RBRKT 266
#define COMMA 267
#define ON 268
#define OFF 269
#define OptionalCommand 270
#define WildcardedResponse 271
#define NUMBER 272
#define HEXDIGITS 273
#define NAME 274
#define quotedString 275
#define octetString 276
#define domainname 277
#define IPv4address 278
#define IPv6address 279
#define devicename 280
#define terminationid 281
#define extensionParameter 282
#define pkgdname 283
#define SafeCharValue 284
#define TimeStamp 285
#define TTimer 286
#define STimer 287
#define LTimer 288
#define ZTimer 289
#define digitString 290
#define AddToken 291
#define AndAUDITselectToken 292
#define AuditToken 293
#define AuditCapToken 294
#define AuditValueToken 295
#define AuthToken 296
#define BothToken 297
#define BothwayToken 298
#define BriefToken 299
#define BufferToken 300
#define CtxToken 301
#define ContextAuditToken 302
#define ContextAttrToken 303
#define ContextListToken 304
#define DigitMapToken 305
#define DirectionToken 306
#define DisconnectedToken 307
#define DelayToken 308
#define DurationToken 309
#define EmbedToken 310
#define EmergencyToken 311
#define EmergencyOffToken 312
#define EmergencyValueToken 313
#define ErrorToken 314
#define EventBufferToken 315
#define EventsToken 316
#define ExternalToken 317
#define FailoverToken 318
#define ForcedToken 319
#define GracefulToken 320
#define H221Token 321
#define H223Token 322
#define H226Token 323
#define HandOffToken 324
#define IEPSToken 325
#define ImmAckRequiredToken 326
#define InactiveToken 327
#define InternalToken 328
#define InSvcToken 329
#define InterruptByEventToken 330
#define InterruptByNewSignalsDescrToken 331
#define IterationToken 332
#define IsolateToken 333
#define KeepActiveToken 334
#define LocalToken 335
#define LocalControlToken 336
#define LockStepToken 337
#define LoopbackToken 338
#define MediaToken 339
#define MegacopToken 340
#define MessageSegmentToken 341
#define MethodToken 342
#define MgcIdToken 343
#define ModeToken 344
#define ModifyToken 345
#define ModemToken 346
#define MoveToken 347
#define MTPToken 348
#define MuxToken 349
#define NeverNotifyToken 350
#define NotifyToken 351
#define NotifyCompletionToken 352
#define NotifyImmediateToken 353
#define NotifyRegulatedToken 354
#define Nx64kToken 355
#define ObservedEventsToken 356
#define OnewayToken 357
#define OnewayBothToken 358
#define OnewayExternalToken 359
#define OnOffToken 360
#define OrAUDITselectToken 361
#define OtherReasonToken 362
#define OutOfSvcToken 363
#define PackagesToken 364
#define PendingToken 365
#define PriorityToken 366
#define ProfileToken 367
#define ReasonToken 368
#define RecvonlyToken 369
#define ReplyToken 370
#define ResetEventsDescriptorToken 371
#define RestartToken 372
#define RemoteToken 373
#define RequestIDToken 374
#define ReservedGroupToken 375
#define ReservedValueToken 376
#define SegmentationCompleteToken 377
#define SendonlyToken 378
#define SendrecvToken 379
#define ServicesToken 380
#define ServiceStatesToken 381
#define ServiceChangeIncompleteToken 382
#define ServiceChangeToken 383
#define ServiceChangeAddressToken 384
#define SignalListToken 385
#define SignalsToken 386
#define SignalTypeToken 387
#define StatsToken 388
#define StreamToken 389
#define SubtractToken 390
#define SynchISDNToken 391
#define TerminationStateToken 392
#define TestToken 393
#define TimeOutToken 394
#define TopologyToken 395
#define TransToken 396
#define ResponseAckToken 397
#define V18Token 398
#define V22Token 399
#define V22bisToken 400
#define V32Token 401
#define V32bisToken 402
#define V34Token 403
#define V76Token 404
#define V90Token 405
#define V91Token 406
#define VersionToken 407
#define COMMAStreamToken 408




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 103 "H248_p.y"
{
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
/* Line 1489 of yacc.c.  */
#line 512 "H248_p.hh"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE H248_yylval;

