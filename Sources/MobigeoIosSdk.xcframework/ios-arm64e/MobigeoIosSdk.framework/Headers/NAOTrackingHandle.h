//
//  NAOTrackingHandle.h
//  NAOSDK
//
//  Created by Pole Star on 10/09/2020.
//

#import <Foundation/Foundation.h>

#import "NAOTrackingHandleDelegate.h"
#import "NAOSyncDelegate.h"
#import "NAOSensorsDelegate.h"
#import "NAOServiceHandle.h"

NS_ASSUME_NONNULL_BEGIN



@class NaoContext;

/** NAO Tracking Service
 
 The NAOTrackingHandle inherits from NAOServiceHandle which itself inhgerits form NSObject.
 You need to create an instance for NAOTrackingHandle to get access to the Tracking service.
 The NAOTrackingHandle enables you to start the Tracking service.
 */
@interface NAOTrackingHandle : NAOServiceHandle

/** WARNING : init not available, please use initWithKey: delegate: sensorsDelegate:
 
 */
-(instancetype _Nonnull) init __attribute__((unavailable("init not available, please use initWithKey: delegate: sensorsDelegate:")));

/** Init NAOTrackingHandle with API key
 
 By default, for the Tracking service, the configuration file (alert.json) is located on Amazon S3.
 However, you can host this file on your own private server if you want.
 The data will be synchronised each time you call the method **synchroniseData** of your manager.
 
 @param key: The API Key is key available in the developer section of NAO Cloud. A key is associated to one and only one application.
 By Default, one API key is created at the site creation, this API key is associated with the site. The services available through this API key are the services activated on this associated site.
 
 @param delegate: Object implementing the NAOTrackingHandleDelegate protocol
 
 @param sensorsDelegate: Object implementing the NAOSensorsDelegate protocol
 
 */
- (id _Nonnull)initWithKey:(NSString * _Nonnull)key delegate:(id<NAOTrackingHandleDelegate> _Nonnull)delegate sensorsDelegate:(id<NAOSensorsDelegate> _Nonnull)sensorsDelegate;

- (id _Nonnull)initWithNaoContext:(NaoContext * _Nullable)naoContext key:(NSString * _Nonnull)key delegate:(id<NAOTrackingHandleDelegate> _Nonnull)delegate sensorsDelegate:(id<NAOSensorsDelegate> _Nonnull)sensorsDelegate ;

@end

NS_ASSUME_NONNULL_END
