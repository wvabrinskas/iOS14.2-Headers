/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
@optional
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateHomeGestureSharing:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg2;
-(void)siriPresentation:(id)arg1 didUpdateShouldDismissForTapOutsideContentTo:(BOOL)arg2;

@required
-(BOOL)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;
-(void)screenWakeRequested;
-(void)screenWakeIdleTimerResetRequested;

@end
