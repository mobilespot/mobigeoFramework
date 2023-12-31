// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from com_polestar_naosdk_api_external.djinni

#import "DBTALERTRULE.h"
#import <Foundation/Foundation.h>

/** Geofencing alert rule */
@interface DBNAOAlertRule : NSObject
- (nonnull instancetype)initWithId:(int32_t)id
                              type:(DBTALERTRULE)type
                          regionId:(int32_t)regionId
                     regionGroupId:(int32_t)regionGroupId
                            siteId:(int32_t)siteId;
+ (nonnull instancetype)NAOAlertRuleWithId:(int32_t)id
                                      type:(DBTALERTRULE)type
                                  regionId:(int32_t)regionId
                             regionGroupId:(int32_t)regionGroupId
                                    siteId:(int32_t)siteId;

@property (nonatomic, readonly) int32_t id;

@property (nonatomic, readonly) DBTALERTRULE type;

/** id of the region associated with the rule */
@property (nonatomic, readonly) int32_t regionId;

/** id of the region group for which this rule applies */
@property (nonatomic, readonly) int32_t regionGroupId;

/** siteId linked to the rule */
@property (nonatomic, readonly) int32_t siteId;

@end
