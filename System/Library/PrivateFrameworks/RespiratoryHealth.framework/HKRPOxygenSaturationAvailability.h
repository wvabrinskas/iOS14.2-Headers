/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKRPOxygenSaturationAvailabilityDataSource;
@interface HKRPOxygenSaturationAvailability : NSObject {

	id<HKRPOxygenSaturationAvailabilityDataSource> _dataSource;

}

@property (getter=isDeviceSupported,nonatomic,readonly) BOOL deviceSupported; 
+(BOOL)isCountryAllowed:(id)arg1 ;
+(id)_availabilityPlistURL;
+(id)allowedCountryCodesISO3166;
+(id)allowedCountryCodesByVersion;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)isDeviceSupported;
@end
