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
//  File:               H248_SDP_EncDec.cc
//  Rev:                R6A
//  Prodnr:             CNL 113 424
//  Reference:          ITU-T H.248.1 V2 (05/2002), 
#include "H248_SDP_Types.hh"

// function to encode SDP contact (email or telephone no)
namespace H248__SDP__Types{

CHARSTRING f__H248__SDP__Enc(const H248__SDP__Message__list& pl__msg)
{
    TTCN_Buffer bb;
    pl__msg.encode(H248__SDP__Message__list_descr_, bb, TTCN_EncDec::CT_TEXT);

    return CHARSTRING (bb.get_len(),(char *)bb.get_data());
}
}
