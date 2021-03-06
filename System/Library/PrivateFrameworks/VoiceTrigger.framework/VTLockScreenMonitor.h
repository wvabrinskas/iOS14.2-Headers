/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLockScreenMonitor : VTEventMonitor {

	int _notifyToken;
	unsigned char _lockScreenState;

}
+(id)sharedInstance;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_stopMonitoring;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg1 ;
-(id)init;
-(id)lockScreenStateDescription:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withLockScreenState:(unsigned char)arg2 ;
-(unsigned char)lockScreenState;
-(unsigned char)_checkLockScreenState;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg1 ;
@end

