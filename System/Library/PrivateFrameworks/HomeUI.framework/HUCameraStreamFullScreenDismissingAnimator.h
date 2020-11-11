/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUCameraStreamFullScreenAnimator.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface HUCameraStreamFullScreenDismissingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning> {

	UIView* _cameraViewSnapshot;
	UIView* _cameraOverlaySnapshot;

}

@property (nonatomic,readonly) UIView * cameraViewSnapshot;                 //@synthesize cameraViewSnapshot=_cameraViewSnapshot - In the implementation block
@property (nonatomic,readonly) UIView * cameraOverlaySnapshot;              //@synthesize cameraOverlaySnapshot=_cameraOverlaySnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)cameraViewSnapshot;
-(UIView *)cameraOverlaySnapshot;
-(id)initWithSourceCameraCell:(id)arg1 cameraViewSnapshot:(id)arg2 cameraOverlaySnapshot:(id)arg3 ;
@end
