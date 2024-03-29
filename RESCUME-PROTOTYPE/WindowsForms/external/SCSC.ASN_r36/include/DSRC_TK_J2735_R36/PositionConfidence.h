/*************************************************************************
 * 
 * SCSC CONFIDENTIAL
 * __________________
 * 
 * Copyright (c) [2009] - [2012] 
 * SubCarrier System Corp. (SCSC) 
 * All Rights Reserved.
 * 
 * NOTICE:  All information contained herein is, and remains,
 * the property of SubCarrier System Corp. (SCSC) and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to SubCarrier System Corp. (SCSC)
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from SubCarrier System Corp. (SCSC).
 *
 *
 * This file is subject to the terms and conditions of use defined 
 * in the files 'LICENSE.rft' or 'LICENSE.pdf' which is part of this 
 * source code package.
 *
 * LIC: #Battelle_001_01_dbfff42a90727d02153511a33480572b#
 */

/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c) [SCSCrev09]
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_PositionConfidence_H_
#define	_PositionConfidence_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PositionConfidence {
	PositionConfidence_unavailable	= 0,
	PositionConfidence_a500m	= 1,
	PositionConfidence_a200m	= 2,
	PositionConfidence_a100m	= 3,
	PositionConfidence_a50m	= 4,
	PositionConfidence_a20m	= 5,
	PositionConfidence_a10m	= 6,
	PositionConfidence_a5m	= 7,
	PositionConfidence_a2m	= 8,
	PositionConfidence_a1m	= 9,
	PositionConfidence_a50cm	= 10,
	PositionConfidence_a20cm	= 11,
	PositionConfidence_a10cm	= 12,
	PositionConfidence_a5cm	= 13,
	PositionConfidence_a2cm	= 14,
	PositionConfidence_a1cm	= 15
} e_PositionConfidence;

/* PositionConfidence */
typedef long	 PositionConfidence_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionConfidence;
asn_struct_free_f PositionConfidence_free;
asn_struct_print_f PositionConfidence_print;
asn_constr_check_f PositionConfidence_constraint;
ber_type_decoder_f PositionConfidence_decode_ber;
der_type_encoder_f PositionConfidence_encode_der;
xer_type_decoder_f PositionConfidence_decode_xer;
xer_type_encoder_f PositionConfidence_encode_xer;

/* Define supported Utility Calls */
void PositionConfidence_Init (PositionConfidence_t* theObj);
//void PositionConfidence_ToBlob (PositionConfidence_t* theObj, char* theBlob);
//void PositionConfidence_FromBlob (PositionConfidence_t* theObj, char* theBlob);


#ifdef __cplusplus
}
#endif

#endif	/* _PositionConfidence_H_ */
