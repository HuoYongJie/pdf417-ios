//
//  MicroBlink.h
//  MicroBlinkFramework
//
//  Created by Jurica Cerovec on 3/29/12.
//  Copyright (c) 2015 MicroBlink Ltd. All rights reserved.
//

#ifndef PhotoPayFramework_MicroBlink_h
#define PhotoPayFramework_MicroBlink_h

// Common API
#import "PPViewControllerFactory.h"
#import "PPApp.h"

/*  UI  */
// Overlays
#import "PPModernBaseOverlayViewController.h"
#import "PPBarcodeOverlayViewController.h"
#import "PPBaseBarcodeOverlayViewController.h"
#import "PPFieldOfViewOverlayViewController.h"
#import "PPIDCardOverlayViewController.h"
#import "PPModernOverlayViewController.h"
#import "PPOcrLineOverlayViewController.h"
#import "PPSegmentScanOverlayViewController.h"
#import "PPTemplatingOverlayViewController.h"
#import "PPTapToFocusOverlaySubview.h"

// Permission denied view controller
#import "PPPermissionDeniedViewController.h"

// Overlay subviews
#import "PPModernOcrResultOverlaySubview.h"
#import "PPModernViewfinderOverlaySubview.h"
#import "PPOcrResultOverlaySubview.h"
#import "PPBlurredFieldOfViewOverlaySubview.h"
#import "PPDotsOverlaySubview.h"
#import "PPFieldOfViewOverlaySubview.h"
#import "PPModernToastOverlaySubview.h"
#import "PPOcrLineOverlaySubview.h"
#import "PPToastOverlaySubview.h"
#import "PPViewfinderOverlaySubview.h"

// Detectors
#import "PPPointsDetectorResult.h"
#import "PPDecodingInfo.h"
#import "PPDetectorSettings.h"
#import "PPMultiDetectorResult.h"
#import "PPQuadDetectorSettings.h"
#import "PPQuadDetectorResult.h"
#import "PPQuadDetectorResultWithSize.h"

#import "PPBlinkBarcodeRecognizers.h"

#endif
