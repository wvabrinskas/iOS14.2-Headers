/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class _UISearchPresentationAssistant, UIView, NSString;

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	CGRect finalFrameForContainerView;

}

@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)searchBarToBecomeTopAttached;
-(void)_transitionFromDidEnd;
-(BOOL)shouldAccountForStatusBar;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)_transitionFromWillBegin;
-(BOOL)searchBarShouldClipToBounds;
-(unsigned long long)edgeForHidingNavigationBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)animatorShouldLayoutPresentationViews;
-(void)_transitionToDidEnd;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(BOOL)_forcePresentationInPresenterScene;
-(CGRect)finalFrameForContainerView;
-(id)_popoverHostingWindow;
-(void)presentationTransitionWillBegin;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI9)arg1 ;
-(BOOL)searchBarCanContainScopeBar;
-(UIView *)searchBarContainerView;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(BOOL)forceObeyNavigationBarInsets;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)_transitionToWillBegin;
-(long long)adaptivePresentationStyle;
-(BOOL)resultsUnderlapsSearchBar;
@end
