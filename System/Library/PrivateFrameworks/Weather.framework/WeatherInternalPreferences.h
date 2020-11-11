/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;                         //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) BOOL isInternalInstall; 
@property (nonatomic,readonly) unsigned long long deviceInactivityThreshold; 
@property (nonatomic,readonly) BOOL isV3Enabled; 
@property (nonatomic,readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(BOOL)isInternalInstall;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(BOOL)shouldShowUpdateTimestamp;
-(unsigned long long)deviceInactivityThreshold;
-(BOOL)isV3Enabled;
@end
