%option stack
%option noyylineno
%option noyywrap
%option nounput
%option noyy_top_state
%option case-insensitive
%option never-interactive
%option prefix="H248_yy"

%{

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
//  File:               H248_la.l
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002),
//                      ITU-T H.248.1 V2 Corrigendum 1 (03/2004)
//                      ITU-T H.248.1 V3 Draft (09/2004)
//                      updates from ITU-T H.248.1 V3 Draft (08/2005)
//                              except TermIDList

/* ****************** C/C++ declarations ***************** */

#include <memory.h>
#include "H248_Types.hh"
#include "H248_p_types.hh"
#include "H248_p.hh"

#define yylval H248_yylval

static size_t stack_size = 0;
static void push_state(int new_state);
static void pop_state();

/* Indicates the last token (keyword) that was returned by the lexer */
static int last_token;

#define RETURN_TOKEN(token) \
  do { \
    last_token = token; \
    return token; \
  } while (false)

%}

/* ***************** definitions ***************** */

DIGIT		[0-9]
HEXDIG		{DIGIT}|[A-F]
ALPHA		[A-Za-z]
WSP		[ \t]
EOL		\r\n?|\n
SafeChar	{DIGIT}|{ALPHA}|[\+\-&!_\/\'\?@\^`~\*\$\\\(\)%\|\.]
RestChar	[;\[\]\{\}\:\,#<>=]
COMMENT		;({SafeChar}|{RestChar}|{WSP}|\")*{EOL}
LWSP		({WSP}|{EOL}|{COMMENT})*
SEP		({WSP}|{EOL}|{COMMENT})+
NAME		{ALPHA}({ALPHA}|{DIGIT}|_){0,63}
V4hex		{DIGIT}{1,3}
IPv4address	{V4hex}(\.{V4hex}){3}
hex4		{HEXDIG}{1,4}
hexseq		{hex4}(\:{hex4})*
hexpart		({hexseq}\:\:{hexseq}?)|(\:\:{hexseq}?)|{hexseq}
IPv6address	{hexpart}(\:{IPv4address})?
domainName	({ALPHA}|{DIGIT})({ALPHA}|{DIGIT}|[\.\-]){0,63}
pathDomainName	({ALPHA}|{DIGIT}|\*)({ALPHA}|{DIGIT}|[\-\*\.]){0,63}
pathNAME	\*?{NAME}({ALPHA}|{DIGIT}|[\/\*_\$])*(@{pathDomainName})?
TerminationID	ROOT|{pathNAME}|\$|\*
pkgdName	({NAME}\/{NAME})|({NAME}\/\*)|(\*\/\*)
SafeCharValue	({SafeChar}|[\x80-\xff])+
quotedString	\"({SafeChar}|{EOL}|[\x80-\xff]|{RestChar}|{WSP})*\"
nonEscapeChar	[\x01-\x7c\x7e-\xff]|\\\}
Timer		{DIGIT}{1,2}
digitMapLetter	{DIGIT}|[\x41-\x4B\x61-\x6bLSTZ]
digitLetter	(({DIGIT}\-{DIGIT})|{digitMapLetter})*
digitMapRange	x|({LWSP}\[{LWSP}{digitLetter}{LWSP}\]{LWSP})
digitPosition	{digitMapLetter}|{digitMapRange}
digitStringElement	({digitPosition})\.?
digitString	{digitStringElement}+
Date		{DIGIT}{8}
Time		{DIGIT}{8}
TimeStamp	{Date}T{Time}
extensionParameter	X[\+\-]({ALPHA}|{DIGIT}){1,6}

/* start conditions */

%x SC_AuthData
%x SC_ModemToken
%x SC_MuxToken
%x SC_MuxType
%x SC_SecurityParmIndex
%x SC_SequenceNum
%x SC_VALUE
%x SC_VALUE_alternatives
%x SC_VALUE_sublist
%x SC_Version
%x SC_actionReply
%x SC_actionReplyList
%x SC_actionRequest
%x SC_actionRequestList
%x SC_ammRequest
%x SC_ammsReply
%x SC_auditDescriptor
%x SC_auditOther
%x SC_auditRequest
%x SC_contextAttrDescriptor
%x SC_contextAudit
%x SC_contextTerminationAudit
%x SC_digitMapValue
%x SC_embedFirst
%x SC_embedSig
%x SC_embedWithSig
%x SC_eventBufferControl
%x SC_eventBufferDescriptor
%x SC_eventSpec
%x SC_eventsDescriptor
%x SC_indAudeventBufferDescriptor
%x SC_indAudeventSpec
%x SC_indAudeventsDescriptor
%x SC_indAudlocalControlDescriptor
%x SC_indAudmediaDescriptor
%x SC_indAudpackagesDescriptor
%x SC_indAudsignalList
%x SC_indAudsignalRequest
%x SC_indAudsignalsDescriptor
%x SC_indAudstatisticsDescriptor
%x SC_indAudstreamDescriptor
%x SC_indAudterminationStateDescriptor
%x SC_localControlDescriptor
%x SC_localRemoteDescriptor
%x SC_mId
%x SC_mediaDescriptor
%x SC_messageBody
%x SC_modemDescriptor
%x SC_modemType
%x SC_modemTypeList
%x SC_mtpAddress
%x SC_notifyCompletion
%x SC_notifyRegulated
%x SC_notifyReply
%x SC_notifyRequest
%x SC_observedEvent
%x SC_observedEventsDescriptor
%x SC_octetString
%x SC_onOff
%x SC_packagesDescriptor
%x SC_requestedEvent
%x SC_secondRequestedEvent
%x SC_serviceChangeDescriptor
%x SC_serviceChangeMethod
%x SC_serviceChangeReply
%x SC_serviceChangeReplyDescriptor
%x SC_serviceChangeRequest
%x SC_serviceStates
%x SC_sigDirection
%x SC_signalList
%x SC_signalRequest
%x SC_signalType
%x SC_signalsDescriptor
%x SC_statisticsDescriptor
%x SC_streamDescriptor
%x SC_streamMode
%x SC_subtractRequest
%x SC_termIDList
%x SC_terminationID
%x SC_terminationIDList
%x SC_terminationStateDescriptor
%x SC_topologyDescriptor_A
%x SC_topologyDescriptor_B
%x SC_topologyDescriptor_D
%x SC_topologyDescriptor_S
%x SC_transactionReply

%% /* ***************** rules ************************* */

<INITIAL>{
MEGACO|!		BEGIN(SC_Version); RETURN_TOKEN(MegacopToken);
Authentication|AU	BEGIN(SC_SecurityParmIndex); RETURN_TOKEN(AuthToken);
}

<SC_SecurityParmIndex>{
0x{HEXDIG}{8}	{
  /* cut the leading 0x */
  yylval.str = mcopystr(yytext + 2);
  return HEXDIGITS;
}
:	{
  BEGIN(SC_SequenceNum);
  return ':';
}
}

<SC_SequenceNum>{
0x{HEXDIG}{8}	{
  /* cut the leading 0x */
  yylval.str = mcopystr(yytext + 2);
  return HEXDIGITS;
}
:	{
  BEGIN(SC_AuthData);
  return ':';
}
}

<SC_AuthData>{
0x{HEXDIG}{24,64}	{
  /* cut the leading 0x */
  yylval.str = mcopystr(yytext + 2);
  BEGIN(INITIAL);
  return HEXDIGITS;
}
}

<SC_mId>{
\[{IPv4address}\]	{
  /* cut the leading [ and trailing ] */
  yylval.charstring = new CHARSTRING(yyleng - 2, yytext + 1);
  pop_state();
  return IPv4address;
}
\[{IPv6address}\]	{
  /* cut the leading [ and trailing ] */
  yylval.charstring = new CHARSTRING(yyleng - 2, yytext + 1);
  pop_state();
  return IPv6address;
}
\<{domainName}\>	{
  /* cut the leading < and trailing > */
  yylval.charstring = new CHARSTRING(yyleng - 2, yytext + 1);
  pop_state();
  return domainname;
}
MTP			BEGIN(SC_mtpAddress); RETURN_TOKEN(MTPToken);
{pathNAME}		{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  pop_state();
  return devicename;
}
}

<SC_mtpAddress>{
{HEXDIG}{4,8}	{
  yylval.str = mcopystr(yytext);
  return HEXDIGITS;
}
{LWSP}\}	pop_state(); return RBRKT;
}

<SC_localRemoteDescriptor>{LWSP}\{	BEGIN(SC_octetString); return LBRKT;

<SC_octetString>{
{nonEscapeChar}+	{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  return octetString;
}
\}{LWSP}		pop_state(); return RBRKT;
}

<SC_digitMapValue>{
T:{Timer}	{
  yylval.i = atoi(yytext + 2);
  return TTimer;
}

S:{Timer}	{
  yylval.i = atoi(yytext + 2);
  return STimer;
}

L:{Timer}	{
  yylval.i = atoi(yytext + 2);
  return LTimer;
}

Z:{Timer}	{
  yylval.i = atoi(yytext + 2);
  return ZTimer;
}

{digitString}	{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  return digitString;
}
}

<SC_actionRequest>{
ContextAudit|CA		RETURN_TOKEN(ContextAuditToken);
O\-			return OptionalCommand;
W\-			return WildcardedResponse;
}

<SC_actionRequest,SC_actionReply>{
Add|A			RETURN_TOKEN(AddToken);
AuditCapability|AC	RETURN_TOKEN(AuditCapToken);
AuditValue|AV		RETURN_TOKEN(AuditValueToken);
EmergencyOff(Token)?|EGO	RETURN_TOKEN(EmergencyOffToken);
Modify|MF		RETURN_TOKEN(ModifyToken);
Move|MV			RETURN_TOKEN(MoveToken);
Notify|N		RETURN_TOKEN(NotifyToken);
ServiceChange|SC	RETURN_TOKEN(ServiceChangeToken);
Subtract|S		RETURN_TOKEN(SubtractToken);
}

<SC_actionRequest,SC_actionReply,SC_contextAudit>{
ContextAttr|CT		RETURN_TOKEN(ContextAttrToken);
Emergency|EG		RETURN_TOKEN(EmergencyToken);
IEPSCall|IEPS		RETURN_TOKEN(IEPSToken);
Priority|PR		RETURN_TOKEN(PriorityToken);
Topology|TP		RETURN_TOKEN(TopologyToken);
}

<SC_ammRequest,SC_ammsReply,SC_auditOther,SC_auditDescriptor,SC_serviceChangeDescriptor,SC_embedWithSig>{
EventBuffer|EB		RETURN_TOKEN(EventBufferToken);
Events|E		RETURN_TOKEN(EventsToken);
Media|M			RETURN_TOKEN(MediaToken);
Modem|MD		push_state(SC_ModemToken); RETURN_TOKEN(ModemToken);
Mux|MX			push_state(SC_MuxToken); RETURN_TOKEN(MuxToken);
}

<SC_contextAudit>{
ANDLgc			RETURN_TOKEN(AndAUDITselectToken);
EmergencyValue|EGV	RETURN_TOKEN(EmergencyValueToken);
ORLgc			RETURN_TOKEN(OrAUDITselectToken);
}

<SC_localControlDescriptor,SC_indAudlocalControlDescriptor>{
Mode|MO			RETURN_TOKEN(ModeToken);
ReservedGroup|RG	RETURN_TOKEN(ReservedGroupToken);
ReservedValue|RV	RETURN_TOKEN(ReservedValueToken);
}

<SC_mediaDescriptor,SC_indAudmediaDescriptor,SC_streamDescriptor,SC_indAudstreamDescriptor>{
Local|L			push_state(SC_localRemoteDescriptor); RETURN_TOKEN(LocalToken);
LocalControl|O		RETURN_TOKEN(LocalControlToken);
Remote|R		push_state(SC_localRemoteDescriptor); RETURN_TOKEN(RemoteToken);
}

<SC_messageBody>{
Segment|SM	RETURN_TOKEN(MessageSegmentToken);
Pending|PN	RETURN_TOKEN(PendingToken);
Reply|P		BEGIN(SC_transactionReply); RETURN_TOKEN(ReplyToken);
Transaction|T	RETURN_TOKEN(TransToken);
TransactionResponseAck|K	RETURN_TOKEN(ResponseAckToken);
}

<SC_modemType,SC_modemTypeList>{
SynchISDN|SN	{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(SynchISDNToken);
}
V18		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V18Token);
}
V22		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V22Token);
}
V22b		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V22bisToken);
}
V32		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V32Token);
}
V32b		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V32bisToken);
}
V34		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V34Token);
}
V90		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V90Token);
}
V91		{
  if (YY_START == SC_modemType) pop_state();
  RETURN_TOKEN(V91Token);
}
}

<SC_MuxType>{
H221			pop_state(); RETURN_TOKEN(H221Token);
H223			pop_state(); RETURN_TOKEN(H223Token);
H226			pop_state(); RETURN_TOKEN(H226Token);
V76			pop_state(); RETURN_TOKEN(V76Token);
Nx64Kservice|N64	pop_state(); RETURN_TOKEN(Nx64kToken);
}

<SC_notifyCompletion>{
IntByEvent|IBE		RETURN_TOKEN(InterruptByEventToken);
IntBySigDescr|IBS	RETURN_TOKEN(InterruptByNewSignalsDescrToken);
Iteration|IR		RETURN_TOKEN(IterationToken);
OtherReason|OR		RETURN_TOKEN(OtherReasonToken);
}

<SC_requestedEvent,SC_secondRequestedEvent>{
NeverNotify|NBNN	RETURN_TOKEN(NeverNotifyToken);
ImmediateNotify|NBIN	RETURN_TOKEN(NotifyImmediateToken);
RegulatedNotify|NBRN	RETURN_TOKEN(NotifyRegulatedToken);
ResetEventsDescriptor|RSE	RETURN_TOKEN(ResetEventsDescriptorToken);
}

<SC_serviceChangeDescriptor>{
Delay|DL		RETURN_TOKEN(DelayToken);
Method|MT		RETURN_TOKEN(MethodToken);
Reason|RE		RETURN_TOKEN(ReasonToken);
ServiceChangeInc|SIC	RETURN_TOKEN(ServiceChangeIncompleteToken);
}

<SC_serviceChangeDescriptor,SC_serviceChangeReplyDescriptor>{
MgcIdToTry|MG		RETURN_TOKEN(MgcIdToken);
Profile|PF		RETURN_TOKEN(ProfileToken);
ServiceChangeAddress|AD	RETURN_TOKEN(ServiceChangeAddressToken);
Version|V		RETURN_TOKEN(VersionToken);
}

<SC_serviceChangeMethod>{
Disconnected|DC		pop_state(); RETURN_TOKEN(DisconnectedToken);
Failover|FL		pop_state(); RETURN_TOKEN(FailoverToken);
Forced|FO		pop_state(); RETURN_TOKEN(ForcedToken);
Graceful|GR		pop_state(); RETURN_TOKEN(GracefulToken);
HandOff|HO		pop_state(); RETURN_TOKEN(HandOffToken);
Restart|RS		pop_state(); RETURN_TOKEN(RestartToken);
}

<SC_serviceStates>{
InService|IV		pop_state(); RETURN_TOKEN(InSvcToken);
OutOfService|OS		pop_state(); RETURN_TOKEN(OutOfSvcToken);
Test|TE			pop_state(); RETURN_TOKEN(TestToken);
}

<SC_sigDirection>{
Both|B			pop_state(); RETURN_TOKEN(BothToken);
External|EX		pop_state(); RETURN_TOKEN(ExternalToken);
Internal|IT		pop_state(); RETURN_TOKEN(InternalToken);
}

<SC_signalRequest,SC_signalList>{
(SPA)?(Direction|DI)	RETURN_TOKEN(DirectionToken);
Duration|DR		RETURN_TOKEN(DurationToken);
NotifyCompletion|NC	RETURN_TOKEN(NotifyCompletionToken);
SignalType|SY		RETURN_TOKEN(SignalTypeToken);
}

<SC_signalType>{
Brief|BR		pop_state(); RETURN_TOKEN(BriefToken);
OnOff|OO		pop_state(); RETURN_TOKEN(OnOffToken);
}

<SC_streamMode>{
Inactive|IN		pop_state(); RETURN_TOKEN(InactiveToken);
Loopback|LB		pop_state(); RETURN_TOKEN(LoopbackToken);
ReceiveOnly|RC		pop_state(); RETURN_TOKEN(RecvonlyToken);
SendOnly|SO		pop_state(); RETURN_TOKEN(SendonlyToken);
SendReceive|SR		pop_state(); RETURN_TOKEN(SendrecvToken);
}

<SC_terminationStateDescriptor,SC_indAudterminationStateDescriptor>{
Buffer|BF		RETURN_TOKEN(BufferToken);
ServiceStates|SI	RETURN_TOKEN(ServiceStatesToken);
}

<SC_topologyDescriptor_D>{
Bothway|BW			RETURN_TOKEN(BothwayToken);
Isolate|IS			RETURN_TOKEN(IsolateToken);
Oneway|OW			RETURN_TOKEN(OnewayToken);
OnewayBoth|OWB			RETURN_TOKEN(OnewayBothToken);
OnewayExternal|OWE		RETURN_TOKEN(OnewayExternalToken);
{LWSP},{LWSP}(Stream|ST)	{
  last_token = StreamToken;
  BEGIN(SC_topologyDescriptor_S);
  return COMMAStreamToken;
}
}

<SC_ammRequest,SC_subtractRequest,SC_auditRequest>Audit|AT		RETURN_TOKEN(AuditToken);
<SC_contextAttrDescriptor>ContextList|CLT		RETURN_TOKEN(ContextListToken);
<SC_actionRequestList,SC_actionReplyList,SC_contextTerminationAudit>Context|C		RETURN_TOKEN(CtxToken);
<SC_ammRequest,SC_ammsReply,SC_auditOther,SC_auditDescriptor,SC_serviceChangeDescriptor,SC_requestedEvent,SC_secondRequestedEvent>DigitMap|DM		RETURN_TOKEN(DigitMapToken);
<SC_requestedEvent,SC_notifyRegulated,SC_secondRequestedEvent>Embed|EM		RETURN_TOKEN(EmbedToken);
<SC_messageBody,SC_notifyRequest,SC_actionReplyList,SC_actionReply,SC_serviceChangeReply,SC_auditOther,SC_ammsReply,SC_notifyReply>Error|ER	RETURN_TOKEN(ErrorToken);
<SC_actionReplyList>ImmAckRequired|IA	RETURN_TOKEN(ImmAckRequiredToken);
<SC_requestedEvent,SC_secondRequestedEvent,SC_signalRequest,SC_signalList>KeepActive|KA		RETURN_TOKEN(KeepActiveToken);
<SC_eventBufferControl>LockStep|SP		pop_state(); RETURN_TOKEN(LockStepToken);
<SC_onOff,SC_eventBufferControl>OFF	pop_state(); return OFF;
<SC_onOff>ON				pop_state(); return ON;
<SC_notifyRequest,SC_auditOther,SC_ammsReply,SC_auditDescriptor,SC_serviceChangeDescriptor>ObservedEvents|OE	RETURN_TOKEN(ObservedEventsToken);
<SC_auditOther,SC_ammsReply,SC_auditDescriptor,SC_serviceChangeDescriptor>Packages|PG		RETURN_TOKEN(PackagesToken);
<SC_signalRequest,SC_signalList,SC_indAudsignalRequest>(SPA)?(RequestID|RQ)	RETURN_TOKEN(RequestIDToken);
<SC_messageBody,SC_transactionReply>END|&			RETURN_TOKEN(SegmentationCompleteToken);
<SC_serviceChangeRequest,SC_serviceChangeReply>Services|SV		RETURN_TOKEN(ServicesToken);
<SC_signalsDescriptor,SC_indAudsignalsDescriptor>SignalList|SL		RETURN_TOKEN(SignalListToken);
<SC_ammRequest,SC_ammsReply,SC_auditOther,SC_auditDescriptor,SC_serviceChangeDescriptor,SC_embedWithSig,SC_embedSig>Signals|SG		RETURN_TOKEN(SignalsToken);
<SC_ammRequest,SC_ammsReply,SC_auditOther,SC_mediaDescriptor,SC_streamDescriptor,SC_indAudmediaDescriptor,SC_indAudstreamDescriptor,SC_auditDescriptor,SC_serviceChangeDescriptor>Statistics|SA		RETURN_TOKEN(StatsToken);
<SC_mediaDescriptor,SC_indAudmediaDescriptor,SC_indAudeventSpec,SC_signalRequest,SC_signalList,SC_indAudsignalRequest,SC_requestedEvent,SC_secondRequestedEvent,SC_observedEvent,SC_eventSpec>Stream|ST		RETURN_TOKEN(StreamToken);
<SC_mediaDescriptor,SC_indAudmediaDescriptor>TerminationState|TS	RETURN_TOKEN(TerminationStateToken);
<SC_signalType,SC_notifyCompletion>TimeOut|TO		{
  if (YY_START == SC_signalType) pop_state();
  RETURN_TOKEN(TimeOutToken);
}

<SC_serviceChangeDescriptor,SC_serviceChangeReplyDescriptor,SC_observedEventsDescriptor>{TimeStamp}	{
  yylval.timeNotation = new H248__Types::TimeNotation(CHARSTRING(8, yytext), CHARSTRING(8, yytext + 9));
  return TimeStamp;
}

<SC_modemType,SC_modemTypeList,SC_MuxType,SC_serviceChangeDescriptor,SC_serviceChangeMethod>{extensionParameter}	{
  yylval.str = mcopystr(yytext);
  switch (YY_START) {
  case SC_modemType:
  case SC_MuxType:
  case SC_serviceChangeMethod:
    pop_state();
    break;
  case SC_serviceChangeDescriptor:
    push_state(SC_VALUE);
    break;
  }
  RETURN_TOKEN(extensionParameter);
}

<SC_terminationID,SC_termIDList,SC_terminationIDList,SC_contextTerminationAudit,SC_topologyDescriptor_A,SC_topologyDescriptor_B>{TerminationID}	{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  switch (YY_START) {
  case SC_terminationID:
    pop_state();
    break;
  case SC_contextTerminationAudit:
    /* this is an auditOther rather than contextTerminationAudit */
    BEGIN(SC_actionReply);
    break;
  }
  return terminationid;
}

<SC_localControlDescriptor,SC_indAudlocalControlDescriptor,SC_terminationStateDescriptor,SC_indAudterminationStateDescriptor,SC_eventBufferDescriptor,SC_indAudeventBufferDescriptor,SC_modemDescriptor,SC_signalsDescriptor,SC_indAudsignalsDescriptor,SC_signalList,SC_indAudsignalList,SC_eventsDescriptor,SC_indAudeventsDescriptor,SC_statisticsDescriptor,SC_indAudstatisticsDescriptor,SC_embedFirst,SC_observedEventsDescriptor,SC_contextAudit,SC_contextAttrDescriptor>{pkgdName}	{
  int slash_pos = 0;
  while (yytext[slash_pos] != '/') slash_pos++;
  yylval.pkgdName = new H248__Types::PkgdName(CHARSTRING(slash_pos, yytext),
    CHARSTRING(yyleng - (slash_pos + 1), yytext + slash_pos + 1));
  switch (YY_START) {
  case SC_localControlDescriptor:
  case SC_indAudlocalControlDescriptor:
  case SC_terminationStateDescriptor:
  case SC_indAudterminationStateDescriptor:
  case SC_modemDescriptor:
  case SC_statisticsDescriptor:
  case SC_indAudstatisticsDescriptor:
  case SC_contextAttrDescriptor:
    push_state(SC_VALUE);
    break;
  }
  RETURN_TOKEN(pkgdname);
}

<SC_VALUE,SC_VALUE_sublist,SC_VALUE_alternatives>{SafeCharValue}	{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  if (YY_START == SC_VALUE) pop_state();
  return SafeCharValue;
}

<INITIAL,SC_AuthData,SC_ModemToken,SC_MuxToken,SC_MuxType,SC_SecurityParmIndex,SC_SequenceNum,SC_VALUE,SC_VALUE_alternatives,SC_VALUE_sublist,SC_Version,SC_actionReply,SC_actionReplyList,SC_actionRequest,SC_actionRequestList,SC_ammRequest,SC_ammsReply,SC_auditDescriptor,SC_auditOther,SC_auditRequest,SC_contextAttrDescriptor,SC_contextAudit,SC_contextTerminationAudit,SC_digitMapValue,SC_embedFirst,SC_embedSig,SC_embedWithSig,SC_eventBufferControl,SC_eventBufferDescriptor,SC_eventSpec,SC_eventsDescriptor,SC_indAudeventBufferDescriptor,SC_indAudeventSpec,SC_indAudeventsDescriptor,SC_indAudlocalControlDescriptor,SC_indAudmediaDescriptor,SC_indAudpackagesDescriptor,SC_indAudsignalList,SC_indAudsignalRequest,SC_indAudsignalsDescriptor,SC_indAudstatisticsDescriptor,SC_indAudstreamDescriptor,SC_indAudterminationStateDescriptor,SC_localControlDescriptor,SC_mId,SC_mediaDescriptor,SC_messageBody,SC_modemDescriptor,SC_modemType,SC_modemTypeList,SC_mtpAddress,SC_notifyCompletion,SC_notifyRegulated,SC_notifyReply,SC_notifyRequest,SC_observedEvent,SC_observedEventsDescriptor,SC_octetString,SC_onOff,SC_packagesDescriptor,SC_requestedEvent,SC_secondRequestedEvent,SC_serviceChangeDescriptor,SC_serviceChangeMethod,SC_serviceChangeReply,SC_serviceChangeReplyDescriptor,SC_serviceChangeRequest,SC_serviceStates,SC_sigDirection,SC_signalList,SC_signalRequest,SC_signalType,SC_signalsDescriptor,SC_statisticsDescriptor,SC_streamDescriptor,SC_streamMode,SC_subtractRequest,SC_termIDList,SC_terminationID,SC_terminationIDList,SC_terminationStateDescriptor,SC_topologyDescriptor_A,SC_topologyDescriptor_B,SC_topologyDescriptor_D,SC_topologyDescriptor_S,SC_transactionReply>{LWSP}\{{LWSP} {
  /* valid in all states except SC_localRemoteDescriptor */
  switch (YY_START) {
  case SC_VALUE:
    BEGIN(SC_VALUE_alternatives);
    break;
  case SC_ModemToken:
    BEGIN(SC_modemDescriptor);
    break;
  case SC_MuxToken:
    BEGIN(SC_terminationIDList);
    break;
  case SC_mtpAddress:
    break;
  default:
    switch (last_token) {
    case AddToken:
    case MoveToken:
    case ModifyToken:
      switch (YY_START) {
      case SC_actionRequest:
	push_state(SC_ammRequest);
	break;
      case SC_actionReply:
	push_state(SC_ammsReply);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case AuditToken:
      push_state(SC_auditDescriptor);
      break;
    case AuditCapToken:
    case AuditValueToken:
      switch (YY_START) {
      case SC_actionRequest:
	push_state(SC_auditRequest);
	break;
      case SC_actionReply:
	push_state(SC_auditOther);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case ContextAttrToken:
      if (YY_START == SC_contextAudit) push_state(SC_contextAudit);
      else push_state(SC_contextAttrDescriptor);
      break;
    case ContextAuditToken:
      push_state(SC_contextAudit);
      break;
    case CtxToken:
      switch (YY_START) {
      case SC_actionRequestList:
	push_state(SC_actionRequest);
	break;
      case SC_actionReplyList:
	push_state(SC_actionReply);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case DigitMapToken:
      push_state(SC_digitMapValue);
      break;
    case EmbedToken:
      switch (YY_START) {
      case SC_requestedEvent:
      case SC_notifyRegulated:
	push_state(SC_embedWithSig);
	break;
      case SC_secondRequestedEvent:
	push_state(SC_embedSig);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case EventBufferToken:
      if (YY_START == SC_auditDescriptor) push_state(SC_indAudeventBufferDescriptor);
      else push_state(SC_eventBufferDescriptor);
      break;
    case EventsToken:
      switch (YY_START) {
      case SC_auditDescriptor:
	push_state(SC_indAudeventsDescriptor);
	break;
      case SC_auditOther:
      case SC_ammRequest:
      case SC_ammsReply:
	push_state(SC_eventsDescriptor);
	break;
      case SC_embedWithSig:
	push_state(SC_embedFirst);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case LocalControlToken:
      if (YY_START == SC_indAudmediaDescriptor) push_state(SC_indAudlocalControlDescriptor);
      else push_state(SC_localControlDescriptor);
      break;
    case MediaToken:
      if (YY_START == SC_auditDescriptor) push_state(SC_indAudmediaDescriptor);
      else push_state(SC_mediaDescriptor);
      break;
    case NotifyToken:
      switch (YY_START) {
      case SC_actionRequest:
	push_state(SC_notifyRequest);
	break;
      case SC_actionReply:
	push_state(SC_notifyReply);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case NotifyCompletionToken:
      push_state(SC_notifyCompletion);
      break;
    case NotifyRegulatedToken:
      push_state(SC_notifyRegulated);
      break;
    case ObservedEventsToken:
      push_state(SC_observedEventsDescriptor);
      break;
    case PackagesToken:
      if (YY_START == SC_auditDescriptor) push_state(SC_indAudpackagesDescriptor);
      else push_state(SC_packagesDescriptor);
      break;
    case ReplyToken:
      BEGIN(SC_messageBody);
      push_state(SC_actionReplyList);
      break;
    case SegmentationCompleteToken:
      /* this can appear only in state SC_transactionReply */
      BEGIN(SC_messageBody);
      push_state(SC_actionReplyList);
      break;
    case ServiceChangeToken:
      switch (YY_START) {
      case SC_actionRequest:
	push_state(SC_serviceChangeRequest);
	break;
      case SC_actionReply:
	push_state(SC_serviceChangeReply);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case ServicesToken:
      switch (YY_START) {
      case SC_serviceChangeRequest:
	push_state(SC_serviceChangeDescriptor);
	break;
      case SC_serviceChangeReply:
	push_state(SC_serviceChangeReplyDescriptor);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case SignalListToken:
      if (YY_START == SC_indAudsignalsDescriptor) push_state(SC_indAudsignalList);
      else push_state(SC_signalList);
      break;
    case SignalsToken:
      if (YY_START == SC_auditDescriptor) push_state(SC_indAudsignalsDescriptor);
      else push_state(SC_signalsDescriptor);
      break;
    case StatsToken:
      if (YY_START == SC_auditDescriptor) push_state(SC_indAudstatisticsDescriptor);
      else push_state(SC_statisticsDescriptor);
      break;
    case StreamToken:
      if (YY_START == SC_indAudmediaDescriptor) push_state(SC_indAudstreamDescriptor);
      else push_state(SC_streamDescriptor);
      break;
    case SubtractToken:
      switch (YY_START) {
      case SC_actionRequest:
	push_state(SC_subtractRequest);
	break;
      case SC_actionReply:
	push_state(SC_ammsReply);
	break;
      default:
	push_state(YY_START);
      }
      break;
    case TerminationStateToken:
      if (YY_START == SC_indAudmediaDescriptor) push_state(SC_indAudterminationStateDescriptor);
      else push_state(SC_terminationStateDescriptor);
      break;
    case TopologyToken:
      push_state(SC_topologyDescriptor_A);
      break;
    case TransToken:
      push_state(SC_actionRequestList);
      break;
    case pkgdname:
      switch (YY_START) {
      case SC_indAudeventBufferDescriptor:
	push_state(SC_indAudeventSpec);
	break;
      case SC_signalsDescriptor:
      case SC_signalList:
	push_state(SC_signalRequest);
	break;
      case SC_indAudsignalsDescriptor:
      case SC_indAudsignalList:
	push_state(SC_indAudsignalRequest);
	break;
      case SC_eventsDescriptor:
	push_state(SC_requestedEvent);
	break;
      case SC_embedFirst:
	push_state(SC_secondRequestedEvent);
	break;
      case SC_observedEventsDescriptor:
	push_state(SC_observedEvent);
	break;
      case SC_eventBufferDescriptor:
	push_state(SC_eventSpec);
	break;
      default:
	push_state(YY_START);
      }
      break;
    default:
      push_state(YY_START);
    }
  }
  return LBRKT;
}

<INITIAL,SC_AuthData,SC_ModemToken,SC_MuxToken,SC_MuxType,SC_SecurityParmIndex,SC_SequenceNum,SC_VALUE,SC_VALUE_alternatives,SC_VALUE_sublist,SC_Version,SC_actionReply,SC_actionReplyList,SC_actionRequest,SC_actionRequestList,SC_ammRequest,SC_ammsReply,SC_auditDescriptor,SC_auditOther,SC_auditRequest,SC_contextAttrDescriptor,SC_contextAudit,SC_contextTerminationAudit,SC_digitMapValue,SC_embedFirst,SC_embedSig,SC_embedWithSig,SC_eventBufferControl,SC_eventBufferDescriptor,SC_eventSpec,SC_eventsDescriptor,SC_indAudeventBufferDescriptor,SC_indAudeventSpec,SC_indAudeventsDescriptor,SC_indAudlocalControlDescriptor,SC_indAudmediaDescriptor,SC_indAudpackagesDescriptor,SC_indAudsignalList,SC_indAudsignalRequest,SC_indAudsignalsDescriptor,SC_indAudstatisticsDescriptor,SC_indAudstreamDescriptor,SC_indAudterminationStateDescriptor,SC_localControlDescriptor,SC_localRemoteDescriptor,SC_mId,SC_mediaDescriptor,SC_messageBody,SC_modemDescriptor,SC_modemType,SC_modemTypeList,SC_notifyCompletion,SC_notifyRegulated,SC_notifyReply,SC_notifyRequest,SC_observedEvent,SC_observedEventsDescriptor,SC_onOff,SC_packagesDescriptor,SC_requestedEvent,SC_secondRequestedEvent,SC_serviceChangeDescriptor,SC_serviceChangeMethod,SC_serviceChangeReply,SC_serviceChangeReplyDescriptor,SC_serviceChangeRequest,SC_serviceStates,SC_sigDirection,SC_signalList,SC_signalRequest,SC_signalType,SC_signalsDescriptor,SC_statisticsDescriptor,SC_streamDescriptor,SC_streamMode,SC_subtractRequest,SC_termIDList,SC_terminationID,SC_terminationIDList,SC_terminationStateDescriptor,SC_topologyDescriptor_A,SC_topologyDescriptor_B,SC_topologyDescriptor_D,SC_topologyDescriptor_S,SC_transactionReply>{LWSP}\}{LWSP} {
  /* valid in all states except SC_mtpAddress, SC_octetString */
  switch (YY_START) {
  case SC_VALUE:
  case SC_ModemToken:
  case SC_MuxToken:
    pop_state();
  }
  pop_state();
  return RBRKT;
}

<INITIAL,SC_AuthData,SC_ModemToken,SC_MuxToken,SC_MuxType,SC_SecurityParmIndex,SC_SequenceNum,SC_VALUE,SC_VALUE_alternatives,SC_VALUE_sublist,SC_Version,SC_actionReply,SC_actionReplyList,SC_actionRequest,SC_actionRequestList,SC_ammRequest,SC_ammsReply,SC_auditDescriptor,SC_auditOther,SC_auditRequest,SC_contextAttrDescriptor,SC_contextAudit,SC_contextTerminationAudit,SC_digitMapValue,SC_embedFirst,SC_embedSig,SC_embedWithSig,SC_eventBufferControl,SC_eventBufferDescriptor,SC_eventSpec,SC_eventsDescriptor,SC_indAudeventBufferDescriptor,SC_indAudeventSpec,SC_indAudeventsDescriptor,SC_indAudlocalControlDescriptor,SC_indAudmediaDescriptor,SC_indAudpackagesDescriptor,SC_indAudsignalList,SC_indAudsignalRequest,SC_indAudsignalsDescriptor,SC_indAudstatisticsDescriptor,SC_indAudstreamDescriptor,SC_indAudterminationStateDescriptor,SC_localControlDescriptor,SC_localRemoteDescriptor,SC_mediaDescriptor,SC_messageBody,SC_modemDescriptor,SC_modemType,SC_modemTypeList,SC_mtpAddress,SC_notifyCompletion,SC_notifyRegulated,SC_notifyReply,SC_notifyRequest,SC_observedEvent,SC_observedEventsDescriptor,SC_octetString,SC_onOff,SC_packagesDescriptor,SC_requestedEvent,SC_secondRequestedEvent,SC_serviceChangeDescriptor,SC_serviceChangeMethod,SC_serviceChangeReply,SC_serviceChangeReplyDescriptor,SC_serviceChangeRequest,SC_serviceStates,SC_sigDirection,SC_signalList,SC_signalRequest,SC_signalType,SC_signalsDescriptor,SC_statisticsDescriptor,SC_streamDescriptor,SC_streamMode,SC_subtractRequest,SC_termIDList,SC_terminationID,SC_terminationIDList,SC_terminationStateDescriptor,SC_topologyDescriptor_A,SC_topologyDescriptor_B,SC_topologyDescriptor_D,SC_topologyDescriptor_S,SC_transactionReply>{
{LWSP}<{LWSP}	{
  /* valid in all states except SC_mId */
  switch (last_token) {
  case ModeToken:
    push_state(SC_streamMode);
    break;
  case ServiceStatesToken:
    push_state(SC_serviceStates);
    break;
  }
  return LESSTHAN;
}

{LWSP}\[{LWSP} {
  /* valid in all states except SC_mId */
  switch (YY_START) {
  case SC_terminationID:
    BEGIN(SC_termIDList);
    break;
  case SC_contextTerminationAudit:
    /* this is an auditOther rather than contextTerminationAudit */
    BEGIN(SC_actionReply);
    push_state(SC_termIDList);
    break;
  case SC_ModemToken:
    push_state(SC_modemTypeList);
    break;
  case SC_VALUE:
    BEGIN(SC_VALUE_sublist);
    break;
  }
  return LSBRKT;
}
}

<*>{
{DIGIT}+		{
  yylval.str = mcopystr(yytext);
  switch (YY_START) {
  case SC_Version:
    BEGIN(SC_messageBody);
    push_state(SC_mId);
    break;
  case SC_mId:
    pop_state();
    break;
  }
  return NUMBER;
}

{NAME}			{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  switch (YY_START) {
  case SC_signalRequest:
  case SC_signalList:
  case SC_requestedEvent:
  case SC_secondRequestedEvent:
  case SC_observedEvent:
  case SC_eventSpec:
    push_state(SC_VALUE);
    break;
  }
  return NAME;
}

{quotedString}		{
  yylval.charstring = new CHARSTRING(yyleng, yytext);
  if (YY_START == SC_VALUE) pop_state();
  return quotedString;
}

{SEP}			return SEP;

{LWSP}={LWSP}		{
  switch (last_token) {
  case AddToken:
  case ModifyToken:
  case MoveToken:
  case NotifyToken:
  case ServiceChangeToken:
  case SubtractToken:
    push_state(SC_terminationID);
    break;
  case AuditCapToken:
  case AuditValueToken:
    if (YY_START == SC_actionReply) BEGIN(SC_contextTerminationAudit);
    else push_state(SC_terminationID);
    break;
  case BufferToken:
    push_state(SC_eventBufferControl);
    break;
  case DirectionToken:
    push_state(SC_sigDirection);
    break;
  case IEPSToken:
  case ReservedGroupToken:
  case ReservedValueToken:
    push_state(SC_onOff);
    break;
  case MethodToken:
    push_state(SC_serviceChangeMethod);
    break;
  case MgcIdToken:
  case ServiceChangeAddressToken:
    push_state(SC_mId);
    break;
  case ModeToken:
    push_state(SC_streamMode);
    break;
  case ModemToken:
    push_state(SC_modemType);
    break;
  case MuxToken:
    push_state(SC_MuxType);
    break;
  case ReasonToken:
    push_state(SC_VALUE);
    break;
  case ServiceStatesToken:
    push_state(SC_serviceStates);
    break;
  case SignalTypeToken:
    push_state(SC_signalType);
    break;
  }
  return EQUAL;
}

{LWSP}>{LWSP}	{
  switch (last_token) {
  case ModeToken:
    push_state(SC_streamMode);
    break;
  case ServiceStatesToken:
    push_state(SC_serviceStates);
    break;
  }
  return GREATERTHAN;
}

{LWSP}#{LWSP}	{
  switch (last_token) {
  case ModeToken:
    push_state(SC_streamMode);
    break;
  case ServiceStatesToken:
    push_state(SC_serviceStates);
    break;
  }
  return NOTEQUAL;
}

{LWSP}\]{LWSP}	{
  switch (YY_START) {
  case SC_termIDList:
  case SC_modemTypeList:
  case SC_VALUE_sublist:
    pop_state();
    break;
  }
  return RSBRKT;
}

{LWSP},{LWSP}	{
  switch (YY_START) {
  case SC_VALUE:
  case SC_ModemToken:
  case SC_MuxToken:
    pop_state();
    break;
  case SC_topologyDescriptor_A:
    BEGIN(SC_topologyDescriptor_B);
    break;
  case SC_topologyDescriptor_B:
    BEGIN(SC_topologyDescriptor_D);
    break;
  case SC_topologyDescriptor_D:
  case SC_topologyDescriptor_S:
    BEGIN(SC_topologyDescriptor_A);
    break;
  }
  return COMMA;
}

.		return yytext[0];
}

%%

/** Pushes the current state onto the stack and enters \a new_state */
static void push_state(int new_state)
{
  yy_push_state(new_state);
  stack_size++;
}

/** Pops a state from the stack if it is not empty.
 * Does nothing in case of empty stack */
static void pop_state()
{
  if (stack_size > 0) {
    yy_pop_state();
    stack_size--;
  }
}

/** Resets the internal state of the lexer before starting to read a new PDU. */
void init_H248_yylex()
{
  while (stack_size > 0) {
    yy_pop_state();
    stack_size--;
  }
  BEGIN(INITIAL);
  last_token = -1;
}
