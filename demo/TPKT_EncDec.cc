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
//  File:               TPKT_EncDec.cc
//  Description:        TPKT Encoder/Decoder external functions
//  Rev:                R6A
//

#include "TPKT_Types.hh"
namespace TPKT__Types{
OCTETSTRING enc__TPKT__PDU(const PDU__TPKT& tpkt__pdu)
{
  TTCN_Buffer buf;
  tpkt__pdu.encode(PDU__TPKT_descr_, buf, TTCN_EncDec::CT_RAW);
  return OCTETSTRING(buf.get_len(), buf.get_data());
}

PDU__TPKT dec__TPKT__PDU(const OCTETSTRING& udp__pdu)
{
  TTCN_Buffer buf;
  PDU__TPKT pdu;
  buf.put_os(udp__pdu);
  pdu.decode(PDU__TPKT_descr_, buf, TTCN_EncDec::CT_RAW);
  return pdu;
}

TTCN_Module TPKT__EncDec("TPKT_EncDec", __DATE__, __TIME__);
}
