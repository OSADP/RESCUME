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

#include "stdafx.h"
#include <asn_internal.h> 
#include "EmergencyVehicleAlert.h"

static asn_TYPE_member_t asn_MBR_EmergencyVehicleAlert_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyVehicleAlert, msgID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRCmsgID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"msgID"
		},
	{ ATF_POINTER, 1, offsetof(struct EmergencyVehicleAlert, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TemporaryID,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyVehicleAlert, rsaMsg),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadSideAlert,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rsaMsg"
		},
	{ ATF_POINTER, 7, offsetof(struct EmergencyVehicleAlert, responseType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResponseType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseType"
		},
	{ ATF_POINTER, 6, offsetof(struct EmergencyVehicleAlert, details),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EmergencyDetails,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"details"
		},
	{ ATF_POINTER, 5, offsetof(struct EmergencyVehicleAlert, mass),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleMass,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"mass"
		},
	{ ATF_POINTER, 4, offsetof(struct EmergencyVehicleAlert, basicType),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"basicType"
		},
	{ ATF_POINTER, 3, offsetof(struct EmergencyVehicleAlert, vehicleType),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleGroupAffected,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"vehicleType"
		},
	{ ATF_POINTER, 2, offsetof(struct EmergencyVehicleAlert, responseEquip),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IncidentResponseEquipment,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responseEquip"
		},
	{ ATF_POINTER, 1, offsetof(struct EmergencyVehicleAlert, responderType),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ResponderGroupAffected,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"responderType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EmergencyVehicleAlert, crc),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCRC,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"crc"
		},
};
static ber_tlv_tag_t asn_DEF_EmergencyVehicleAlert_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EmergencyVehicleAlert_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgID at 143 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* id at 144 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsaMsg at 145 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* responseType at 150 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* details at 151 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mass at 157 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* basicType at 158 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* vehicleType at 162 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* responseEquip at 163 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* responderType at 164 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* crc at 165 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EmergencyVehicleAlert_specs_1 = {
	sizeof(struct EmergencyVehicleAlert),
	offsetof(struct EmergencyVehicleAlert, _asn_ctx),
	asn_MAP_EmergencyVehicleAlert_tag2el_1,
	11,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	10,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EmergencyVehicleAlert = {
	"EmergencyVehicleAlert",
	"EmergencyVehicleAlert",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_EmergencyVehicleAlert_tags_1,
	sizeof(asn_DEF_EmergencyVehicleAlert_tags_1)
		/sizeof(asn_DEF_EmergencyVehicleAlert_tags_1[0]), /* 1 */
	asn_DEF_EmergencyVehicleAlert_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmergencyVehicleAlert_tags_1)
		/sizeof(asn_DEF_EmergencyVehicleAlert_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EmergencyVehicleAlert_1,
	11,	/* Elements count */
	&asn_SPC_EmergencyVehicleAlert_specs_1	/* Additional specs */
};


/* Utility Calls */
/* Utility Calls */


// Set all basic structure pointers to 'safe' null values
void EmergencyVehicleAlert_Init ( EmergencyVehicleAlert_t* theObj)
{
	if (theObj != NULL)
	{
		theObj->msgID = DSRCmsgID_emergencyVehicleAlert; 
		theObj->id = NULL;
		RoadSideAlert_Init(&theObj->rsaMsg); 
		theObj->responseType = NULL; 
		theObj->details = NULL; 
		theObj->mass = NULL; 
		theObj->basicType = NULL; 
		theObj->vehicleType = NULL; 
		theObj->responseEquip = NULL; 
		theObj->responderType = NULL; 
		MsgCRC_Init(&theObj->crc);
		theObj->_asn_ctx.ptr = NULL; // not used
	}
}

// Not used in this object
// Move the structure into the packed bytes of the blob
void EmergencyVehicleAlert_ToBlob ( EmergencyVehicleAlert_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

// Not used in this object
// Fill the structure from the packed bytes of the blob
void EmergencyVehicleAlert_FromBlob ( EmergencyVehicleAlert_t* theObj, char* theBlob)
{
	if ((theObj != NULL) && (theBlob != NULL))
	{
	}
}

