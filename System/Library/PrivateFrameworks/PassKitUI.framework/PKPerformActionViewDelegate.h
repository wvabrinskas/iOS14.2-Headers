/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPerformActionViewDelegate <NSObject>
@optional
-(void)performActionViewDidPerformAction:(id)arg1;
-(void)performActionView:(id)arg1 requestsPresentViewController:(id)arg2;
-(void)performActionViewRequestsPerformNextStepForAction:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)setRightBarButtonEnabled:(BOOL)arg1;
-(void)shakeCard;

@end

