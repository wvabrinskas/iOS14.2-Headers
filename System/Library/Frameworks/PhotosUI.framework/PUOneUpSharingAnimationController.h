/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISheetAnimationController.h>
#import <libobjc.A.dylib/PUOneUpAssetTransition.h>

@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;
@class PUOneUpPhotosSharingTransitionContext, UIViewController, NSString;

@interface PUOneUpSharingAnimationController : _UISheetAnimationController <PUOneUpAssetTransition> {

	BOOL _interruptibleAnimatorForTransitionWasCalled;
	PUOneUpPhotosSharingTransitionContext* _oneUpTransitionContext;
	UIViewController*<PUOneUpAssetTransitionViewController> _presentingViewController;
	id<PUOneUpSharingAnimationControllerDelegate> _delegate;

}

@property (nonatomic,readonly) PUOneUpPhotosSharingTransitionContext * oneUpTransitionContext;                                       //@synthesize oneUpTransitionContext=_oneUpTransitionContext - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController*<PUOneUpAssetTransitionViewController> presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpSharingAnimationControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id<PUOneUpSharingAnimationControllerDelegate>)delegate;
-(UIViewController*<PUOneUpAssetTransitionViewController>)presentingViewController;
-(double)transitionDuration:(id)arg1 ;
-(void)setDelegate:(id<PUOneUpSharingAnimationControllerDelegate>)arg1 ;
-(id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2 ;
-(void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2 ;
-(PUOneUpPhotosSharingTransitionContext *)oneUpTransitionContext;
-(id)interruptibleAnimatorForTransition:(id)arg1 ;
@end
