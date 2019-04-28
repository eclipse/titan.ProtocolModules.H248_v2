/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse H248_yyparse
#define yylex   H248_yylex
#define yyerror H248_yyerror
#define yylval  H248_yylval
#define yychar  H248_yychar
#define yydebug H248_yydebug
#define yynerrs H248_yynerrs


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




/* Copy the first part of user declarations.  */
#line 1 "H248_p.y"


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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 187 of yacc.c.  */
#line 655 "H248_p.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 668 "H248_p.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1050

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  244
/* YYNRULES -- Number of rules.  */
#define YYNRULES  584
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1044

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   408

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   158,     2,     2,     2,
     159,   160,   157,     2,     2,   156,     2,   155,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   154,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   161,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    17,    25,    27,    29,
      31,    39,    41,    43,    45,    48,    50,    52,    54,    56,
      58,    64,    69,    71,    75,    77,    81,    88,    90,    94,
     101,   103,   107,   113,   117,   119,   123,   125,   127,   131,
     133,   135,   137,   139,   141,   143,   148,   153,   155,   159,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   179,
     181,   183,   185,   190,   192,   196,   198,   201,   205,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   231,   240,
     249,   260,   271,   284,   286,   288,   294,   302,   304,   306,
     310,   314,   321,   323,   327,   333,   337,   339,   343,   345,
     347,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     371,   378,   382,   389,   393,   400,   402,   406,   408,   410,
     412,   414,   416,   418,   420,   422,   424,   428,   435,   439,
     446,   450,   457,   461,   468,   472,   479,   486,   493,   496,
     499,   501,   503,   506,   512,   514,   518,   524,   530,   532,
     534,   536,   538,   540,   542,   544,   546,   548,   550,   552,
     554,   556,   558,   560,   562,   564,   566,   568,   572,   577,
     579,   583,   590,   592,   596,   600,   607,   614,   618,   625,
     627,   629,   635,   642,   644,   646,   648,   652,   654,   658,
     660,   664,   666,   668,   670,   672,   674,   676,   678,   683,
     685,   689,   691,   695,   700,   702,   706,   708,   710,   712,
     714,   716,   718,   720,   727,   729,   733,   738,   740,   744,
     746,   748,   750,   752,   756,   760,   764,   768,   772,   774,
     776,   778,   780,   782,   785,   788,   793,   798,   805,   808,
     811,   814,   816,   820,   824,   829,   833,   838,   840,   845,
     847,   851,   853,   858,   860,   864,   866,   868,   872,   874,
     876,   881,   883,   887,   889,   891,   893,   897,   899,   901,
     903,   910,   912,   914,   916,   918,   920,   922,   924,   926,
     933,   935,   939,   941,   946,   948,   953,   958,   960,   962,
     964,   966,   970,   972,   974,   976,   978,   980,   982,   984,
     986,   991,   998,  1003,  1005,  1012,  1014,  1018,  1020,  1025,
    1027,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,  1050,
    1054,  1058,  1061,  1063,  1067,  1073,  1075,  1079,  1084,  1086,
    1090,  1092,  1094,  1096,  1101,  1103,  1107,  1114,  1116,  1118,
    1122,  1124,  1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,
    1142,  1146,  1149,  1151,  1155,  1157,  1159,  1161,  1165,  1169,
    1171,  1173,  1175,  1179,  1185,  1187,  1191,  1193,  1195,  1197,
    1199,  1201,  1208,  1210,  1214,  1216,  1221,  1223,  1227,  1229,
    1233,  1235,  1237,  1239,  1241,  1244,  1250,  1253,  1257,  1259,
    1263,  1265,  1269,  1271,  1273,  1275,  1277,  1279,  1281,  1283,
    1285,  1287,  1289,  1293,  1300,  1306,  1308,  1314,  1315,  1318,
    1319,  1322,  1323,  1326,  1327,  1330,  1332,  1336,  1338,  1342,
    1344,  1346,  1348,  1350,  1352,  1354,  1356,  1358,  1360,  1362,
    1364,  1366,  1368,  1373,  1375,  1379,  1381,  1383,  1385,  1387,
    1389,  1391,  1393,  1397,  1402,  1406,  1411,  1418,  1423,  1425,
    1429,  1431,  1435,  1439,  1443,  1447,  1449,  1451,  1453,  1455,
    1460,  1462,  1466,  1468,  1470,  1472,  1476,  1480,  1484,  1488,
    1490,  1495,  1497,  1502,  1504,  1506,  1511,  1518,  1520,  1524,
    1529,  1531,  1533,  1535,  1540,  1542,  1546,  1548,  1550,  1554,
    1561,  1563,  1567,  1572,  1577,  1582,  1584,  1588,  1590,  1592,
    1594,  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1615,
    1617,  1621,  1623,  1625,  1627,  1629,  1631,  1635,  1637,  1639,
    1641,  1643,  1645,  1647,  1649,  1653,  1657,  1661,  1665,  1669,
    1675,  1679,  1682,  1687,  1689,  1693,  1695,  1699,  1704,  1706,
    1710,  1712,  1716,  1722,  1727,  1729,  1733,  1739,  1746,  1748,
    1750,  1752,  1754,  1756,  1758,  1760,  1764,  1768,  1772,  1776,
    1780,  1785,  1790,  1796,  1798,  1802,  1804,  1806,  1808,  1810,
    1812,  1815,  1818,  1822,  1824,  1827,  1830,  1834,  1836,  1839,
    1842,  1846,  1848,  1851,  1854
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     163,     0,    -1,   168,    -1,     3,   168,    -1,   164,     3,
     168,    -1,     3,   164,     3,   168,    -1,    41,     9,   165,
     154,   166,   154,   167,    -1,    18,    -1,    18,    -1,    18,
      -1,    85,   155,   382,     3,   231,     3,   169,    -1,   228,
      -1,   170,    -1,   171,    -1,   170,   171,    -1,   176,    -1,
     191,    -1,   172,    -1,   173,    -1,   193,    -1,   110,     9,
     230,    10,    11,    -1,   142,    10,   174,    11,    -1,   175,
      -1,   174,    12,   175,    -1,   230,    -1,   230,   156,   230,
      -1,   141,     9,   230,    10,   177,    11,    -1,   178,    -1,
     177,    12,   178,    -1,    46,     9,   232,    10,   179,    11,
      -1,   180,    -1,   180,    12,   182,    -1,   180,    12,   182,
      12,   188,    -1,   180,    12,   188,    -1,   182,    -1,   182,
      12,   188,    -1,   188,    -1,   181,    -1,   180,    12,   181,
      -1,   387,    -1,   393,    -1,    56,    -1,    57,    -1,   394,
      -1,   396,    -1,    47,    10,   187,    11,    -1,    47,    10,
     183,    11,    -1,   184,    -1,   183,    12,   184,    -1,   140,
      -1,    56,    -1,   111,    -1,    70,    -1,    28,    -1,   185,
      -1,   393,    -1,   395,    -1,   394,    -1,   396,    -1,   186,
      -1,    37,    -1,   106,    -1,    48,    10,   183,    11,    -1,
     189,    -1,   188,    12,   189,    -1,   190,    -1,    15,   190,
      -1,    15,    16,   190,    -1,    16,   190,    -1,   200,    -1,
     201,    -1,   202,    -1,   209,    -1,   210,    -1,   211,    -1,
     222,    -1,   225,    -1,   115,     9,   230,    10,   192,    11,
      -1,   115,     9,   230,    10,    71,    12,   192,    11,    -1,
     115,     9,   230,   155,   194,    10,   192,    11,    -1,   115,
       9,   230,   155,   194,    10,    71,    12,   192,    11,    -1,
     115,     9,   230,   155,   194,   155,   122,    10,   192,    11,
      -1,   115,     9,   230,   155,   194,   155,   122,    10,    71,
      12,   192,    11,    -1,   228,    -1,   195,    -1,    86,     9,
     230,   155,   194,    -1,    86,     9,   230,   155,   194,   155,
     122,    -1,   399,    -1,   196,    -1,   195,    12,   196,    -1,
      46,     9,   232,    -1,    46,     9,   232,    10,   197,    11,
      -1,   180,    -1,   180,    12,   198,    -1,   180,    12,   198,
      12,   228,    -1,   180,    12,   228,    -1,   198,    -1,   198,
      12,   228,    -1,   228,    -1,   199,    -1,   198,    12,   199,
      -1,   226,    -1,   212,    -1,   213,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   224,    -1,    36,     9,   235,
      -1,    36,     9,   235,    10,   203,    11,    -1,    92,     9,
     235,    -1,    92,     9,   235,    10,   203,    11,    -1,    90,
       9,   235,    -1,    90,     9,   235,    10,   203,    11,    -1,
     204,    -1,   203,    12,   204,    -1,   237,    -1,   320,    -1,
     267,    -1,   270,    -1,   290,    -1,   325,    -1,   255,    -1,
     220,    -1,   384,    -1,    36,     9,   235,    -1,    36,     9,
     235,    10,   216,    11,    -1,    92,     9,   235,    -1,    92,
       9,   235,    10,   216,    11,    -1,    90,     9,   235,    -1,
      90,     9,   235,    10,   216,    11,    -1,   135,     9,   235,
      -1,   135,     9,   235,    10,   216,    11,    -1,   135,     9,
     235,    -1,   135,     9,   235,    10,   220,    11,    -1,    40,
       9,   235,    10,   220,    11,    -1,    39,     9,   235,    10,
     220,    11,    -1,    40,   214,    -1,    39,   214,    -1,   217,
      -1,   215,    -1,     9,   235,    -1,     9,   235,    10,   216,
      11,    -1,   218,    -1,   216,    12,   218,    -1,     9,    46,
      10,   236,    11,    -1,     9,    46,    10,   228,    11,    -1,
     237,    -1,   320,    -1,   267,    -1,   270,    -1,   290,    -1,
     325,    -1,   313,    -1,   255,    -1,   384,    -1,   380,    -1,
     228,    -1,   219,    -1,    94,    -1,    91,    -1,    84,    -1,
      50,    -1,   133,    -1,   101,    -1,   109,    -1,    38,    10,
      11,    -1,    38,    10,   221,    11,    -1,   334,    -1,   221,
      12,   334,    -1,    96,     9,   235,    10,   223,    11,    -1,
     313,    -1,   313,    12,   228,    -1,    96,     9,   235,    -1,
      96,     9,   235,    10,   228,    11,    -1,   128,     9,   235,
      10,   365,    11,    -1,   128,     9,   235,    -1,   128,     9,
     235,    10,   227,    11,    -1,   228,    -1,   368,    -1,    59,
       9,   229,    10,    11,    -1,    59,     9,   229,    10,    20,
      11,    -1,    17,    -1,   400,    -1,    23,    -1,    23,   154,
     233,    -1,    24,    -1,    24,   154,   233,    -1,    22,    -1,
      22,   154,   233,    -1,   234,    -1,    25,    -1,   400,    -1,
     157,    -1,   156,    -1,   158,    -1,   399,    -1,    93,    10,
      18,    11,    -1,    26,    -1,     7,   236,     8,    -1,    26,
      -1,   236,    12,    26,    -1,    84,    10,   238,    11,    -1,
     239,    -1,   238,    12,   239,    -1,   240,    -1,   241,    -1,
     262,    -1,   253,    -1,   254,    -1,   243,    -1,   384,    -1,
     134,     9,   269,    10,   242,    11,    -1,   240,    -1,   242,
      12,   240,    -1,    81,    10,   244,    11,    -1,   245,    -1,
     244,    12,   245,    -1,   248,    -1,   250,    -1,   246,    -1,
     247,    -1,   121,     9,    13,    -1,   121,     9,    14,    -1,
     120,     9,    13,    -1,   120,     9,    14,    -1,    89,     9,
     249,    -1,   123,    -1,   114,    -1,   124,    -1,    72,    -1,
      83,    -1,    28,   251,    -1,     9,   401,    -1,     9,     7,
     252,     8,    -1,     9,    10,   252,    11,    -1,     9,     7,
     401,   154,   401,     8,    -1,     4,   401,    -1,     5,   401,
      -1,     6,   401,    -1,   401,    -1,   252,    12,   401,    -1,
      80,    10,    11,    -1,    80,    10,    21,    11,    -1,   118,
      10,    11,    -1,   118,    10,    21,    11,    -1,    60,    -1,
      60,    10,   256,    11,    -1,   257,    -1,   256,    12,   257,
      -1,    28,    -1,    28,    10,   258,    11,    -1,   259,    -1,
     258,    12,   259,    -1,   285,    -1,   287,    -1,    45,     9,
     261,    -1,    14,    -1,    82,    -1,   137,    10,   263,    11,
      -1,   264,    -1,   263,    12,   264,    -1,   250,    -1,   265,
      -1,   260,    -1,   126,     9,   266,    -1,   138,    -1,   108,
      -1,    74,    -1,    94,     9,   268,    10,   236,    11,    -1,
      66,    -1,    67,    -1,    68,    -1,   149,    -1,    27,    -1,
     100,    -1,   399,    -1,    61,    -1,    61,     9,   319,    10,
     271,    11,    -1,   272,    -1,   271,    12,   272,    -1,    28,
      -1,    28,    10,   275,    11,    -1,    99,    -1,    99,    10,
     277,    11,    -1,    99,    10,   278,    11,    -1,    98,    -1,
     273,    -1,    95,    -1,   276,    -1,   275,    12,   276,    -1,
     277,    -1,   278,    -1,    79,    -1,   289,    -1,   285,    -1,
     287,    -1,   274,    -1,   116,    -1,    55,    10,   290,    11,
      -1,    55,    10,   290,    12,   279,    11,    -1,    55,    10,
     279,    11,    -1,    61,    -1,    61,     9,   319,    10,   280,
      11,    -1,   281,    -1,   280,    12,   281,    -1,    28,    -1,
      28,    10,   282,    11,    -1,   283,    -1,   282,    12,   283,
      -1,   284,    -1,    79,    -1,   289,    -1,   285,    -1,   287,
      -1,   274,    -1,   116,    -1,    55,    10,   290,    11,    -1,
     134,     9,   269,    -1,   153,     9,   269,    -1,   288,   251,
      -1,    19,    -1,    50,     9,   326,    -1,    50,     9,    10,
     327,    11,    -1,   131,    -1,   131,    10,    11,    -1,   131,
      10,   291,    11,    -1,   292,    -1,   291,    12,   292,    -1,
     295,    -1,   293,    -1,   299,    -1,   299,    10,   294,    11,
      -1,   300,    -1,   294,    12,   300,    -1,   130,     9,   296,
      10,   297,    11,    -1,   399,    -1,   298,    -1,   297,    12,
     298,    -1,   293,    -1,    28,    -1,   301,    -1,   304,    -1,
     306,    -1,   302,    -1,   310,    -1,    79,    -1,   307,    -1,
     309,    -1,   134,     9,   269,    -1,   303,   251,    -1,    19,
      -1,   132,     9,   305,    -1,   105,    -1,   139,    -1,    44,
      -1,    54,     9,   399,    -1,    51,     9,   308,    -1,    62,
      -1,    73,    -1,    42,    -1,   119,     9,   319,    -1,    97,
       9,    10,   311,    11,    -1,   312,    -1,   311,    12,   312,
      -1,   139,    -1,    75,    -1,    76,    -1,   107,    -1,    77,
      -1,   101,     9,   319,    10,   314,    11,    -1,   315,    -1,
     314,    12,   315,    -1,   316,    -1,   316,    10,   317,    11,
      -1,    28,    -1,    30,   402,    28,    -1,   318,    -1,   317,
      12,   318,    -1,   285,    -1,   287,    -1,   400,    -1,   157,
      -1,    91,   321,    -1,    91,   321,    10,   322,    11,    -1,
       9,   324,    -1,     7,   323,     8,    -1,   250,    -1,   322,
      12,   250,    -1,   324,    -1,   323,    12,   324,    -1,   147,
      -1,   145,    -1,   143,    -1,   144,    -1,   146,    -1,   148,
      -1,   150,    -1,   151,    -1,   136,    -1,    27,    -1,    50,
       9,   326,    -1,    50,     9,   326,    10,   327,    11,    -1,
      50,     9,    10,   327,    11,    -1,    19,    -1,   328,   329,
     330,   331,   332,    -1,    -1,    31,    12,    -1,    -1,    32,
      12,    -1,    -1,    33,    12,    -1,    -1,    34,    12,    -1,
      35,    -1,   403,   333,   404,    -1,    35,    -1,   333,   405,
      35,    -1,   219,    -1,   131,    -1,    60,    -1,    61,    -1,
     335,    -1,   336,    -1,   337,    -1,   353,    -1,   355,    -1,
     362,    -1,   350,    -1,   363,    -1,   364,    -1,    84,    10,
     338,    11,    -1,   339,    -1,   338,    12,   339,    -1,   340,
      -1,   343,    -1,   347,    -1,   344,    -1,   363,    -1,   341,
      -1,   342,    -1,   118,    10,    11,    -1,   118,    10,    21,
      11,    -1,    80,    10,    11,    -1,    80,    10,    21,    11,
      -1,   134,     9,   269,    10,   340,    11,    -1,    81,    10,
     345,    11,    -1,   346,    -1,   345,    12,   346,    -1,    89,
      -1,    89,     9,   249,    -1,    89,     4,   249,    -1,    89,
       5,   249,    -1,    89,     6,   249,    -1,    28,    -1,   250,
      -1,   121,    -1,   120,    -1,   137,    10,   348,    11,    -1,
     349,    -1,   348,    12,   349,    -1,    28,    -1,   250,    -1,
     126,    -1,   126,     9,   266,    -1,   126,     4,   266,    -1,
     126,     5,   266,    -1,   126,     6,   266,    -1,    45,    -1,
      60,    10,   351,    11,    -1,    28,    -1,    28,    10,   352,
      11,    -1,   285,    -1,   288,    -1,    61,    10,   354,    11,
      -1,    61,     9,   319,    10,   354,    11,    -1,    28,    -1,
     131,    10,    11,    -1,   131,    10,   356,    11,    -1,   360,
      -1,   357,    -1,   299,    -1,   299,    10,   358,    11,    -1,
     359,    -1,   358,    12,   359,    -1,   301,    -1,   309,    -1,
     130,     9,   296,    -1,   130,     9,   296,    10,   361,    11,
      -1,   357,    -1,    50,     9,   326,    -1,   133,    10,    28,
      11,    -1,   109,    10,   383,    11,    -1,   125,    10,   366,
      11,    -1,   367,    -1,   366,    12,   367,    -1,   371,    -1,
     373,    -1,   374,    -1,   375,    -1,   377,    -1,   379,    -1,
      30,    -1,   376,    -1,   378,    -1,   127,    -1,   334,    -1,
     125,    10,   369,    11,    -1,   370,    -1,   369,    12,   370,
      -1,   375,    -1,   376,    -1,   377,    -1,   378,    -1,    30,
      -1,    87,     9,   372,    -1,    63,    -1,    64,    -1,    65,
      -1,   117,    -1,    52,    -1,    69,    -1,    27,    -1,   113,
       9,   401,    -1,    53,     9,   400,    -1,   129,     9,   231,
      -1,   129,     9,   233,    -1,    88,     9,   231,    -1,   112,
       9,    19,   155,   382,    -1,   152,     9,   382,    -1,    27,
     251,    -1,   109,    10,   381,    11,    -1,   383,    -1,   381,
      12,   383,    -1,    17,    -1,    19,   156,   399,    -1,   133,
      10,   385,    11,    -1,   386,    -1,   385,    12,   386,    -1,
      28,    -1,    28,     9,   401,    -1,    28,     9,     7,   252,
       8,    -1,   140,    10,   388,    11,    -1,   389,    -1,   388,
      12,   389,    -1,   390,    12,   391,    12,   392,    -1,   390,
      12,   391,    12,   392,   286,    -1,    26,    -1,    26,    -1,
      43,    -1,    78,    -1,   102,    -1,   104,    -1,   103,    -1,
     111,     9,   399,    -1,    70,     9,    13,    -1,    70,     9,
      14,    -1,    58,     9,    56,    -1,    58,     9,    57,    -1,
      48,    10,   397,    11,    -1,    48,    10,   322,    11,    -1,
      49,     9,    10,   398,    11,    -1,   232,    -1,   398,    12,
     232,    -1,    17,    -1,    17,    -1,    20,    -1,    29,    -1,
     154,    -1,   154,     3,    -1,     3,   154,    -1,     3,   154,
       3,    -1,   159,    -1,   159,     3,    -1,     3,   159,    -1,
       3,   159,     3,    -1,   160,    -1,   160,     3,    -1,     3,
     160,    -1,     3,   160,     3,    -1,   161,    -1,   161,     3,
      -1,     3,   161,    -1,     3,   161,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   824,   824,   829,   834,   840,   849,   859,   863,   867,
     871,   880,   886,   895,   901,   910,   916,   922,   928,   934,
     943,   951,   955,   961,   970,   975,   984,   993,   999,  1008,
    1017,  1022,  1028,  1035,  1041,  1046,  1052,  1060,  1067,  1076,
    1081,  1086,  1091,  1096,  1101,  1109,  1110,  1114,  1122,  1131,
    1135,  1139,  1143,  1147,  1152,  1156,  1161,  1166,  1171,  1176,
    1184,  1185,  1189,  1192,  1198,  1207,  1212,  1217,  1222,  1230,
    1236,  1242,  1248,  1254,  1260,  1266,  1272,  1281,  1287,  1294,
    1301,  1308,  1315,  1326,  1332,  1341,  1346,  1354,  1358,  1364,
    1373,  1378,  1387,  1392,  1398,  1405,  1411,  1416,  1422,  1430,
    1436,  1445,  1451,  1457,  1463,  1469,  1475,  1481,  1487,  1496,
    1501,  1510,  1515,  1524,  1529,  1538,  1544,  1553,  1559,  1565,
    1571,  1577,  1583,  1589,  1595,  1601,  1610,  1615,  1624,  1629,
    1638,  1643,  1652,  1657,  1666,  1671,  1680,  1689,  1698,  1702,
    1706,  1707,  1716,  1721,  1730,  1736,  1745,  1751,  1760,  1766,
    1772,  1778,  1784,  1790,  1796,  1802,  1808,  1814,  1820,  1826,
    1834,  1835,  1836,  1837,  1838,  1839,  1840,  1844,  1848,  1852,
    1858,  1867,  1876,  1881,  1890,  1895,  1904,  1913,  1918,  1927,
    1933,  1942,  1946,  1954,  1964,  1968,  1976,  1984,  1992,  2000,
    2008,  2016,  2022,  2031,  2032,  2033,  2034,  2038,  2042,  2046,
    2047,  2055,  2061,  2070,  2074,  2080,  2089,  2090,  2095,  2103,
    2108,  2113,  2118,  2126,  2134,  2140,  2149,  2153,  2159,  2168,
    2173,  2179,  2184,  2192,  2193,  2197,  2198,  2202,  2206,  2207,
    2208,  2209,  2210,  2214,  2223,  2229,  2235,  2241,  2250,  2256,
    2262,  2271,  2277,  2286,  2287,  2291,  2292,  2296,  2300,  2308,
    2314,  2323,  2328,  2337,  2343,  2352,  2357,  2366,  2370,  2371,
    2375,  2379,  2385,  2394,  2399,  2404,  2412,  2416,  2417,  2418,
    2422,  2430,  2431,  2432,  2433,  2434,  2439,  2443,  2447,  2451,
    2463,  2469,  2478,  2483,  2492,  2496,  2501,  2509,  2514,  2520,
    2528,  2535,  2544,  2549,  2554,  2558,  2563,  2568,  2573,  2578,
    2585,  2590,  2599,  2607,  2611,  2623,  2629,  2638,  2643,  2652,
    2659,  2668,  2673,  2677,  2682,  2687,  2692,  2697,  2704,  2708,
    2712,  2716,  2725,  2729,  2735,  2744,  2748,  2752,  2760,  2766,
    2775,  2781,  2790,  2795,  2804,  2811,  2820,  2828,  2832,  2838,
    2847,  2851,  2855,  2860,  2865,  2870,  2875,  2880,  2884,  2889,
    2897,  2901,  2910,  2914,  2918,  2919,  2920,  2924,  2928,  2932,
    2933,  2934,  2938,  2948,  2952,  2960,  2994,  2995,  2996,  2997,
    2998,  3002,  3011,  3017,  3026,  3031,  3040,  3045,  3054,  3060,
    3069,  3074,  3083,  3084,  3088,  3093,  3102,  3107,  3116,  3122,
    3131,  3136,  3144,  3145,  3146,  3147,  3148,  3149,  3150,  3151,
    3152,  3153,  3161,  3166,  3172,  3180,  3184,  3201,  3202,  3206,
    3207,  3211,  3212,  3216,  3217,  3221,  3227,  3236,  3242,  3251,
    3256,  3261,  3266,  3271,  3275,  3279,  3285,  3291,  3297,  3303,
    3309,  3315,  3324,  3328,  3334,  3343,  3344,  3349,  3357,  3362,
    3367,  3372,  3380,  3381,  3385,  3386,  3390,  3411,  3415,  3421,
    3430,  3435,  3440,  3445,  3450,  3455,  3461,  3467,  3472,  3480,
    3484,  3490,  3499,  3505,  3511,  3516,  3521,  3526,  3531,  3536,
    3544,  3548,  3553,  3562,  3567,  3576,  3581,  3590,  3594,  3598,
    3606,  3612,  3621,  3626,  3635,  3641,  3650,  3655,  3664,  3668,
    3676,  3680,  3688,  3696,  3700,  3711,  3726,  3735,  3740,  3745,
    3750,  3755,  3760,  3765,  3770,  3775,  3780,  3784,  3792,  3796,
    3803,  3812,  3817,  3822,  3827,  3832,  3840,  3844,  3845,  3846,
    3847,  3848,  3849,  3850,  3858,  3862,  3866,  3890,  3898,  3902,
    3910,  3914,  3923,  3927,  3933,  3942,  3952,  3960,  3964,  3970,
    3979,  3984,  3992,  4001,  4005,  4011,  4020,  4026,  4035,  4039,
    4043,  4044,  4045,  4046,  4047,  4051,  4055,  4056,  4060,  4061,
    4065,  4071,  4080,  4084,  4090,  4099,  4110,  4119,  4120,  4124,
    4125,  4126,  4127,  4131,  4132,  4133,  4134,  4138,  4139,  4140,
    4141,  4145,  4146,  4147,  4148
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEP", "GREATERTHAN", "LESSTHAN",
  "NOTEQUAL", "LSBRKT", "RSBRKT", "EQUAL", "LBRKT", "RBRKT", "COMMA", "ON",
  "OFF", "\"O-\"", "\"W-\"", "NUMBER", "HEXDIGITS", "NAME", "quotedString",
  "octetString", "domainname", "IPv4address", "IPv6address", "devicename",
  "terminationid", "extensionParameter", "pkgdname", "SafeCharValue",
  "TimeStamp", "TTimer", "STimer", "LTimer", "ZTimer", "digitString",
  "AddToken", "AndAUDITselectToken", "AuditToken", "AuditCapToken",
  "AuditValueToken", "AuthToken", "BothToken", "BothwayToken",
  "BriefToken", "BufferToken", "CtxToken", "ContextAuditToken",
  "ContextAttrToken", "ContextListToken", "DigitMapToken",
  "DirectionToken", "DisconnectedToken", "DelayToken", "DurationToken",
  "EmbedToken", "EmergencyToken", "EmergencyOffToken",
  "EmergencyValueToken", "ErrorToken", "EventBufferToken", "EventsToken",
  "ExternalToken", "FailoverToken", "ForcedToken", "GracefulToken",
  "H221Token", "H223Token", "H226Token", "HandOffToken", "IEPSToken",
  "ImmAckRequiredToken", "InactiveToken", "InternalToken", "InSvcToken",
  "InterruptByEventToken", "InterruptByNewSignalsDescrToken",
  "IterationToken", "IsolateToken", "KeepActiveToken", "LocalToken",
  "LocalControlToken", "LockStepToken", "LoopbackToken", "MediaToken",
  "MegacopToken", "MessageSegmentToken", "MethodToken", "MgcIdToken",
  "ModeToken", "ModifyToken", "ModemToken", "MoveToken", "MTPToken",
  "MuxToken", "NeverNotifyToken", "NotifyToken", "NotifyCompletionToken",
  "NotifyImmediateToken", "NotifyRegulatedToken", "Nx64kToken",
  "ObservedEventsToken", "OnewayToken", "OnewayBothToken",
  "OnewayExternalToken", "OnOffToken", "OrAUDITselectToken",
  "OtherReasonToken", "OutOfSvcToken", "PackagesToken", "PendingToken",
  "PriorityToken", "ProfileToken", "ReasonToken", "RecvonlyToken",
  "ReplyToken", "ResetEventsDescriptorToken", "RestartToken",
  "RemoteToken", "RequestIDToken", "ReservedGroupToken",
  "ReservedValueToken", "SegmentationCompleteToken", "SendonlyToken",
  "SendrecvToken", "ServicesToken", "ServiceStatesToken",
  "ServiceChangeIncompleteToken", "ServiceChangeToken",
  "ServiceChangeAddressToken", "SignalListToken", "SignalsToken",
  "SignalTypeToken", "StatsToken", "StreamToken", "SubtractToken",
  "SynchISDNToken", "TerminationStateToken", "TestToken", "TimeOutToken",
  "TopologyToken", "TransToken", "ResponseAckToken", "V18Token",
  "V22Token", "V22bisToken", "V32Token", "V32bisToken", "V34Token",
  "V76Token", "V90Token", "V91Token", "VersionToken", "COMMAStreamToken",
  "':'", "'/'", "'-'", "'*'", "'$'", "'('", "')'", "'|'", "$accept",
  "megacoMessage", "authenticationHeader", "SecurityParmIndex",
  "SequenceNum", "AuthData", "message", "messageBody", "transactionList",
  "transaction", "transactionPending", "transactionResponseAck",
  "transactionAckList", "transactionAck", "transactionRequest",
  "actionRequestList", "actionRequest", "contextBody", "contextProperties",
  "contextProperty", "contextAudit", "contextAuditPropertiesList",
  "contextAuditProperties", "contextAuditSelector", "auditSelectLogic",
  "indAudcontextAttrDescriptor", "commandRequestList", "commandRequest",
  "command", "transactionReply", "transactionReplyOrError", "segmentReply",
  "segmentNumber", "actionReplyList", "actionReply", "contextReplyBody",
  "commandReplyList", "commandReplys", "addRequest", "moveRequest",
  "modifyRequest", "ammParameterList", "ammParameter", "addReply",
  "moveReply", "modifyReply", "subtractReply", "subtractRequest",
  "auditValueRequest", "auditCapRequest", "auditValueReply",
  "auditCapReply", "auditReply", "auditOther", "terminationAudit",
  "contextTerminationAudit", "auditReturnParameter", "auditReturnItem",
  "auditDescriptor", "auditItemList", "notifyRequest", "notifyBody",
  "notifyReply", "serviceChangeRequest", "serviceChangeReply",
  "serviceChangeResult", "errorDescriptor", "ErrorCode", "TransactionID",
  "mId", "ContextID", "portNumber", "mtpAddress", "termIDList",
  "terminationIDList", "mediaDescriptor", "mediaParmList", "mediaParm",
  "streamParm", "streamDescriptor", "streamParmList",
  "localControlDescriptor", "localParmList", "localParm",
  "reservedValueMode", "reservedGroupMode", "streamMode", "streamModes",
  "propertyParm", "parmValue", "valueList", "localDescriptor",
  "remoteDescriptor", "eventBufferDescriptor", "eventSpecList",
  "eventSpec", "eventSpecParameterList", "eventSpecParameter",
  "eventBufferControl", "eventBufferControlValue",
  "terminationStateDescriptor", "terminationStateParmList",
  "terminationStateParm", "serviceStates", "serviceStatesValue",
  "muxDescriptor", "MuxType", "StreamID", "eventsDescriptor",
  "requestedEventList", "requestedEvent", "notifyRegulated",
  "notifyBehaviour", "eventParameterList", "eventParameter",
  "embedWithSig", "embedNoSig", "embedFirst", "secondRequestedEventList",
  "secondRequestedEvent", "secondEventParameterList",
  "secondEventParameter", "embedSig", "eventStream", "COMMAeventStream",
  "eventOther", "eventParameterName", "eventDM", "signalsDescriptor",
  "signalParmList", "signalParm", "signalRequest", "sigParameterList",
  "signalList", "signalListId", "signalListParmList", "signalListParm",
  "signalName", "sigParameter", "sigStream", "sigOther",
  "sigParameterName", "sigSignalType", "signalType", "sigDuration",
  "sigDirection", "direction", "sigRequestID", "notifyCompletion",
  "notificationReasonList", "notificationReason",
  "observedEventsDescriptor", "observedEventList", "observedEvent",
  "timeAndEvent", "observedEventParameterList", "observedEventParameter",
  "RequestID", "modemDescriptor", "modems", "propertyParmList",
  "modemTypeList", "modemType", "digitMapDescriptor", "digitMapName",
  "digitMapValue", "optTTimer", "optSTimer", "optLTimer", "optZTimer",
  "digitMap", "digitStringList", "auditItem", "indAudterminationAudit",
  "indAudauditReturnParameter", "indAudmediaDescriptor",
  "indAudmediaParmList", "indAudmediaParm", "indAudstreamParm",
  "indAudremoteDescriptor", "indAudlocalDescriptor",
  "indAudstreamDescriptor", "indAudlocalControlDescriptor",
  "indAudlocalParmList", "indAudlocalParm",
  "indAudterminationStateDescriptor", "indAudterminationStateParmList",
  "indAudterminationStateParm", "indAudeventBufferDescriptor",
  "indAudeventSpec", "indAudeventSpecParameter", "indAudeventsDescriptor",
  "indAudrequestedEvent", "indAudsignalsDescriptor", "indAudsignalParm",
  "indAudsignalRequest", "indAudsignalRequestParmList",
  "indAudsignalRequestParm", "indAudsignalList", "indAudsignalListParm",
  "indAuddigitMapDescriptor", "indAudstatisticsDescriptor",
  "indAudpackagesDescriptor", "serviceChangeDescriptor",
  "serviceChangeParmList", "serviceChangeParm",
  "serviceChangeReplyDescriptor", "servChgReplyParmList",
  "servChgReplyParm", "serviceChangeMethod", "serviceChangeMethodValue",
  "serviceChangeReason", "serviceChangeDelay", "serviceChangeAddress",
  "serviceChangeMgcId", "serviceChangeProfile", "serviceChangeVersion",
  "extension", "packagesDescriptor", "packagesItemList", "Version",
  "packagesItem", "statisticsDescriptor", "statisticsParameterList",
  "statisticsParameter", "topologyDescriptor", "topologyTripleList",
  "topologyTriple", "terminationA", "terminationB", "topologyDirection",
  "priority", "iepsValue", "emergencyValue", "contextAttrDescriptor",
  "contextIdList", "contextIDList", "UINT16", "UINT32", "VALUE",
  "LWSP_COLON_LWSP", "LWSP_LPAREN_LWSP", "LWSP_RPAREN_LWSP",
  "LWSP_VBAR_LWSP", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,    58,    47,    45,    42,    36,    40,
      41,   124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   162,   163,   163,   163,   163,   164,   165,   166,   167,
     168,   169,   169,   170,   170,   171,   171,   171,   171,   171,
     172,   173,   174,   174,   175,   175,   176,   177,   177,   178,
     179,   179,   179,   179,   179,   179,   179,   180,   180,   181,
     181,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     186,   186,   187,   188,   188,   189,   189,   189,   189,   190,
     190,   190,   190,   190,   190,   190,   190,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   195,   195,
     196,   196,   197,   197,   197,   197,   197,   197,   197,   198,
     198,   199,   199,   199,   199,   199,   199,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   211,   212,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     219,   219,   219,   219,   219,   219,   219,   220,   220,   221,
     221,   222,   223,   223,   224,   224,   225,   226,   226,   227,
     227,   228,   228,   229,   230,   231,   231,   231,   231,   231,
     231,   231,   231,   232,   232,   232,   232,   233,   234,   235,
     235,   236,   236,   237,   238,   238,   239,   239,   239,   240,
     240,   240,   240,   241,   242,   242,   243,   244,   244,   245,
     245,   245,   245,   246,   246,   247,   247,   248,   249,   249,
     249,   249,   249,   250,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   258,   258,   259,   259,   260,   261,   261,
     262,   263,   263,   264,   264,   264,   265,   266,   266,   266,
     267,   268,   268,   268,   268,   268,   268,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   273,   274,   274,   274,
     275,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     277,   277,   278,   279,   279,   280,   280,   281,   281,   282,
     282,   283,   283,   283,   283,   283,   283,   283,   284,   285,
     286,   287,   288,   289,   289,   290,   290,   290,   291,   291,
     292,   292,   293,   293,   294,   294,   295,   296,   297,   297,
     298,   299,   300,   300,   300,   300,   300,   300,   300,   300,
     301,   302,   303,   304,   305,   305,   305,   306,   307,   308,
     308,   308,   309,   310,   311,   311,   312,   312,   312,   312,
     312,   313,   314,   314,   315,   315,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   322,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   325,   325,   325,   326,   327,   328,   328,   329,
     329,   330,   330,   331,   331,   332,   332,   333,   333,   334,
     334,   334,   334,   334,   335,   336,   336,   336,   336,   336,
     336,   336,   337,   338,   338,   339,   339,   339,   340,   340,
     340,   340,   341,   341,   342,   342,   343,   344,   345,   345,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   347,
     348,   348,   349,   349,   349,   349,   349,   349,   349,   349,
     350,   351,   351,   352,   352,   353,   353,   354,   355,   355,
     356,   356,   357,   357,   358,   358,   359,   359,   360,   360,
     361,   362,   363,   364,   365,   366,   366,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   368,   369,
     369,   370,   370,   370,   370,   370,   371,   372,   372,   372,
     372,   372,   372,   372,   373,   374,   375,   375,   376,   377,
     378,   379,   380,   381,   381,   382,   383,   384,   385,   385,
     386,   386,   386,   387,   388,   388,   389,   389,   390,   391,
     392,   392,   392,   392,   392,   393,   394,   394,   395,   395,
     396,   396,   397,   398,   398,   399,   400,   401,   401,   402,
     402,   402,   402,   403,   403,   403,   403,   404,   404,   404,
     404,   405,   405,   405,   405
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     4,     7,     1,     1,     1,
       7,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       5,     4,     1,     3,     1,     3,     6,     1,     3,     6,
       1,     3,     5,     3,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     4,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     8,     8,
      10,    10,    12,     1,     1,     5,     7,     1,     1,     3,
       3,     6,     1,     3,     5,     3,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       6,     3,     6,     3,     6,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     3,     6,
       3,     6,     3,     6,     3,     6,     6,     6,     2,     2,
       1,     1,     2,     5,     1,     3,     5,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     1,
       3,     6,     1,     3,     3,     6,     6,     3,     6,     1,
       1,     5,     6,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     6,     2,     2,
       2,     1,     3,     3,     4,     3,     4,     1,     4,     1,
       3,     1,     4,     1,     3,     1,     1,     3,     1,     1,
       4,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       1,     3,     1,     4,     1,     4,     4,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     6,     4,     1,     6,     1,     3,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     2,     1,     3,     5,     1,     3,     4,     1,     3,
       1,     1,     1,     4,     1,     3,     6,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     3,     1,     1,     1,     3,     3,     1,
       1,     1,     3,     5,     1,     3,     1,     1,     1,     1,
       1,     6,     1,     3,     1,     4,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     5,     2,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     6,     5,     1,     5,     0,     2,     0,
       2,     0,     2,     0,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     4,     6,     4,     1,     3,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     4,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     1,
       4,     1,     4,     1,     1,     4,     6,     1,     3,     4,
       1,     1,     1,     4,     1,     3,     1,     1,     3,     6,
       1,     3,     4,     4,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     5,
       3,     2,     4,     1,     3,     1,     3,     4,     1,     3,
       1,     3,     5,     4,     1,     3,     5,     6,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       4,     4,     5,     1,     3,     1,     1,     1,     1,     1,
       2,     2,     3,     1,     2,     2,     3,     1,     2,     2,
       3,     1,     2,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     0,     3,     0,
       0,     1,     0,     0,     7,     0,   535,     0,     4,     5,
       0,     0,     8,     0,   189,   185,   187,   192,     0,     0,
     191,     0,     0,     0,     0,     0,     0,     9,     6,   565,
     190,   197,   186,   188,     0,     0,     0,     0,     0,     0,
       0,    10,    12,    13,    17,    18,    15,    16,    19,    11,
     198,     0,     0,     0,     0,     0,     0,    14,   183,     0,
     566,     0,   184,     0,     0,     0,     0,    22,    24,     0,
       0,     0,     0,     0,     0,    21,     0,     0,   181,     0,
      85,    87,    20,     0,     0,     0,    84,    88,    83,     0,
       0,     0,    27,    23,    25,   182,     0,     0,     0,    77,
       0,     0,     0,     0,    26,     0,    86,   195,   194,   196,
      90,   193,     0,    89,     0,     0,     0,     0,    28,     0,
      78,     0,    79,     0,     0,     0,     0,     0,     0,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    92,
      37,     0,    96,    99,   104,   105,   106,   107,   102,   103,
     108,   101,    98,    39,    40,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    34,    36,    63,    65,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,   139,   141,   140,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,     0,    80,     0,    81,     0,    66,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,   199,   126,     0,   142,     0,     0,   388,
       0,     0,   556,   557,   130,   128,   174,   555,   177,   132,
     548,     0,   544,     0,    38,    93,    95,   100,    97,     0,
      67,   109,     0,     0,    53,    60,     0,    50,     0,    52,
      61,    51,    49,     0,    47,    54,    59,     0,    55,    57,
      56,    58,   113,   111,     0,     0,   134,    31,    33,    35,
      64,   201,     0,     0,     0,     0,     0,     0,     0,     0,
     233,     0,   561,     0,   560,     0,     0,     0,     0,     0,
     543,     0,     0,     0,    82,     0,     0,     0,     0,     0,
      46,     0,    45,     0,     0,     0,     0,     0,     0,   200,
       0,   163,   247,   278,   162,   161,   160,   165,   166,   325,
     164,     0,   144,   159,   158,   148,   155,   150,   151,   152,
     154,   149,   153,   157,   156,     0,     0,     0,   567,   568,
     238,   239,   240,     0,     0,   234,     0,   389,     0,     0,
       0,     0,     0,   179,   180,     0,   545,   549,     0,    94,
       0,     0,     0,     0,     0,     0,     0,   115,   124,   117,
     123,   119,   120,   121,   118,   122,   125,     0,     0,    53,
       0,   558,   559,    48,     0,     0,     0,     0,   172,     0,
       0,     0,    32,   202,     0,     0,     0,     0,     0,     0,
     384,     0,     0,     0,     0,     0,   127,     0,   147,   146,
     143,     0,   241,     0,   241,   563,     0,   131,   129,   175,
       0,   178,   133,     0,     0,   110,     0,   137,   136,    62,
     114,   112,   171,     0,     0,   176,   135,   407,   405,   402,
     251,     0,   249,   383,     0,   382,     0,     0,     0,     0,
       0,     0,   204,   206,   207,   211,   209,   210,   208,   212,
     401,   400,   394,   395,   393,   396,   392,   397,   398,   399,
       0,   390,   386,     0,   275,   271,   272,   273,   276,   274,
       0,     0,     0,     0,   533,   326,   341,     0,     0,   328,
     331,   330,   332,   540,     0,   538,   145,   235,     0,     0,
     236,   562,     0,   515,     0,     0,     0,     0,     0,   509,
     511,   512,   513,   514,   550,   551,   552,   554,   553,   546,
     167,   163,   421,   422,   162,   161,   160,   165,   166,   420,
     164,   419,     0,   169,   423,   424,   425,   429,   426,   427,
     428,   430,   431,   116,   173,     0,   503,     0,     0,     0,
     506,   507,     0,   495,   497,   498,   499,   500,   504,   501,
     505,   502,     0,     0,   409,   407,     0,   248,     0,     0,
       0,     0,     0,     0,     0,   203,     0,   387,     0,     0,
       0,     0,     0,   532,     0,     0,   327,     0,     0,     0,
     537,     0,   242,     0,   564,     0,     0,     0,     0,   508,
       0,     0,   547,     0,     0,     0,     0,     0,     0,     0,
       0,   168,     0,   531,     0,     0,     0,   494,     0,   408,
     404,     0,   411,     0,   322,     0,     0,   253,   255,   256,
       0,   250,   282,     0,   280,   243,     0,     0,     0,     0,
       0,   217,   221,   222,   219,   220,   245,     0,     0,   277,
       0,     0,   263,   265,     0,   261,   264,   205,   391,   385,
       0,   376,     0,     0,   372,   374,   536,   534,     0,   337,
     329,   352,     0,     0,   347,     0,     0,     0,     0,     0,
     334,   342,   345,     0,   343,   344,   348,   349,   346,     0,
     541,   539,   237,   528,     0,   526,   527,   530,   510,     0,
     491,   471,     0,     0,   477,     0,     0,     0,     0,     0,
       0,     0,     0,   433,   435,   440,   441,   436,   438,   437,
     439,     0,   478,     0,   482,     0,   481,   480,     0,   170,
     525,   523,   521,   517,   518,   519,   522,   520,   516,   524,
     496,   410,     0,   413,   403,     0,   252,     0,   321,     0,
     279,     0,   244,     0,     0,     0,   216,     0,   246,     0,
       0,     0,   260,     0,   270,     0,   569,     0,   371,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,     0,
     351,     0,     0,   320,     0,   470,     0,   475,     0,     0,
       0,     0,     0,   432,     0,   493,     0,     0,   479,   492,
     412,     0,     0,   319,   254,     0,     0,   294,   289,   287,
     284,   299,   288,   298,     0,   290,   292,   293,   296,   297,
     295,   281,   231,   232,   229,   228,   230,   227,   225,   226,
     223,   224,   218,   214,     0,   258,   259,   257,   269,   268,
     267,   266,   262,   571,   570,   377,   373,   380,   381,     0,
     378,   340,     0,   338,   361,   359,   360,   358,   357,     0,
     362,   356,   354,   355,   353,   350,   335,   542,   529,   473,
     474,     0,     0,   444,     0,   455,   450,   458,   457,   456,
       0,   448,   442,     0,     0,   462,   469,   464,   463,     0,
     460,   434,   488,   486,   487,     0,   484,   414,     0,   415,
     573,   406,     0,     0,     0,     0,   283,     0,   213,     0,
     572,   375,     0,   336,     0,   367,   368,   370,   369,   366,
       0,   364,   472,   476,   445,     0,     0,     0,     0,   447,
       0,   443,     0,     0,     0,     0,     0,   459,     0,     0,
     483,     0,   575,   574,   417,     0,   407,   323,   303,     0,
       0,     0,     0,   291,   215,   379,   339,   363,     0,   452,
     453,   454,   451,   449,     0,   466,   467,   468,   465,   461,
     490,     0,   485,   576,     0,   577,   581,   416,     0,     0,
       0,   302,   300,     0,   285,   286,   365,   446,   489,   579,
     583,   578,   582,   418,   324,     0,     0,   580,   584,     0,
     301,   307,     0,   305,     0,   304,     0,     0,   312,   317,
     316,     0,   309,   311,   314,   315,   313,   306,     0,   308,
       0,     0,   310,   318
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    15,    23,    38,     6,    51,    52,    53,
      54,    55,    76,    77,    56,   101,   102,   181,   149,   150,
     183,   273,   274,   275,   276,   277,   184,   185,   186,    57,
      95,    58,    90,    96,    97,   151,   152,   153,   187,   188,
     189,   386,   387,   154,   155,   156,   157,   190,   191,   192,
     158,   159,   197,   198,   341,   199,   342,   343,   388,   552,
     193,   407,   160,   194,   161,   372,    98,    69,    78,    29,
     120,    40,    30,   234,   292,   345,   471,   472,   473,   474,
     854,   475,   660,   661,   662,   663,   664,   847,   239,   300,
     431,   476,   477,   346,   461,   462,   646,   647,   673,   857,
     478,   674,   675,   676,   861,   347,   500,   668,   348,   653,
     654,   832,   833,   834,   835,   836,   837,   969,  1022,  1023,
    1031,  1032,  1033,   648,   622,   649,   650,   840,   349,   508,
     509,   510,   699,   511,   688,   872,   873,   512,   700,   701,
     702,   703,   704,   884,   705,   706,   877,   707,   708,   940,
     941,   350,   683,   684,   685,   869,   870,   464,   351,   420,
     240,   490,   491,   352,   459,   583,   584,   642,   763,   822,
     921,   965,   571,   554,   555,   556,   732,   733,   734,   735,
     736,   737,   738,   900,   901,   739,   909,   910,   557,   722,
     891,   558,   725,   559,   745,   746,   915,   916,   747,   991,
     560,   561,   562,   410,   572,   573,   374,   528,   529,   574,
     758,   575,   576,   530,   531,   532,   533,   581,   353,   503,
      17,   504,   354,   514,   515,   163,   251,   252,   253,   378,
     539,   164,   165,   280,   166,   241,   436,   669,    72,   434,
     787,   922,   997,   998
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -798
static const yytype_int16 yypact[] =
{
      55,    54,    99,    77,   177,   241,  -798,   260,  -798,   239,
     251,  -798,   209,   209,  -798,   167,  -798,   348,  -798,  -798,
     327,   231,  -798,   213,   262,   268,   281,  -798,   375,   396,
    -798,   457,   431,   431,   431,   472,   543,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,   442,   489,   497,   499,   501,   511,
     494,  -798,   -18,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,   506,   515,   515,   515,   515,   515,  -798,  -798,   526,
    -798,   385,  -798,   532,    30,   538,   269,  -798,   397,   140,
     431,   546,   289,   431,   544,  -798,   515,   515,  -798,   559,
     408,  -798,  -798,   569,   591,   594,   599,  -798,  -798,    34,
     613,   380,  -798,  -798,  -798,  -798,   502,    45,    59,  -798,
     580,   310,   510,    45,  -798,   544,  -798,  -798,  -798,  -798,
     618,  -798,   625,  -798,   622,   628,   636,   641,  -798,   495,
    -798,    59,  -798,   342,   222,   682,   684,   684,   677,  -798,
    -798,   693,   698,   709,   783,   784,   785,   786,   699,   714,
    -798,   787,   788,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,   790,   791,   793,
     304,   522,   796,   797,   798,   789,   799,   800,   801,   802,
     803,   804,   805,   806,   807,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,    78,   136,  -798,  -798,  -798,
    -798,   254,   134,    78,    78,    78,   431,    78,    78,   771,
     495,  -798,   505,  -798,    59,  -798,   522,  -798,  -798,    78,
      78,    78,   406,    78,    78,    78,    78,    78,  -798,   222,
     283,   283,   776,  -798,   810,   811,   812,   524,   814,  -798,
     477,   813,  -798,  -798,   815,   816,   817,  -798,   818,   819,
    -798,   572,  -798,   820,  -798,   821,  -798,  -798,  -798,   823,
    -798,   825,   826,   827,  -798,  -798,   828,  -798,   822,   693,
    -798,   784,  -798,   582,  -798,  -798,  -798,   829,  -798,  -798,
    -798,  -798,   831,   832,   833,   834,   835,   836,   807,   807,
    -798,  -798,   102,   516,    56,   516,   288,   288,   288,   420,
    -798,   837,  -798,   824,  -798,   516,   516,   754,    21,   516,
    -798,   771,   830,   505,  -798,   465,   778,   778,   410,   552,
    -798,   449,  -798,   465,   465,   695,   689,   778,   283,  -798,
     838,   840,   841,   844,   845,   198,   848,   849,   850,   851,
     852,   604,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,   839,   608,   655,  -798,  -798,
    -798,  -798,  -798,   288,   288,  -798,    45,  -798,   658,   665,
     843,   853,   854,  -798,  -798,   669,  -798,  -798,   847,  -798,
     856,   840,   845,   198,   848,   852,   671,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,   857,   858,   524,
     678,  -798,  -798,  -798,   685,   694,   849,   859,   855,   861,
     862,   863,   807,  -798,   315,   860,    47,   221,    20,    20,
     865,    32,    47,   864,    49,   866,  -798,   516,  -798,  -798,
    -798,   425,   676,   700,  -798,  -798,   702,  -798,  -798,  -798,
     148,  -798,  -798,   435,   286,  -798,   465,  -798,  -798,  -798,
    -798,  -798,  -798,   754,   277,  -798,  -798,   808,  -798,   867,
     868,   713,  -798,  -798,   869,  -798,   870,   871,   872,   875,
     876,   717,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
     462,  -798,  -798,   824,  -798,  -798,  -798,  -798,  -798,  -798,
     877,   879,   690,   719,  -798,  -798,  -798,   881,   721,  -798,
    -798,  -798,   882,   886,   723,  -798,  -798,  -798,   288,   288,
    -798,  -798,    45,  -798,   887,   888,   889,   890,   725,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,   732,
    -798,   891,   892,   563,   893,  -798,  -798,  -798,   894,   895,
     896,  -798,   727,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,   524,  -798,   898,   899,   900,
    -798,  -798,   729,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,   901,   880,   878,   808,    38,  -798,   860,   873,
     228,   130,   361,   431,   105,  -798,   221,  -798,    20,   731,
     776,   393,   431,  -798,   864,   431,  -798,    43,   390,   245,
    -798,   866,  -798,   903,  -798,   231,   897,   223,   251,  -798,
     148,   905,  -798,   902,   884,    47,   904,   561,   864,    50,
     906,  -798,   577,  -798,   515,   430,   288,  -798,   277,  -798,
    -798,   907,   885,   909,  -798,   908,   733,  -798,  -798,  -798,
     524,  -798,   912,   735,  -798,  -798,   913,   914,   916,   917,
     737,  -798,  -798,  -798,  -798,  -798,  -798,   918,   920,  -798,
     919,   922,  -798,  -798,   739,  -798,  -798,  -798,  -798,  -798,
     741,  -798,    29,   743,  -798,   923,  -798,  -798,   925,  -798,
    -798,  -798,   927,   928,  -798,   929,   930,   931,   932,   745,
    -798,  -798,  -798,   524,  -798,  -798,  -798,  -798,  -798,   288,
    -798,  -798,  -798,  -798,   772,  -798,  -798,  -798,  -798,   431,
    -798,   933,   934,   936,  -798,   937,   939,   940,   941,   896,
     935,   942,   747,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,   943,  -798,   938,   945,   946,  -798,  -798,   947,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,   944,   842,  -798,   431,  -798,    38,  -798,   347,
    -798,   873,  -798,   378,   750,   752,  -798,   130,  -798,    36,
      62,    17,  -798,   105,  -798,   718,   950,   948,  -798,   393,
      38,   949,    79,   431,   951,    47,    22,   431,  -798,   390,
    -798,   488,   251,  -798,    38,  -798,   904,  -798,   363,   146,
     382,   431,   108,  -798,   561,  -798,   431,     3,  -798,  -798,
    -798,   952,    28,  -798,  -798,   953,   955,  -798,  -798,  -798,
     956,  -798,  -798,  -798,   749,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,  -798,   756,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,  -798,   957,  -798,  -798,  -798,  -798,  -798,   758,
    -798,  -798,   760,  -798,  -798,  -798,  -798,  -798,  -798,   492,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,   958,   959,  -798,   960,   524,   639,  -798,  -798,  -798,
     762,  -798,  -798,   961,   963,   524,  -798,   650,  -798,   764,
    -798,  -798,   964,  -798,  -798,   766,  -798,  -798,   809,  -798,
     972,  -798,   924,   441,    11,   926,  -798,   347,  -798,    36,
    -798,  -798,    38,  -798,   949,  -798,  -798,  -798,  -798,  -798,
     768,  -798,  -798,  -798,  -798,   378,   378,   378,   378,  -798,
     146,  -798,   195,    17,    17,    17,    17,  -798,   108,   949,
    -798,     3,   975,  -798,  -798,    39,   808,  -798,   954,   968,
     770,   969,   971,  -798,  -798,  -798,  -798,  -798,   492,  -798,
    -798,  -798,  -798,  -798,   973,  -798,  -798,  -798,  -798,  -798,
    -798,   974,  -798,  -798,   623,   980,   983,  -798,   962,   976,
      47,  -798,  -798,   965,  -798,  -798,  -798,  -798,  -798,   985,
     986,  -798,  -798,  -798,  -798,   981,   979,  -798,  -798,   966,
    -798,   982,   775,  -798,   357,  -798,   966,   988,  -798,  -798,
    -798,   777,  -798,  -798,  -798,  -798,  -798,  -798,   874,  -798,
     357,   984,  -798,  -798
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -798,  -798,   992,  -798,  -798,  -798,   471,  -798,  -798,   915,
    -798,  -798,  -798,   910,  -798,  -798,   921,  -798,   781,   100,
     773,   624,   679,  -798,  -798,  -798,  -110,   779,   -59,  -798,
      -5,  -798,   967,  -798,   911,  -798,   794,  -164,  -798,  -798,
    -798,   467,   553,  -798,  -798,  -798,  -798,  -798,  -798,  -798,
    -798,  -798,   883,  -798,   119,  -798,   574,  -417,    25,  -798,
    -798,  -798,  -798,  -798,  -798,  -798,   -22,  -798,   517,  -150,
    -102,   -25,  -798,   496,  -269,  -270,  -798,   407,  -738,  -798,
    -798,  -798,  -798,   229,  -798,  -798,  -798,  -283,  -298,  -519,
    -346,  -798,  -798,  -250,  -798,   419,  -798,   242,  -798,  -798,
    -798,  -798,   225,  -798,  -281,  -240,  -798,  -652,  -236,  -798,
     240,  -798,  -797,  -798,    85,    88,    89,    12,  -798,   -10,
    -798,   -23,  -798,  -735,  -798,  -734,   214,  -729,  -311,  -798,
     412,  -748,  -798,  -798,   206,  -798,    90,  -606,   224,  -767,
    -798,  -798,  -798,  -798,  -798,  -798,  -798,  -766,  -798,  -798,
      51,   703,  -798,   236,  -798,  -798,    95,  -412,  -234,  -798,
     537,  -798,  -390,  -222,  -597,  -568,  -798,  -798,  -798,  -798,
    -798,  -798,  -416,  -798,  -798,  -798,  -798,   217,    80,  -798,
    -798,  -798,  -798,  -798,    83,  -798,  -798,    76,  -798,  -798,
    -798,  -798,   232,  -798,  -798,    81,  -798,    74,  -798,  -798,
    -798,  -603,  -798,  -798,  -798,   399,  -798,  -798,   421,  -798,
    -798,  -798,  -798,  -424,  -421,  -418,  -415,  -798,  -798,  -798,
    -580,  -534,  -308,  -798,   428,  -798,  -798,   734,  -798,  -798,
    -798,   -93,   -92,  -798,   -88,  -798,  -798,   -31,  -107,  -277,
    -798,  -798,  -798,  -798
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     121,    41,    41,    41,   393,   367,   121,   396,    42,    43,
     501,   127,   393,   393,    59,   396,   396,   643,   433,   360,
     361,   362,   365,   744,   740,   356,   720,   551,   553,   492,
     577,   918,   785,   578,   838,   839,   579,   551,   717,   580,
      82,   853,   994,   871,   111,   389,   633,   480,   257,    91,
     913,   914,    91,   389,   389,   867,   868,   644,     1,   494,
     505,   742,    70,   919,    70,   390,   881,   803,    46,   889,
     687,   506,   968,   390,   390,   391,   855,   506,   506,   392,
      45,   394,   291,   391,   391,   232,   432,   392,   392,   394,
     394,   858,    47,   395,   741,     2,     2,    48,   495,   496,
     497,   395,   395,   122,   233,    93,   125,   162,     9,   479,
     329,   217,   218,   823,   330,    45,   466,   467,    45,   288,
     289,   874,   696,    49,    50,   859,   167,   882,   169,   278,
     279,   768,   498,   237,   281,   393,   905,   698,   396,     3,
       3,   875,   339,   232,   856,   885,   371,   242,   243,   257,
     670,    88,   876,   906,   468,   860,   481,   260,   237,   904,
      89,   883,   233,   482,   483,   484,   485,   486,   487,   385,
     488,   489,   645,   507,   895,   247,   389,    11,   523,   507,
     743,   499,   235,   786,   800,    83,   871,   920,   256,   112,
     258,   974,   838,   839,   913,   914,   390,   867,   868,   995,
     996,   117,   118,   119,   463,   418,   391,   419,   678,   259,
     392,   740,   394,   723,   577,   551,   749,   578,   412,   657,
     579,   551,   888,   580,   395,   278,   279,  1030,   278,   279,
     281,   671,    10,   281,   907,   896,   524,   170,   171,   655,
      39,   612,   613,  1030,    12,    24,    25,    26,    27,   656,
     658,   659,   709,    24,    25,    26,    27,    14,   172,   121,
     525,   173,   174,    13,   435,   358,   897,   898,    16,   175,
     138,   344,   355,   344,   359,   726,   727,   526,   139,   140,
      85,    86,   237,   344,   344,   370,   373,   344,   479,  1034,
    1035,   379,   141,   665,     3,  1036,   672,   540,   170,   171,
     527,   466,   467,   238,   565,  1034,  1035,   566,   358,   465,
     254,  1036,   176,   728,   177,   465,    28,   359,   178,   172,
     216,    20,   173,   174,    28,   457,   967,   541,   729,   254,
     567,   680,   710,   145,   458,    93,   541,   542,   543,   468,
     172,   397,   398,   173,   174,    22,   542,   543,    45,   740,
     179,    21,   411,   744,   385,   469,    93,   180,   470,   759,
      94,   544,   148,   801,   568,   524,   644,    31,   545,    45,
     544,   546,   666,   176,   893,   177,   644,   545,   547,   178,
     546,   124,   667,   880,   894,    35,   548,   547,    93,   525,
     569,   114,   115,   902,   176,   548,   177,   825,   999,    36,
     178,    45,   826,   903,   570,   344,   526,   825,   549,   691,
     550,   179,  1027,   168,   357,   121,    32,   549,   180,   550,
     614,   681,    33,   682,   368,   369,   827,   363,   375,   527,
     364,   564,   179,   517,   264,    34,  1028,   518,   399,   180,
     358,   692,   828,   265,   693,   829,   830,   265,    39,   359,
     842,   966,   828,    60,   266,   829,   830,   751,   138,   238,
     458,   843,   267,   831,   268,   713,   267,   715,   268,   694,
     597,   479,     8,  1029,   598,    37,   269,   264,   534,   665,
     269,   645,   752,    18,    19,   672,   265,   695,   302,   303,
      44,   645,   844,   753,   754,   755,   887,   138,    61,   756,
     518,   845,   846,   380,    66,   267,    62,   268,    63,   696,
      64,   899,   270,   535,   908,   381,   270,   271,   465,   269,
      65,   271,   697,    68,   698,   332,   333,   750,   296,   297,
     298,   135,    70,   299,   136,   137,    79,   536,   537,   538,
      80,   135,    81,   138,   136,   137,   272,   757,    84,   382,
     272,   139,   140,    87,    45,   270,   383,    92,   172,   384,
     271,   173,   174,   106,    45,   141,   331,   935,   936,   937,
     105,   686,   625,   626,   689,    45,   332,   333,   107,    71,
      73,    74,    75,   310,   311,   142,    41,   143,  1015,   272,
     100,   144,   716,   320,   321,   142,   339,   143,   385,   938,
     334,   144,    45,   108,   104,   109,   145,   335,   401,   402,
     336,   110,   176,   970,   177,   426,   427,   337,   178,   429,
     330,   479,   113,   146,   116,   338,    93,   541,   129,    46,
     147,   939,   126,   146,   131,   148,   130,   542,   543,   132,
     147,   726,   727,   945,   946,   947,   133,   339,   948,   340,
     179,   134,   899,    47,   953,   954,   955,   180,    48,   956,
     908,   544,   979,   980,   981,   982,   430,   427,   545,   437,
     427,   546,   985,   986,   987,   988,   438,   427,   547,   728,
     442,   427,   445,   446,    49,    50,   548,   201,   465,   449,
     321,   195,   236,   196,   729,   730,   450,   446,   731,   244,
     245,   246,   202,   248,   249,   451,   446,   203,   549,   209,
     550,   520,   518,   521,   522,   261,   262,   263,   204,   282,
     283,   284,   285,   286,   587,   588,   210,  1041,   595,   596,
     603,   604,   606,   607,   610,   611,   619,   620,   631,   632,
     637,   638,   679,   303,   766,   767,   770,   771,   776,   777,
     782,   783,   784,   330,   788,   789,   798,   799,   813,   814,
     926,   927,   878,   848,   849,   850,   851,   928,   929,   931,
     932,   933,   934,   949,   950,   957,   958,   960,   961,   977,
     978,  1002,  1003,  1009,  1010,   689,  1025,  1026,  1039,  1040,
     404,   405,   205,   206,   207,   208,   406,   250,   211,   222,
     212,   213,   291,   214,   215,   219,   220,   221,   223,   224,
     225,   226,   227,    45,   409,   228,   380,   229,   230,   231,
     293,   294,   295,   301,   304,   305,   306,   307,   308,   309,
     519,   319,   312,   313,   314,   315,   316,   317,   318,   582,
     322,   323,   324,   325,   326,   327,   602,   366,   328,   414,
     428,   415,   237,   416,   439,   417,   377,   421,   422,   443,
     423,   424,   425,   440,   413,   441,   444,   453,   447,   448,
     452,   454,   863,   455,   456,   493,   821,   585,   586,   589,
     590,   591,   592,   502,   593,   621,   594,   600,   460,   601,
     605,   640,   608,   465,   513,   609,   615,   616,   617,   618,
     623,   652,   624,   627,   628,   629,   630,   634,   635,   636,
     641,   712,   721,   639,   719,   182,   714,   765,   762,   761,
     764,   458,   769,   773,   772,   774,   775,   802,   780,   778,
     779,   781,   724,   790,   748,   791,   792,   793,   794,   795,
     796,   797,   400,   804,   811,   805,   806,   816,   807,   808,
     809,   810,   812,   864,   815,   817,   820,   818,   819,   964,
     930,   879,   923,  1000,   917,   924,   925,    67,   962,   942,
     943,   944,   951,   952,   959,   963,   865,   506,   993,  1001,
    1004,   826,  1005,  1011,  1007,  1008,  1012,  1014,  1017,  1018,
    1020,  1019,  1024,     7,  1021,  1043,   103,  1013,  1038,   563,
     403,   516,   287,   677,   255,   339,   852,   651,   862,   824,
     290,   841,   973,   971,   972,  1016,  1037,  1042,   890,   690,
     200,   123,   912,   886,   976,   866,   968,   975,   408,  1006,
     599,   911,   984,   983,   989,   992,   128,   760,   892,   711,
     990,   718,     0,     0,     0,   376,     0,     0,     0,     0,
      99
};

static const yytype_int16 yycheck[] =
{
     107,    32,    33,    34,   315,   303,   113,   315,    33,    34,
     422,   113,   323,   324,    36,   323,   324,   585,   364,   296,
     297,   298,   299,   629,   627,   294,   623,   444,   444,   419,
     454,     3,     3,   454,   769,   769,   454,   454,   618,   454,
      10,   779,     3,   791,    10,   315,   565,    27,   212,    80,
     817,   817,    83,   323,   324,   790,   790,    19,     3,    27,
      11,    11,    17,    35,    17,   315,    44,   719,    86,   804,
     604,    28,    61,   323,   324,   315,    14,    28,    28,   315,
      59,   315,    26,   323,   324,     7,   363,   323,   324,   323,
     324,    74,   110,   315,   628,    41,    41,   115,    66,    67,
      68,   323,   324,   108,    26,    46,   111,   129,     9,   417,
       8,   170,   171,   765,    12,    59,    80,    81,    59,   229,
     230,    42,   119,   141,   142,   108,   131,   105,   133,   222,
     222,   650,   100,    28,   222,   446,    28,   134,   446,    85,
      85,    62,   131,     7,    82,   797,   125,    13,    14,   313,
      45,    11,    73,    45,   118,   138,   136,   216,    28,   811,
      20,   139,    26,   143,   144,   145,   146,   147,   148,   133,
     150,   151,   134,   130,    28,   206,   446,     0,    30,   130,
     130,   149,    46,   154,   703,   155,   934,   159,   210,   155,
     212,   929,   927,   927,   961,   961,   446,   932,   932,   160,
     161,   156,   157,   158,   157,     7,   446,     9,   598,   214,
     446,   814,   446,   625,   638,   632,   632,   638,   328,    89,
     638,   638,   802,   638,   446,   318,   318,  1024,   321,   321,
     318,   126,   155,   321,   126,    89,    88,    15,    16,    11,
      17,   518,   519,  1040,     3,    22,    23,    24,    25,    21,
     120,   121,     7,    22,    23,    24,    25,    18,    36,   366,
     112,    39,    40,     3,   366,    20,   120,   121,    17,    47,
      48,   293,   294,   295,    29,    80,    81,   129,    56,    57,
      11,    12,    28,   305,   306,   307,   308,   309,   596,  1024,
    1024,   313,    70,   591,    85,  1024,   594,    11,    15,    16,
     152,    80,    81,    49,    27,  1040,  1040,    30,    20,   416,
     210,  1040,    90,   118,    92,   422,    93,    29,    96,    36,
      16,   154,    39,    40,    93,    10,   923,    50,   133,   229,
      53,   600,   609,   111,    19,    46,    50,    60,    61,   118,
      36,   316,   317,    39,    40,    18,    60,    61,    59,   952,
     128,     3,   327,   959,   133,   134,    46,   135,   137,   636,
      71,    84,   140,   709,    87,    88,    19,   154,    91,    59,
      84,    94,    11,    90,    11,    92,    19,    91,   101,    96,
      94,    71,    21,   795,    21,    10,   109,   101,    46,   112,
     113,    11,    12,    11,    90,   109,    92,    50,   966,     3,
      96,    59,    55,    21,   127,   427,   129,    50,   131,    19,
     133,   128,    55,    71,   295,   522,   154,   131,   135,   133,
     522,    28,   154,    30,   305,   306,    79,     7,   309,   152,
      10,   453,   128,     8,    28,   154,    79,    12,    28,   135,
      20,    51,    95,    37,    54,    98,    99,    37,    17,    29,
      72,    10,    95,    11,    48,    98,    99,    27,    48,    49,
      19,    83,    56,   116,    58,   615,    56,   617,    58,    79,
       8,   779,     1,   116,    12,    18,    70,    28,    43,   777,
      70,   134,    52,    12,    13,   783,    37,    97,    11,    12,
      18,   134,   114,    63,    64,    65,     8,    48,     9,    69,
      12,   123,   124,    38,    10,    56,     9,    58,     9,   119,
       9,   809,   106,    78,   812,    50,   106,   111,   625,    70,
       9,   111,   132,    17,   134,    60,    61,   634,     4,     5,
       6,    36,    17,     9,    39,    40,    10,   102,   103,   104,
     155,    36,    10,    48,    39,    40,   140,   117,    10,    84,
     140,    56,    57,   156,    59,   106,    91,    11,    36,    94,
     111,    39,    40,   155,    59,    70,    50,    75,    76,    77,
      11,   602,     9,    10,   605,    59,    60,    61,     9,    62,
      63,    64,    65,    11,    12,    90,   617,    92,  1000,   140,
      46,    96,   617,    11,    12,    90,   131,    92,   133,   107,
      84,    96,    59,    12,    87,    11,   111,    91,    56,    57,
      94,    12,    90,   924,    92,    11,    12,   101,    96,    11,
      12,   929,     9,   128,   122,   109,    46,    50,    10,    86,
     135,   139,   122,   128,    12,   140,    11,    60,    61,    11,
     135,    80,    81,     4,     5,     6,    10,   131,     9,   133,
     128,    10,   950,   110,     4,     5,     6,   135,   115,     9,
     958,    84,   945,   946,   947,   948,    11,    12,    91,    11,
      12,    94,   953,   954,   955,   956,    11,    12,   101,   118,
      11,    12,    11,    12,   141,   142,   109,    10,   795,    11,
      12,     9,   196,     9,   133,   134,    11,    12,   137,   203,
     204,   205,     9,   207,   208,    11,    12,     9,   131,    10,
     133,    11,    12,    11,    12,   219,   220,   221,     9,   223,
     224,   225,   226,   227,    11,    12,    12,  1038,    11,    12,
      11,    12,    11,    12,    11,    12,    11,    12,    11,    12,
      11,    12,    11,    12,    11,    12,    11,    12,    11,    12,
      11,    12,    11,    12,    11,    12,    11,    12,    11,    12,
      11,    12,   793,    13,    14,    13,    14,    11,    12,    11,
      12,    11,    12,    11,    12,    11,    12,    11,    12,    11,
      12,    11,    12,   160,   161,   816,    11,    12,    11,    12,
     323,   324,     9,     9,     9,     9,   101,    26,    11,    10,
      12,    11,    26,    12,    11,     9,     9,     9,     9,     9,
       9,     9,     9,    59,   125,    11,    38,    12,    12,    12,
      10,    10,    10,     9,    11,    10,    10,    10,    10,    10,
     154,     9,    12,    12,    11,    10,    10,    10,    10,    31,
      11,    10,    10,    10,    10,    10,   156,    10,    12,     9,
      11,    10,    28,     9,    11,    10,    26,     9,     9,    12,
      10,    10,    10,    10,    26,    11,    10,    12,    11,    11,
      11,    10,   154,    11,    11,    10,    34,    10,    10,    10,
      10,    10,    10,    19,     9,   153,    10,    10,    28,    10,
       9,    11,    10,  1000,    28,     9,     9,     9,     9,     9,
       9,    28,    10,    10,    10,    10,    10,     9,     9,     9,
      32,     8,    28,    12,     9,   134,    19,     9,    33,    12,
      11,    19,    10,     9,    11,     9,     9,   155,     9,    11,
      10,     9,    28,    10,    28,    10,     9,     9,     9,     9,
       9,     9,   318,    10,     9,    11,    10,     9,    11,    10,
      10,    10,    10,     3,    11,    10,    12,    11,    11,    35,
       3,    10,     9,     9,    12,    10,    10,    52,   159,    11,
      11,    11,    11,    10,    10,     3,    28,    28,     3,    11,
      11,    55,    11,     3,    11,    11,     3,    11,     3,     3,
      11,    10,    10,     1,    28,    11,    86,    35,    10,   446,
     321,   427,   229,   596,   210,   131,   777,   588,   783,   767,
     231,   771,   927,   925,   925,  1003,  1026,  1040,   804,   607,
     137,   110,   816,   799,   934,   789,    61,   932,   325,   978,
     493,   814,   952,   950,   958,   961,   115,   638,   806,   611,
     959,   620,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
      83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,    41,    85,   163,   164,   168,   164,   168,     9,
     155,     0,     3,     3,    18,   165,    17,   382,   168,   168,
     154,     3,    18,   166,    22,    23,    24,    25,    93,   231,
     234,   154,   154,   154,   154,    10,     3,    18,   167,    17,
     233,   399,   233,   233,    18,    59,    86,   110,   115,   141,
     142,   169,   170,   171,   172,   173,   176,   191,   193,   228,
      11,     9,     9,     9,     9,     9,    10,   171,    17,   229,
      17,   230,   400,   230,   230,   230,   174,   175,   230,    10,
     155,    10,    10,   155,    10,    11,    12,   156,    11,    20,
     194,   399,    11,    46,    71,   192,   195,   196,   228,   194,
      46,   177,   178,   175,   230,    11,   155,     9,    12,    11,
      12,    10,   155,     9,    11,    12,   122,   156,   157,   158,
     232,   400,   192,   196,    71,   192,   122,   232,   178,    10,
      11,    12,    11,    10,    10,    36,    39,    40,    48,    56,
      57,    70,    90,    92,    96,   111,   128,   135,   140,   180,
     181,   197,   198,   199,   205,   206,   207,   208,   212,   213,
     224,   226,   228,   387,   393,   394,   396,   192,    71,   192,
      15,    16,    36,    39,    40,    47,    90,    92,    96,   128,
     135,   179,   180,   182,   188,   189,   190,   200,   201,   202,
     209,   210,   211,   222,   225,     9,     9,   214,   215,   217,
     214,    10,     9,     9,     9,     9,     9,     9,     9,    10,
      12,    11,    12,    11,    12,    11,    16,   190,   190,     9,
       9,     9,    10,     9,     9,     9,     9,     9,    11,    12,
      12,    12,     7,    26,   235,    46,   235,    28,    49,   250,
     322,   397,    13,    14,   235,   235,   235,   399,   235,   235,
      26,   388,   389,   390,   181,   198,   228,   199,   228,   192,
     190,   235,   235,   235,    28,    37,    48,    56,    58,    70,
     106,   111,   140,   183,   184,   185,   186,   187,   393,   394,
     395,   396,   235,   235,   235,   235,   235,   182,   188,   188,
     189,    26,   236,    10,    10,    10,     4,     5,     6,     9,
     251,     9,    11,    12,    11,    10,    10,    10,    10,    10,
      11,    12,    12,    12,    11,    10,    10,    10,    10,     9,
      11,    12,    11,    10,    10,    10,    10,    10,    12,     8,
      12,    50,    60,    61,    84,    91,    94,   101,   109,   131,
     133,   216,   218,   219,   228,   237,   255,   267,   270,   290,
     313,   320,   325,   380,   384,   228,   236,   216,    20,    29,
     401,   401,   401,     7,    10,   401,    10,   250,   216,   216,
     228,   125,   227,   228,   368,   216,   389,    26,   391,   228,
      38,    50,    84,    91,    94,   133,   203,   204,   220,   237,
     255,   267,   270,   290,   320,   325,   384,   220,   220,    28,
     183,    56,    57,   184,   203,   203,   101,   223,   313,   125,
     365,   220,   188,    26,     9,    10,     9,    10,     7,     9,
     321,     9,     9,    10,    10,    10,    11,    12,    11,    11,
      11,   252,   401,   252,   401,   232,   398,    11,    11,    11,
      10,    11,    11,    12,    10,    11,    12,    11,    11,    11,
      11,    11,    11,    12,    10,    11,    11,    10,    19,   326,
      28,   256,   257,   157,   319,   400,    80,    81,   118,   134,
     137,   238,   239,   240,   241,   243,   253,   254,   262,   384,
      27,   136,   143,   144,   145,   146,   147,   148,   150,   151,
     323,   324,   324,    10,    27,    66,    67,    68,   100,   149,
     268,   319,    19,   381,   383,    11,    28,   130,   291,   292,
     293,   295,   299,    28,   385,   386,   218,     8,    12,   154,
      11,    11,    12,    30,    88,   112,   129,   152,   369,   370,
     375,   376,   377,   378,    43,    78,   102,   103,   104,   392,
      11,    50,    60,    61,    84,    91,    94,   101,   109,   131,
     133,   219,   221,   334,   335,   336,   337,   350,   353,   355,
     362,   363,   364,   204,   228,    27,    30,    53,    87,   113,
     127,   334,   366,   367,   371,   373,   374,   375,   376,   377,
     378,   379,    31,   327,   328,    10,    10,    11,    12,    10,
      10,    10,    10,     9,    10,    11,    12,     8,    12,   322,
      10,    10,   156,    11,    12,     9,    11,    12,    10,     9,
      11,    12,   401,   401,   232,     9,     9,     9,     9,    11,
      12,   153,   286,     9,    10,     9,    10,    10,    10,    10,
      10,    11,    12,   251,     9,     9,     9,    11,    12,    12,
      11,    32,   329,   327,    19,   134,   258,   259,   285,   287,
     288,   257,    28,   271,   272,    11,    21,    89,   120,   121,
     244,   245,   246,   247,   248,   250,    11,    21,   269,   399,
      45,   126,   250,   260,   263,   264,   265,   239,   324,    11,
     236,    28,    30,   314,   315,   316,   399,   383,   296,   399,
     292,    19,    51,    54,    79,    97,   119,   132,   134,   294,
     300,   301,   302,   303,   304,   306,   307,   309,   310,     7,
     401,   386,     8,   231,    19,   231,   233,   382,   370,     9,
     326,    28,   351,   319,    28,   354,    80,    81,   118,   133,
     134,   137,   338,   339,   340,   341,   342,   343,   344,   347,
     363,   383,    11,   130,   299,   356,   357,   360,    28,   334,
     400,    27,    52,    63,    64,    65,    69,   117,   372,   401,
     367,    12,    33,   330,    11,     9,    11,    12,   251,    10,
      11,    12,    11,     9,     9,     9,    11,    12,    11,    10,
       9,     9,    11,    12,    11,     3,   154,   402,    11,    12,
      10,    10,     9,     9,     9,     9,     9,     9,    11,    12,
     251,   252,   155,   269,    10,    11,    10,    11,    10,    10,
      10,     9,    10,    11,    12,    11,     9,    10,    11,    11,
      12,    34,   331,   269,   259,    50,    55,    79,    95,    98,
      99,   116,   273,   274,   275,   276,   277,   278,   285,   287,
     289,   272,    72,    83,   114,   123,   124,   249,    13,    14,
      13,    14,   245,   240,   242,    14,    82,   261,    74,   108,
     138,   266,   264,   154,     3,    28,   315,   285,   287,   317,
     318,   293,   297,   298,    42,    62,    73,   308,   399,    10,
     319,    44,   105,   139,   305,   269,   300,     8,   382,   285,
     288,   352,   354,    11,    21,    28,    89,   120,   121,   250,
     345,   346,    11,    21,   269,    28,    45,   126,   250,   348,
     349,   339,   296,   301,   309,   358,   359,    12,     3,    35,
     159,   332,   403,     9,    10,    10,    11,    12,    11,    12,
       3,    11,    12,    11,    12,    75,    76,    77,   107,   139,
     311,   312,    11,    11,    11,     4,     5,     6,     9,    11,
      12,    11,    10,     4,     5,     6,     9,    11,    12,    10,
      11,    12,   159,     3,    35,   333,    10,   326,    61,   279,
     290,   277,   278,   276,   240,   318,   298,    11,    12,   249,
     249,   249,   249,   346,   340,   266,   266,   266,   266,   349,
     357,   361,   359,     3,     3,   160,   161,   404,   405,   327,
       9,    11,    11,    12,    11,    11,   312,    11,    11,   160,
     161,     3,     3,    35,    11,   319,   279,     3,     3,    10,
      11,    28,   280,   281,    10,    11,    12,    55,    79,   116,
     274,   282,   283,   284,   285,   287,   289,   281,    10,    11,
      12,   290,   283,    11
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 17: /* "NUMBER" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2672 "H248_p.cc"
	break;
      case 18: /* "HEXDIGITS" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2677 "H248_p.cc"
	break;
      case 19: /* "NAME" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2682 "H248_p.cc"
	break;
      case 20: /* "quotedString" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2687 "H248_p.cc"
	break;
      case 21: /* "octetString" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2692 "H248_p.cc"
	break;
      case 22: /* "domainname" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2697 "H248_p.cc"
	break;
      case 23: /* "IPv4address" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2702 "H248_p.cc"
	break;
      case 24: /* "IPv6address" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2707 "H248_p.cc"
	break;
      case 25: /* "devicename" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2712 "H248_p.cc"
	break;
      case 26: /* "terminationid" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2717 "H248_p.cc"
	break;
      case 27: /* "extensionParameter" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2722 "H248_p.cc"
	break;
      case 28: /* "pkgdname" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->pkgdName); };
#line 2727 "H248_p.cc"
	break;
      case 29: /* "SafeCharValue" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2732 "H248_p.cc"
	break;
      case 30: /* "TimeStamp" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->timeNotation); };
#line 2737 "H248_p.cc"
	break;
      case 35: /* "digitString" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 2742 "H248_p.cc"
	break;
      case 164: /* "authenticationHeader" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->authenticationHeader); };
#line 2747 "H248_p.cc"
	break;
      case 165: /* "SecurityParmIndex" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2752 "H248_p.cc"
	break;
      case 166: /* "SequenceNum" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2757 "H248_p.cc"
	break;
      case 167: /* "AuthData" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 2762 "H248_p.cc"
	break;
      case 168: /* "message" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->message); };
#line 2767 "H248_p.cc"
	break;
      case 169: /* "messageBody" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->messageBody); };
#line 2772 "H248_p.cc"
	break;
      case 170: /* "transactionList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionList); };
#line 2777 "H248_p.cc"
	break;
      case 171: /* "transaction" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transaction); };
#line 2782 "H248_p.cc"
	break;
      case 172: /* "transactionPending" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionPending); };
#line 2787 "H248_p.cc"
	break;
      case 173: /* "transactionResponseAck" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionResponseAck); };
#line 2792 "H248_p.cc"
	break;
      case 174: /* "transactionAckList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionResponseAck); };
#line 2797 "H248_p.cc"
	break;
      case 175: /* "transactionAck" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionAck); };
#line 2802 "H248_p.cc"
	break;
      case 176: /* "transactionRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionRequest); };
#line 2807 "H248_p.cc"
	break;
      case 177: /* "actionRequestList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->actionRequestList); };
#line 2812 "H248_p.cc"
	break;
      case 178: /* "actionRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->actionRequest); };
#line 2817 "H248_p.cc"
	break;
      case 179: /* "contextBody" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextBody); };
#line 2822 "H248_p.cc"
	break;
      case 180: /* "contextProperties" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextRequest); };
#line 2827 "H248_p.cc"
	break;
      case 181: /* "contextProperty" */
#line 792 "H248_p.y"
	{ Free_ContextProperty((yyvaluep->contextProperty)); };
#line 2832 "H248_p.cc"
	break;
      case 182: /* "contextAudit" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextAttrAuditRequest); };
#line 2837 "H248_p.cc"
	break;
      case 183: /* "contextAuditPropertiesList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextAttrAuditRequest); };
#line 2842 "H248_p.cc"
	break;
      case 184: /* "contextAuditProperties" */
#line 788 "H248_p.y"
	{ Free_ContextAuditProperties((yyvaluep->contextAuditProperties)); };
#line 2847 "H248_p.cc"
	break;
      case 185: /* "contextAuditSelector" */
#line 788 "H248_p.y"
	{ Free_ContextAuditProperties((yyvaluep->contextAuditProperties)); };
#line 2852 "H248_p.cc"
	break;
      case 187: /* "indAudcontextAttrDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextAttrAuditRequest); };
#line 2857 "H248_p.cc"
	break;
      case 188: /* "commandRequestList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->commandRequestList); };
#line 2862 "H248_p.cc"
	break;
      case 189: /* "commandRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->commandRequest); };
#line 2867 "H248_p.cc"
	break;
      case 190: /* "command" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->command); };
#line 2872 "H248_p.cc"
	break;
      case 191: /* "transactionReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionReply); };
#line 2877 "H248_p.cc"
	break;
      case 192: /* "transactionReplyOrError" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->transactionReplyOrError); };
#line 2882 "H248_p.cc"
	break;
      case 193: /* "segmentReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->segmentReply); };
#line 2887 "H248_p.cc"
	break;
      case 195: /* "actionReplyList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->actionReplyList); };
#line 2892 "H248_p.cc"
	break;
      case 196: /* "actionReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->actionReply); };
#line 2897 "H248_p.cc"
	break;
      case 197: /* "contextReplyBody" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextReplyBody); };
#line 2902 "H248_p.cc"
	break;
      case 198: /* "commandReplyList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->commandReplyList); };
#line 2907 "H248_p.cc"
	break;
      case 199: /* "commandReplys" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->commandReply); };
#line 2912 "H248_p.cc"
	break;
      case 200: /* "addRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammRequest); };
#line 2917 "H248_p.cc"
	break;
      case 201: /* "moveRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammRequest); };
#line 2922 "H248_p.cc"
	break;
      case 202: /* "modifyRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammRequest); };
#line 2927 "H248_p.cc"
	break;
      case 203: /* "ammParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammDescriptorList); };
#line 2932 "H248_p.cc"
	break;
      case 204: /* "ammParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammDescriptor); };
#line 2937 "H248_p.cc"
	break;
      case 205: /* "addReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammsReply); };
#line 2942 "H248_p.cc"
	break;
      case 206: /* "moveReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammsReply); };
#line 2947 "H248_p.cc"
	break;
      case 207: /* "modifyReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammsReply); };
#line 2952 "H248_p.cc"
	break;
      case 208: /* "subtractReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->ammsReply); };
#line 2957 "H248_p.cc"
	break;
      case 209: /* "subtractRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->subtractRequest); };
#line 2962 "H248_p.cc"
	break;
      case 210: /* "auditValueRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditRequest); };
#line 2967 "H248_p.cc"
	break;
      case 211: /* "auditCapRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditRequest); };
#line 2972 "H248_p.cc"
	break;
      case 212: /* "auditValueReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditReply); };
#line 2977 "H248_p.cc"
	break;
      case 213: /* "auditCapReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditReply); };
#line 2982 "H248_p.cc"
	break;
      case 214: /* "auditReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditReply); };
#line 2987 "H248_p.cc"
	break;
      case 215: /* "auditOther" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditResult); };
#line 2992 "H248_p.cc"
	break;
      case 216: /* "terminationAudit" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->terminationAudit); };
#line 2997 "H248_p.cc"
	break;
      case 217: /* "contextTerminationAudit" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditReply); };
#line 3002 "H248_p.cc"
	break;
      case 218: /* "auditReturnParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditReturnParameter); };
#line 3007 "H248_p.cc"
	break;
      case 220: /* "auditDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditDescriptor); };
#line 3012 "H248_p.cc"
	break;
      case 221: /* "auditItemList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditDescriptor); };
#line 3017 "H248_p.cc"
	break;
      case 222: /* "notifyRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->notifyRequest); };
#line 3022 "H248_p.cc"
	break;
      case 223: /* "notifyBody" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->notifyBody); };
#line 3027 "H248_p.cc"
	break;
      case 224: /* "notifyReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->notifyReply); };
#line 3032 "H248_p.cc"
	break;
      case 225: /* "serviceChangeRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeRequest); };
#line 3037 "H248_p.cc"
	break;
      case 226: /* "serviceChangeReply" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeReply); };
#line 3042 "H248_p.cc"
	break;
      case 227: /* "serviceChangeResult" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeResult); };
#line 3047 "H248_p.cc"
	break;
      case 228: /* "errorDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->errorDescriptor); };
#line 3052 "H248_p.cc"
	break;
      case 230: /* "TransactionID" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3057 "H248_p.cc"
	break;
      case 231: /* "mId" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->mId); };
#line 3062 "H248_p.cc"
	break;
      case 232: /* "ContextID" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3067 "H248_p.cc"
	break;
      case 234: /* "mtpAddress" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3072 "H248_p.cc"
	break;
      case 235: /* "termIDList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3077 "H248_p.cc"
	break;
      case 236: /* "terminationIDList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->terminationIDList); };
#line 3082 "H248_p.cc"
	break;
      case 237: /* "mediaDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->mediaDescriptor); };
#line 3087 "H248_p.cc"
	break;
      case 238: /* "mediaParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->mediaDescriptor); };
#line 3092 "H248_p.cc"
	break;
      case 239: /* "mediaParm" */
#line 795 "H248_p.y"
	{ Free_MediaParm((yyvaluep->mediaParm)); };
#line 3097 "H248_p.cc"
	break;
      case 240: /* "streamParm" */
#line 795 "H248_p.y"
	{ Free_MediaParm((yyvaluep->mediaParm)); };
#line 3102 "H248_p.cc"
	break;
      case 241: /* "streamDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->streamDescriptor); };
#line 3107 "H248_p.cc"
	break;
      case 242: /* "streamParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->streamParm); };
#line 3112 "H248_p.cc"
	break;
      case 243: /* "localControlDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->localControlDescriptor); };
#line 3117 "H248_p.cc"
	break;
      case 244: /* "localParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->localControlDescriptor); };
#line 3122 "H248_p.cc"
	break;
      case 245: /* "localParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->localParm); };
#line 3127 "H248_p.cc"
	break;
      case 250: /* "propertyParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->propertyParm); };
#line 3132 "H248_p.cc"
	break;
      case 251: /* "parmValue" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->parmValue); };
#line 3137 "H248_p.cc"
	break;
      case 252: /* "valueList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->valueList); };
#line 3142 "H248_p.cc"
	break;
      case 253: /* "localDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3147 "H248_p.cc"
	break;
      case 254: /* "remoteDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3152 "H248_p.cc"
	break;
      case 255: /* "eventBufferDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventBufferDescriptor); };
#line 3157 "H248_p.cc"
	break;
      case 256: /* "eventSpecList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventSpecList); };
#line 3162 "H248_p.cc"
	break;
      case 257: /* "eventSpec" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventSpec); };
#line 3167 "H248_p.cc"
	break;
      case 258: /* "eventSpecParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParOrStreamList); };
#line 3172 "H248_p.cc"
	break;
      case 259: /* "eventSpecParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParOrStream); };
#line 3177 "H248_p.cc"
	break;
      case 262: /* "terminationStateDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->terminationStateDescriptor); };
#line 3182 "H248_p.cc"
	break;
      case 263: /* "terminationStateParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->terminationStateDescriptor); };
#line 3187 "H248_p.cc"
	break;
      case 264: /* "terminationStateParm" */
#line 799 "H248_p.y"
	{ Free_TerminationStateParm((yyvaluep->terminationStateParm)); };
#line 3192 "H248_p.cc"
	break;
      case 270: /* "eventsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventsDescriptor); };
#line 3197 "H248_p.cc"
	break;
      case 271: /* "requestedEventList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->requestedEventList); };
#line 3202 "H248_p.cc"
	break;
      case 272: /* "requestedEvent" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->requestedEvent); };
#line 3207 "H248_p.cc"
	break;
      case 273: /* "notifyRegulated" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->notifyRegulated); };
#line 3212 "H248_p.cc"
	break;
      case 274: /* "notifyBehaviour" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->notifyBehaviour); };
#line 3217 "H248_p.cc"
	break;
      case 275: /* "eventParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->firstEventParameters); };
#line 3222 "H248_p.cc"
	break;
      case 276: /* "eventParameter" */
#line 802 "H248_p.y"
	{ Free_EventParm((yyvaluep->eventParm)); };
#line 3227 "H248_p.cc"
	break;
      case 277: /* "embedWithSig" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->embedSig); };
#line 3232 "H248_p.cc"
	break;
      case 278: /* "embedNoSig" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->embedSig); };
#line 3237 "H248_p.cc"
	break;
      case 279: /* "embedFirst" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->embedFirst); };
#line 3242 "H248_p.cc"
	break;
      case 280: /* "secondRequestedEventList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->secondRequestedEventList); };
#line 3247 "H248_p.cc"
	break;
      case 281: /* "secondRequestedEvent" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->secondRequestedEvent); };
#line 3252 "H248_p.cc"
	break;
      case 282: /* "secondEventParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->secondEventParameters); };
#line 3257 "H248_p.cc"
	break;
      case 283: /* "secondEventParameter" */
#line 802 "H248_p.y"
	{ Free_EventParm((yyvaluep->eventParm)); };
#line 3262 "H248_p.cc"
	break;
      case 284: /* "embedSig" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalsDescriptor); };
#line 3267 "H248_p.cc"
	break;
      case 287: /* "eventOther" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParameter); };
#line 3272 "H248_p.cc"
	break;
      case 288: /* "eventParameterName" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3277 "H248_p.cc"
	break;
      case 289: /* "eventDM" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventDM); };
#line 3282 "H248_p.cc"
	break;
      case 290: /* "signalsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalsDescriptor); };
#line 3287 "H248_p.cc"
	break;
      case 291: /* "signalParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalRequestList); };
#line 3292 "H248_p.cc"
	break;
      case 292: /* "signalParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalRequest); };
#line 3297 "H248_p.cc"
	break;
      case 293: /* "signalRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signal); };
#line 3302 "H248_p.cc"
	break;
      case 294: /* "sigParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalParams); };
#line 3307 "H248_p.cc"
	break;
      case 295: /* "signalList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->seqSigList); };
#line 3312 "H248_p.cc"
	break;
      case 297: /* "signalListParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signalList); };
#line 3317 "H248_p.cc"
	break;
      case 298: /* "signalListParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->signal); };
#line 3322 "H248_p.cc"
	break;
      case 299: /* "signalName" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->pkgdName); };
#line 3327 "H248_p.cc"
	break;
      case 300: /* "sigParameter" */
#line 810 "H248_p.y"
	{ Free_SignalParameter((yyvaluep->signalParameter)); };
#line 3332 "H248_p.cc"
	break;
      case 302: /* "sigOther" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->sigParameter); };
#line 3337 "H248_p.cc"
	break;
      case 303: /* "sigParameterName" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3342 "H248_p.cc"
	break;
      case 309: /* "sigRequestID" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3347 "H248_p.cc"
	break;
      case 313: /* "observedEventsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->observedEventsDescriptor); };
#line 3352 "H248_p.cc"
	break;
      case 314: /* "observedEventList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->observedEventList); };
#line 3357 "H248_p.cc"
	break;
      case 315: /* "observedEvent" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->observedEvent); };
#line 3362 "H248_p.cc"
	break;
      case 316: /* "timeAndEvent" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->timeAndEvent); };
#line 3367 "H248_p.cc"
	break;
      case 317: /* "observedEventParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParOrStreamList); };
#line 3372 "H248_p.cc"
	break;
      case 318: /* "observedEventParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParOrStream); };
#line 3377 "H248_p.cc"
	break;
      case 319: /* "RequestID" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3382 "H248_p.cc"
	break;
      case 320: /* "modemDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->modemDescriptor); };
#line 3387 "H248_p.cc"
	break;
      case 321: /* "modems" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->modems); };
#line 3392 "H248_p.cc"
	break;
      case 322: /* "propertyParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->propertyParmList); };
#line 3397 "H248_p.cc"
	break;
      case 323: /* "modemTypeList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->modemTypeList); };
#line 3402 "H248_p.cc"
	break;
      case 325: /* "digitMapDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->digitMapDescriptor); };
#line 3407 "H248_p.cc"
	break;
      case 326: /* "digitMapName" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3412 "H248_p.cc"
	break;
      case 327: /* "digitMapValue" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->digitMapValue); };
#line 3417 "H248_p.cc"
	break;
      case 332: /* "digitMap" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->digitstringSingleOrList); };
#line 3422 "H248_p.cc"
	break;
      case 333: /* "digitStringList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->digitStringList); };
#line 3427 "H248_p.cc"
	break;
      case 334: /* "auditItem" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditItem); };
#line 3432 "H248_p.cc"
	break;
      case 335: /* "indAudterminationAudit" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditItem); };
#line 3437 "H248_p.cc"
	break;
      case 336: /* "indAudauditReturnParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->auditItem); };
#line 3442 "H248_p.cc"
	break;
      case 337: /* "indAudmediaDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudMediaDescriptor); };
#line 3447 "H248_p.cc"
	break;
      case 338: /* "indAudmediaParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudMediaDescriptor); };
#line 3452 "H248_p.cc"
	break;
      case 339: /* "indAudmediaParm" */
#line 806 "H248_p.y"
	{ Free_IndAudMediaParm((yyvaluep->indAudMediaParm)); };
#line 3457 "H248_p.cc"
	break;
      case 340: /* "indAudstreamParm" */
#line 806 "H248_p.y"
	{ Free_IndAudMediaParm((yyvaluep->indAudMediaParm)); };
#line 3462 "H248_p.cc"
	break;
      case 341: /* "indAudremoteDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3467 "H248_p.cc"
	break;
      case 342: /* "indAudlocalDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3472 "H248_p.cc"
	break;
      case 343: /* "indAudstreamDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudStreamDescriptor); };
#line 3477 "H248_p.cc"
	break;
      case 344: /* "indAudlocalControlDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudLocalControlDescriptor); };
#line 3482 "H248_p.cc"
	break;
      case 345: /* "indAudlocalParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudLocalControlDescriptor); };
#line 3487 "H248_p.cc"
	break;
      case 346: /* "indAudlocalParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudLocalParm); };
#line 3492 "H248_p.cc"
	break;
      case 347: /* "indAudterminationStateDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudTerminationStateDescriptor); };
#line 3497 "H248_p.cc"
	break;
      case 348: /* "indAudterminationStateParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudTerminationStateDescriptor); };
#line 3502 "H248_p.cc"
	break;
      case 349: /* "indAudterminationStateParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudTerminationStateParm); };
#line 3507 "H248_p.cc"
	break;
      case 350: /* "indAudeventBufferDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudEventBufferDescriptor); };
#line 3512 "H248_p.cc"
	break;
      case 351: /* "indAudeventSpec" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudEventBufferDescriptor); };
#line 3517 "H248_p.cc"
	break;
      case 352: /* "indAudeventSpecParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->eventParNameOrStream); };
#line 3522 "H248_p.cc"
	break;
      case 353: /* "indAudeventsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudEventsDescriptor); };
#line 3527 "H248_p.cc"
	break;
      case 354: /* "indAudrequestedEvent" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->pkgdName); };
#line 3532 "H248_p.cc"
	break;
      case 355: /* "indAudsignalsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalsDescriptor); };
#line 3537 "H248_p.cc"
	break;
      case 356: /* "indAudsignalParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalParm); };
#line 3542 "H248_p.cc"
	break;
      case 357: /* "indAudsignalRequest" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalRequest); };
#line 3547 "H248_p.cc"
	break;
      case 358: /* "indAudsignalRequestParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalRequestParmList); };
#line 3552 "H248_p.cc"
	break;
      case 359: /* "indAudsignalRequestParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalRequestParm); };
#line 3557 "H248_p.cc"
	break;
      case 360: /* "indAudsignalList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalList); };
#line 3562 "H248_p.cc"
	break;
      case 361: /* "indAudsignalListParm" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudSignalRequest); };
#line 3567 "H248_p.cc"
	break;
      case 362: /* "indAuddigitMapDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudDigitMapDescriptor); };
#line 3572 "H248_p.cc"
	break;
      case 363: /* "indAudstatisticsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudStatisticsDescriptor); };
#line 3577 "H248_p.cc"
	break;
      case 364: /* "indAudpackagesDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->indAudPackagesDescriptor); };
#line 3582 "H248_p.cc"
	break;
      case 365: /* "serviceChangeDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeDescriptor); };
#line 3587 "H248_p.cc"
	break;
      case 366: /* "serviceChangeParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeDescriptor); };
#line 3592 "H248_p.cc"
	break;
      case 367: /* "serviceChangeParm" */
#line 813 "H248_p.y"
	{ Free_ServiceChangeParm((yyvaluep->serviceChangeParm)); };
#line 3597 "H248_p.cc"
	break;
      case 368: /* "serviceChangeReplyDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeResParm); };
#line 3602 "H248_p.cc"
	break;
      case 369: /* "servChgReplyParmList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeResParm); };
#line 3607 "H248_p.cc"
	break;
      case 370: /* "servChgReplyParm" */
#line 813 "H248_p.y"
	{ Free_ServiceChangeParm((yyvaluep->serviceChangeParm)); };
#line 3612 "H248_p.cc"
	break;
      case 373: /* "serviceChangeReason" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3617 "H248_p.cc"
	break;
      case 374: /* "serviceChangeDelay" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3622 "H248_p.cc"
	break;
      case 375: /* "serviceChangeAddress" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeAddress); };
#line 3627 "H248_p.cc"
	break;
      case 376: /* "serviceChangeMgcId" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->mId); };
#line 3632 "H248_p.cc"
	break;
      case 377: /* "serviceChangeProfile" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->serviceChangeProfile); };
#line 3637 "H248_p.cc"
	break;
      case 379: /* "extension" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->extension); };
#line 3642 "H248_p.cc"
	break;
      case 380: /* "packagesDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->packagesDescriptor); };
#line 3647 "H248_p.cc"
	break;
      case 381: /* "packagesItemList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->packagesDescriptor); };
#line 3652 "H248_p.cc"
	break;
      case 383: /* "packagesItem" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->packagesItem); };
#line 3657 "H248_p.cc"
	break;
      case 384: /* "statisticsDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->statisticsDescriptor); };
#line 3662 "H248_p.cc"
	break;
      case 385: /* "statisticsParameterList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->statisticsDescriptor); };
#line 3667 "H248_p.cc"
	break;
      case 386: /* "statisticsParameter" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->statisticsParameter); };
#line 3672 "H248_p.cc"
	break;
      case 387: /* "topologyDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->topologyRequestList); };
#line 3677 "H248_p.cc"
	break;
      case 388: /* "topologyTripleList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->topologyRequestList); };
#line 3682 "H248_p.cc"
	break;
      case 389: /* "topologyTriple" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->topologyRequest); };
#line 3687 "H248_p.cc"
	break;
      case 390: /* "terminationA" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3692 "H248_p.cc"
	break;
      case 391: /* "terminationB" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3697 "H248_p.cc"
	break;
      case 396: /* "contextAttrDescriptor" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextAttrDescriptor); };
#line 3702 "H248_p.cc"
	break;
      case 397: /* "contextIdList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextIdList); };
#line 3707 "H248_p.cc"
	break;
      case 398: /* "contextIDList" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->contextIdList); };
#line 3712 "H248_p.cc"
	break;
      case 400: /* "UINT32" */
#line 773 "H248_p.y"
	{ Free((yyvaluep->str)); };
#line 3717 "H248_p.cc"
	break;
      case 401: /* "VALUE" */
#line 586 "H248_p.y"
	{ delete (yyvaluep->charstring); };
#line 3722 "H248_p.cc"
	break;

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 825 "H248_p.y"
    {
    decoded_message = new PDU__H248(OMIT_VALUE, *(yyvsp[(1) - (1)].message));
    delete (yyvsp[(1) - (1)].message);
  ;}
    break;

  case 3:
#line 830 "H248_p.y"
    {
    decoded_message = new PDU__H248(OMIT_VALUE, *(yyvsp[(2) - (2)].message));
    delete (yyvsp[(2) - (2)].message);
  ;}
    break;

  case 4:
#line 835 "H248_p.y"
    {
    decoded_message = new PDU__H248(*(yyvsp[(1) - (3)].authenticationHeader), *(yyvsp[(3) - (3)].message));
    delete (yyvsp[(1) - (3)].authenticationHeader);
    delete (yyvsp[(3) - (3)].message);
  ;}
    break;

  case 5:
#line 841 "H248_p.y"
    {
    decoded_message = new PDU__H248(*(yyvsp[(2) - (4)].authenticationHeader), *(yyvsp[(4) - (4)].message));
    delete (yyvsp[(2) - (4)].authenticationHeader);
    delete (yyvsp[(4) - (4)].message);
  ;}
    break;

  case 6:
#line 850 "H248_p.y"
    {
    (yyval.authenticationHeader) = new AuthenticationHeader(str2oct((yyvsp[(3) - (7)].str)), str2oct((yyvsp[(5) - (7)].str)), str2oct((yyvsp[(7) - (7)].str)));
    Free((yyvsp[(3) - (7)].str));
    Free((yyvsp[(5) - (7)].str));
    Free((yyvsp[(7) - (7)].str));
  ;}
    break;

  case 7:
#line 859 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 8:
#line 863 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 9:
#line 867 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 10:
#line 872 "H248_p.y"
    {
    (yyval.message) = new Message((yyvsp[(3) - (7)].i), *(yyvsp[(5) - (7)].mId), *(yyvsp[(7) - (7)].messageBody));
    delete (yyvsp[(5) - (7)].mId);
    delete (yyvsp[(7) - (7)].messageBody);
  ;}
    break;

  case 11:
#line 881 "H248_p.y"
    {
    (yyval.messageBody) = new MessageBody;
    (yyval.messageBody)->messageError() = *(yyvsp[(1) - (1)].errorDescriptor);
    delete (yyvsp[(1) - (1)].errorDescriptor);
  ;}
    break;

  case 12:
#line 887 "H248_p.y"
    {
    (yyval.messageBody) = new MessageBody;
    (yyval.messageBody)->transactions() = *(yyvsp[(1) - (1)].transactionList);
    delete (yyvsp[(1) - (1)].transactionList);
  ;}
    break;

  case 13:
#line 896 "H248_p.y"
    {
    (yyval.transactionList) = new TransactionList;
    (*(yyval.transactionList))[0] = *(yyvsp[(1) - (1)].transaction);
    delete (yyvsp[(1) - (1)].transaction);
  ;}
    break;

  case 14:
#line 902 "H248_p.y"
    {
    (yyval.transactionList) = (yyvsp[(1) - (2)].transactionList);
    (*(yyval.transactionList))[(yyval.transactionList)->size_of()] = *(yyvsp[(2) - (2)].transaction);
    delete (yyvsp[(2) - (2)].transaction);
  ;}
    break;

  case 15:
#line 911 "H248_p.y"
    {
    (yyval.transaction) = new Transaction;
    (yyval.transaction)->transactionRequest() = *(yyvsp[(1) - (1)].transactionRequest);
    delete (yyvsp[(1) - (1)].transactionRequest);
  ;}
    break;

  case 16:
#line 917 "H248_p.y"
    {
    (yyval.transaction) = new Transaction;
    (yyval.transaction)->transactionReply() = *(yyvsp[(1) - (1)].transactionReply);
    delete (yyvsp[(1) - (1)].transactionReply);
  ;}
    break;

  case 17:
#line 923 "H248_p.y"
    {
    (yyval.transaction) = new Transaction;
    (yyval.transaction)->transactionPending() = *(yyvsp[(1) - (1)].transactionPending);
    delete (yyvsp[(1) - (1)].transactionPending);
  ;}
    break;

  case 18:
#line 929 "H248_p.y"
    {
    (yyval.transaction) = new Transaction;
    (yyval.transaction)->transactionResponseAck() = *(yyvsp[(1) - (1)].transactionResponseAck);
    delete (yyvsp[(1) - (1)].transactionResponseAck);
  ;}
    break;

  case 19:
#line 935 "H248_p.y"
    {
    (yyval.transaction) = new Transaction;
    (yyval.transaction)->segmentReply() = *(yyvsp[(1) - (1)].segmentReply);
    delete (yyvsp[(1) - (1)].segmentReply);
  ;}
    break;

  case 20:
#line 944 "H248_p.y"
    {
    (yyval.transactionPending) = new TransactionPending((yyvsp[(3) - (5)].str));
    Free((yyvsp[(3) - (5)].str));
  ;}
    break;

  case 21:
#line 951 "H248_p.y"
    { (yyval.transactionResponseAck) = (yyvsp[(3) - (4)].transactionResponseAck); ;}
    break;

  case 22:
#line 956 "H248_p.y"
    {
    (yyval.transactionResponseAck) = new TransactionResponseAck;
    (*(yyval.transactionResponseAck))[0] = *(yyvsp[(1) - (1)].transactionAck);
    delete (yyvsp[(1) - (1)].transactionAck);
  ;}
    break;

  case 23:
#line 962 "H248_p.y"
    {
    (yyval.transactionResponseAck) = (yyvsp[(1) - (3)].transactionResponseAck);
    (*(yyval.transactionResponseAck))[(yyval.transactionResponseAck)->size_of()] = *(yyvsp[(3) - (3)].transactionAck);
    delete (yyvsp[(3) - (3)].transactionAck);
  ;}
    break;

  case 24:
#line 971 "H248_p.y"
    {
    (yyval.transactionAck) = new TransactionAck((yyvsp[(1) - (1)].str), OMIT_VALUE);
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 25:
#line 976 "H248_p.y"
    {
    (yyval.transactionAck) = new TransactionAck((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
    Free((yyvsp[(1) - (3)].str));
    Free((yyvsp[(3) - (3)].str));
  ;}
    break;

  case 26:
#line 985 "H248_p.y"
    {
    (yyval.transactionRequest) = new TransactionRequest((yyvsp[(3) - (6)].str), *(yyvsp[(5) - (6)].actionRequestList));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].actionRequestList);
  ;}
    break;

  case 27:
#line 994 "H248_p.y"
    {
    (yyval.actionRequestList) = new ActionRequestList;
    (*(yyval.actionRequestList))[0] = *(yyvsp[(1) - (1)].actionRequest);
    delete (yyvsp[(1) - (1)].actionRequest);
  ;}
    break;

  case 28:
#line 1000 "H248_p.y"
    {
    (yyval.actionRequestList) = (yyvsp[(1) - (3)].actionRequestList);
    (*(yyval.actionRequestList))[(yyval.actionRequestList)->size_of()] = *(yyvsp[(3) - (3)].actionRequest);
    delete (yyvsp[(3) - (3)].actionRequest);
  ;}
    break;

  case 29:
#line 1009 "H248_p.y"
    {
    (yyval.actionRequest) = new ActionRequest((yyvsp[(3) - (6)].str), *(yyvsp[(5) - (6)].contextBody));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].contextBody);
  ;}
    break;

  case 30:
#line 1018 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(*(yyvsp[(1) - (1)].contextRequest), OMIT_VALUE, OMIT_VALUE);
    delete (yyvsp[(1) - (1)].contextRequest);
  ;}
    break;

  case 31:
#line 1023 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(*(yyvsp[(1) - (3)].contextRequest), *(yyvsp[(3) - (3)].contextAttrAuditRequest), OMIT_VALUE);
    delete (yyvsp[(1) - (3)].contextRequest);
    delete (yyvsp[(3) - (3)].contextAttrAuditRequest);
  ;}
    break;

  case 32:
#line 1029 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(*(yyvsp[(1) - (5)].contextRequest), *(yyvsp[(3) - (5)].contextAttrAuditRequest), *(yyvsp[(5) - (5)].commandRequestList));
    delete (yyvsp[(1) - (5)].contextRequest);
    delete (yyvsp[(3) - (5)].contextAttrAuditRequest);
    delete (yyvsp[(5) - (5)].commandRequestList);
  ;}
    break;

  case 33:
#line 1036 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(*(yyvsp[(1) - (3)].contextRequest), OMIT_VALUE, *(yyvsp[(3) - (3)].commandRequestList));
    delete (yyvsp[(1) - (3)].contextRequest);
    delete (yyvsp[(3) - (3)].commandRequestList);
  ;}
    break;

  case 34:
#line 1042 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(OMIT_VALUE, *(yyvsp[(1) - (1)].contextAttrAuditRequest), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].contextAttrAuditRequest);
  ;}
    break;

  case 35:
#line 1047 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(OMIT_VALUE, *(yyvsp[(1) - (3)].contextAttrAuditRequest), *(yyvsp[(3) - (3)].commandRequestList));
    delete (yyvsp[(1) - (3)].contextAttrAuditRequest);
    delete (yyvsp[(3) - (3)].commandRequestList);
  ;}
    break;

  case 36:
#line 1053 "H248_p.y"
    {
    (yyval.contextBody) = new ContextBody(OMIT_VALUE, OMIT_VALUE, *(yyvsp[(1) - (1)].commandRequestList));
    delete (yyvsp[(1) - (1)].commandRequestList);
  ;}
    break;

  case 37:
#line 1061 "H248_p.y"
    {
    (yyval.contextRequest) = new ContextRequest(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE);
    Merge_ContextProperty(*(yyval.contextRequest), (yyvsp[(1) - (1)].contextProperty));
    Free_ContextProperty((yyvsp[(1) - (1)].contextProperty));
  ;}
    break;

  case 38:
#line 1068 "H248_p.y"
    {
    (yyval.contextRequest) = (yyvsp[(1) - (3)].contextRequest);
    Merge_ContextProperty(*(yyval.contextRequest), (yyvsp[(3) - (3)].contextProperty));
    Free_ContextProperty((yyvsp[(3) - (3)].contextProperty));
  ;}
    break;

  case 39:
#line 1077 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_topologyDescriptor;
    (yyval.contextProperty).topologyDescriptor = (yyvsp[(1) - (1)].topologyRequestList);
  ;}
    break;

  case 40:
#line 1082 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_priority;
    (yyval.contextProperty).priority = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 41:
#line 1087 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_emergency;
    (yyval.contextProperty).emergency = Emergency::emergency;
  ;}
    break;

  case 42:
#line 1092 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_emergency;
    (yyval.contextProperty).emergency = Emergency::emergencyOff;
  ;}
    break;

  case 43:
#line 1097 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_iepsValue;
    (yyval.contextProperty).iepsValue = (yyvsp[(1) - (1)].b);
  ;}
    break;

  case 44:
#line 1102 "H248_p.y"
    {
    (yyval.contextProperty).selector = ContextProperty::S_contextAttrDescriptor;
    (yyval.contextProperty).contextAttrDescriptor = (yyvsp[(1) - (1)].contextAttrDescriptor);
  ;}
    break;

  case 45:
#line 1109 "H248_p.y"
    { (yyval.contextAttrAuditRequest) = (yyvsp[(3) - (4)].contextAttrAuditRequest); ;}
    break;

  case 46:
#line 1110 "H248_p.y"
    { (yyval.contextAttrAuditRequest) = (yyvsp[(3) - (4)].contextAttrAuditRequest); ;}
    break;

  case 47:
#line 1115 "H248_p.y"
    {
    (yyval.contextAttrAuditRequest) = new ContextAttrAuditRequest(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE);
    Merge_ContextAuditProperties(*(yyval.contextAttrAuditRequest), (yyvsp[(1) - (1)].contextAuditProperties));
    Free_ContextAuditProperties((yyvsp[(1) - (1)].contextAuditProperties));
  ;}
    break;

  case 48:
#line 1123 "H248_p.y"
    {
    (yyval.contextAttrAuditRequest) = (yyvsp[(1) - (3)].contextAttrAuditRequest);
    Merge_ContextAuditProperties(*(yyval.contextAttrAuditRequest), (yyvsp[(3) - (3)].contextAuditProperties));
    Free_ContextAuditProperties((yyvsp[(3) - (3)].contextAuditProperties));
  ;}
    break;

  case 49:
#line 1132 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_TopologyToken;
  ;}
    break;

  case 50:
#line 1136 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_EmergencyToken;
  ;}
    break;

  case 51:
#line 1140 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_PriorityToken;
  ;}
    break;

  case 52:
#line 1144 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_IEPSToken;
  ;}
    break;

  case 53:
#line 1148 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_pkgdName;
    (yyval.contextAuditProperties).pkgdName = (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 54:
#line 1152 "H248_p.y"
    { (yyval.contextAuditProperties) = (yyvsp[(1) - (1)].contextAuditProperties); ;}
    break;

  case 55:
#line 1157 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_priority;
    (yyval.contextAuditProperties).priority = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 56:
#line 1162 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_emergencyValue;
    (yyval.contextAuditProperties).emergencyValue = (yyvsp[(1) - (1)].emergency);
  ;}
    break;

  case 57:
#line 1167 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_iepsValue;
    (yyval.contextAuditProperties).iepsValue = (yyvsp[(1) - (1)].b);
  ;}
    break;

  case 58:
#line 1172 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_contextAttrDescriptor;
    (yyval.contextAuditProperties).contextAttrDescriptor = (yyvsp[(1) - (1)].contextAttrDescriptor);
  ;}
    break;

  case 59:
#line 1177 "H248_p.y"
    {
    (yyval.contextAuditProperties).selector = ContextAuditProperties::S_auditSelectLogic;
    (yyval.contextAuditProperties).auditSelectLogic = (yyvsp[(1) - (1)].auditSelectionLogic);
  ;}
    break;

  case 60:
#line 1184 "H248_p.y"
    { (yyval.auditSelectionLogic) = AuditSelectionLogic::ANDLgc; ;}
    break;

  case 61:
#line 1185 "H248_p.y"
    { (yyval.auditSelectionLogic) = AuditSelectionLogic::ORLgc; ;}
    break;

  case 62:
#line 1189 "H248_p.y"
    { (yyval.contextAttrAuditRequest) = (yyvsp[(3) - (4)].contextAttrAuditRequest); ;}
    break;

  case 63:
#line 1193 "H248_p.y"
    {
    (yyval.commandRequestList) = new CommandRequestList;
    (*(yyval.commandRequestList))[0] = *(yyvsp[(1) - (1)].commandRequest);
    delete (yyvsp[(1) - (1)].commandRequest);
  ;}
    break;

  case 64:
#line 1199 "H248_p.y"
    {
    (yyval.commandRequestList) = (yyvsp[(1) - (3)].commandRequestList);
    (*(yyval.commandRequestList))[(yyval.commandRequestList)->size_of()] = *(yyvsp[(3) - (3)].commandRequest);
    delete (yyvsp[(3) - (3)].commandRequest);
  ;}
    break;

  case 65:
#line 1208 "H248_p.y"
    {
    (yyval.commandRequest) = new CommandRequest(FALSE, FALSE, *(yyvsp[(1) - (1)].command));
    delete (yyvsp[(1) - (1)].command);
  ;}
    break;

  case 66:
#line 1213 "H248_p.y"
    {
    (yyval.commandRequest) = new CommandRequest(TRUE, FALSE, *(yyvsp[(2) - (2)].command));
    delete (yyvsp[(2) - (2)].command);
  ;}
    break;

  case 67:
#line 1218 "H248_p.y"
    {
    (yyval.commandRequest) = new CommandRequest(TRUE, TRUE, *(yyvsp[(3) - (3)].command));
    delete (yyvsp[(3) - (3)].command);
  ;}
    break;

  case 68:
#line 1223 "H248_p.y"
    {
    (yyval.commandRequest) = new CommandRequest(FALSE, TRUE, *(yyvsp[(2) - (2)].command));
    delete (yyvsp[(2) - (2)].command);
  ;}
    break;

  case 69:
#line 1231 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->addReq() = *(yyvsp[(1) - (1)].ammRequest);
    delete (yyvsp[(1) - (1)].ammRequest);
  ;}
    break;

  case 70:
#line 1237 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->moveReq() = *(yyvsp[(1) - (1)].ammRequest);
    delete (yyvsp[(1) - (1)].ammRequest);
  ;}
    break;

  case 71:
#line 1243 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->modReq() = *(yyvsp[(1) - (1)].ammRequest);
    delete (yyvsp[(1) - (1)].ammRequest);
  ;}
    break;

  case 72:
#line 1249 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->subtractReq() = *(yyvsp[(1) - (1)].subtractRequest);
    delete (yyvsp[(1) - (1)].subtractRequest);
  ;}
    break;

  case 73:
#line 1255 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->auditValueRequest() = *(yyvsp[(1) - (1)].auditRequest);
    delete (yyvsp[(1) - (1)].auditRequest);
  ;}
    break;

  case 74:
#line 1261 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->auditCapRequest() = *(yyvsp[(1) - (1)].auditRequest);
    delete (yyvsp[(1) - (1)].auditRequest);
  ;}
    break;

  case 75:
#line 1267 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->notifyReq() = *(yyvsp[(1) - (1)].notifyRequest);
    delete (yyvsp[(1) - (1)].notifyRequest);
  ;}
    break;

  case 76:
#line 1273 "H248_p.y"
    {
    (yyval.command) = new Command;
    (yyval.command)->serviceChangeReq() = *(yyvsp[(1) - (1)].serviceChangeRequest);
    delete (yyvsp[(1) - (1)].serviceChangeRequest);
  ;}
    break;

  case 77:
#line 1282 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (6)].str), OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, *(yyvsp[(5) - (6)].transactionReplyOrError));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].transactionReplyOrError);
  ;}
    break;

  case 78:
#line 1289 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (8)].str), OMIT_VALUE, OMIT_VALUE, H248__token::present__, *(yyvsp[(7) - (8)].transactionReplyOrError));
    Free((yyvsp[(3) - (8)].str));
    delete (yyvsp[(7) - (8)].transactionReplyOrError);
  ;}
    break;

  case 79:
#line 1296 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (8)].str), (yyvsp[(5) - (8)].i), OMIT_VALUE, OMIT_VALUE, *(yyvsp[(7) - (8)].transactionReplyOrError));
    Free((yyvsp[(3) - (8)].str));
    delete (yyvsp[(7) - (8)].transactionReplyOrError);
  ;}
    break;

  case 80:
#line 1303 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (10)].str), (yyvsp[(5) - (10)].i), OMIT_VALUE, H248__token::present__, *(yyvsp[(9) - (10)].transactionReplyOrError));
    Free((yyvsp[(3) - (10)].str));
    delete (yyvsp[(9) - (10)].transactionReplyOrError);
  ;}
    break;

  case 81:
#line 1310 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (10)].str), (yyvsp[(5) - (10)].i), H248__token::present__, OMIT_VALUE, *(yyvsp[(9) - (10)].transactionReplyOrError));
    Free((yyvsp[(3) - (10)].str));
    delete (yyvsp[(9) - (10)].transactionReplyOrError);
  ;}
    break;

  case 82:
#line 1318 "H248_p.y"
    {
    (yyval.transactionReply) = new TransactionReply((yyvsp[(3) - (12)].str), (yyvsp[(5) - (12)].i), H248__token::present__, H248__token::present__, *(yyvsp[(11) - (12)].transactionReplyOrError));
    Free((yyvsp[(3) - (12)].str));
    delete (yyvsp[(11) - (12)].transactionReplyOrError);
  ;}
    break;

  case 83:
#line 1327 "H248_p.y"
    {
    (yyval.transactionReplyOrError) = new TransactionReplyOrError;
    (yyval.transactionReplyOrError)->transactionError() = *(yyvsp[(1) - (1)].errorDescriptor);
    delete (yyvsp[(1) - (1)].errorDescriptor);
  ;}
    break;

  case 84:
#line 1333 "H248_p.y"
    {
    (yyval.transactionReplyOrError) = new TransactionReplyOrError;
    (yyval.transactionReplyOrError)->actionReplies() = *(yyvsp[(1) - (1)].actionReplyList);
    delete (yyvsp[(1) - (1)].actionReplyList);
  ;}
    break;

  case 85:
#line 1342 "H248_p.y"
    {
    (yyval.segmentReply) = new SegmentReply((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].i), OMIT_VALUE);
    Free((yyvsp[(3) - (5)].str));
  ;}
    break;

  case 86:
#line 1347 "H248_p.y"
    {
    (yyval.segmentReply) = new SegmentReply((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].i), H248__token::present__);
    Free((yyvsp[(3) - (7)].str));
  ;}
    break;

  case 87:
#line 1354 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 88:
#line 1359 "H248_p.y"
    {
    (yyval.actionReplyList) = new ActionReplyList;
    (*(yyval.actionReplyList))[0] = *(yyvsp[(1) - (1)].actionReply);
    delete (yyvsp[(1) - (1)].actionReply);
  ;}
    break;

  case 89:
#line 1365 "H248_p.y"
    {
    (yyval.actionReplyList) = (yyvsp[(1) - (3)].actionReplyList);
    (*(yyval.actionReplyList))[(yyval.actionReplyList)->size_of()] = *(yyvsp[(3) - (3)].actionReply);
    delete (yyvsp[(3) - (3)].actionReply);
  ;}
    break;

  case 90:
#line 1374 "H248_p.y"
    {
    (yyval.actionReply) = new ActionReply((yyvsp[(3) - (3)].str), OMIT_VALUE);
    Free((yyvsp[(3) - (3)].str));
  ;}
    break;

  case 91:
#line 1379 "H248_p.y"
    {
    (yyval.actionReply) = new ActionReply((yyvsp[(3) - (6)].str), *(yyvsp[(5) - (6)].contextReplyBody));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].contextReplyBody);
  ;}
    break;

  case 92:
#line 1388 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(*(yyvsp[(1) - (1)].contextRequest), OMIT_VALUE, OMIT_VALUE);
    delete (yyvsp[(1) - (1)].contextRequest);
  ;}
    break;

  case 93:
#line 1393 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(*(yyvsp[(1) - (3)].contextRequest), *(yyvsp[(3) - (3)].commandReplyList), OMIT_VALUE);
    delete (yyvsp[(1) - (3)].contextRequest);
    delete (yyvsp[(3) - (3)].commandReplyList);
  ;}
    break;

  case 94:
#line 1399 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(*(yyvsp[(1) - (5)].contextRequest), *(yyvsp[(3) - (5)].commandReplyList), *(yyvsp[(5) - (5)].errorDescriptor));
    delete (yyvsp[(1) - (5)].contextRequest);
    delete (yyvsp[(3) - (5)].commandReplyList);
    delete (yyvsp[(5) - (5)].errorDescriptor);
  ;}
    break;

  case 95:
#line 1406 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(*(yyvsp[(1) - (3)].contextRequest), OMIT_VALUE, *(yyvsp[(3) - (3)].errorDescriptor));
    delete (yyvsp[(1) - (3)].contextRequest);
    delete (yyvsp[(3) - (3)].errorDescriptor);
  ;}
    break;

  case 96:
#line 1412 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(OMIT_VALUE, *(yyvsp[(1) - (1)].commandReplyList), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].commandReplyList);
  ;}
    break;

  case 97:
#line 1417 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(OMIT_VALUE, *(yyvsp[(1) - (3)].commandReplyList), *(yyvsp[(3) - (3)].errorDescriptor));
    delete (yyvsp[(1) - (3)].commandReplyList);
    delete (yyvsp[(3) - (3)].errorDescriptor);
  ;}
    break;

  case 98:
#line 1423 "H248_p.y"
    {
    (yyval.contextReplyBody) = new ContextReplyBody(OMIT_VALUE, OMIT_VALUE, *(yyvsp[(1) - (1)].errorDescriptor));
    delete (yyvsp[(1) - (1)].errorDescriptor);
  ;}
    break;

  case 99:
#line 1431 "H248_p.y"
    {
    (yyval.commandReplyList) = new CommandReplyList;
    (*(yyval.commandReplyList))[0] = *(yyvsp[(1) - (1)].commandReply);
    delete (yyvsp[(1) - (1)].commandReply);
  ;}
    break;

  case 100:
#line 1437 "H248_p.y"
    {
    (yyval.commandReplyList) = (yyvsp[(1) - (3)].commandReplyList);
    (*(yyval.commandReplyList))[(yyval.commandReplyList)->size_of()] = *(yyvsp[(3) - (3)].commandReply);
    delete (yyvsp[(3) - (3)].commandReply);
  ;}
    break;

  case 101:
#line 1446 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->serviceChangeReply() = *(yyvsp[(1) - (1)].serviceChangeReply);
    delete (yyvsp[(1) - (1)].serviceChangeReply);
  ;}
    break;

  case 102:
#line 1452 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->auditValueReply() = *(yyvsp[(1) - (1)].auditReply);
    delete (yyvsp[(1) - (1)].auditReply);
  ;}
    break;

  case 103:
#line 1458 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->auditCapReply() = *(yyvsp[(1) - (1)].auditReply);
    delete (yyvsp[(1) - (1)].auditReply);
  ;}
    break;

  case 104:
#line 1464 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->addReply() = *(yyvsp[(1) - (1)].ammsReply);
    delete (yyvsp[(1) - (1)].ammsReply);
  ;}
    break;

  case 105:
#line 1470 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->moveReply() = *(yyvsp[(1) - (1)].ammsReply);
    delete (yyvsp[(1) - (1)].ammsReply);
  ;}
    break;

  case 106:
#line 1476 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->modReply() = *(yyvsp[(1) - (1)].ammsReply);
    delete (yyvsp[(1) - (1)].ammsReply);
  ;}
    break;

  case 107:
#line 1482 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->subtractReply() = *(yyvsp[(1) - (1)].ammsReply);
    delete (yyvsp[(1) - (1)].ammsReply);
  ;}
    break;

  case 108:
#line 1488 "H248_p.y"
    {
    (yyval.commandReply) = new CommandReply;
    (yyval.commandReply)->notifyReply() = *(yyvsp[(1) - (1)].notifyReply);
    delete (yyvsp[(1) - (1)].notifyReply);
  ;}
    break;

  case 109:
#line 1497 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 110:
#line 1502 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].ammDescriptorList));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].ammDescriptorList);
  ;}
    break;

  case 111:
#line 1511 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 112:
#line 1516 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].ammDescriptorList));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].ammDescriptorList);
  ;}
    break;

  case 113:
#line 1525 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 114:
#line 1530 "H248_p.y"
    {
    (yyval.ammRequest) = new AmmRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].ammDescriptorList));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].ammDescriptorList);
  ;}
    break;

  case 115:
#line 1539 "H248_p.y"
    {
    (yyval.ammDescriptorList) = new AmmDescriptorList;
    (*(yyval.ammDescriptorList))[0] = *(yyvsp[(1) - (1)].ammDescriptor);
    delete (yyvsp[(1) - (1)].ammDescriptor);
  ;}
    break;

  case 116:
#line 1545 "H248_p.y"
    {
    (yyval.ammDescriptorList) = (yyvsp[(1) - (3)].ammDescriptorList);
    (*(yyval.ammDescriptorList))[(yyval.ammDescriptorList)->size_of()] = *(yyvsp[(3) - (3)].ammDescriptor);
    delete (yyvsp[(3) - (3)].ammDescriptor);
  ;}
    break;

  case 117:
#line 1554 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->mediaDescriptor() = *(yyvsp[(1) - (1)].mediaDescriptor);
    delete (yyvsp[(1) - (1)].mediaDescriptor);
  ;}
    break;

  case 118:
#line 1560 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->modemDescriptor() = *(yyvsp[(1) - (1)].modemDescriptor);
    delete (yyvsp[(1) - (1)].modemDescriptor);
  ;}
    break;

  case 119:
#line 1566 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->muxDescriptor() = *(yyvsp[(1) - (1)].muxDescriptor);
    delete (yyvsp[(1) - (1)].muxDescriptor);
  ;}
    break;

  case 120:
#line 1572 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->eventsDescriptor() = *(yyvsp[(1) - (1)].eventsDescriptor);
    delete (yyvsp[(1) - (1)].eventsDescriptor);
  ;}
    break;

  case 121:
#line 1578 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->signalsDescriptor() = *(yyvsp[(1) - (1)].signalsDescriptor);
    delete (yyvsp[(1) - (1)].signalsDescriptor);
  ;}
    break;

  case 122:
#line 1584 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->digitMapDescriptor() = *(yyvsp[(1) - (1)].digitMapDescriptor);
    delete (yyvsp[(1) - (1)].digitMapDescriptor);
  ;}
    break;

  case 123:
#line 1590 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->eventBufferDescriptor() = *(yyvsp[(1) - (1)].eventBufferDescriptor);
    delete (yyvsp[(1) - (1)].eventBufferDescriptor);
  ;}
    break;

  case 124:
#line 1596 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->auditDescriptor() = *(yyvsp[(1) - (1)].auditDescriptor);
    delete (yyvsp[(1) - (1)].auditDescriptor);
  ;}
    break;

  case 125:
#line 1602 "H248_p.y"
    {
    (yyval.ammDescriptor) = new AmmDescriptor;
    (yyval.ammDescriptor)->statisticsDescriptor() = *(yyvsp[(1) - (1)].statisticsDescriptor);
    delete (yyvsp[(1) - (1)].statisticsDescriptor);
  ;}
    break;

  case 126:
#line 1611 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 127:
#line 1616 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].terminationAudit));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].terminationAudit);
  ;}
    break;

  case 128:
#line 1625 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 129:
#line 1630 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].terminationAudit));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].terminationAudit);
  ;}
    break;

  case 130:
#line 1639 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 131:
#line 1644 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].terminationAudit));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].terminationAudit);
  ;}
    break;

  case 132:
#line 1653 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 133:
#line 1658 "H248_p.y"
    {
    (yyval.ammsReply) = new AmmsReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].terminationAudit));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].terminationAudit);
  ;}
    break;

  case 134:
#line 1667 "H248_p.y"
    {
    (yyval.subtractRequest) = new SubtractRequest(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 135:
#line 1672 "H248_p.y"
    {
    (yyval.subtractRequest) = new SubtractRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].auditDescriptor));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].auditDescriptor);
  ;}
    break;

  case 136:
#line 1681 "H248_p.y"
    {
    (yyval.auditRequest) = new AuditRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].auditDescriptor));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].auditDescriptor);
  ;}
    break;

  case 137:
#line 1690 "H248_p.y"
    {
    (yyval.auditRequest) = new AuditRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].auditDescriptor));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].auditDescriptor);
  ;}
    break;

  case 138:
#line 1698 "H248_p.y"
    { (yyval.auditReply) = (yyvsp[(2) - (2)].auditReply); ;}
    break;

  case 139:
#line 1702 "H248_p.y"
    { (yyval.auditReply) = (yyvsp[(2) - (2)].auditReply); ;}
    break;

  case 140:
#line 1706 "H248_p.y"
    { (yyval.auditReply) = (yyvsp[(1) - (1)].auditReply); ;}
    break;

  case 141:
#line 1708 "H248_p.y"
    {
    (yyval.auditReply) = new AuditReply;
    (yyval.auditReply)->auditResult() = *(yyvsp[(1) - (1)].auditResult);
    delete (yyvsp[(1) - (1)].auditResult);
  ;}
    break;

  case 142:
#line 1717 "H248_p.y"
    {
    (yyval.auditResult) = new AuditResult(*(yyvsp[(2) - (2)].charstring), OMIT_VALUE);
    delete (yyvsp[(2) - (2)].charstring);
  ;}
    break;

  case 143:
#line 1722 "H248_p.y"
    {
    (yyval.auditResult) = new AuditResult(*(yyvsp[(2) - (5)].charstring), *(yyvsp[(4) - (5)].terminationAudit));
    delete (yyvsp[(2) - (5)].charstring);
    delete (yyvsp[(4) - (5)].terminationAudit);
  ;}
    break;

  case 144:
#line 1731 "H248_p.y"
    {
    (yyval.terminationAudit) = new TerminationAudit;
    (*(yyval.terminationAudit))[0] = *(yyvsp[(1) - (1)].auditReturnParameter);
    delete (yyvsp[(1) - (1)].auditReturnParameter);
  ;}
    break;

  case 145:
#line 1737 "H248_p.y"
    {
    (yyval.terminationAudit) = (yyvsp[(1) - (3)].terminationAudit);
    (*(yyval.terminationAudit))[(yyval.terminationAudit)->size_of()] = *(yyvsp[(3) - (3)].auditReturnParameter);
    delete (yyvsp[(3) - (3)].auditReturnParameter);
  ;}
    break;

  case 146:
#line 1746 "H248_p.y"
    {
    (yyval.auditReply) = new AuditReply;
    (yyval.auditReply)->contextAuditResult() = *(yyvsp[(4) - (5)].terminationIDList);
    delete (yyvsp[(4) - (5)].terminationIDList);
  ;}
    break;

  case 147:
#line 1752 "H248_p.y"
    {
    (yyval.auditReply) = new AuditReply;
    (yyval.auditReply)->field__error() = *(yyvsp[(4) - (5)].errorDescriptor);
    delete (yyvsp[(4) - (5)].errorDescriptor);
  ;}
    break;

  case 148:
#line 1761 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->mediaDescriptor() = *(yyvsp[(1) - (1)].mediaDescriptor);
    delete (yyvsp[(1) - (1)].mediaDescriptor);
  ;}
    break;

  case 149:
#line 1767 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->modemDescriptor() = *(yyvsp[(1) - (1)].modemDescriptor);
    delete (yyvsp[(1) - (1)].modemDescriptor);
  ;}
    break;

  case 150:
#line 1773 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->muxDescriptor() = *(yyvsp[(1) - (1)].muxDescriptor);
    delete (yyvsp[(1) - (1)].muxDescriptor);
  ;}
    break;

  case 151:
#line 1779 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->eventsDescriptor() = *(yyvsp[(1) - (1)].eventsDescriptor);
    delete (yyvsp[(1) - (1)].eventsDescriptor);
  ;}
    break;

  case 152:
#line 1785 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->signalsDescriptor() = *(yyvsp[(1) - (1)].signalsDescriptor);
    delete (yyvsp[(1) - (1)].signalsDescriptor);
  ;}
    break;

  case 153:
#line 1791 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->digitMapDescriptor() = *(yyvsp[(1) - (1)].digitMapDescriptor);
    delete (yyvsp[(1) - (1)].digitMapDescriptor);
  ;}
    break;

  case 154:
#line 1797 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->observedEventsDescriptor() = *(yyvsp[(1) - (1)].observedEventsDescriptor);
    delete (yyvsp[(1) - (1)].observedEventsDescriptor);
  ;}
    break;

  case 155:
#line 1803 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->eventBufferDescriptor() = *(yyvsp[(1) - (1)].eventBufferDescriptor);
    delete (yyvsp[(1) - (1)].eventBufferDescriptor);
  ;}
    break;

  case 156:
#line 1809 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->statisticsDescriptor() = *(yyvsp[(1) - (1)].statisticsDescriptor);
    delete (yyvsp[(1) - (1)].statisticsDescriptor);
  ;}
    break;

  case 157:
#line 1815 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->packagesDescriptor() = *(yyvsp[(1) - (1)].packagesDescriptor);
    delete (yyvsp[(1) - (1)].packagesDescriptor);
  ;}
    break;

  case 158:
#line 1821 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->errorDescriptor() = *(yyvsp[(1) - (1)].errorDescriptor);
    delete (yyvsp[(1) - (1)].errorDescriptor);
  ;}
    break;

  case 159:
#line 1827 "H248_p.y"
    {
    (yyval.auditReturnParameter) = new AuditReturnParameter;
    (yyval.auditReturnParameter)->emptyDescriptors() = (yyvsp[(1) - (1)].auditTokens);
  ;}
    break;

  case 160:
#line 1834 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::muxToken; ;}
    break;

  case 161:
#line 1835 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::modemToken; ;}
    break;

  case 162:
#line 1836 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::mediaToken; ;}
    break;

  case 163:
#line 1837 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::digitMapToken; ;}
    break;

  case 164:
#line 1838 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::statsToken; ;}
    break;

  case 165:
#line 1839 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::observedEventsToken; ;}
    break;

  case 166:
#line 1840 "H248_p.y"
    { (yyval.auditTokens) = AuditTokens::packagesToken; ;}
    break;

  case 167:
#line 1845 "H248_p.y"
    {
    (yyval.auditDescriptor) = new AuditDescriptor(NULL_VALUE);
  ;}
    break;

  case 168:
#line 1848 "H248_p.y"
    { (yyval.auditDescriptor) = (yyvsp[(3) - (4)].auditDescriptor); ;}
    break;

  case 169:
#line 1853 "H248_p.y"
    {
    (yyval.auditDescriptor) = new AuditDescriptor;
    (*(yyval.auditDescriptor))[0] = *(yyvsp[(1) - (1)].auditItem);
    delete (yyvsp[(1) - (1)].auditItem);
  ;}
    break;

  case 170:
#line 1859 "H248_p.y"
    {
    (yyval.auditDescriptor) = (yyvsp[(1) - (3)].auditDescriptor);
    (*(yyval.auditDescriptor))[(yyval.auditDescriptor)->size_of()] = *(yyvsp[(3) - (3)].auditItem);
    delete (yyvsp[(3) - (3)].auditItem);
  ;}
    break;

  case 171:
#line 1868 "H248_p.y"
    {
    (yyval.notifyRequest) = new NotifyRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].notifyBody));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].notifyBody);
  ;}
    break;

  case 172:
#line 1877 "H248_p.y"
    {
    (yyval.notifyBody) = new NotifyBody(*(yyvsp[(1) - (1)].observedEventsDescriptor), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].observedEventsDescriptor);
  ;}
    break;

  case 173:
#line 1882 "H248_p.y"
    {
    (yyval.notifyBody) = new NotifyBody(*(yyvsp[(1) - (3)].observedEventsDescriptor), *(yyvsp[(3) - (3)].errorDescriptor));
    delete (yyvsp[(1) - (3)].observedEventsDescriptor);
    delete (yyvsp[(3) - (3)].errorDescriptor);
  ;}
    break;

  case 174:
#line 1891 "H248_p.y"
    {
    (yyval.notifyReply) = new NotifyReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 175:
#line 1896 "H248_p.y"
    {
    (yyval.notifyReply) = new NotifyReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].errorDescriptor));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].errorDescriptor);
  ;}
    break;

  case 176:
#line 1905 "H248_p.y"
    {
    (yyval.serviceChangeRequest) = new ServiceChangeRequest(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].serviceChangeDescriptor));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].serviceChangeDescriptor);
  ;}
    break;

  case 177:
#line 1914 "H248_p.y"
    {
    (yyval.serviceChangeReply) = new ServiceChangeReply(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 178:
#line 1919 "H248_p.y"
    {
    (yyval.serviceChangeReply) = new ServiceChangeReply(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].serviceChangeResult));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].serviceChangeResult);
  ;}
    break;

  case 179:
#line 1928 "H248_p.y"
    {
    (yyval.serviceChangeResult) = new ServiceChangeResult;
    (yyval.serviceChangeResult)->errorDescriptor() = *(yyvsp[(1) - (1)].errorDescriptor);
    delete (yyvsp[(1) - (1)].errorDescriptor);
  ;}
    break;

  case 180:
#line 1934 "H248_p.y"
    {
    (yyval.serviceChangeResult) = new ServiceChangeResult;
    (yyval.serviceChangeResult)->serviceChangeResParms() = *(yyvsp[(1) - (1)].serviceChangeResParm);
    delete (yyvsp[(1) - (1)].serviceChangeResParm);
  ;}
    break;

  case 181:
#line 1943 "H248_p.y"
    {
    (yyval.errorDescriptor) = new ErrorDescriptor((yyvsp[(3) - (5)].i), OMIT_VALUE);
  ;}
    break;

  case 182:
#line 1947 "H248_p.y"
    {
    (yyval.errorDescriptor) = new ErrorDescriptor((yyvsp[(3) - (6)].i), substr(*(yyvsp[(5) - (6)].charstring), 1, (yyvsp[(5) - (6)].charstring)->lengthof() - 2));
    delete (yyvsp[(5) - (6)].charstring);
  ;}
    break;

  case 183:
#line 1955 "H248_p.y"
    {
    /* 1*4(DIGIT) ; could be extended */
    if (strlen((yyvsp[(1) - (1)].str)) > 4) yyerror("Number %s is too long for ErrorCode", (yyvsp[(1) - (1)].str));
    (yyval.i) = atoi((yyvsp[(1) - (1)].str));
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 184:
#line 1964 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 185:
#line 1969 "H248_p.y"
    {
    (yyval.mId) = new MId;
    IP4Address& addr = (yyval.mId)->ip4Address();
    addr.field__address() = *(yyvsp[(1) - (1)].charstring);
    addr.portNumber() = OMIT_VALUE;
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 186:
#line 1977 "H248_p.y"
    {
    (yyval.mId) = new MId;
    IP4Address& addr = (yyval.mId)->ip4Address();
    addr.field__address() = *(yyvsp[(1) - (3)].charstring);
    addr.portNumber() = (yyvsp[(3) - (3)].i);
    delete (yyvsp[(1) - (3)].charstring);
  ;}
    break;

  case 187:
#line 1985 "H248_p.y"
    {
    (yyval.mId) = new MId;
    IP6Address& addr = (yyval.mId)->ip6Address();
    addr.field__address() = *(yyvsp[(1) - (1)].charstring);
    addr.portNumber() = OMIT_VALUE;
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 188:
#line 1993 "H248_p.y"
    {
    (yyval.mId) = new MId;
    IP6Address& addr = (yyval.mId)->ip6Address();
    addr.field__address() = *(yyvsp[(1) - (3)].charstring);
    addr.portNumber() = (yyvsp[(3) - (3)].i);
    delete (yyvsp[(1) - (3)].charstring);
  ;}
    break;

  case 189:
#line 2001 "H248_p.y"
    {
    (yyval.mId) = new MId;
    DomainName& name = (yyval.mId)->domainName();
    name.name() = *(yyvsp[(1) - (1)].charstring);
    name.portNumber() = OMIT_VALUE;
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 190:
#line 2009 "H248_p.y"
    {
    (yyval.mId) = new MId;
    DomainName& name = (yyval.mId)->domainName();
    name.name() = *(yyvsp[(1) - (3)].charstring);
    name.portNumber() = (yyvsp[(3) - (3)].i);
    delete (yyvsp[(1) - (3)].charstring);
  ;}
    break;

  case 191:
#line 2017 "H248_p.y"
    {
    (yyval.mId) = new MId;
    (yyval.mId)->mtpAddress() = hex2oct(str2hex((yyvsp[(1) - (1)].str)));
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 192:
#line 2023 "H248_p.y"
    {
    (yyval.mId) = new MId;
    (yyval.mId)->deviceName() = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 193:
#line 2031 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 194:
#line 2032 "H248_p.y"
    { (yyval.str) = mcopystr("*"); ;}
    break;

  case 195:
#line 2033 "H248_p.y"
    { (yyval.str) = mcopystr("-"); ;}
    break;

  case 196:
#line 2034 "H248_p.y"
    { (yyval.str) = mcopystr("$"); ;}
    break;

  case 197:
#line 2038 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 198:
#line 2042 "H248_p.y"
    { (yyval.str) = (yyvsp[(3) - (4)].str); ;}
    break;

  case 199:
#line 2046 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 200:
#line 2048 "H248_p.y"
    {
    delete (yyvsp[(2) - (3)].terminationIDList);
    yyerror("Not supported: multiple TerminationIDs in termIDList");
  ;}
    break;

  case 201:
#line 2056 "H248_p.y"
    {
    (yyval.terminationIDList) = new TerminationIDList;
    (*(yyval.terminationIDList))[0] = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 202:
#line 2062 "H248_p.y"
    {
    (yyval.terminationIDList) = (yyvsp[(1) - (3)].terminationIDList);
    (*(yyval.terminationIDList))[(yyval.terminationIDList)->size_of()] = *(yyvsp[(3) - (3)].charstring);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 203:
#line 2070 "H248_p.y"
    { (yyval.mediaDescriptor) = (yyvsp[(3) - (4)].mediaDescriptor); ;}
    break;

  case 204:
#line 2075 "H248_p.y"
    {
    (yyval.mediaDescriptor) = new MediaDescriptor(OMIT_VALUE, OMIT_VALUE);
    Merge_MediaParm(*(yyval.mediaDescriptor), (yyvsp[(1) - (1)].mediaParm));
    Free_MediaParm((yyvsp[(1) - (1)].mediaParm));
  ;}
    break;

  case 205:
#line 2081 "H248_p.y"
    {
    (yyval.mediaDescriptor) = (yyvsp[(1) - (3)].mediaDescriptor);
    Merge_MediaParm(*(yyval.mediaDescriptor), (yyvsp[(3) - (3)].mediaParm));
    Free_MediaParm((yyvsp[(3) - (3)].mediaParm));
  ;}
    break;

  case 206:
#line 2089 "H248_p.y"
    { (yyval.mediaParm) = (yyvsp[(1) - (1)].mediaParm); ;}
    break;

  case 207:
#line 2091 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_streamDescriptor;
    (yyval.mediaParm).streamDescriptor = (yyvsp[(1) - (1)].streamDescriptor);
  ;}
    break;

  case 208:
#line 2096 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_terminationStateDescriptor;
    (yyval.mediaParm).terminationStateDescriptor = (yyvsp[(1) - (1)].terminationStateDescriptor);
  ;}
    break;

  case 209:
#line 2104 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_localDescriptor;
    (yyval.mediaParm).localDescriptor = (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 210:
#line 2109 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_remoteDescriptor;
    (yyval.mediaParm).remoteDescriptor = (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 211:
#line 2114 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_localControlDescriptor;
    (yyval.mediaParm).localControlDescriptor = (yyvsp[(1) - (1)].localControlDescriptor);
  ;}
    break;

  case 212:
#line 2119 "H248_p.y"
    {
    (yyval.mediaParm).selector = MediaParm::S_statisticsDescriptor;
    (yyval.mediaParm).statisticsDescriptor = (yyvsp[(1) - (1)].statisticsDescriptor);
  ;}
    break;

  case 213:
#line 2127 "H248_p.y"
    {
    (yyval.streamDescriptor) = new StreamDescriptor((yyvsp[(3) - (6)].i), *(yyvsp[(5) - (6)].streamParm));
    delete (yyvsp[(5) - (6)].streamParm);
  ;}
    break;

  case 214:
#line 2135 "H248_p.y"
    {
    (yyval.streamParm) = new StreamParm(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_MediaParm(*(yyval.streamParm), (yyvsp[(1) - (1)].mediaParm));
    Free_MediaParm((yyvsp[(1) - (1)].mediaParm));
  ;}
    break;

  case 215:
#line 2141 "H248_p.y"
    {
    (yyval.streamParm) = (yyvsp[(1) - (3)].streamParm);
    Merge_MediaParm(*(yyval.streamParm), (yyvsp[(3) - (3)].mediaParm));
    Free_MediaParm((yyvsp[(3) - (3)].mediaParm));
  ;}
    break;

  case 216:
#line 2149 "H248_p.y"
    { (yyval.localControlDescriptor) = (yyvsp[(3) - (4)].localControlDescriptor); ;}
    break;

  case 217:
#line 2154 "H248_p.y"
    {
    (yyval.localControlDescriptor) = new LocalControlDescriptor;
    (*(yyval.localControlDescriptor))[0] = *(yyvsp[(1) - (1)].localParm);
    delete (yyvsp[(1) - (1)].localParm);
  ;}
    break;

  case 218:
#line 2160 "H248_p.y"
    {
    (yyval.localControlDescriptor) = (yyvsp[(1) - (3)].localControlDescriptor);
    (*(yyval.localControlDescriptor))[(yyval.localControlDescriptor)->size_of()] = *(yyvsp[(3) - (3)].localParm);
    delete (yyvsp[(3) - (3)].localParm);
  ;}
    break;

  case 219:
#line 2169 "H248_p.y"
    {
    (yyval.localParm) = new LocalParm;
    (yyval.localParm)->streamMode() = (yyvsp[(1) - (1)].streamMode);
  ;}
    break;

  case 220:
#line 2174 "H248_p.y"
    {
    (yyval.localParm) = new LocalParm;
    (yyval.localParm)->propertyParm() = *(yyvsp[(1) - (1)].propertyParm);
    delete (yyvsp[(1) - (1)].propertyParm);
  ;}
    break;

  case 221:
#line 2180 "H248_p.y"
    {
    (yyval.localParm) = new LocalParm;
    (yyval.localParm)->reserveValue() = (yyvsp[(1) - (1)].b);
  ;}
    break;

  case 222:
#line 2185 "H248_p.y"
    {
    (yyval.localParm) = new LocalParm;
    (yyval.localParm)->reserveGroup() = (yyvsp[(1) - (1)].b);
  ;}
    break;

  case 223:
#line 2192 "H248_p.y"
    { (yyval.b) = TRUE; ;}
    break;

  case 224:
#line 2193 "H248_p.y"
    { (yyval.b) = FALSE; ;}
    break;

  case 225:
#line 2197 "H248_p.y"
    { (yyval.b) = TRUE; ;}
    break;

  case 226:
#line 2198 "H248_p.y"
    { (yyval.b) = FALSE; ;}
    break;

  case 227:
#line 2202 "H248_p.y"
    { (yyval.streamMode) = (yyvsp[(3) - (3)].streamMode); ;}
    break;

  case 228:
#line 2206 "H248_p.y"
    { (yyval.streamMode) = StreamMode::sendOnly; ;}
    break;

  case 229:
#line 2207 "H248_p.y"
    { (yyval.streamMode) = StreamMode::recvOnly; ;}
    break;

  case 230:
#line 2208 "H248_p.y"
    { (yyval.streamMode) = StreamMode::sendRecv; ;}
    break;

  case 231:
#line 2209 "H248_p.y"
    { (yyval.streamMode) = StreamMode::inactive; ;}
    break;

  case 232:
#line 2210 "H248_p.y"
    { (yyval.streamMode) = StreamMode::loopBack; ;}
    break;

  case 233:
#line 2215 "H248_p.y"
    {
    (yyval.propertyParm) = new PropertyParm(*(yyvsp[(1) - (2)].pkgdName), *(yyvsp[(2) - (2)].parmValue));
    delete (yyvsp[(1) - (2)].pkgdName);
    delete (yyvsp[(2) - (2)].parmValue);
  ;}
    break;

  case 234:
#line 2224 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->equal() = *(yyvsp[(2) - (2)].charstring);
    delete (yyvsp[(2) - (2)].charstring);
  ;}
    break;

  case 235:
#line 2230 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->alternatives() = *(yyvsp[(3) - (4)].valueList);
    delete (yyvsp[(3) - (4)].valueList);
  ;}
    break;

  case 236:
#line 2236 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->sublist() = *(yyvsp[(3) - (4)].valueList);
    delete (yyvsp[(3) - (4)].valueList);
  ;}
    break;

  case 237:
#line 2242 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    Range& range = (yyval.parmValue)->range();
    range.lower() = *(yyvsp[(3) - (6)].charstring);
    range.upper() = *(yyvsp[(5) - (6)].charstring);
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].charstring);
  ;}
    break;

  case 238:
#line 2251 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->greaterthan() = *(yyvsp[(2) - (2)].charstring);
    delete (yyvsp[(2) - (2)].charstring);
  ;}
    break;

  case 239:
#line 2257 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->lessthan() = *(yyvsp[(2) - (2)].charstring);
    delete (yyvsp[(2) - (2)].charstring);
  ;}
    break;

  case 240:
#line 2263 "H248_p.y"
    {
    (yyval.parmValue) = new ParmValue;
    (yyval.parmValue)->notequal() = *(yyvsp[(2) - (2)].charstring);
    delete (yyvsp[(2) - (2)].charstring);
  ;}
    break;

  case 241:
#line 2272 "H248_p.y"
    {
    (yyval.valueList) = new ValueList;
    (*(yyval.valueList))[0] = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 242:
#line 2278 "H248_p.y"
    {
    (yyval.valueList) = (yyvsp[(1) - (3)].valueList);
    (*(yyval.valueList))[(yyval.valueList)->size_of()] = *(yyvsp[(3) - (3)].charstring);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 243:
#line 2286 "H248_p.y"
    { (yyval.charstring) = new CHARSTRING(0, NULL); ;}
    break;

  case 244:
#line 2287 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(3) - (4)].charstring); ;}
    break;

  case 245:
#line 2291 "H248_p.y"
    { (yyval.charstring) = new CHARSTRING(0, NULL); ;}
    break;

  case 246:
#line 2292 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(3) - (4)].charstring); ;}
    break;

  case 247:
#line 2297 "H248_p.y"
    {
    (yyval.eventBufferDescriptor) = new EventBufferDescriptor(OMIT_VALUE);
  ;}
    break;

  case 248:
#line 2301 "H248_p.y"
    {
    (yyval.eventBufferDescriptor) = new EventBufferDescriptor(*(yyvsp[(3) - (4)].eventSpecList));
    delete (yyvsp[(3) - (4)].eventSpecList);
  ;}
    break;

  case 249:
#line 2309 "H248_p.y"
    {
    (yyval.eventSpecList) = new EventSpecList;
    (*(yyval.eventSpecList))[0] = *(yyvsp[(1) - (1)].eventSpec);
    delete (yyvsp[(1) - (1)].eventSpec);
  ;}
    break;

  case 250:
#line 2315 "H248_p.y"
    {
    (yyval.eventSpecList) = (yyvsp[(1) - (3)].eventSpecList);
    (*(yyval.eventSpecList))[(yyval.eventSpecList)->size_of()] = *(yyvsp[(3) - (3)].eventSpec);
    delete (yyvsp[(3) - (3)].eventSpec);
  ;}
    break;

  case 251:
#line 2324 "H248_p.y"
    {
    (yyval.eventSpec) = new EventSpec(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 252:
#line 2329 "H248_p.y"
    {
    (yyval.eventSpec) = new EventSpec(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].eventParOrStreamList));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].eventParOrStreamList);
  ;}
    break;

  case 253:
#line 2338 "H248_p.y"
    {
    (yyval.eventParOrStreamList) = new EventParOrStreamList;
    (*(yyval.eventParOrStreamList))[0] = *(yyvsp[(1) - (1)].eventParOrStream);
    delete (yyvsp[(1) - (1)].eventParOrStream);
  ;}
    break;

  case 254:
#line 2344 "H248_p.y"
    {
    (yyval.eventParOrStreamList) = (yyvsp[(1) - (3)].eventParOrStreamList);
    (*(yyval.eventParOrStreamList))[(yyval.eventParOrStreamList)->size_of()] = *(yyvsp[(3) - (3)].eventParOrStream);
    delete (yyvsp[(3) - (3)].eventParOrStream);
  ;}
    break;

  case 255:
#line 2353 "H248_p.y"
    {
    (yyval.eventParOrStream) = new EventParOrStream;
    (yyval.eventParOrStream)->streamID() = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 256:
#line 2358 "H248_p.y"
    {
    (yyval.eventParOrStream) = new EventParOrStream;
    (yyval.eventParOrStream)->eventPar() = *(yyvsp[(1) - (1)].eventParameter);
    delete (yyvsp[(1) - (1)].eventParameter);
  ;}
    break;

  case 257:
#line 2366 "H248_p.y"
    { (yyval.eventBufferControl) = (yyvsp[(3) - (3)].eventBufferControl); ;}
    break;

  case 258:
#line 2370 "H248_p.y"
    { (yyval.eventBufferControl) = EventBufferControl::off; ;}
    break;

  case 259:
#line 2371 "H248_p.y"
    { (yyval.eventBufferControl) = EventBufferControl::lockStep; ;}
    break;

  case 260:
#line 2375 "H248_p.y"
    { (yyval.terminationStateDescriptor) = (yyvsp[(3) - (4)].terminationStateDescriptor); ;}
    break;

  case 261:
#line 2380 "H248_p.y"
    {
    (yyval.terminationStateDescriptor) = new TerminationStateDescriptor(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_TerminationStateParm(*(yyval.terminationStateDescriptor), (yyvsp[(1) - (1)].terminationStateParm));
    Free_TerminationStateParm((yyvsp[(1) - (1)].terminationStateParm));
  ;}
    break;

  case 262:
#line 2386 "H248_p.y"
    {
    (yyval.terminationStateDescriptor) = (yyvsp[(1) - (3)].terminationStateDescriptor);
    Merge_TerminationStateParm(*(yyval.terminationStateDescriptor), (yyvsp[(3) - (3)].terminationStateParm));
    Free_TerminationStateParm((yyvsp[(3) - (3)].terminationStateParm));
  ;}
    break;

  case 263:
#line 2395 "H248_p.y"
    {
    (yyval.terminationStateParm).selector = TerminationStateParm::S_propertyParm;
    (yyval.terminationStateParm).propertyParm = (yyvsp[(1) - (1)].propertyParm);
  ;}
    break;

  case 264:
#line 2400 "H248_p.y"
    {
    (yyval.terminationStateParm).selector = TerminationStateParm::S_serviceStates;
    (yyval.terminationStateParm).serviceStates = (yyvsp[(1) - (1)].serviceState);
  ;}
    break;

  case 265:
#line 2405 "H248_p.y"
    {
    (yyval.terminationStateParm).selector = TerminationStateParm::S_eventBufferControl;
    (yyval.terminationStateParm).eventBufferControl = (yyvsp[(1) - (1)].eventBufferControl);
  ;}
    break;

  case 266:
#line 2412 "H248_p.y"
    { (yyval.serviceState) = (yyvsp[(3) - (3)].serviceState); ;}
    break;

  case 267:
#line 2416 "H248_p.y"
    { (yyval.serviceState) = ServiceState::test; ;}
    break;

  case 268:
#line 2417 "H248_p.y"
    { (yyval.serviceState) = ServiceState::outOfSvc; ;}
    break;

  case 269:
#line 2418 "H248_p.y"
    { (yyval.serviceState) = ServiceState::inSvc; ;}
    break;

  case 270:
#line 2423 "H248_p.y"
    {
    (yyval.muxDescriptor) = new MuxDescriptor((yyvsp[(3) - (6)].muxType), *(yyvsp[(5) - (6)].terminationIDList));
    delete (yyvsp[(5) - (6)].terminationIDList);
  ;}
    break;

  case 271:
#line 2430 "H248_p.y"
    { (yyval.muxType) = MuxType::h221; ;}
    break;

  case 272:
#line 2431 "H248_p.y"
    { (yyval.muxType) = MuxType::h223; ;}
    break;

  case 273:
#line 2432 "H248_p.y"
    { (yyval.muxType) = MuxType::h226; ;}
    break;

  case 274:
#line 2433 "H248_p.y"
    { (yyval.muxType) = MuxType::v76; ;}
    break;

  case 275:
#line 2435 "H248_p.y"
    {
    (yyval.muxType) = MuxType::extMxT;
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 276:
#line 2439 "H248_p.y"
    { (yyval.muxType) = MuxType::nx64k; ;}
    break;

  case 277:
#line 2443 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 278:
#line 2448 "H248_p.y"
    {
    (yyval.eventsDescriptor) = new EventsDescriptor(OMIT_VALUE);
  ;}
    break;

  case 279:
#line 2452 "H248_p.y"
    {
    (yyval.eventsDescriptor) = new EventsDescriptor;
    EventList& eventList = (yyval.eventsDescriptor)->events();
    eventList.requestID() = (yyvsp[(3) - (6)].str);
    Free((yyvsp[(3) - (6)].str));
    eventList.eventList() = *(yyvsp[(5) - (6)].requestedEventList);
    delete (yyvsp[(5) - (6)].requestedEventList);
  ;}
    break;

  case 280:
#line 2464 "H248_p.y"
    {
    (yyval.requestedEventList) = new RequestedEventList;
    (*(yyval.requestedEventList))[0] = *(yyvsp[(1) - (1)].requestedEvent);
    delete (yyvsp[(1) - (1)].requestedEvent);
  ;}
    break;

  case 281:
#line 2470 "H248_p.y"
    {
    (yyval.requestedEventList) = (yyvsp[(1) - (3)].requestedEventList);
    (*(yyval.requestedEventList))[(yyval.requestedEventList)->size_of()] = *(yyvsp[(3) - (3)].requestedEvent);
    delete (yyvsp[(3) - (3)].requestedEvent);
  ;}
    break;

  case 282:
#line 2479 "H248_p.y"
    {
    (yyval.requestedEvent) = new RequestedEvent(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 283:
#line 2484 "H248_p.y"
    {
    (yyval.requestedEvent) = new RequestedEvent(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].firstEventParameters));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].firstEventParameters);
  ;}
    break;

  case 284:
#line 2493 "H248_p.y"
    {
    (yyval.notifyRegulated) = new NotifyRegulated(OMIT_VALUE);
  ;}
    break;

  case 285:
#line 2497 "H248_p.y"
    {
    (yyval.notifyRegulated) = new NotifyRegulated(*(yyvsp[(3) - (4)].embedSig));
    delete (yyvsp[(3) - (4)].embedSig);
  ;}
    break;

  case 286:
#line 2502 "H248_p.y"
    {
    (yyval.notifyRegulated) = new NotifyRegulated(*(yyvsp[(3) - (4)].embedSig));
    delete (yyvsp[(3) - (4)].embedSig);
  ;}
    break;

  case 287:
#line 2510 "H248_p.y"
    {
    (yyval.notifyBehaviour) = new NotifyBehaviour;
    (yyval.notifyBehaviour)->notifyImmediate() = H248__token::present__;
  ;}
    break;

  case 288:
#line 2515 "H248_p.y"
    {
    (yyval.notifyBehaviour) = new NotifyBehaviour;
    (yyval.notifyBehaviour)->notifyRegulated() = *(yyvsp[(1) - (1)].notifyRegulated);
    delete (yyvsp[(1) - (1)].notifyRegulated);
  ;}
    break;

  case 289:
#line 2521 "H248_p.y"
    {
    (yyval.notifyBehaviour) = new NotifyBehaviour;
    (yyval.notifyBehaviour)->neverNotify() = H248__token::present__;
  ;}
    break;

  case 290:
#line 2529 "H248_p.y"
    {
    (yyval.firstEventParameters) = new FirstEventParameters(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_EventParm(*(yyval.firstEventParameters), (yyvsp[(1) - (1)].eventParm));
    Free_EventParm((yyvsp[(1) - (1)].eventParm));
  ;}
    break;

  case 291:
#line 2536 "H248_p.y"
    {
    (yyval.firstEventParameters) = (yyvsp[(1) - (3)].firstEventParameters);
    Merge_EventParm(*(yyval.firstEventParameters), (yyvsp[(3) - (3)].eventParm));
    Free_EventParm((yyvsp[(3) - (3)].eventParm));
  ;}
    break;

  case 292:
#line 2545 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_embedWithOrNoSig;
    (yyval.eventParm).embedWithOrNoSig = (yyvsp[(1) - (1)].embedSig);
  ;}
    break;

  case 293:
#line 2550 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_embedWithOrNoSig;
    (yyval.eventParm).embedWithOrNoSig = (yyvsp[(1) - (1)].embedSig);
  ;}
    break;

  case 294:
#line 2555 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_KeepActiveToken;
  ;}
    break;

  case 295:
#line 2559 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventDM;
    (yyval.eventParm).eventDM = (yyvsp[(1) - (1)].eventDM);
  ;}
    break;

  case 296:
#line 2564 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventStream;
    (yyval.eventParm).eventStream = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 297:
#line 2569 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventOther;
    (yyval.eventParm).eventOther = (yyvsp[(1) - (1)].eventParameter);
  ;}
    break;

  case 298:
#line 2574 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_notifyBehaviour;
    (yyval.eventParm).notifyBehaviour = (yyvsp[(1) - (1)].notifyBehaviour);
  ;}
    break;

  case 299:
#line 2579 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_ResetEventsDescriptorToken;
  ;}
    break;

  case 300:
#line 2586 "H248_p.y"
    {
    (yyval.embedSig) = new EmbedSig(*(yyvsp[(3) - (4)].signalsDescriptor), OMIT_VALUE);
    delete (yyvsp[(3) - (4)].signalsDescriptor);
  ;}
    break;

  case 301:
#line 2591 "H248_p.y"
    {
    (yyval.embedSig) = new EmbedSig(*(yyvsp[(3) - (6)].signalsDescriptor), *(yyvsp[(5) - (6)].embedFirst));
    delete (yyvsp[(3) - (6)].signalsDescriptor);
    delete (yyvsp[(5) - (6)].embedFirst);
  ;}
    break;

  case 302:
#line 2600 "H248_p.y"
    {
    (yyval.embedSig) = new EmbedSig(OMIT_VALUE, *(yyvsp[(3) - (4)].embedFirst));
    delete (yyvsp[(3) - (4)].embedFirst);
  ;}
    break;

  case 303:
#line 2608 "H248_p.y"
    {
    (yyval.embedFirst) = new EmbedFirst(OMIT_VALUE);
  ;}
    break;

  case 304:
#line 2612 "H248_p.y"
    {
    (yyval.embedFirst) = new EmbedFirst;
    SecondEventList& secondEventList = (yyval.embedFirst)->events();
    secondEventList.requestID() = (yyvsp[(3) - (6)].str);
    secondEventList.eventList() = *(yyvsp[(5) - (6)].secondRequestedEventList);
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].secondRequestedEventList);
  ;}
    break;

  case 305:
#line 2624 "H248_p.y"
    {
    (yyval.secondRequestedEventList) = new SecondRequestedEventList;
    (*(yyval.secondRequestedEventList))[0] = *(yyvsp[(1) - (1)].secondRequestedEvent);
    delete (yyvsp[(1) - (1)].secondRequestedEvent);
  ;}
    break;

  case 306:
#line 2630 "H248_p.y"
    {
    (yyval.secondRequestedEventList) = (yyvsp[(1) - (3)].secondRequestedEventList);
    (*(yyval.secondRequestedEventList))[(yyval.secondRequestedEventList)->size_of()] = *(yyvsp[(3) - (3)].secondRequestedEvent);
    delete (yyvsp[(3) - (3)].secondRequestedEvent);
  ;}
    break;

  case 307:
#line 2639 "H248_p.y"
    {
    (yyval.secondRequestedEvent) = new SecondRequestedEvent(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 308:
#line 2644 "H248_p.y"
    {
    (yyval.secondRequestedEvent) = new SecondRequestedEvent(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].secondEventParameters));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].secondEventParameters);
  ;}
    break;

  case 309:
#line 2653 "H248_p.y"
    {
    (yyval.secondEventParameters) = new SecondEventParameters(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_EventParm(*(yyval.secondEventParameters), (yyvsp[(1) - (1)].eventParm));
    Free_EventParm((yyvsp[(1) - (1)].eventParm));
  ;}
    break;

  case 310:
#line 2660 "H248_p.y"
    {
    (yyval.secondEventParameters) = (yyvsp[(1) - (3)].secondEventParameters);
    Merge_EventParm(*(yyval.secondEventParameters), (yyvsp[(3) - (3)].eventParm));
    Free_EventParm((yyvsp[(3) - (3)].eventParm));
  ;}
    break;

  case 311:
#line 2669 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_embedSig;
    (yyval.eventParm).embedSig = (yyvsp[(1) - (1)].signalsDescriptor);
  ;}
    break;

  case 312:
#line 2674 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_KeepActiveToken;
  ;}
    break;

  case 313:
#line 2678 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventDM;
    (yyval.eventParm).eventDM = (yyvsp[(1) - (1)].eventDM);
  ;}
    break;

  case 314:
#line 2683 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventStream;
    (yyval.eventParm).eventStream = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 315:
#line 2688 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_eventOther;
    (yyval.eventParm).eventOther = (yyvsp[(1) - (1)].eventParameter);
  ;}
    break;

  case 316:
#line 2693 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_notifyBehaviour;
    (yyval.eventParm).notifyBehaviour = (yyvsp[(1) - (1)].notifyBehaviour);
  ;}
    break;

  case 317:
#line 2698 "H248_p.y"
    {
    (yyval.eventParm).selector = EventParm::S_ResetEventsDescriptorToken;
  ;}
    break;

  case 318:
#line 2704 "H248_p.y"
    { (yyval.signalsDescriptor) = (yyvsp[(3) - (4)].signalsDescriptor); ;}
    break;

  case 319:
#line 2708 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 320:
#line 2712 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 321:
#line 2717 "H248_p.y"
    {
    (yyval.eventParameter) = new EventParameter(*(yyvsp[(1) - (2)].charstring), *(yyvsp[(2) - (2)].parmValue));
    delete (yyvsp[(1) - (2)].charstring);
    delete (yyvsp[(2) - (2)].parmValue);
  ;}
    break;

  case 322:
#line 2725 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 323:
#line 2730 "H248_p.y"
    {
    (yyval.eventDM) = new EventDM;
    (yyval.eventDM)->digitMapName() = *(yyvsp[(3) - (3)].charstring);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 324:
#line 2736 "H248_p.y"
    {
    (yyval.eventDM) = new EventDM;
    (yyval.eventDM)->digitMapValue() = *(yyvsp[(4) - (5)].digitMapValue);
    delete (yyvsp[(4) - (5)].digitMapValue);
  ;}
    break;

  case 325:
#line 2745 "H248_p.y"
    {
    (yyval.signalsDescriptor) = new SignalsDescriptor(OMIT_VALUE);
  ;}
    break;

  case 326:
#line 2749 "H248_p.y"
    {
    (yyval.signalsDescriptor) = new SignalsDescriptor(NULL_VALUE);
  ;}
    break;

  case 327:
#line 2753 "H248_p.y"
    {
    (yyval.signalsDescriptor) = new SignalsDescriptor(*(yyvsp[(3) - (4)].signalRequestList));
    delete (yyvsp[(3) - (4)].signalRequestList);
  ;}
    break;

  case 328:
#line 2761 "H248_p.y"
    {
    (yyval.signalRequestList) = new SignalRequestList;
    (*(yyval.signalRequestList))[0] = *(yyvsp[(1) - (1)].signalRequest);
    delete (yyvsp[(1) - (1)].signalRequest);
  ;}
    break;

  case 329:
#line 2767 "H248_p.y"
    {
    (yyval.signalRequestList) = (yyvsp[(1) - (3)].signalRequestList);
    (*(yyval.signalRequestList))[(yyval.signalRequestList)->size_of()] = *(yyvsp[(3) - (3)].signalRequest);
    delete (yyvsp[(3) - (3)].signalRequest);
  ;}
    break;

  case 330:
#line 2776 "H248_p.y"
    {
    (yyval.signalRequest) = new SignalRequest;
    (yyval.signalRequest)->seqSigList() = *(yyvsp[(1) - (1)].seqSigList);
    delete (yyvsp[(1) - (1)].seqSigList);
  ;}
    break;

  case 331:
#line 2782 "H248_p.y"
    {
    (yyval.signalRequest) = new SignalRequest;
    (yyval.signalRequest)->signal() = *(yyvsp[(1) - (1)].signal);
    delete (yyvsp[(1) - (1)].signal);
  ;}
    break;

  case 332:
#line 2791 "H248_p.y"
    {
    (yyval.signal) = new Signal(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 333:
#line 2796 "H248_p.y"
    {
    (yyval.signal) = new Signal(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].signalParams));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].signalParams);
  ;}
    break;

  case 334:
#line 2805 "H248_p.y"
    {
    (yyval.signalParams) = new SignalParams(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE, OMIT_VALUE, OMIT_VALUE);
    Merge_SignalParameter(*(yyval.signalParams), (yyvsp[(1) - (1)].signalParameter));
    Free_SignalParameter((yyvsp[(1) - (1)].signalParameter));
  ;}
    break;

  case 335:
#line 2812 "H248_p.y"
    {
    (yyval.signalParams) = (yyvsp[(1) - (3)].signalParams);
    Merge_SignalParameter(*(yyval.signalParams), (yyvsp[(3) - (3)].signalParameter));
    Free_SignalParameter((yyvsp[(3) - (3)].signalParameter));
  ;}
    break;

  case 336:
#line 2821 "H248_p.y"
    {
    (yyval.seqSigList) = new SeqSigList((yyvsp[(3) - (6)].i), *(yyvsp[(5) - (6)].signalList));
    delete (yyvsp[(5) - (6)].signalList);
  ;}
    break;

  case 337:
#line 2828 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i); ;}
    break;

  case 338:
#line 2833 "H248_p.y"
    {
    (yyval.signalList) = new SignalList;
    (*(yyval.signalList))[0] = *(yyvsp[(1) - (1)].signal);
    delete (yyvsp[(1) - (1)].signal);
  ;}
    break;

  case 339:
#line 2839 "H248_p.y"
    {
    (yyval.signalList) = (yyvsp[(1) - (3)].signalList);
    (*(yyval.signalList))[(yyval.signalList)->size_of()] = *(yyvsp[(3) - (3)].signal);
    delete (yyvsp[(3) - (3)].signal);
  ;}
    break;

  case 340:
#line 2847 "H248_p.y"
    { (yyval.signal) = (yyvsp[(1) - (1)].signal); ;}
    break;

  case 341:
#line 2851 "H248_p.y"
    { (yyval.pkgdName) = (yyvsp[(1) - (1)].pkgdName); ;}
    break;

  case 342:
#line 2856 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigStream;
    (yyval.signalParameter).sigStream = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 343:
#line 2861 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigSignalType;
    (yyval.signalParameter).sigSignalType = (yyvsp[(1) - (1)].signalType);
  ;}
    break;

  case 344:
#line 2866 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigDuration;
    (yyval.signalParameter).sigDuration = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 345:
#line 2871 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigOther;
    (yyval.signalParameter).sigOther = (yyvsp[(1) - (1)].sigParameter);
  ;}
    break;

  case 346:
#line 2876 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_notifyCompletion;
    (yyval.signalParameter).notifyCompletion = (yyvsp[(1) - (1)].notificationReasonList);
  ;}
    break;

  case 347:
#line 2881 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_KeepActiveToken;
  ;}
    break;

  case 348:
#line 2885 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigDirection;
    (yyval.signalParameter).sigDirection = (yyvsp[(1) - (1)].sigDirection);
  ;}
    break;

  case 349:
#line 2890 "H248_p.y"
    {
    (yyval.signalParameter).selector = SignalParameter::S_sigRequestID;
    (yyval.signalParameter).sigRequestID = (yyvsp[(1) - (1)].str);
  ;}
    break;

  case 350:
#line 2897 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 351:
#line 2902 "H248_p.y"
    {
    (yyval.sigParameter) = new SigParameter(*(yyvsp[(1) - (2)].charstring), *(yyvsp[(2) - (2)].parmValue));
    delete (yyvsp[(1) - (2)].charstring);
    delete (yyvsp[(2) - (2)].parmValue);
  ;}
    break;

  case 352:
#line 2910 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 353:
#line 2914 "H248_p.y"
    { (yyval.signalType) = (yyvsp[(3) - (3)].signalType); ;}
    break;

  case 354:
#line 2918 "H248_p.y"
    { (yyval.signalType) = SignalType::onOff; ;}
    break;

  case 355:
#line 2919 "H248_p.y"
    { (yyval.signalType) = SignalType::timeOut; ;}
    break;

  case 356:
#line 2920 "H248_p.y"
    { (yyval.signalType) = SignalType::brief; ;}
    break;

  case 357:
#line 2924 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 358:
#line 2928 "H248_p.y"
    { (yyval.sigDirection) = (yyvsp[(3) - (3)].sigDirection); ;}
    break;

  case 359:
#line 2932 "H248_p.y"
    { (yyval.sigDirection) = SigDirection::External; ;}
    break;

  case 360:
#line 2933 "H248_p.y"
    { (yyval.sigDirection) = SigDirection::Internal; ;}
    break;

  case 361:
#line 2934 "H248_p.y"
    { (yyval.sigDirection) = SigDirection::Both; ;}
    break;

  case 362:
#line 2938 "H248_p.y"
    { (yyval.str) = (yyvsp[(3) - (3)].str); ;}
    break;

  case 363:
#line 2948 "H248_p.y"
    { (yyval.notificationReasonList) = (yyvsp[(4) - (5)].notificationReasonList); ;}
    break;

  case 364:
#line 2953 "H248_p.y"
    {
    (yyval.notificationReasonList).TimeOut = ((yyvsp[(1) - (1)].notificationReason) == NR_TimeOut);
    (yyval.notificationReasonList).InterruptByEvent = ((yyvsp[(1) - (1)].notificationReason) == NR_InterruptByEvent);
    (yyval.notificationReasonList).InterruptByNewSignalsDescr = ((yyvsp[(1) - (1)].notificationReason) == NR_InterruptByNewSignalsDescr);
    (yyval.notificationReasonList).OtherReason = ((yyvsp[(1) - (1)].notificationReason) == NR_OtherReason);
    (yyval.notificationReasonList).Iteration = ((yyvsp[(1) - (1)].notificationReason) == NR_Iteration);
  ;}
    break;

  case 365:
#line 2961 "H248_p.y"
    {
    (yyval.notificationReasonList) = (yyvsp[(1) - (3)].notificationReasonList);
    switch ((yyvsp[(3) - (3)].notificationReason)) {
    case NR_TimeOut:
      if ((yyval.notificationReasonList).TimeOut) yyerror("Duplicate TimeOutToken in notifyCompletion");
      (yyval.notificationReasonList).TimeOut = TRUE;
      break;
    case NR_InterruptByEvent:
      if ((yyval.notificationReasonList).InterruptByEvent) yyerror("Duplicate InterruptByEventToken in "
	"notifyCompletion");
      (yyval.notificationReasonList).InterruptByEvent = TRUE;
      break;
    case NR_InterruptByNewSignalsDescr:
      if ((yyval.notificationReasonList).InterruptByNewSignalsDescr) yyerror("Duplicate "
	"InterruptByNewSignalsDescrToken in notifyCompletion");
      (yyval.notificationReasonList).InterruptByNewSignalsDescr = TRUE;
      break;
    case NR_OtherReason:
      if ((yyval.notificationReasonList).OtherReason) yyerror("Duplicate OtherReasonToken in "
	"notifyCompletion");
      (yyval.notificationReasonList).OtherReason = TRUE;
      break;
    case NR_Iteration:
      if ((yyval.notificationReasonList).Iteration) yyerror("Duplicate IterationToken in notifyCompletion");
      (yyval.notificationReasonList).Iteration = TRUE;
      break;
    default:
      yyerror("Internal error: invalid notificationReason");
    }
  ;}
    break;

  case 366:
#line 2994 "H248_p.y"
    { (yyval.notificationReason) = NR_TimeOut; ;}
    break;

  case 367:
#line 2995 "H248_p.y"
    { (yyval.notificationReason) = NR_InterruptByEvent; ;}
    break;

  case 368:
#line 2996 "H248_p.y"
    { (yyval.notificationReason) = NR_InterruptByNewSignalsDescr; ;}
    break;

  case 369:
#line 2997 "H248_p.y"
    { (yyval.notificationReason) = NR_OtherReason; ;}
    break;

  case 370:
#line 2998 "H248_p.y"
    { (yyval.notificationReason) = NR_Iteration; ;}
    break;

  case 371:
#line 3003 "H248_p.y"
    {
    (yyval.observedEventsDescriptor) = new ObservedEventsDescriptor((yyvsp[(3) - (6)].str), *(yyvsp[(5) - (6)].observedEventList));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].observedEventList);
  ;}
    break;

  case 372:
#line 3012 "H248_p.y"
    {
    (yyval.observedEventList) = new ObservedEventList;
    (*(yyval.observedEventList))[0] = *(yyvsp[(1) - (1)].observedEvent);
    delete (yyvsp[(1) - (1)].observedEvent);
  ;}
    break;

  case 373:
#line 3018 "H248_p.y"
    {
    (yyval.observedEventList) = (yyvsp[(1) - (3)].observedEventList);
    (*(yyval.observedEventList))[(yyval.observedEventList)->size_of()] = *(yyvsp[(3) - (3)].observedEvent);
    delete (yyvsp[(3) - (3)].observedEvent);
  ;}
    break;

  case 374:
#line 3027 "H248_p.y"
    {
    (yyval.observedEvent) = new ObservedEvent(*(yyvsp[(1) - (1)].timeAndEvent), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].timeAndEvent);
  ;}
    break;

  case 375:
#line 3032 "H248_p.y"
    {
    (yyval.observedEvent) = new ObservedEvent(*(yyvsp[(1) - (4)].timeAndEvent), *(yyvsp[(3) - (4)].eventParOrStreamList));
    delete (yyvsp[(1) - (4)].timeAndEvent);
    delete (yyvsp[(3) - (4)].eventParOrStreamList);
  ;}
    break;

  case 376:
#line 3041 "H248_p.y"
    {
    (yyval.timeAndEvent) = new TimeAndEvent(OMIT_VALUE, *(yyvsp[(1) - (1)].pkgdName));
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 377:
#line 3046 "H248_p.y"
    {
    (yyval.timeAndEvent) = new TimeAndEvent(*(yyvsp[(1) - (3)].timeNotation), *(yyvsp[(3) - (3)].pkgdName));
    delete (yyvsp[(1) - (3)].timeNotation);
    delete (yyvsp[(3) - (3)].pkgdName);
  ;}
    break;

  case 378:
#line 3055 "H248_p.y"
    {
    (yyval.eventParOrStreamList) = new EventParOrStreamList;
    (*(yyval.eventParOrStreamList))[0] = *(yyvsp[(1) - (1)].eventParOrStream);
    delete (yyvsp[(1) - (1)].eventParOrStream);
  ;}
    break;

  case 379:
#line 3061 "H248_p.y"
    {
    (yyval.eventParOrStreamList) = (yyvsp[(1) - (3)].eventParOrStreamList);
    (*(yyval.eventParOrStreamList))[(yyval.eventParOrStreamList)->size_of()] = *(yyvsp[(3) - (3)].eventParOrStream);
    delete (yyvsp[(3) - (3)].eventParOrStream);
  ;}
    break;

  case 380:
#line 3070 "H248_p.y"
    {
    (yyval.eventParOrStream) = new EventParOrStream;
    (yyval.eventParOrStream)->streamID() = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 381:
#line 3075 "H248_p.y"
    {
    (yyval.eventParOrStream) = new EventParOrStream;
    (yyval.eventParOrStream)->eventPar() = *(yyvsp[(1) - (1)].eventParameter);
    delete (yyvsp[(1) - (1)].eventParameter);
  ;}
    break;

  case 382:
#line 3083 "H248_p.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); ;}
    break;

  case 383:
#line 3084 "H248_p.y"
    { (yyval.str) = mcopystr("*"); ;}
    break;

  case 384:
#line 3089 "H248_p.y"
    {
    (yyval.modemDescriptor) = new ModemDescriptor(*(yyvsp[(2) - (2)].modems), OMIT_VALUE);
    delete (yyvsp[(2) - (2)].modems);
  ;}
    break;

  case 385:
#line 3094 "H248_p.y"
    {
    (yyval.modemDescriptor) = new ModemDescriptor(*(yyvsp[(2) - (5)].modems), *(yyvsp[(4) - (5)].propertyParmList));
    delete (yyvsp[(2) - (5)].modems);
    delete (yyvsp[(4) - (5)].propertyParmList);
  ;}
    break;

  case 386:
#line 3103 "H248_p.y"
    {
    (yyval.modems) = new Modems;
    (yyval.modems)->single() = (yyvsp[(2) - (2)].modemType);
  ;}
    break;

  case 387:
#line 3108 "H248_p.y"
    {
    (yyval.modems) = new Modems;
    (yyval.modems)->list() = *(yyvsp[(2) - (3)].modemTypeList);
    delete (yyvsp[(2) - (3)].modemTypeList);
  ;}
    break;

  case 388:
#line 3117 "H248_p.y"
    {
    (yyval.propertyParmList) = new PropertyParmList;
    (*(yyval.propertyParmList))[0] = *(yyvsp[(1) - (1)].propertyParm);
    delete (yyvsp[(1) - (1)].propertyParm);
  ;}
    break;

  case 389:
#line 3123 "H248_p.y"
    {
    (yyval.propertyParmList) = (yyvsp[(1) - (3)].propertyParmList);
    (*(yyval.propertyParmList))[(yyval.propertyParmList)->size_of()] = *(yyvsp[(3) - (3)].propertyParm);
    delete (yyvsp[(3) - (3)].propertyParm);
  ;}
    break;

  case 390:
#line 3132 "H248_p.y"
    {
    (yyval.modemTypeList) = new ModemTypeList;
    (*(yyval.modemTypeList))[0] = (yyvsp[(1) - (1)].modemType);
  ;}
    break;

  case 391:
#line 3137 "H248_p.y"
    {
    (yyval.modemTypeList) = (yyvsp[(1) - (3)].modemTypeList);
    (*(yyval.modemTypeList))[(yyval.modemTypeList)->size_of()] = (yyvsp[(3) - (3)].modemType);
  ;}
    break;

  case 392:
#line 3144 "H248_p.y"
    { (yyval.modemType) = ModemType::v32bis; ;}
    break;

  case 393:
#line 3145 "H248_p.y"
    { (yyval.modemType) = ModemType::v22bis; ;}
    break;

  case 394:
#line 3146 "H248_p.y"
    { (yyval.modemType) = ModemType::v18; ;}
    break;

  case 395:
#line 3147 "H248_p.y"
    { (yyval.modemType) = ModemType::v22; ;}
    break;

  case 396:
#line 3148 "H248_p.y"
    { (yyval.modemType) = ModemType::v32; ;}
    break;

  case 397:
#line 3149 "H248_p.y"
    { (yyval.modemType) = ModemType::v34; ;}
    break;

  case 398:
#line 3150 "H248_p.y"
    { (yyval.modemType) = ModemType::v90; ;}
    break;

  case 399:
#line 3151 "H248_p.y"
    { (yyval.modemType) = ModemType::v91; ;}
    break;

  case 400:
#line 3152 "H248_p.y"
    { (yyval.modemType) = ModemType::synchISDN; ;}
    break;

  case 401:
#line 3154 "H248_p.y"
    {
    (yyval.modemType) = ModemType::extMT;
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 402:
#line 3162 "H248_p.y"
    {
    (yyval.digitMapDescriptor) = new DigitMapDescriptor(*(yyvsp[(3) - (3)].charstring), OMIT_VALUE);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 403:
#line 3167 "H248_p.y"
    {
    (yyval.digitMapDescriptor) = new DigitMapDescriptor(*(yyvsp[(3) - (6)].charstring), *(yyvsp[(5) - (6)].digitMapValue));
    delete (yyvsp[(3) - (6)].charstring);
    delete (yyvsp[(5) - (6)].digitMapValue);
  ;}
    break;

  case 404:
#line 3173 "H248_p.y"
    {
    (yyval.digitMapDescriptor) = new DigitMapDescriptor(OMIT_VALUE, *(yyvsp[(4) - (5)].digitMapValue));
    delete (yyvsp[(4) - (5)].digitMapValue);
  ;}
    break;

  case 405:
#line 3180 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 406:
#line 3185 "H248_p.y"
    {
    (yyval.digitMapValue) = new DigitMapValue;
    if ((yyvsp[(1) - (5)].i) < 0) (yyval.digitMapValue)->startTimer() = OMIT_VALUE;
    else (yyval.digitMapValue)->startTimer()() = (yyvsp[(1) - (5)].i);
    if ((yyvsp[(2) - (5)].i) < 0) (yyval.digitMapValue)->shortTimer() = OMIT_VALUE;
    else (yyval.digitMapValue)->shortTimer()() = (yyvsp[(2) - (5)].i);
    if ((yyvsp[(3) - (5)].i) < 0) (yyval.digitMapValue)->longTimer() = OMIT_VALUE;
    else (yyval.digitMapValue)->longTimer()() = (yyvsp[(3) - (5)].i);
    if ((yyvsp[(4) - (5)].i) < 0) (yyval.digitMapValue)->durationTimer() = OMIT_VALUE;
    else (yyval.digitMapValue)->durationTimer()() = (yyvsp[(4) - (5)].i);
    (yyval.digitMapValue)->digitMapBody() = *(yyvsp[(5) - (5)].digitstringSingleOrList);
    delete (yyvsp[(5) - (5)].digitstringSingleOrList);
  ;}
    break;

  case 407:
#line 3201 "H248_p.y"
    { (yyval.i) = -1; ;}
    break;

  case 408:
#line 3202 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i); ;}
    break;

  case 409:
#line 3206 "H248_p.y"
    { (yyval.i) = -1; ;}
    break;

  case 410:
#line 3207 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i); ;}
    break;

  case 411:
#line 3211 "H248_p.y"
    { (yyval.i) = -1; ;}
    break;

  case 412:
#line 3212 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i); ;}
    break;

  case 413:
#line 3216 "H248_p.y"
    { (yyval.i) = -1; ;}
    break;

  case 414:
#line 3217 "H248_p.y"
    { (yyval.i) = (yyvsp[(1) - (2)].i); ;}
    break;

  case 415:
#line 3222 "H248_p.y"
    {
    (yyval.digitstringSingleOrList) = new DigitstringSingleOrList;
    (yyval.digitstringSingleOrList)->single() = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 416:
#line 3228 "H248_p.y"
    {
    (yyval.digitstringSingleOrList) = new DigitstringSingleOrList;
    (yyval.digitstringSingleOrList)->list() = *(yyvsp[(2) - (3)].digitStringList);
    delete (yyvsp[(2) - (3)].digitStringList);
  ;}
    break;

  case 417:
#line 3237 "H248_p.y"
    {
    (yyval.digitStringList) = new DigitStringList;
    (*(yyval.digitStringList))[0] = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 418:
#line 3243 "H248_p.y"
    {
    (yyval.digitStringList) = (yyvsp[(1) - (3)].digitStringList);
    (*(yyval.digitStringList))[(yyval.digitStringList)->size_of()] = *(yyvsp[(3) - (3)].charstring);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 419:
#line 3252 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->auditToken() = (yyvsp[(1) - (1)].auditTokens);
  ;}
    break;

  case 420:
#line 3257 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->auditToken() = AuditTokens::signalsToken;
  ;}
    break;

  case 421:
#line 3262 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->auditToken() = AuditTokens::eventBufferToken;
  ;}
    break;

  case 422:
#line 3267 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->auditToken() = AuditTokens::eventsToken;
  ;}
    break;

  case 423:
#line 3271 "H248_p.y"
    { (yyval.auditItem) = (yyvsp[(1) - (1)].auditItem); ;}
    break;

  case 424:
#line 3275 "H248_p.y"
    { (yyval.auditItem) = (yyvsp[(1) - (1)].auditItem); ;}
    break;

  case 425:
#line 3280 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudmediaDescriptor() = *(yyvsp[(1) - (1)].indAudMediaDescriptor);
    delete (yyvsp[(1) - (1)].indAudMediaDescriptor);
  ;}
    break;

  case 426:
#line 3286 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudeventsDescriptor() = *(yyvsp[(1) - (1)].indAudEventsDescriptor);
    delete (yyvsp[(1) - (1)].indAudEventsDescriptor);
  ;}
    break;

  case 427:
#line 3292 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudsignalsDescriptor() = *(yyvsp[(1) - (1)].indAudSignalsDescriptor);
    delete (yyvsp[(1) - (1)].indAudSignalsDescriptor);
  ;}
    break;

  case 428:
#line 3298 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indauddigitMapDescriptor() = *(yyvsp[(1) - (1)].indAudDigitMapDescriptor);
    delete (yyvsp[(1) - (1)].indAudDigitMapDescriptor);
  ;}
    break;

  case 429:
#line 3304 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudeventBufferDescriptor() = *(yyvsp[(1) - (1)].indAudEventBufferDescriptor);
    delete (yyvsp[(1) - (1)].indAudEventBufferDescriptor);
  ;}
    break;

  case 430:
#line 3310 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudstatisticsDescriptor() = *(yyvsp[(1) - (1)].indAudStatisticsDescriptor);
    delete (yyvsp[(1) - (1)].indAudStatisticsDescriptor);
  ;}
    break;

  case 431:
#line 3316 "H248_p.y"
    {
    (yyval.auditItem) = new AuditItem;
    (yyval.auditItem)->indaudpackagesDescriptor() = *(yyvsp[(1) - (1)].indAudPackagesDescriptor);
    delete (yyvsp[(1) - (1)].indAudPackagesDescriptor);
  ;}
    break;

  case 432:
#line 3324 "H248_p.y"
    { (yyval.indAudMediaDescriptor) = (yyvsp[(3) - (4)].indAudMediaDescriptor); ;}
    break;

  case 433:
#line 3329 "H248_p.y"
    {
    (yyval.indAudMediaDescriptor) = new IndAudMediaDescriptor(OMIT_VALUE, OMIT_VALUE);
    Merge_IndAudMediaParm(*(yyval.indAudMediaDescriptor), (yyvsp[(1) - (1)].indAudMediaParm));
    Free_IndAudMediaParm((yyvsp[(1) - (1)].indAudMediaParm));
  ;}
    break;

  case 434:
#line 3335 "H248_p.y"
    {
    (yyval.indAudMediaDescriptor) = (yyvsp[(1) - (3)].indAudMediaDescriptor);
    Merge_IndAudMediaParm(*(yyval.indAudMediaDescriptor), (yyvsp[(3) - (3)].indAudMediaParm));
    Free_IndAudMediaParm((yyvsp[(3) - (3)].indAudMediaParm));
  ;}
    break;

  case 435:
#line 3343 "H248_p.y"
    { (yyval.indAudMediaParm) = (yyvsp[(1) - (1)].indAudMediaParm); ;}
    break;

  case 436:
#line 3345 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudstreamDescriptor;
    (yyval.indAudMediaParm).indAudstreamDescriptor = (yyvsp[(1) - (1)].indAudStreamDescriptor);
  ;}
    break;

  case 437:
#line 3350 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudterminationStateDescriptor;
    (yyval.indAudMediaParm).indAudterminationStateDescriptor = (yyvsp[(1) - (1)].indAudTerminationStateDescriptor);
  ;}
    break;

  case 438:
#line 3358 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudlocalControlDescriptor;
    (yyval.indAudMediaParm).indAudlocalControlDescriptor = (yyvsp[(1) - (1)].indAudLocalControlDescriptor);
  ;}
    break;

  case 439:
#line 3363 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudstatisticsDescriptor;
    (yyval.indAudMediaParm).indAudstatisticsDescriptor = (yyvsp[(1) - (1)].indAudStatisticsDescriptor);
  ;}
    break;

  case 440:
#line 3368 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudremoteDescriptor;
    (yyval.indAudMediaParm).indAudremoteDescriptor = (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 441:
#line 3373 "H248_p.y"
    {
    (yyval.indAudMediaParm).selector = IndAudMediaParm::S_indAudlocalDescriptor;
    (yyval.indAudMediaParm).indAudlocalDescriptor = (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 442:
#line 3380 "H248_p.y"
    { (yyval.charstring) = new CHARSTRING(0, NULL); ;}
    break;

  case 443:
#line 3381 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(3) - (4)].charstring); ;}
    break;

  case 444:
#line 3385 "H248_p.y"
    { (yyval.charstring) = new CHARSTRING(0, NULL); ;}
    break;

  case 445:
#line 3386 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(3) - (4)].charstring); ;}
    break;

  case 446:
#line 3391 "H248_p.y"
    {
    (yyval.indAudStreamDescriptor) = new IndAudStreamDescriptor;
    (yyval.indAudStreamDescriptor)->streamID() = (yyvsp[(3) - (6)].i);
    IndAudStreamParms& streamParms = (yyval.indAudStreamDescriptor)->streamParms();
    if ((yyvsp[(5) - (6)].indAudMediaParm).selector == IndAudMediaParm::S_indAudlocalControlDescriptor)
      streamParms.localControlDescriptor()() = *(yyvsp[(5) - (6)].indAudMediaParm).indAudlocalControlDescriptor;
    else streamParms.localControlDescriptor() = OMIT_VALUE;
    if ((yyvsp[(5) - (6)].indAudMediaParm).selector == IndAudMediaParm::S_indAudstatisticsDescriptor)
      streamParms.statisticsDescriptor()() = *(yyvsp[(5) - (6)].indAudMediaParm).indAudstatisticsDescriptor;
    else streamParms.statisticsDescriptor() = OMIT_VALUE;
    if ((yyvsp[(5) - (6)].indAudMediaParm).selector == IndAudMediaParm::S_indAudremoteDescriptor)
      streamParms.remoteDescriptor()() = *(yyvsp[(5) - (6)].indAudMediaParm).indAudremoteDescriptor;
    else streamParms.remoteDescriptor() = OMIT_VALUE;
    if ((yyvsp[(5) - (6)].indAudMediaParm).selector == IndAudMediaParm::S_indAudlocalDescriptor)
      streamParms.localDescriptor()() = *(yyvsp[(5) - (6)].indAudMediaParm).indAudlocalDescriptor;
    else streamParms.localDescriptor() = OMIT_VALUE;
    Free_IndAudMediaParm((yyvsp[(5) - (6)].indAudMediaParm));
  ;}
    break;

  case 447:
#line 3411 "H248_p.y"
    { (yyval.indAudLocalControlDescriptor) = (yyvsp[(3) - (4)].indAudLocalControlDescriptor); ;}
    break;

  case 448:
#line 3416 "H248_p.y"
    {
    (yyval.indAudLocalControlDescriptor) = new IndAudLocalControlDescriptor;
    (*(yyval.indAudLocalControlDescriptor))[0] = *(yyvsp[(1) - (1)].indAudLocalParm);
    delete (yyvsp[(1) - (1)].indAudLocalParm);
  ;}
    break;

  case 449:
#line 3422 "H248_p.y"
    {
    (yyval.indAudLocalControlDescriptor) = (yyvsp[(1) - (3)].indAudLocalControlDescriptor);
    (*(yyval.indAudLocalControlDescriptor))[(yyval.indAudLocalControlDescriptor)->size_of()] = *(yyvsp[(3) - (3)].indAudLocalParm);
    delete (yyvsp[(3) - (3)].indAudLocalParm);
  ;}
    break;

  case 450:
#line 3431 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->streamModes().tokenOnly() = H248__token::present__;
  ;}
    break;

  case 451:
#line 3436 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->streamModes().equal() = (yyvsp[(3) - (3)].streamMode);
  ;}
    break;

  case 452:
#line 3441 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->streamModes().greaterthan() = (yyvsp[(3) - (3)].streamMode);
  ;}
    break;

  case 453:
#line 3446 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->streamModes().lessthan() = (yyvsp[(3) - (3)].streamMode);
  ;}
    break;

  case 454:
#line 3451 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->streamModes().notequal() = (yyvsp[(3) - (3)].streamMode);
  ;}
    break;

  case 455:
#line 3456 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->pkgdName() = *(yyvsp[(1) - (1)].pkgdName);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 456:
#line 3462 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->propertyParm() = *(yyvsp[(1) - (1)].propertyParm);
    delete (yyvsp[(1) - (1)].propertyParm);
  ;}
    break;

  case 457:
#line 3468 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->reservedValue() = H248__token::present__;
  ;}
    break;

  case 458:
#line 3473 "H248_p.y"
    {
    (yyval.indAudLocalParm) = new IndAudLocalParm;
    (yyval.indAudLocalParm)->reservedGroup() = H248__token::present__;
  ;}
    break;

  case 459:
#line 3480 "H248_p.y"
    { (yyval.indAudTerminationStateDescriptor) = (yyvsp[(3) - (4)].indAudTerminationStateDescriptor); ;}
    break;

  case 460:
#line 3485 "H248_p.y"
    {
    (yyval.indAudTerminationStateDescriptor) = new IndAudTerminationStateDescriptor;
    (*(yyval.indAudTerminationStateDescriptor))[0] = *(yyvsp[(1) - (1)].indAudTerminationStateParm);
    delete (yyvsp[(1) - (1)].indAudTerminationStateParm);
  ;}
    break;

  case 461:
#line 3491 "H248_p.y"
    {
    (yyval.indAudTerminationStateDescriptor) = (yyvsp[(1) - (3)].indAudTerminationStateDescriptor);
    (*(yyval.indAudTerminationStateDescriptor))[(yyval.indAudTerminationStateDescriptor)->size_of()] = *(yyvsp[(3) - (3)].indAudTerminationStateParm);
    delete (yyvsp[(3) - (3)].indAudTerminationStateParm);
  ;}
    break;

  case 462:
#line 3500 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->pkgdName() = *(yyvsp[(1) - (1)].pkgdName);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 463:
#line 3506 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->propertyParm() = *(yyvsp[(1) - (1)].propertyParm);
    delete (yyvsp[(1) - (1)].propertyParm);
  ;}
    break;

  case 464:
#line 3512 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->serviceStates().tokenOnly() = H248__token::present__;
  ;}
    break;

  case 465:
#line 3517 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->serviceStates().equal() = (yyvsp[(3) - (3)].serviceState);
  ;}
    break;

  case 466:
#line 3522 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->serviceStates().greaterthan() = (yyvsp[(3) - (3)].serviceState);
  ;}
    break;

  case 467:
#line 3527 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->serviceStates().lessthan() = (yyvsp[(3) - (3)].serviceState);
  ;}
    break;

  case 468:
#line 3532 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->serviceStates().notequal() = (yyvsp[(3) - (3)].serviceState);
  ;}
    break;

  case 469:
#line 3537 "H248_p.y"
    {
    (yyval.indAudTerminationStateParm) = new IndAudTerminationStateParm;
    (yyval.indAudTerminationStateParm)->buffer() = H248__token::present__;
  ;}
    break;

  case 470:
#line 3544 "H248_p.y"
    { (yyval.indAudEventBufferDescriptor) = (yyvsp[(3) - (4)].indAudEventBufferDescriptor); ;}
    break;

  case 471:
#line 3549 "H248_p.y"
    {
    (yyval.indAudEventBufferDescriptor) = new IndAudEventBufferDescriptor(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 472:
#line 3554 "H248_p.y"
    {
    (yyval.indAudEventBufferDescriptor) = new IndAudEventBufferDescriptor(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].eventParNameOrStream));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].eventParNameOrStream);
  ;}
    break;

  case 473:
#line 3563 "H248_p.y"
    {
    (yyval.eventParNameOrStream) = new EventParNameOrStream;
    (yyval.eventParNameOrStream)->streamID() = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 474:
#line 3568 "H248_p.y"
    {
    (yyval.eventParNameOrStream) = new EventParNameOrStream;
    (yyval.eventParNameOrStream)->eventParName() = *(yyvsp[(1) - (1)].charstring);
    delete (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 475:
#line 3577 "H248_p.y"
    {
    (yyval.indAudEventsDescriptor) = new IndAudEventsDescriptor(OMIT_VALUE, *(yyvsp[(3) - (4)].pkgdName));
    delete (yyvsp[(3) - (4)].pkgdName);
  ;}
    break;

  case 476:
#line 3582 "H248_p.y"
    {
    (yyval.indAudEventsDescriptor) = new IndAudEventsDescriptor((yyvsp[(3) - (6)].str), *(yyvsp[(5) - (6)].pkgdName));
    Free((yyvsp[(3) - (6)].str));
    delete (yyvsp[(5) - (6)].pkgdName);
  ;}
    break;

  case 477:
#line 3590 "H248_p.y"
    { (yyval.pkgdName) = (yyvsp[(1) - (1)].pkgdName); ;}
    break;

  case 478:
#line 3595 "H248_p.y"
    {
    (yyval.indAudSignalsDescriptor) = new IndAudSignalsDescriptor(OMIT_VALUE);
  ;}
    break;

  case 479:
#line 3599 "H248_p.y"
    {
    (yyval.indAudSignalsDescriptor) = new IndAudSignalsDescriptor(*(yyvsp[(3) - (4)].indAudSignalParm));
    delete (yyvsp[(3) - (4)].indAudSignalParm);
  ;}
    break;

  case 480:
#line 3607 "H248_p.y"
    {
    (yyval.indAudSignalParm) = new IndAudSignalParm;
    (yyval.indAudSignalParm)->signalList() = *(yyvsp[(1) - (1)].indAudSignalList);
    delete (yyvsp[(1) - (1)].indAudSignalList);
  ;}
    break;

  case 481:
#line 3613 "H248_p.y"
    {
    (yyval.indAudSignalParm) = new IndAudSignalParm;
    (yyval.indAudSignalParm)->signal() = *(yyvsp[(1) - (1)].indAudSignalRequest);
    delete (yyvsp[(1) - (1)].indAudSignalRequest);
  ;}
    break;

  case 482:
#line 3622 "H248_p.y"
    {
    (yyval.indAudSignalRequest) = new IndAudSignalRequest(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 483:
#line 3627 "H248_p.y"
    {
    (yyval.indAudSignalRequest) = new IndAudSignalRequest(*(yyvsp[(1) - (4)].pkgdName), *(yyvsp[(3) - (4)].indAudSignalRequestParmList));
    delete (yyvsp[(1) - (4)].pkgdName);
    delete (yyvsp[(3) - (4)].indAudSignalRequestParmList);
  ;}
    break;

  case 484:
#line 3636 "H248_p.y"
    {
    (yyval.indAudSignalRequestParmList) = new IndAudSignalRequestParmList;
    (*(yyval.indAudSignalRequestParmList))[0] = *(yyvsp[(1) - (1)].indAudSignalRequestParm);
    delete (yyvsp[(1) - (1)].indAudSignalRequestParm);
  ;}
    break;

  case 485:
#line 3642 "H248_p.y"
    {
    (yyval.indAudSignalRequestParmList) = (yyvsp[(1) - (3)].indAudSignalRequestParmList);
    (*(yyval.indAudSignalRequestParmList))[(yyval.indAudSignalRequestParmList)->size_of()] = *(yyvsp[(3) - (3)].indAudSignalRequestParm);
    delete (yyvsp[(3) - (3)].indAudSignalRequestParm);
  ;}
    break;

  case 486:
#line 3651 "H248_p.y"
    {
    (yyval.indAudSignalRequestParm) = new IndAudSignalRequestParm;
    (yyval.indAudSignalRequestParm)->streamID() = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 487:
#line 3656 "H248_p.y"
    {
    (yyval.indAudSignalRequestParm) = new IndAudSignalRequestParm;
    (yyval.indAudSignalRequestParm)->sigRequestId() = (yyvsp[(1) - (1)].str);
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 488:
#line 3665 "H248_p.y"
    {
    (yyval.indAudSignalList) = new IndAudSignalList((yyvsp[(3) - (3)].i), OMIT_VALUE);
  ;}
    break;

  case 489:
#line 3669 "H248_p.y"
    {
    (yyval.indAudSignalList) = new IndAudSignalList((yyvsp[(3) - (6)].i), *(yyvsp[(5) - (6)].indAudSignalRequest));
    delete (yyvsp[(5) - (6)].indAudSignalRequest);
  ;}
    break;

  case 490:
#line 3676 "H248_p.y"
    { (yyval.indAudSignalRequest) = (yyvsp[(1) - (1)].indAudSignalRequest); ;}
    break;

  case 491:
#line 3681 "H248_p.y"
    {
    (yyval.indAudDigitMapDescriptor) = new IndAudDigitMapDescriptor(*(yyvsp[(3) - (3)].charstring));
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 492:
#line 3689 "H248_p.y"
    {
    (yyval.indAudStatisticsDescriptor) = new IndAudStatisticsDescriptor(*(yyvsp[(3) - (4)].pkgdName));
    delete (yyvsp[(3) - (4)].pkgdName);
  ;}
    break;

  case 493:
#line 3696 "H248_p.y"
    { (yyval.indAudPackagesDescriptor) = (yyvsp[(3) - (4)].packagesItem); ;}
    break;

  case 494:
#line 3701 "H248_p.y"
    {
    (yyval.serviceChangeDescriptor) = (yyvsp[(3) - (4)].serviceChangeDescriptor);
    if (!(yyval.serviceChangeDescriptor)->serviceChangeMethod().is_bound()) yyerror("Mandatory parameter "
      "serviceChangeMethod is missing from serviceChangeParmList");
    if (!(yyval.serviceChangeDescriptor)->serviceChangeReason().is_bound()) yyerror("Mandatory parameter "
      "serviceChangeReason is missing from serviceChangeParmList");
  ;}
    break;

  case 495:
#line 3712 "H248_p.y"
    {
    (yyval.serviceChangeDescriptor) = new ServiceChangeDescriptor;
    (yyval.serviceChangeDescriptor)->serviceChangeAddress() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeVersion() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeProfile() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeDelay() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeMgcId() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->timeStamp() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeIncomplete() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->nonStandardData() = OMIT_VALUE;
    (yyval.serviceChangeDescriptor)->serviceChangeInfo() = OMIT_VALUE;
    Merge_ServiceChangeParm(*(yyval.serviceChangeDescriptor), (yyvsp[(1) - (1)].serviceChangeParm));
    Free_ServiceChangeParm((yyvsp[(1) - (1)].serviceChangeParm));
  ;}
    break;

  case 496:
#line 3727 "H248_p.y"
    {
    (yyval.serviceChangeDescriptor) = (yyvsp[(1) - (3)].serviceChangeDescriptor);
    Merge_ServiceChangeParm(*(yyval.serviceChangeDescriptor), (yyvsp[(3) - (3)].serviceChangeParm));
    Free_ServiceChangeParm((yyvsp[(3) - (3)].serviceChangeParm));
  ;}
    break;

  case 497:
#line 3736 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeMethod;
    (yyval.serviceChangeParm).serviceChangeMethod = (yyvsp[(1) - (1)].serviceChangeMethod);
  ;}
    break;

  case 498:
#line 3741 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeReason;
    (yyval.serviceChangeParm).serviceChangeReason = (yyvsp[(1) - (1)].charstring);
  ;}
    break;

  case 499:
#line 3746 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeDelay;
    (yyval.serviceChangeParm).serviceChangeDelay = (yyvsp[(1) - (1)].str);
  ;}
    break;

  case 500:
#line 3751 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeAddress;
    (yyval.serviceChangeParm).serviceChangeAddress = (yyvsp[(1) - (1)].serviceChangeAddress);
  ;}
    break;

  case 501:
#line 3756 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeProfile;
    (yyval.serviceChangeParm).serviceChangeProfile = (yyvsp[(1) - (1)].serviceChangeProfile);
  ;}
    break;

  case 502:
#line 3761 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_extension;
    (yyval.serviceChangeParm).extension = (yyvsp[(1) - (1)].extension);
  ;}
    break;

  case 503:
#line 3766 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_TimeStamp;
    (yyval.serviceChangeParm).timeStamp = (yyvsp[(1) - (1)].timeNotation);
  ;}
    break;

  case 504:
#line 3771 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeMgcId;
    (yyval.serviceChangeParm).serviceChangeMgcId = (yyvsp[(1) - (1)].mId);
  ;}
    break;

  case 505:
#line 3776 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeVersion;
    (yyval.serviceChangeParm).serviceChangeVersion = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 506:
#line 3781 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_ServiceChangeIncompleteToken;
  ;}
    break;

  case 507:
#line 3785 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_auditItem;
    (yyval.serviceChangeParm).auditItem = (yyvsp[(1) - (1)].auditItem);
  ;}
    break;

  case 508:
#line 3792 "H248_p.y"
    { (yyval.serviceChangeResParm) = (yyvsp[(3) - (4)].serviceChangeResParm); ;}
    break;

  case 509:
#line 3797 "H248_p.y"
    {
    (yyval.serviceChangeResParm) = new ServiceChangeResParm(OMIT_VALUE, OMIT_VALUE, OMIT_VALUE,
      OMIT_VALUE, OMIT_VALUE);
    Merge_ServiceChangeParm(*(yyval.serviceChangeResParm), (yyvsp[(1) - (1)].serviceChangeParm));
    Free_ServiceChangeParm((yyvsp[(1) - (1)].serviceChangeParm));
  ;}
    break;

  case 510:
#line 3804 "H248_p.y"
    {
    (yyval.serviceChangeResParm) = (yyvsp[(1) - (3)].serviceChangeResParm);
    Merge_ServiceChangeParm(*(yyval.serviceChangeResParm), (yyvsp[(3) - (3)].serviceChangeParm));
    Free_ServiceChangeParm((yyvsp[(3) - (3)].serviceChangeParm));
  ;}
    break;

  case 511:
#line 3813 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeAddress;
    (yyval.serviceChangeParm).serviceChangeAddress = (yyvsp[(1) - (1)].serviceChangeAddress);
  ;}
    break;

  case 512:
#line 3818 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeMgcId;
    (yyval.serviceChangeParm).serviceChangeMgcId = (yyvsp[(1) - (1)].mId);
  ;}
    break;

  case 513:
#line 3823 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeProfile;
    (yyval.serviceChangeParm).serviceChangeProfile = (yyvsp[(1) - (1)].serviceChangeProfile);
  ;}
    break;

  case 514:
#line 3828 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_serviceChangeVersion;
    (yyval.serviceChangeParm).serviceChangeVersion = (yyvsp[(1) - (1)].i);
  ;}
    break;

  case 515:
#line 3833 "H248_p.y"
    {
    (yyval.serviceChangeParm).selector = ServiceChangeParm::S_TimeStamp;
    (yyval.serviceChangeParm).timeStamp = (yyvsp[(1) - (1)].timeNotation);
  ;}
    break;

  case 516:
#line 3840 "H248_p.y"
    { (yyval.serviceChangeMethod) = (yyvsp[(3) - (3)].serviceChangeMethod); ;}
    break;

  case 517:
#line 3844 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::failover; ;}
    break;

  case 518:
#line 3845 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::forced; ;}
    break;

  case 519:
#line 3846 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::graceful; ;}
    break;

  case 520:
#line 3847 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::restart; ;}
    break;

  case 521:
#line 3848 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::disconnected; ;}
    break;

  case 522:
#line 3849 "H248_p.y"
    { (yyval.serviceChangeMethod) = ServiceChangeMethod::handOff; ;}
    break;

  case 523:
#line 3851 "H248_p.y"
    {
    (yyval.serviceChangeMethod) = ServiceChangeMethod::unknown;
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 524:
#line 3858 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(3) - (3)].charstring); ;}
    break;

  case 525:
#line 3862 "H248_p.y"
    { (yyval.str) = (yyvsp[(3) - (3)].str); ;}
    break;

  case 526:
#line 3867 "H248_p.y"
    {
    (yyval.serviceChangeAddress) = new ServiceChangeAddress;
    switch ((yyvsp[(3) - (3)].mId)->get_selection()) {
    case MId::ALT_ip4Address:
      (yyval.serviceChangeAddress)->ip4Address() = (yyvsp[(3) - (3)].mId)->ip4Address();
      break;
    case MId::ALT_ip6Address:
      (yyval.serviceChangeAddress)->ip6Address() = (yyvsp[(3) - (3)].mId)->ip6Address();
      break;
    case MId::ALT_domainName:
      (yyval.serviceChangeAddress)->domainName() = (yyvsp[(3) - (3)].mId)->domainName();
      break;
    case MId::ALT_mtpAddress:
      (yyval.serviceChangeAddress)->mtpAddress() = (yyvsp[(3) - (3)].mId)->mtpAddress();
      break;
    case MId::ALT_deviceName:
      (yyval.serviceChangeAddress)->deviceName() = (yyvsp[(3) - (3)].mId)->deviceName();
      break;
    default:
      yyerror("Invalid selection within mId of serviceChangeAddress");
    }
    delete (yyvsp[(3) - (3)].mId);
  ;}
    break;

  case 527:
#line 3891 "H248_p.y"
    {
    (yyval.serviceChangeAddress) = new ServiceChangeAddress;
    (yyval.serviceChangeAddress)->portNumber() = (yyvsp[(3) - (3)].i);
  ;}
    break;

  case 528:
#line 3898 "H248_p.y"
    { (yyval.mId) = (yyvsp[(3) - (3)].mId); ;}
    break;

  case 529:
#line 3903 "H248_p.y"
    {
    (yyval.serviceChangeProfile) = new ServiceChangeProfile(*(yyvsp[(3) - (5)].charstring), (yyvsp[(5) - (5)].i));
    delete (yyvsp[(3) - (5)].charstring);
  ;}
    break;

  case 530:
#line 3910 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 531:
#line 3915 "H248_p.y"
    {
    (yyval.extension) = new Extension((yyvsp[(1) - (2)].str), *(yyvsp[(2) - (2)].parmValue));
    Free((yyvsp[(1) - (2)].str));
    delete (yyvsp[(2) - (2)].parmValue);
  ;}
    break;

  case 532:
#line 3923 "H248_p.y"
    { (yyval.packagesDescriptor) = (yyvsp[(3) - (4)].packagesDescriptor); ;}
    break;

  case 533:
#line 3928 "H248_p.y"
    {
    (yyval.packagesDescriptor) = new PackagesDescriptor;
    (*(yyval.packagesDescriptor))[0] = *(yyvsp[(1) - (1)].packagesItem);
    delete (yyvsp[(1) - (1)].packagesItem);
  ;}
    break;

  case 534:
#line 3934 "H248_p.y"
    {
    (yyval.packagesDescriptor) = (yyvsp[(1) - (3)].packagesDescriptor);
    (*(yyval.packagesDescriptor))[(yyval.packagesDescriptor)->size_of()] = *(yyvsp[(3) - (3)].packagesItem);
    delete (yyvsp[(3) - (3)].packagesItem);
  ;}
    break;

  case 535:
#line 3943 "H248_p.y"
    {
    /* 1*2(DIGIT) */
    if (strlen((yyvsp[(1) - (1)].str)) > 2) yyerror("Number %s is too long for Version", (yyvsp[(1) - (1)].str));
    (yyval.i) = atoi((yyvsp[(1) - (1)].str));
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 536:
#line 3953 "H248_p.y"
    {
    (yyval.packagesItem) = new PackagesItem(*(yyvsp[(1) - (3)].charstring), (yyvsp[(3) - (3)].i));
    delete (yyvsp[(1) - (3)].charstring);
  ;}
    break;

  case 537:
#line 3960 "H248_p.y"
    { (yyval.statisticsDescriptor) = (yyvsp[(3) - (4)].statisticsDescriptor); ;}
    break;

  case 538:
#line 3965 "H248_p.y"
    {
    (yyval.statisticsDescriptor) = new StatisticsDescriptor;
    (*(yyval.statisticsDescriptor))[0] = *(yyvsp[(1) - (1)].statisticsParameter);
    delete (yyvsp[(1) - (1)].statisticsParameter);
  ;}
    break;

  case 539:
#line 3971 "H248_p.y"
    {
    (yyval.statisticsDescriptor) = (yyvsp[(1) - (3)].statisticsDescriptor);
    (*(yyval.statisticsDescriptor))[(yyval.statisticsDescriptor)->size_of()] = *(yyvsp[(3) - (3)].statisticsParameter);
    delete (yyvsp[(3) - (3)].statisticsParameter);
  ;}
    break;

  case 540:
#line 3980 "H248_p.y"
    {
    (yyval.statisticsParameter) = new StatisticsParameter(*(yyvsp[(1) - (1)].pkgdName), OMIT_VALUE);
    delete (yyvsp[(1) - (1)].pkgdName);
  ;}
    break;

  case 541:
#line 3985 "H248_p.y"
    {
    (yyval.statisticsParameter) = new StatisticsParameter;
    (yyval.statisticsParameter)->statName() = *(yyvsp[(1) - (3)].pkgdName);
    (yyval.statisticsParameter)->values()()[0] = *(yyvsp[(3) - (3)].charstring);
    delete (yyvsp[(1) - (3)].pkgdName);
    delete (yyvsp[(3) - (3)].charstring);
  ;}
    break;

  case 542:
#line 3993 "H248_p.y"
    {
    (yyval.statisticsParameter) = new StatisticsParameter(*(yyvsp[(1) - (5)].pkgdName), *(yyvsp[(4) - (5)].valueList));
    delete (yyvsp[(1) - (5)].pkgdName);
    delete (yyvsp[(4) - (5)].valueList);
  ;}
    break;

  case 543:
#line 4001 "H248_p.y"
    { (yyval.topologyRequestList) = (yyvsp[(3) - (4)].topologyRequestList); ;}
    break;

  case 544:
#line 4006 "H248_p.y"
    {
    (yyval.topologyRequestList) = new TopologyRequestList;
    (*(yyval.topologyRequestList))[0] = *(yyvsp[(1) - (1)].topologyRequest);
    delete (yyvsp[(1) - (1)].topologyRequest);
  ;}
    break;

  case 545:
#line 4012 "H248_p.y"
    {
    (yyval.topologyRequestList) = (yyvsp[(1) - (3)].topologyRequestList);
    (*(yyval.topologyRequestList))[(yyval.topologyRequestList)->size_of()] = *(yyvsp[(3) - (3)].topologyRequest);
    delete (yyvsp[(3) - (3)].topologyRequest);
  ;}
    break;

  case 546:
#line 4021 "H248_p.y"
    {
    (yyval.topologyRequest) = new TopologyRequest(*(yyvsp[(1) - (5)].charstring), *(yyvsp[(3) - (5)].charstring), (yyvsp[(5) - (5)].topologyDirection), OMIT_VALUE);
    delete (yyvsp[(1) - (5)].charstring);
    delete (yyvsp[(3) - (5)].charstring);
  ;}
    break;

  case 547:
#line 4027 "H248_p.y"
    {
    (yyval.topologyRequest) = new TopologyRequest(*(yyvsp[(1) - (6)].charstring), *(yyvsp[(3) - (6)].charstring), (yyvsp[(5) - (6)].topologyDirection), (yyvsp[(6) - (6)].i));
    delete (yyvsp[(1) - (6)].charstring);
    delete (yyvsp[(3) - (6)].charstring);
  ;}
    break;

  case 548:
#line 4035 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 549:
#line 4039 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 550:
#line 4043 "H248_p.y"
    { (yyval.topologyDirection) = TopologyDirection::bothway; ;}
    break;

  case 551:
#line 4044 "H248_p.y"
    { (yyval.topologyDirection) = TopologyDirection::isolate; ;}
    break;

  case 552:
#line 4045 "H248_p.y"
    { (yyval.topologyDirection) = TopologyDirection::oneway; ;}
    break;

  case 553:
#line 4046 "H248_p.y"
    { (yyval.topologyDirection) = TopologyDirection::onewayExternal; ;}
    break;

  case 554:
#line 4047 "H248_p.y"
    { (yyval.topologyDirection) = TopologyDirection::onewayBoth; ;}
    break;

  case 555:
#line 4051 "H248_p.y"
    { (yyval.i) = (yyvsp[(3) - (3)].i); ;}
    break;

  case 556:
#line 4055 "H248_p.y"
    { (yyval.b) = TRUE; ;}
    break;

  case 557:
#line 4056 "H248_p.y"
    { (yyval.b) = FALSE; ;}
    break;

  case 558:
#line 4060 "H248_p.y"
    { (yyval.emergency) = Emergency::emergency; ;}
    break;

  case 559:
#line 4061 "H248_p.y"
    { (yyval.emergency) = Emergency::emergencyOff; ;}
    break;

  case 560:
#line 4066 "H248_p.y"
    {
    (yyval.contextAttrDescriptor) = new ContextAttrDescriptor;
    (yyval.contextAttrDescriptor)->contextIds() = *(yyvsp[(3) - (4)].contextIdList);
    delete (yyvsp[(3) - (4)].contextIdList);
  ;}
    break;

  case 561:
#line 4072 "H248_p.y"
    {
    (yyval.contextAttrDescriptor) = new ContextAttrDescriptor;
    (yyval.contextAttrDescriptor)->propertyParms() = *(yyvsp[(3) - (4)].propertyParmList);
    delete (yyvsp[(3) - (4)].propertyParmList);
  ;}
    break;

  case 562:
#line 4080 "H248_p.y"
    { (yyval.contextIdList) = (yyvsp[(4) - (5)].contextIdList); ;}
    break;

  case 563:
#line 4085 "H248_p.y"
    {
    (yyval.contextIdList) = new ContextIdList;
    (*(yyval.contextIdList))[0] = (yyvsp[(1) - (1)].str);
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 564:
#line 4091 "H248_p.y"
    {
    (yyval.contextIdList) = (yyvsp[(1) - (3)].contextIdList);
    (*(yyval.contextIdList))[(yyval.contextIdList)->size_of()] = (yyvsp[(3) - (3)].str);
    Free((yyvsp[(3) - (3)].str));
  ;}
    break;

  case 565:
#line 4100 "H248_p.y"
    {
    /* 1*5(DIGIT) ; %x0-FFFF */
    if (strlen((yyvsp[(1) - (1)].str)) > 5) yyerror("Number %s is too long for UINT16", (yyvsp[(1) - (1)].str));
    (yyval.i) = atoi((yyvsp[(1) - (1)].str));
    if ((yyval.i) < 0 || (yyval.i) > 0xFFFF) yyerror("Number %s is not a valid UINT16 SafeCharValue", (yyvsp[(1) - (1)].str));
    Free((yyvsp[(1) - (1)].str));
  ;}
    break;

  case 566:
#line 4111 "H248_p.y"
    {
    /* 1*10(DIGIT) ; %x0-FFFFFFFF */
    if (strlen((yyvsp[(1) - (1)].str)) > 10) yyerror("Number %s is too long for UINT32", (yyvsp[(1) - (1)].str));
    (yyval.str) = (yyvsp[(1) - (1)].str);
  ;}
    break;

  case 567:
#line 4119 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;

  case 568:
#line 4120 "H248_p.y"
    { (yyval.charstring) = (yyvsp[(1) - (1)].charstring); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 8456 "H248_p.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4151 "H248_p.y"


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

