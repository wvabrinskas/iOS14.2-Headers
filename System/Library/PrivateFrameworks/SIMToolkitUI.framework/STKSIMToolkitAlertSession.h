/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession {

	long long _event;
	STKSessionBehavior* _behavior;

}

@property (nonatomic,readonly) long long event;                            //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) STKSessionBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
-(long long)event;
-(STKSessionBehavior *)behavior;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2 ;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6 ;
@end

