/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(BOOL)isInternalBuild;
+(BOOL)isDemoModeEnabled;
+(id)deviceUUID;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isLowEndHardware;
+(BOOL)isDNUEnabled;
+(BOOL)isAudioAccessory;
+(BOOL)isBetaBuild;
-(id)init;
-(void)dealloc;
@end
