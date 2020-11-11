/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/TPProcessObserverDelegate.h>

@class TPProcessObserver, NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, TPProcessObserverDelegate> {

	TPProcessObserver* _processObserver;

}

@property (nonatomic,retain) TPProcessObserver * processObserver;              //@synthesize processObserver=_processObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1 ;
+(id)sharedInCallUILauncher;
-(void)processObserver:(id)arg1 bundleIdentifier:(id)arg2 didUpdateApplicationRunning:(BOOL)arg3 ;
-(TPProcessObserver *)processObserver;
-(void)setProcessObserver:(TPProcessObserver *)arg1 ;
-(void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
