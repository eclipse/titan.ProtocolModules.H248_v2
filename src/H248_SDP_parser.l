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
//  File:               H248_SDP_parser.l
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T SDP

#include "H248_SDP_parse_parser.h"
#include "H248_SDP_parse_.tab.h"

using namespace H248__SDP__Types;

extern int SDP_parse_parse();
static int chr_pos;
static int error_handling;
static int error_occured;
int H248_SDP_parse_error(const char *s) {
	if (H248_SDP_parse_text[0]=='\n') {
    	if(error_handling){
      	TTCN_error("SDP EncDec:  %s in \"\\n\" at position %d",s,chr_pos);
    	} else {
      	TTCN_warning("SDP EncDec:  %s in \"\\n\" at position %d",s,chr_pos);
      	error_occured=1;
    	}
  }
	else if (H248_SDP_parse_text[0]=='\r') {
    	if(error_handling){
       	TTCN_error("SDP EncDec:  %s in \"\\r\" at position %d",s,chr_pos);
    	} else {
       	TTCN_warning("SDP EncDec:  %s in \"\\r\" at position %d",s,chr_pos);
      	error_occured=1;
    	}
  }
 	else {
    	if(error_handling){
        	TTCN_error("SDP EncDec:  %s in \"%s\" -> unexpected token at position %d",s,H248_SDP_parse_text,chr_pos);
    	} else {
        	TTCN_warning("SDP EncDec:  %s in \"%s\" -> unexpected token at position %d",s,H248_SDP_parse_text,chr_pos);
      	error_occured=1;
     	}
  }
	return 0;
}

%}

%option noyywrap
%option nounput

%x FIELD
%x A_FIELD
%x A_FIELD_VAL
%x KEY_FIELD
%x EMAIL_FIELD
%x C_FIELD
%x V_FIELD
%x S_FIELD
%x T_FIELD
%x AA_FIELD
%x A_MAXPRATE_F

%%

<INITIAL>[ \t\r\n]*"v=" {chr_pos+=H248_SDP_parse_leng;BEGIN(V_FIELD);return VEQ;}
<INITIAL>"o=" {chr_pos+=H248_SDP_parse_leng;BEGIN(T_FIELD);return OEQ;}
<INITIAL>"s=" {chr_pos+=H248_SDP_parse_leng;BEGIN(S_FIELD);return SEQ;}
<INITIAL>"i=" {chr_pos+=H248_SDP_parse_leng;BEGIN(S_FIELD);return IEQ;}
<INITIAL>"u=" {chr_pos+=H248_SDP_parse_leng;BEGIN(S_FIELD);return UEQ;}
<INITIAL>"e=" {chr_pos+=H248_SDP_parse_leng;BEGIN(EMAIL_FIELD);return EEQ;}
<INITIAL>"p=" {chr_pos+=H248_SDP_parse_leng;BEGIN(FIELD);return PEQ;}
<INITIAL>"c=" {chr_pos+=H248_SDP_parse_leng;BEGIN(C_FIELD);return CEQ;}
<INITIAL>"b=" {chr_pos+=H248_SDP_parse_leng;BEGIN(A_FIELD);return BEQ;}
<INITIAL>"t=" {chr_pos+=H248_SDP_parse_leng;BEGIN(T_FIELD);return TEQ;}
<INITIAL>"z=" {chr_pos+=H248_SDP_parse_leng;BEGIN(V_FIELD);return ZEQ;}
<INITIAL>"r=" {chr_pos+=H248_SDP_parse_leng;BEGIN(V_FIELD);return REQ;}
<INITIAL>"k=" {chr_pos+=H248_SDP_parse_leng;BEGIN(A_FIELD);return KEQ;}
<INITIAL>"a=" {chr_pos+=H248_SDP_parse_leng;BEGIN(AA_FIELD);return AEQ;}
<INITIAL>"m=" {chr_pos+=H248_SDP_parse_leng;BEGIN(C_FIELD);return MEQ;}
<INITIAL>[ \t\r\n]+ {chr_pos+=H248_SDP_parse_leng;BEGIN(INITIAL);return CRLF;}

<EMAIL_FIELD>[^ \r\n\0<>()]+\@[^ \r\n\0<>()]+ {
	chr_pos+=H248_SDP_parse_leng;BEGIN(FIELD);
	H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text);
	return EMAIL;
}

<C_FIELD>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
"/" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SLASH;}
[^ \r\n/]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}
<T_FIELD>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
[^ \r\n]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}

<A_FIELD>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
":" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return COLON;}
[^ \r\n:]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}

<A_FIELD_VAL>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
[^ \r\n]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}

<A_MAXPRATE_F>{
"." {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return PERIOD;}
[^\r\n.]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}
<S_FIELD>{
[^\r\n]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return TOKEN;}
}


<V_FIELD>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
[-0-9$]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.intnum = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text); return INTTOKEN;}
[a-zA-Z]  {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return ALPHA;}
}

<FIELD,EMAIL_FIELD>{
"0" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 0; return _ZERO;}
"1" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 1; return _ONE;}
"2" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 2; return _TWO;}
"3" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 3; return _THREE;}
"4" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 4; return _FOUR;}
"5" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 5; return _FIVE;}
"6" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 6; return _SIX;}
"7" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 7; return _SEVEN;}
"8" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 8; return _EIGHT;}
"9" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.number = 9; return _NINE;}


[A-Za-z] {H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return ALPHA;}
"_"	{chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return UNDERSCORE;}
"."	{chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return PERIOD;}
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
"(" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return LBRACE;}
")" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return RBRACE;}
"<" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return LT;}
">" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return GT;}
"+" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return PLUS;}
"-" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return HYPHEN;}
"/" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SLASH;}
":" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return COLON;}
"\0" {TTCN_error("Null byte in input string.");}
.	{chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return ANYBYTE;}
}

<AA_FIELD>{
" " {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return SPACE;}
":" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text;  BEGIN(S_FIELD); return COLON;}
"cat:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CAT;}
"keywds:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_KEYWDS;}
"tool:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_TOOL;}
"ptime:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_PTIME;}
"recvonly" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_RECVONLY;}
"sendrecv" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_SENDRECV;}
"sendonly" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_SENDONLY;}
"orient:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_ORIENT;}
"type:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_TYPE;}
"charset:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CHARSET;}
"sdplang:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_SDLANG;}
"lang:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_LANG;}
"framerate:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FRAMERATE;}
"quality:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_QUALITY;}
"fmtp:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FMTP;}
"curr:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CURR;}
"des:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_DES;}
"conf:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CONF;}
"rtpmap:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_RTMAP;}
"rtcp:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_RTCP;}
"max-size:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_MAX_SIZE;}
"path:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(A_FIELD_VAL); return A_PATH;}
"accept-types:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(A_FIELD_VAL); return A_ACCEPT_TYPES;}
"accept-wrapped-types:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(A_FIELD_VAL); return A_ACCEPT_WRAPPED_TYPES;}
"maxprate:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(A_MAXPRATE_F); return A_MAXPRATE;}
"mid:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_MID;}
"group:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(A_FIELD_VAL); return A_GROUP;}
"file-selector:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FILE_SELECTOR;}
"file-transfer-id:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FILE_TRANSFER_ID;}
"inactive" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(C_FIELD); return A_INACTIVE;}
"setup:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_SETUP;}
"connection:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CONNECTION;}
"crypto:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CRYPTO;}

"content:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CONTENT;}
"label:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_LABEL;}
"floorctrl:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FLOORCTRL;}
"confid:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_CONFID;}
"userid:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_USERID;}
"floorid:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FLOORID;}
"fingerprint:" {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.byte = *H248_SDP_parse_text; BEGIN(S_FIELD); return A_FINGERPRINT;}



[^ \r\n:]+ {chr_pos+=H248_SDP_parse_leng;H248_SDP_parse_lval.t_charstring = new CHARSTRING(H248_SDP_parse_leng, (const char*)H248_SDP_parse_text);return TOKEN;}
}


<*>"\n" {chr_pos+=H248_SDP_parse_leng;BEGIN(INITIAL); H248_SDP_parse_lval.byte = *H248_SDP_parse_text; return CRLF;}
<*>"\r\n" {chr_pos+=H248_SDP_parse_leng;BEGIN(INITIAL); return CRLF;}


%%
/*user code*/

H248__SDP__Message__list H248__SDP__Types::f__H248__SDP__Dec(const CHARSTRING& input) {

  bool v_found=true;
  
  const char* ch=(const char*)input;
  int skipped=0;
  while(( *ch==' ' || *ch=='\r' || *ch=='\n' || *ch=='\t' ) && *ch) {skipped++;ch++;}
  if(*ch!='v'){
    v_found=false;
    CHARSTRING chstr=CHARSTRING("v=1\r\n")+ch;
    H248_SDP_parse__scan_bytes ((const char*)chstr, chstr.lengthof());
//    printf("Hali %s\r\n",(const char*)chstr);
  } else {
    H248_SDP_parse__scan_bytes ((const char*)input, input.lengthof());
  }

//	SDP_parse_debug=1;
	chr_pos=0;
	error_handling=1;
	H248__SDP__Message__list parsed_msg;
	H248_SDP_parse_set_parsed_message(&parsed_msg);
	
	H248_SDP_parse_parse();
	
	if(!v_found){
	  parsed_msg[0].protocol__version()=OMIT_VALUE;
	}
  H248_SDP_parse_lex_destroy();
	return parsed_msg;
}
INTEGER H248__SDP__Types::f__H248__SDP__Dec__backtrack(const CHARSTRING& input, H248__SDP__Message__list& pl__message) {

  bool v_found=true;
  
  const char* ch=(const char*)input;
  int skipped=0;
  while(( *ch==' ' || *ch=='\r' || *ch=='\n' || *ch=='\t' ) && *ch) {skipped++;ch++;}
  if(*ch!='v'){
    v_found=false;
    CHARSTRING chstr=CHARSTRING("v=1\r\n")+ch;
    H248_SDP_parse__scan_bytes ((const char*)chstr, chstr.lengthof());
//    printf("Hali %s\r\n",(const char*)chstr);
  } else {
    H248_SDP_parse__scan_bytes ((const char*)input, input.lengthof());
  }

//	SDP_parse_debug=1;
	error_occured=0;
  chr_pos=0;
	error_handling=0;
	H248__SDP__Message__list parsed_msg;
	H248_SDP_parse_set_parsed_message(&parsed_msg);
	
	H248_SDP_parse_parse();
	
	if(!v_found){
	  parsed_msg[0].protocol__version()=OMIT_VALUE;
	}
  if(!error_occured){
    pl__message=parsed_msg;
  }
  H248_SDP_parse_lex_destroy();
	return error_occured;
}


