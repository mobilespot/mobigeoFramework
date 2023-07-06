//
//  NAOServicesConfig.h
//  NaoSDK
//
//  Created by Pole Star on 02/02/2016.
//  Copyright © 2016 POLE STAR SA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "DBTPOWERMODE.h"
#import "NAOSyncDelegate.h"
#import "NAOSensorsDelegate.h"
#import "PSTICallback.h"

@class NaoContext;
@protocol NAOCoverageHandleDelegate;

/** Configuration of NAO Services

 This class holds a configuration for all the NAO services used inside your application.
 
 */
@interface NAOServicesConfig : NSObject

/** Set the Root URL
 
 @param rootURL Url where are hosted the configuration required for the NAO services (PDB and app.json)
 */
+ (void) setRootURL:(NSString*)rootURL;

/** Get the the Root URL
 
 @return Returns the root url used by the services
 */
+ (NSString*) getRootURL;

/** Get SDK software version
 
 @return Returns the software version of the SDK used
 */
+ (NSString*) getSoftwareVersion;

/**
 synchronizeData with a specific api key
 */
+ (void)synchronizeData:(id<NAOSyncDelegate>)delegate apiKey:(NSString *)apiKey;

/**
 Debug Utility to start logging data
 */
+ (void)startLoggingMeasurements;

/**
 Debug Utility to stop logging data
 */
+ (void)stopLoggingMeasurements;

/**
 
 */
+ (DBTPOWERMODE) getPowerMode;

/**
 upload NAOLog Info to nao server
 */
+ (void)uploadNAOLogInfo;

/**
 upload NAOLog Info to nao server using callback for uplaod success
 */
+ (void)uploadNAOLogInfo:(NSString *)apikey callback:(nullable id<PSTICallback>)handler;

/**
 upload NAOLog Info to nao server with specific apikey
 */
+ (void)uploadNAOLogInfo:(NSString *)massage apikey:(NSString *)apikey callback:(nullable id<PSTICallback>)handler;

/** Sets the Wake Up Notifier to receive notifications when the device arrives onÒ site.
 It is based on Ibeacons.
 */
+ (void)enableOnSiteWakeUp;

/** Sets the Wake Up Notifier to receive notifications when the device arrives on site.
 It is based on Ibeacons. Takes a Coverage service delegate as parameter
 */
+ (void)enableOnSiteWakeUpWithDelegate:(id<NAOCoverageHandleDelegate>)coverageDelegate andSensorsDelegate:(id<NAOSensorsDelegate>)sensorsDelegate;

/** Disable the Wake Up Notifier to not receive notifications when the device arrives on site.
 It is based on Ibeacons.
 */
+ (void)disableOnSiteWakeUp;

+ (NaoContext *)getNaoContext;

/** Read naoServices.naolog file
 
 @return Returns the logs of NAOSDK
 */
+ (NSString*) getNaolog;

/** get Last known location when nao service is started
 
 @return Returns Last Location
 */
+ (CLLocation *)getLastKnowLocation;

/**
 *@brief Function for setting the user tracking identifier with his consent
 *@param[in]    identifier      String word used as the used identifier
 *@param[in]    consent             YES if the user is consent otherwise NO
 *@return       YES if the identifier has been successful set otherwise NO
 */
+ (BOOL)setIdentifier:(NSString*)identifier witUserConsent: (BOOL)consent;
/**
 *@brief Function to return the app json string for a given apikey
 *@param[in]    apikey      The associated apikey
 *@return       The  app.json string
 */
+ (NSString *)getAppJsonStringByApikey:(NSString *)apikey;
@end
