%{
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
//  File:               H248_SDP_parser.y
//  Rev:                R6A
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T SDP
/*C declarations*/

#include "H248_SDP_parse_parser.h"
#include <stdarg.h>
#define YYDEBUG 1
using namespace H248__SDP__Types;

extern int SDP_parse_lex();
extern int SDP_parse_error(char *s);

H248__SDP__Message__list* H248_SDP_parse_parsed_message;

H248__SDP__Message__list* H248_SDP_parse_get_parsed_message() {
	return H248_SDP_parse_parsed_message;
}

void H248_SDP_parse_set_parsed_message(H248__SDP__Message__list* pdu) {
	H248_SDP_parse_parsed_message=pdu;
}


%}

/*Bison declarations*/

%union {
	int number;
	CHARSTRING* intnum;
	char byte;
	CHARSTRING* t_charstring;
	H248__SDP__Types::H248__SDP__Message__list* t_sdp_message_list;
	H248__SDP__Types::H248__SDP__Message* t_sdp_message;
	H248__SDP__Types::H248__SDP__Origin* t_sdp_origin;
	H248__SDP__Types::H248__SDP__contact* t_sdp_contact;
	H248__SDP__Types::H248__SDP__email__list* t_sdp_email_list;
	H248__SDP__Types::H248__SDP__phone__list* t_sdp_phone_list;
	H248__SDP__Types::H248__SDP__connection* t_sdp_connection;
	H248__SDP__Types::H248__SDP__connection__list* t_sdp_connection_list;
	H248__SDP__Types::H248__SDP__conn__addr* t_sdp_conn_addr;
	H248__SDP__Types::H248__SDP__bandwidth* t_sdp_bandwidth;
	H248__SDP__Types::H248__SDP__time__list* t_sdp_time_list;
	H248__SDP__Types::H248__SDP__time* t_sdp_time;
	H248__SDP__Types::H248__SDP__time__field* t_sdp_time_field;
	H248__SDP__Types::H248__SDP__repeat* t_sdp_repeat;
	H248__SDP__Types::H248__SDP__repeat__list* t_sdp_repeat_list;
	H248__SDP__Types::H248__SDP__timezone__list* t_sdp_timezone_list;
	H248__SDP__Types::H248__SDP__timezone* t_sdp_timezone;
	H248__SDP__Types::H248__SDP__typed__time* t_sdp_typed_time;
	H248__SDP__Types::H248__SDP__typed__time__list* t_sdp_typed_time_list;
	H248__SDP__Types::H248__SDP__key* t_sdp_key;
	H248__SDP__Types::H248__SDP__attribute* t_sdp_attribute;
	H248__SDP__Types::H248__SDP__attribute__list* t_sdp_attribute_list;
	H248__SDP__Types::H248__SDP__media__desc* t_sdp_media_desc;
	H248__SDP__Types::H248__SDP__media__desc__list* t_sdp_media_desc_list;
	H248__SDP__Types::H248__SDP__media__field* t_sdp_media_field;
	H248__SDP__Types::H248__SDP__fmt__list* t_sdp_fmt_list;
	H248__SDP__Types::H248__SDP__bandwidth__list* t_bandwidth_list;
	H248__SDP__Types::H248__SDP__url__list* t_url_list;
	H248__SDP__Types::H248__SDP__media__type__list* t_type_list;
	H248__SDP__Types::H248__SDP__id__tag__list* t_id_list;
}

%type <t_sdp_message> announcement
%type <t_sdp_message_list> announcementlist
%type <t_bandwidth_list> bandwidth_list
%type <t_sdp_media_desc_list> media_descriptions
%type <t_url_list> url_list
%type <t_id_list> id_list
%type <t_type_list> type_list
%type <t_sdp_fmt_list> fmt_list

%type <t_sdp_media_field> media_field

%type <t_sdp_media_desc> media_description

%type <t_sdp_attribute_list> attribute_fields
%type <t_sdp_attribute> attribute_field attribute
%type <t_sdp_key> key_field key_type

%type <t_sdp_time_list> time_list time_list2
%type <t_sdp_time> time
%type <t_sdp_time_field> time_field
%type <t_sdp_repeat> repeat
%type <t_sdp_repeat_list> repeat_list
%type <t_sdp_timezone_list> timezone_list timezones_field
%type <t_sdp_timezone> timezone
%type <t_sdp_typed_time> typed_time
%type <t_sdp_typed_time_list> offsets

%type <t_sdp_origin> origin_field 
%type <t_charstring>  session_name_field information_field uri_field email_text phone transport   proto_version 


%type <t_sdp_email_list> email_fields

%type <t_sdp_phone_list> phone_fields

%type <t_sdp_contact> email_field email_address phone_field phone_number

%type <t_sdp_connection> connection_field connection_field_lonely

%type <t_sdp_connection_list> connection_fields

%type <t_sdp_conn_addr> conn_address

%type <t_sdp_bandwidth> bandwidth_field

%type <number> pos_digit digit

%type <byte>  alpha_numeric email_byte 

%token <number> _ZERO _ONE _TWO _THREE _FOUR _FIVE _SIX _SEVEN _EIGHT _NINE

%token CRLF

%token <byte> ALPHA SPACE UNDERSCORE PERIOD ANYBYTE LBRACE RBRACE LT GT PLUS HYPHEN SLASH COLON

%token <t_charstring> EMAIL TOKEN

%token <intnum> INTTOKEN

%token VEQ OEQ SEQ IEQ UEQ EEQ PEQ CEQ BEQ BW_CT BW_AS TEQ ZEQ REQ KEQ AEQ MEQ

%token A_CAT A_KEYWDS A_TOOL A_PTIME A_RECVONLY A_SENDRECV A_SENDONLY A_ORIENT A_TYPE A_CHARSET A_SDLANG
%token A_LANG A_FRAMERATE A_QUALITY A_FMTP A_CURR A_DES A_CONF A_RTMAP A_RTCP A_MAX_SIZE A_PATH A_ACCEPT_TYPES
%token A_ACCEPT_WRAPPED_TYPES A_MAXPRATE A_MID A_GROUP A_FILE_SELECTOR A_FILE_TRANSFER_ID A_INACTIVE A_SETUP
%token A_CONNECTION A_CRYPTO A_CONTENT A_LABEL A_FLOORCTRL A_CONFID A_USERID A_FLOORID A_FINGERPRINT

%start announcements

%%

/*Grammar rules*/
announcements: announcementlist{
				YYACCEPT;
				}

       
announcementlist: announcement {
					(*H248_SDP_parse_parsed_message)[0] = *$1;
					delete $1;
       }
       | announcementlist announcement {
					int anounce_num = (*H248_SDP_parse_parsed_message).size_of();
					(*H248_SDP_parse_parsed_message)[anounce_num] = *$2;
					delete $2;
       }
  

announcement:
        proto_version
				origin_field
				session_name_field
				information_field
				uri_field
				email_fields
				phone_fields
				connection_field_lonely
				bandwidth_list
				time_list2
				timezones_field
				key_field
				attribute_fields
				media_descriptions
				{
				$$ = new H248__SDP__Message;
				if ($1 != NULL) {
								(*$$).protocol__version() = *$1;
				         delete $1;
				} else
					(*$$).protocol__version() = OMIT_VALUE;

				if ($2 != NULL) {
				(*$$).origin() = *$2;
				delete $2;
				} else
					(*$$).origin() = OMIT_VALUE;

				if ($3 != NULL) {
				(*$$).session__name() = *$3;
				delete $3;
				} else
					(*$$).session__name() = OMIT_VALUE;

				if ($4 != NULL) { // information field present
					(*$$).information() = *$4;
					delete $4;
				} else
					(*$$).information() = OMIT_VALUE;

				if ($5 != NULL) { // uri field present
					(*$$).uri() = *$5;
					delete $5;
				} else
					(*$$).uri() = OMIT_VALUE;
				if ($6 != NULL) { //email fields present
					(*$$).emails() = *$6;
					delete $6;
				} else
					(*$$).emails() = OMIT_VALUE;
				if ($7 != NULL) { // phone fields present
					(*$$).phone__numbers() = *$7;
					delete $7;
				} else
					(*$$).phone__numbers() = OMIT_VALUE;
				
				
				if ($8 != NULL) { // connection fields present
				(*$$).connection() = (*$8);
				delete $8;
				} else 
				  (*$$).connection() = OMIT_VALUE;
				  
				if ($9 != NULL) {
					(*$$).bandwidth() = *$9;
					delete $9;
				} else
					(*$$).bandwidth() = OMIT_VALUE;

				if ($10 != NULL) {
				(*$$).times() = *$10;
					delete $10;
				} else
					(*$$).times() = OMIT_VALUE;

				if ($11 != NULL) {
					(*$$).timezone__adjustments() = *$11;
					delete $11;
				} else
					(*$$).timezone__adjustments() = OMIT_VALUE;

				
				if ($12 != NULL) {
					(*$$).key () = *$12;
					delete $12;
				} else {
					(*$$).key() = OMIT_VALUE;
				}
				
				if ($13 != NULL) {
					(*$$).attributes() = *$13;
					delete $13;
				} else {
					(*$$).attributes() = OMIT_VALUE;
				}
				if ($14 != NULL) {
					(*$$).media__list() = *$14;
					delete $14;
				} else 
					(*$$).media__list() = OMIT_VALUE;
				
			  }

media_descriptions: /*empty*/ {$$ = NULL;}
					| media_descriptions media_description {
						if ($1 != NULL) {
							int media_num = (*$1).size_of();
							(*$1)[media_num] = *$2;
							delete $2;
						} else {
							$$ = new H248__SDP__media__desc__list();
							(*$$)[0] = *$2;
							delete $2;
						}
					}

media_description: 	media_field
					information_field
					connection_fields
					bandwidth_list
					key_field
					attribute_fields
					{
						$$ = new H248__SDP__media__desc();
						(*$$).media__field() = *$1;
						delete $1;
						if ($2 != NULL) {
							(*$$).information() = *$2;
							delete $2;
						} else
							(*$$).information() = OMIT_VALUE;
						if ($3 != NULL) {
							(*$$).connections() = *$3;
							delete $3;
						} else 
							(*$$).connections() = OMIT_VALUE;
						if ($4 != NULL) {
							(*$$).bandwidth() = *$4;
							delete $4;
						} else
							(*$$).bandwidth() = OMIT_VALUE;
						if ($5 != NULL) {
							(*$$).key() = *$5;
							delete $5;
						} else
							(*$$).key() = OMIT_VALUE;
						if ($6 != NULL) {
							(*$$).attributes() = *$6;
							delete $6;
						} else
							(*$$).attributes()=  OMIT_VALUE;
					}

media_field:		MEQ TOKEN SPACE TOKEN SLASH TOKEN
					SPACE transport SPACE fmt_list CRLF {
						$$ = new H248__SDP__media__field();
						(*$$).media() = *$2;
						delete $2;
						(*$$).ports().port__number() = *$4;
						delete $4;
						(*$$).ports().num__of__ports() = *$6;
						delete $6;
						(*$$).transport() = *$8;
						delete $8;
						(*$$).fmts() = *$10;
						delete $10;
					}
					| MEQ TOKEN SPACE TOKEN
					SPACE transport SPACE fmt_list CRLF {
						$$ = new H248__SDP__media__field();
						(*$$).media() = *$2;
						delete $2;
						(*$$).ports().port__number() = *$4;
						delete $4;
						(*$$).ports().num__of__ports() = OMIT_VALUE;
						(*$$).transport() = *$6;
						delete $6;
						(*$$).fmts() = *$8;
						delete $8;
					}

transport: TOKEN { $$=$1;}
       | TOKEN SLASH TOKEN {
         const CHARSTRING& str = *$1+CHARSTRING(1,"/")+*$3;
         delete $1;
         delete $3;
         $$ = new CHARSTRING(str);
         
       }

fmt_list:	TOKEN {
				$$ = new H248__SDP__fmt__list();
				(*$$)[0] = *$1;
				delete $1;
			}
			| fmt_list SPACE TOKEN {
				int fmt_num = (*$1).size_of();
				(*$1)[fmt_num] = *$3;
				delete $3;
				$$ = $1;
			}

attribute_fields:  	/*empty*/ {
						$$ = NULL;
					}
					| attribute_fields attribute_field {
						if ($1 != NULL) {
							int att_num = (*$1).size_of();
							(*$1)[att_num] = *$2;
							delete $2;
						} else {
							$$ = new H248__SDP__attribute__list();
							(*$$)[0] = *$2;
							delete $2;
						}
					}
					

attribute_field:	AEQ attribute CRLF {
						$$ = $2;
					}

attribute:		A_CAT TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).cat().attr__value() = *$2;
					delete $2;
				}
				| A_KEYWDS TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).keywds().attr__value() = *$2;
					delete $2;
				}
				| A_TOOL TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).tool().attr__value() = *$2;
					delete $2;
				}
				| A_PTIME TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).ptime().attr__value() = *$2;
					delete $2;
				}
				| A_RECVONLY {
					$$ = new H248__SDP__attribute();
					(*$$).recvonly() = H248__SDP__attribute__recvonly(NULL_VALUE);
				}
				| A_SENDRECV {
					$$ = new H248__SDP__attribute();
					(*$$).sendrecv() = H248__SDP__attribute__sendrecv(NULL_VALUE);
				}
				| A_SENDONLY {
					$$ = new H248__SDP__attribute();
					(*$$).sendonly() = H248__SDP__attribute__sendonly(NULL_VALUE);
				}
				| A_ORIENT TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).orient().attr__value() = *$2;
					delete $2;
				}
				| A_TYPE TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).sdp__type().attr__value() = *$2;
					delete $2;
				}
				| A_CHARSET TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).charset().attr__value() = *$2;
					delete $2;
				}
				| A_SDLANG TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).sdplang().attr__value() = *$2;
					delete $2;
				}
				| A_LANG TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).lang().attr__value() = *$2;
					delete $2;
				}
				| A_FRAMERATE TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).framerate().attr__value() = *$2;
					delete $2;
				}
				| A_QUALITY TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).quality().attr__value() = *$2;
					delete $2;
				}
				| A_FMTP TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).fmtp().attr__value() = *$2;
					delete $2;
				}
				| A_CURR TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).curr().attr__value() = *$2;
					delete $2;
				}
				| A_DES TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).des().attr__value() = *$2;
					delete $2;
				}
				| A_CONF TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).conf().attr__value() = *$2;
					delete $2;
				}
				| A_RTMAP TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).rtpmap().attr__value() = *$2;
					delete $2;
				}
				| A_RTCP TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).rtcp().attr__value() = *$2;
					delete $2;
				}
				| A_MAX_SIZE TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).max__size().max__size() = *$2;
					delete $2;
				}
				| A_PATH url_list {
					$$ = new H248__SDP__attribute();
					(*$$).path().path__list() = *$2;
					delete $2;
				}
				| A_ACCEPT_TYPES type_list {
					$$ = new H248__SDP__attribute();
					(*$$).accept__types().attr__value() = *$2;
					delete $2;
				}
				| A_ACCEPT_WRAPPED_TYPES type_list {
					$$ = new H248__SDP__attribute();
					(*$$).accept__wrapped__types().attr__value() = *$2;
					delete $2;
				}
				| A_MAXPRATE TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).maxprate().prate__integer__part() = *$2;
					(*$$).maxprate().prate__fraction__part() = OMIT_VALUE;
					delete $2;
				}
				| A_MAXPRATE TOKEN PERIOD TOKEN{
					$$ = new H248__SDP__attribute();
					(*$$).maxprate().prate__integer__part() = *$2;
					(*$$).maxprate().prate__fraction__part() = *$4;
					delete $2;
					delete $4;
				}
				| A_MID TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).mid().id__tag() = *$2;
					delete $2;
				}
				| A_GROUP TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).group__attr().semantics() = *$2;
					(*$$).group__attr().id__tag()=OMIT_VALUE;
					delete $2;
				}
				| A_GROUP TOKEN SPACE id_list{
					$$ = new H248__SDP__attribute();
					(*$$).group__attr().semantics() = *$2;
					(*$$).group__attr().id__tag()=*$4;
					delete $2;
					delete $4;
				}
				| A_FILE_SELECTOR TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).file__selector().attr__value() = *$2;
					delete $2;
				}
				| A_FILE_TRANSFER_ID TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).file__transfer__id().attr__value() = *$2;
					delete $2;
				}
				| A_INACTIVE{
					$$ = new H248__SDP__attribute();
					(*$$).inactive() = H248__SDP__attribute__inactive(NULL_VALUE);
				}
				| A_SETUP TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).setup().attr__value() = *$2;
					delete $2;
				}
				| A_CONNECTION TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).connection().attr__value() = *$2;
					delete $2;
				}
				| A_CRYPTO TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).crypto().attr__value() = *$2;
					delete $2;
				}
				| A_CONTENT TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).content().attr__value() = *$2;
					delete $2;
				}
				| A_LABEL TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).attr__label().attr__value() = *$2;
					delete $2;
				}
				| A_FLOORCTRL TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).floorctrl().attr__value() = *$2;
					delete $2;
				}
				| A_CONFID TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).confid().attr__value() = *$2;
					delete $2;
				}
				| A_USERID TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).userid().attr__value() = *$2;
					delete $2;
				}
				| A_FLOORID TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).floorid().attr__value() = *$2;
					delete $2;
				}
				| A_FINGERPRINT TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).fingerprint().attr__value() = *$2;
					delete $2;
				}
				| TOKEN COLON TOKEN {
					$$ = new H248__SDP__attribute();
					(*$$).unknown().name() = *$1;
					delete $1;
					(*$$).unknown().attr__value() = *$3;
					delete $3;
				}

url_list:	 	TOKEN {
					$$ = new H248__SDP__url__list();
					(*$$)[0] = *$1;
					delete $1;
				}
				| url_list SPACE TOKEN {
					int url_num = (*$1).size_of();
					(*$1)[url_num] = *$3;
					delete $3;
					$$ = $1;
				}

id_list:	 	TOKEN {
					$$ = new H248__SDP__id__tag__list();
					(*$$)[0] = *$1;
					delete $1;
				}
				| id_list SPACE TOKEN {
					int id_num = (*$1).size_of();
					(*$1)[id_num] = *$3;
					delete $3;
					$$ = $1;
				}

type_list:	 	TOKEN {
					$$ = new H248__SDP__media__type__list();
					(*$$)[0] = *$1;
					delete $1;
				}
				| type_list SPACE TOKEN {
					int url_num = (*$1).size_of();
					(*$1)[url_num] = *$3;
					delete $3;
					$$ = $1;
				}


key_field:	/*empty*/ {$$ = NULL;}
			| KEQ key_type CRLF {
				$$ = $2;
				
			}

key_type:	TOKEN {
				$$ = new H248__SDP__key();
				(*$$).method() = *$1;
				delete $1;
				(*$$).key() = OMIT_VALUE;
			}
			| TOKEN COLON TOKEN {
				$$ = new H248__SDP__key();
				(*$$).method() = *$1;
				delete $1;
				(*$$).key() = *$3;
				delete $3;
			}

time_list2: 	/*empty*/ {$$ = NULL;}
				| time_list {$$ = $1;}

time_list:	time {
					$$ = new H248__SDP__time__list();
					(*$$)[0] = *$1;
					delete $1;
				}
				| time_list time {
					int time_num = (*$1).size_of();
					(*$1)[time_num] = *$2;
					delete $2;
					$$ = $1;
				}

time:		time_field repeat_list{
				$$ = new H248__SDP__time;
				(*$$).time__field() = *$1;
				delete $1;
				if ($2 != NULL) {
					(*$$).time__repeat() = *$2;
					delete $2;
				} else
					(*$$).time__repeat() = OMIT_VALUE;
			}

repeat_list:	/*empty*/ {$$ = NULL;}
				| repeat_list repeat {
					if ($1 != NULL) {
						int repeat_num = (*$1).size_of();
						(*$1)[repeat_num] = *$2;
						delete $2;
						$$ = $1;
					} else {
						$$ = new H248__SDP__repeat__list();
						(*$$)[0] = *$2;
						delete $2;
					}
				}
					

repeat:		REQ typed_time SPACE typed_time SPACE offsets CRLF {
				$$ = new H248__SDP__repeat();
				(*$$).repeat__interval() = *$2;
				delete $2;
				(*$$).active() = *$4;
				delete $4;
				(*$$).offsets() = *$6;
				delete $6;
			}


offsets:	typed_time {
				$$ = new H248__SDP__typed__time__list();
				(*$$)[0] = *$1;
				delete $1;
			}
			| offsets SPACE typed_time {
				int off_size = (*$1).size_of();
				(*$$)[off_size] = *$3;
				delete $3;
			}

timezones_field:	/*empty*/ {$$ = NULL;}
				| ZEQ timezone_list CRLF {
					$$ = $2;
				}

timezone_list:	timezone {
					$$ = new H248__SDP__timezone__list();
					(*$$)[0] = *$1;
					delete $1;
				}
				| timezone_list SPACE timezone {
					int tz_num = (*$1).size_of();
					(*$1)[tz_num] = *$3;
					delete $3;
					$$ = $1;
				}

timezone:		INTTOKEN SPACE typed_time {
					$$ = new H248__SDP__timezone();
					(*$$).adjustment__time() = *$1;
					delete $1;
					(*$$).offset() = *$3;
					delete $3;
				}

typed_time:		INTTOKEN {
					$$ = new H248__SDP__typed__time();
					(*$$).time() = *$1;
					delete $1;
					(*$$).unit() = OMIT_VALUE;
				}
				| INTTOKEN ALPHA {
					$$ = new H248__SDP__typed__time();
					(*$$).time() = *$1;
					delete $1;
					(*$$).unit() = CHARSTRING(1, (const char*)&$2);
				}

time_field:		TEQ TOKEN SPACE TOKEN CRLF { // start_time SPACE stop_time
					$$ = new H248__SDP__time__field();
					(*$$).start__time() = (*$2);
					delete $2;
					(*$$).stop__time() = (*$4);
					delete $4;
				}

bandwidth_list:	/*empty*/ {$$ = NULL;}
				| bandwidth_list bandwidth_field {
					if ($1 != NULL) {
						int bandwidth_num = (*$1).size_of();
						(*$1)[bandwidth_num] = *$2;
						delete $2;
						$$ = $1;
					} else {
						$$ = new H248__SDP__bandwidth__list();
						(*$$)[0] = *$2;
						delete $2;
					}
				}


bandwidth_field:	BEQ TOKEN COLON TOKEN CRLF {
						$$ = new H248__SDP__bandwidth();
						(*$$).modifier() = *$2;
						delete $2;
						(*$$).bandwidth() =*$4;
						delete $4;
					}


connection_fields: 	/*empty*/ {$$ = NULL;}
					| connection_fields connection_field {
						if ($1 != NULL) {
							int con_num = (*$1).size_of();
							(*$1)[con_num] = *$2;
							delete $2;
							$$ = $1;
						} else {
							$$ = new H248__SDP__connection__list();
							(*$$)[0] = *$2;
							delete $2;
						}
					}


connection_field_lonely: 	 	/*empty*/ {$$ = NULL;}
					| CEQ TOKEN SPACE TOKEN SPACE conn_address CRLF {
						$$ = new H248__SDP__connection();
						(*$$).net__type() = *$2;
						delete $2;
						(*$$).addr__type() = *$4;
						delete $4;
						(*$$).conn__addr() = (*$6);
						delete $6;
					}


connection_field: 	CEQ TOKEN SPACE TOKEN SPACE conn_address CRLF {
						$$ = new H248__SDP__connection();
						(*$$).net__type() = *$2;
						delete $2;
						(*$$).addr__type() = *$4;
						delete $4;
						(*$$).conn__addr() = (*$6);
						delete $6;
					}
conn_address:	TOKEN {
					$$ = new H248__SDP__conn__addr();
					(*$$).addr() = (*$1);
					delete $1;
					(*$$).ttl() = OMIT_VALUE;
					(*$$).num__of__addr() = OMIT_VALUE;
				}
				| TOKEN SLASH TOKEN {
					$$ = new H248__SDP__conn__addr();
					(*$$).addr() = (*$1);
					delete $1;
					(*$$).ttl() = *$3;
					(*$$).num__of__addr() = OMIT_VALUE;
					delete $3;
				}
				| TOKEN SLASH TOKEN SLASH TOKEN {
					$$ = new H248__SDP__conn__addr();
					(*$$).addr() = (*$1);
					delete $1;
					(*$$).ttl() = *$3;
					(*$$).num__of__addr() = *$5;
					delete $3;
					delete $5;
				}


phone_fields: 	/*empty*/ {$$ = NULL;}
				| phone_fields phone_field {
					if ($$ == NULL) {
						$$ = new H248__SDP__phone__list();
						(*$$)[0] = *$2;
						delete $2;
					} else {
						int num_of_phonenumbers = (*$1).size_of();
						(*$1)[num_of_phonenumbers]  =*$2;
						delete $2;
					}
				}

phone_field:	PEQ phone_number CRLF {
					$$ = $2;
				}

phone_number:	phone {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = (*$1);
					delete $1;
					(*$$).disp__name() = OMIT_VALUE;
				}
				| phone LBRACE email_text RBRACE {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$1;
					delete $1;
					(*$$).disp__name() = *$3;
					delete $3;
				}

				| phone LT phone GT {
					/* phone is any charstring, but with trailing space removed*/
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$3;
					delete $3;
					(*$$).disp__name() = *$1;
					delete $1;
				}

phone:	email_text {
			/* remove trailing space, if any */
/* This is a rather ugly post-processing, but otherwise SDP can not
be parsed with an LR(1) parser. Reason: phone number may contain spaces, 
and delimiter between the phone number and the rest of the phone field may be a space*/

			int size = (*$1).lengthof();
			
			const char* buf = (const char*)(*$1);
			
			if (buf[size-1] == ' ') {
				$$ = new CHARSTRING(size-1, (const char*)(*$1));
				delete $1;
			} else
				$$ = $1;
		}

email_fields: 	/*empty*/ {$$ = NULL;}
				| email_fields email_field {
					if ($1 == NULL) {
						$$ = new H248__SDP__email__list();
						(*$$)[0] = *$2;
						delete $2;
					} else {
						int num_of_emails = (*$1).size_of();
						// indexing begins with 0
						(*$1)[num_of_emails] = *$2;
						delete $2;
					}
				}

email_field:	EEQ email_address CRLF {
					$$ = $2;
				}

email_address:	EMAIL {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$1;
					delete $1;
					(*$$).disp__name() = OMIT_VALUE;
				}
				
				| EMAIL SPACE LBRACE email_text RBRACE {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$1;
					delete $1;
					(*$$).disp__name() = *$4;
					delete $4;
				} 
				| email_text SPACE LT EMAIL GT {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$4;
					delete $4;
					(*$$).disp__name() = *$1;
					delete $1;
				} 
				| LT EMAIL GT {
					$$ = new H248__SDP__contact();
					(*$$).addr__or__phone() = *$2;
					delete $2;
					(*$$).disp__name() = OMIT_VALUE;
				} 
				 



uri_field:	/*empty*/ {$$ = NULL;}
			| UEQ TOKEN CRLF {
				$$ = $2;
			}


information_field:	/*empty*/ {$$ = NULL;}
					| IEQ TOKEN CRLF {
						$$ = $2;
					}

session_name_field:		/*empty*/ {$$ = NULL;}
					| SEQ TOKEN CRLF {
						$$ = $2;
				 }


proto_version:VEQ INTTOKEN CRLF {$$ = $2; }

origin_field:		/*empty*/ {$$ = NULL;}
					| OEQ TOKEN SPACE TOKEN SPACE TOKEN SPACE
				TOKEN SPACE TOKEN SPACE TOKEN CRLF {
					$$ = new H248__SDP__Origin();
					(*$$).user__name() = *$2;
					delete $2;
					(*$$).session__id() = *$4;
					delete $4;
					(*$$).session__version() = *$6;
					delete $6;
					(*$$).net__type() = *$8;
					delete $8;
					(*$$).addr__type() = *$10;
					delete $10;
					(*$$).addr() = *$12;
					delete $12;
				}






email_text:	email_byte {$$ = new CHARSTRING(1, (const char*)&$1);}
			| email_text email_byte {
				const CHARSTRING& str = *$1 + CHARSTRING(1, (const char*)&$2);
				delete $1;
				$$ = new CHARSTRING(str);
			}




alpha_numeric:	ALPHA {$$ = $1;}
				| digit {$$ = $1 + 0x30;}


digit:		_ZERO {$$ = 0;}
			| pos_digit {$$ = $1;}

pos_digit: 	_ONE {$$ = 1;}
			| _TWO {$$ = 2;}
			| _THREE {$$ = 3;}
			| _FOUR {$$ = 4;}
			| _FIVE {$$ = 5;}
			| _SIX {$$ = 6;}
			| _SEVEN {$$ = 7;}
			| _EIGHT {$$ = 8;}
			| _NINE {$$ = 9;}



email_byte:	alpha_numeric {$$ = $1;}
					| UNDERSCORE {$$ = $1;}
					| PERIOD {$$ = $1;}
					| HYPHEN {$$ = $1;}
					| PLUS {$$ = $1;}
					| SLASH {$$ = $1;}
					| COLON {$$ = $1;}
					| ANYBYTE {$$ = $1;}
					| SPACE {$$ = $1;}

%%

/*Additional C code*/
