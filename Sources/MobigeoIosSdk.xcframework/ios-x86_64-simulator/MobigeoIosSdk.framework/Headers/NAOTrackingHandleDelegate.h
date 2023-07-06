//
//  NAOTrackingHandleDelegate.h
//  NAOSDK
//
//  Created by Pole Star on 10/09/2020.
//

#ifndef NAOTrackingHandleDelegate_h
#define NAOTrackingHandleDelegate_h

#import <Foundation/Foundation.h>
#import "DBNAOERRORCODE.h"

/** NAOTrackingHandleDelegate receives NAOTrackingHandle event
 
 */
@protocol NAOTrackingHandleDelegate <NSObject>

/** NAO Tracking Error
 
 @param errCode: Indicates an error code among DBNAOERRORCODE.
 @param message: The message contains additionnal information.
 */
- (void) didFailWithErrorCode:(DBNAOERRORCODE)errCode andMessage:(NSString*)message;


@end
#endif /* NAOTrackingHandleDelegate_h */
