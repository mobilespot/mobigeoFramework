//
//  NaoContext.h
//  NaoSDK
//
//  Created by Pole Star on 02/02/2016.
//  Copyright © 2016 POLE STAR SA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "DBTPOWERMODE.h"
#import "NAOSyncDelegate.h"
#import "PSTICallback.h"



@class PSTINAOServiceManager;
@class NAOSensorsManager;
@class NaoSynchroBroker;
@class NaoMqttBroker;
@class ServiceHttpHelper;
@class ServicePrefHelper;
@class ServiceConnectivityHelper;
@class GeofencingOSManager;
@class PSTIDebugCallback;

/** For Polestar internal use */
@interface NaoContext : NSObject

@property (strong) PSTINAOServiceManager *serviceManager;
@property (strong) NAOSensorsManager *sensorsManager;
@property (strong) NaoSynchroBroker *synchroBroker;
@property (strong) NaoMqttBroker *mqttBroker;
@property (strong) ServiceHttpHelper *httpHelper;
@property (strong) ServicePrefHelper *prefHelper;
@property (strong) ServiceConnectivityHelper *connectivityHelper;
@property (strong) GeofencingOSManager *geofencingOSManager;
@property (strong, nonatomic) NSString *mRootURL;

- (id)init;

- (NSString *)getRootURL;
- (NSString *)getSoftwareVersion;
- (void)setRootURL:(NSString *)rootURL;
- (DBTPOWERMODE)getPowerMode;
- (void)synchronizeData:(id<NAOSyncDelegate>)delegate apiKey:(NSString *)apiKey;
- (void)synchronizeData:(id<NAOSyncDelegate>)delegate apiKey:(NSString *)apiKey enableAutoPdbSync:(BOOL)isAutoPdbSync;
- (void)synchronizeData:(id<NAOSyncDelegate>)delegate apiKey:(nonnull NSString *)apiKey siteIds:(nonnull NSArray<NSString *> *)siteIds;
- (void)writeToLog:(NSString *)txt;
- (void)uploadNAOLogInfo;
- (CLLocation *)getLastKnownLocation;
- (void)uploadNAOLogInfo:(NSString *)apikey callback:(nullable id<PSTICallback>)handler;
- (void)uploadNAOLogInfo:(NSString *)massage apikey:(NSString *)apikey callback:(nullable id<PSTICallback>)handler;
- (BOOL)setExternalLocation:(NSArray *)locations;
/**
 *@brief Function to return the app json string for a given apikey
 *@param[in]    apikey      The associated apikey
 *@return       The  app.json string
 */
- (NSString *)getAppJsonStringByApikey:(NSString *)apikey;
/**
 *@brief Function for setting the user tracking identifier with his consent
 *@param[in]    identifier      String word used as the used identifier
 *@param[in]    consent             YES if the user is consent otherwise NO
 *@return       YES if the identifier has been successful set otherwise NO
 */
- (BOOL)setIdentifier:(NSString*)identifier witUserConsent: (BOOL)consent;
- (NSArray *)regionsOfAllActiveAlerts:(NSString *)apiKey;
- (BOOL)isLoggingAllowed;

- (NSString *)decrypt:(NSString *)ciphertext;

- (NSString *)encrypt:(NSString *)plaintext;

- (NSString *)decryptWithApikey:(nonnull NSString *)ciphertext apiKey:(nonnull NSString *)apiKey;

- (NSString *)encryptWithApikey:(nonnull NSString *)plaintext apiKey:(nonnull NSString *)apiKey;
@end
