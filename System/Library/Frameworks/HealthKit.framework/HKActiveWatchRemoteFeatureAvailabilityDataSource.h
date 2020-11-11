/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityDataSource.h>

@class NSString, NRPairedDeviceRegistry;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {

	NSString* _electrocardiogramOnboardingCountryCode;
	NSString* _atrialFibrillationDetectionOnboardingCountryCode;
	NRPairedDeviceRegistry* _pairedDeviceRegistry;

}

@property (nonatomic,retain) NRPairedDeviceRegistry * pairedDeviceRegistry;                          //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (nonatomic,copy) NSString * electrocardiogramOnboardingCountryCode;                        //@synthesize electrocardiogramOnboardingCountryCode=_electrocardiogramOnboardingCountryCode - In the implementation block
@property (nonatomic,copy) NSString * atrialFibrillationDetectionOnboardingCountryCode;              //@synthesize atrialFibrillationDetectionOnboardingCountryCode=_atrialFibrillationDetectionOnboardingCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NRPairedDeviceRegistry *)pairedDeviceRegistry;
-(NSString *)atrialFibrillationDetectionOnboardingCountryCode;
-(void)setPairedDeviceRegistry:(NRPairedDeviceRegistry *)arg1 ;
-(id)_activeWatch;
-(id)watchBuildType;
-(id)watchCompanionDevicePlatform;
-(id)watchModelNumber;
-(SCD_Struct_HK3)_operatingSystemVersionForWatchOSVersion:(unsigned)arg1 ;
-(void)setElectrocardiogramOnboardingCountryCode:(NSString *)arg1 ;
-(void)setAtrialFibrillationDetectionOnboardingCountryCode:(NSString *)arg1 ;
-(id)watchProductType;
-(SCD_Struct_HK3)watchElectrocardiogramVersion;
-(id)watchOSBuildVersion;
-(NSString *)electrocardiogramOnboardingCountryCode;
-(SCD_Struct_HK3)watchOSVersion;
-(SCD_Struct_HK3)watchAtrialFibrillationDetectionVersion;
-(id)watchRegion;
@end
