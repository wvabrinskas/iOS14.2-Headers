/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSLockScreenServiceServerInterface
@required
-(oneway void)setPreventPasscodeLock:(id)arg1;
-(oneway void)setPreventSpuriousScreenUndim:(id)arg1;
-(oneway void)launchEmergencyDialerWithCompletion:(/*^block*/id)arg1;
-(oneway void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
