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
//  File:               TPKT_EncDec.cc
//  Description:        TPKT Encoder/Decoder external functions
//  Rev:                R6B
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
