/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFUIPasscodeContainerViewDelegate <NSObject>
@required
-(void)passcodeView:(id)arg1 hideLockViewWithResult:(long long)arg2 unlockCompletionHandler:(/*^block*/id)arg3;
-(BOOL)passcodeView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
-(void)passcodeView:(id)arg1 animateShowPasscodeWithCompletionHandler:(/*^block*/id)arg2;

@end
