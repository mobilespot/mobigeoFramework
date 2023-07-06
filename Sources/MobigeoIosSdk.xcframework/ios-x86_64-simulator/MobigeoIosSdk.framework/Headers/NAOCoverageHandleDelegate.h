//
//  NAOCoverageHandleDelegate.h
//  NaoSDK
//
//  Created by Pole Star on 14/08/2018.
//  Copyright © 2018 POLE STAR SA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBNAOERRORCODE.h"

/** NAOCoverageHandleDelegate receives NAOCoverageHandle event
 
 */
@protocol NAOCoverageHandleDelegate <NSObject>

/** NAO Analytics Error
 
 @param errCode: Indicates an error code among DBNAOERRORCODE.
 @param message: The message contains additionnal information.
 */
- (void) didFailWithErrorCode:(DBNAOERRORCODE)errCode andMessage:(NSString*)message;
- (void) didEnterBeaconCoverage:(NSString *)siteId;
- (void) didExitBeaconCoverage;

@end
