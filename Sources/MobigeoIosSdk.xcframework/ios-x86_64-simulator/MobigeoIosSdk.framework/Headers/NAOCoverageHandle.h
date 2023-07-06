//
//  NAOCoverageHandle.h
//  NaoSDK
//
//  Created by Pole Star on 14/08/2018.
//  Copyright © 2018 POLE STAR SA. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "NAOCoverageHandleDelegate.h"
#import "NAOSyncDelegate.h"
#import "NAOSensorsDelegate.h"
#import "NAOServiceHandle.h"

@class NaoContext;

/** NAO Coverage Service
 
 The NAO Coverage service allows to determine whether end user is currently on bluetooth coverage for one of your sites
 */
@interface NAOCoverageHandle : NAOServiceHandle

/** WARNING : init not available, please use initWithKey: delegate: sensorsDelegate:
 
 */
-(instancetype _Nonnull) init __attribute__((unavailable("init not available, please use initWithKey: delegate: sensorsDelegate:")));

/** Init NAOCoverageHandle with API key
 
 */
- (id _Nonnull)initWithKey:(NSString * _Nonnull)key delegate:(id<NAOCoverageHandleDelegate> _Nonnull)delegate sensorsDelegate:(id<NAOSensorsDelegate> _Nonnull)sensorsDelegate;

- (id _Nonnull)initWithNaoContext:(NaoContext * _Nullable)naoContext key:(NSString * _Nonnull)key delegate:(id<NAOCoverageHandleDelegate> _Nonnull)delegate sensorsDelegate:(id<NAOSensorsDelegate> _Nonnull)sensorsDelegate ;

@end
