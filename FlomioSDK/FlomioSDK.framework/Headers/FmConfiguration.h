//
//  FmConfiguration.h
//  SDK
//
//  Created by Scott Condron on 23/11/2016.
//  Copyright © 2016 Flomio, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FmCustomTypes.h"

@interface FmConfiguration : NSObject

@property (nonatomic) DeviceType deviceType;

#pragma mark - General Configuration Properties

@property (nonatomic) TagDiscovery tagDiscovery;
@property (nonatomic, strong) NSNumber *scanPeriod; // in milliseconds
@property (nonatomic, assign) NSNumber *scanSound;
@property (nonatomic) PowerOperation powerOperation;
@property (nonatomic) TransmitPower transmitPower;
@property (nonatomic, strong) NSNumber *allowMultiConnect;
@property (nonatomic, strong) NSString *specificDeviceUid;
@property (nonatomic, assign) NSNumber *isCeMode;
@property (nonatomic, assign) NSNumber *isVasMode;

- (void)setConfiguration:(FmConfiguration *)configurationDictionary;

@end
