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
//  File:               H248_SDP_parse_parser.h
//  Rev:                R6B
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T SDP
#ifndef H248_SDP_parse_parser_H
#define H248_SDP_parse_parser_H
#include "H248_SDP_Types.hh"
int H248_SDP_parse_parse();

H248__SDP__Types::H248__SDP__Message__list* SDP_parse_get_parsed_message();
void H248_SDP_parse_set_parsed_message(H248__SDP__Types::H248__SDP__Message__list* pdu);

void sdplog(const char* fmt, ...);

int H248_SDP_parse_lex();

int H248_SDP_parse_error(const char *s);
extern int H248_SDP_parse_debug;

#endif
