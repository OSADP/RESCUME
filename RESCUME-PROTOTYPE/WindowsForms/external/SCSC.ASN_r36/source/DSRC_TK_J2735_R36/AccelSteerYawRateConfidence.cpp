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
#include <asn_internal.h> 
#include "stdafx.h" 

#include "AccelSteerYawRateConfidence.h"

static asn_TYPE_member_t asn_MBR_AccelSteerYawRateConfidence_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AccelSteerYawRateConfidence, yawRate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRateConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"yawRate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelSteerYawRateConfidence, acceleration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AccelerationConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"acceleration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AccelSteerYawRateConfidence, steeringWheelAngle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SteeringWheelAngleConfidence,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"steeringWheelAngle"
		},
};
static ber_tlv_tag_t asn_DEF_AccelSteerYawRateConfidence_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_AccelSteerYawRateConfidence_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* yawRate at 521 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* acceleration at 523 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* steeringWheelAngle at 527 */
};
static asn_SEQUENCE_specifics_t asn_SPC_AccelSteerYawRateConfidence_specs_1 = {
	sizeof(struct AccelSteerYawRateConfidence),
	offsetof(struct AccelSteerYawRateConfidence, _asn_ctx),
	asn_MAP_AccelSteerYawRateConfidence_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_AccelSteerYawRateConfidence = {
	"AccelSteerYawRateConfidence",
	"AccelSteerYawRateConfidence",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_AccelSteerYawRateConfidence_tags_1,
	sizeof(asn_DEF_AccelSteerYawRateConfidence_tags_1)
		/sizeof(asn_DEF_AccelSteerYawRateConfidence_tags_1[0]), /* 1 */
	asn_DEF_AccelSteerYawRateConfidence_tags_1,	/* Same as above */
	sizeof(asn_DEF_AccelSteerYawRateConfidence_tags_1)
		/sizeof(asn_DEF_AccelSteerYawRateConfidence_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_AccelSteerYawRateConfidence_1,
	3,	/* Elements count */
	&asn_SPC_AccelSteerYawRateConfidence_specs_1	/* Additional specs */
};

