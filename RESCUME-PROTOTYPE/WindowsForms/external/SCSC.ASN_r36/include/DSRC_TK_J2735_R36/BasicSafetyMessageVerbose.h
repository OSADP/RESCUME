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
 * Generated by SCSC fork of asn1c-0.9.22 (http://www.ITSware.net)
 * From ASN.1 module "DSRC"
 * 	found in "DSRC_R36_Source.ASN"
 * 	`asn1c -S/skeletons`
 */
/// The Basic Safety Message (BSM) class
///

#ifndef	_BasicSafetyMessageVerbose_H_
#define	_BasicSafetyMessageVerbose_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSRCmsgID.h"
#include "MsgCount.h"
#include "TemporaryID.h"
#include "DSecond.h"
#include "Latitude.h"
#include "Longitude.h"
#include "Elevation.h"
#include "PositionalAccuracy.h"
#include "TransmissionAndSpeed.h"
#include "Heading.h"
#include "SteeringWheelAngle.h"
#include "AccelerationSet4Way.h"
#include "BrakeSystemStatus.h"
#include "VehicleSize.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VehicleSafetyExtension;
struct VehicleStatus;

/* BasicSafetyMessageVerbose */
typedef struct BasicSafetyMessageVerbose {
	DSRCmsgID_t						msgID;
	MsgCount_t						msgCnt;
	TemporaryID_t					id;
	DSecond_t						secMark;
	Latitude_t						lat;
	Longitude_t						Long;
	Elevation_t						elev;
	PositionalAccuracy_t			accuracy;
	TransmissionAndSpeed_t			speed;
	Heading_t						heading;
	SteeringWheelAngle_t			angle;
	AccelerationSet4Way_t			accelSet;
	BrakeSystemStatus_t				brakes;
	VehicleSize_t					size;
	struct VehicleSafetyExtension	*safetyExt	/* OPTIONAL */;
	struct VehicleStatus			*status	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t				_asn_ctx;
} BasicSafetyMessageVerbose_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicSafetyMessageVerbose;

/* Define supported Utility Calls */
void BasicSafetyMessageVerbose_Init (BasicSafetyMessageVerbose_t* theObj);
//void BasicSafetyMessageVerbose_ToBlob (BasicSafetyMessageVerbose_t* theObj, char* theBlob);
//void BasicSafetyMessageVerbose_FromBlob (BasicSafetyMessageVerbose_t* theObj, char* theBlob);



#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VehicleSafetyExtension.h"
#include "VehicleStatus.h"

#endif	/* _BasicSafetyMessageVerbose_H_ */
