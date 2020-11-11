/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UISearchControllerPresenting.h>

@class UIView, _UISearchPresentationAssistant, NSString;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _wrapperView;
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
-(void)containerViewWillLayoutSubviews;
-(void)_transitionFromWillBegin;
-(BOOL)searchBarShouldClipToBounds;
-(unsigned long long)edgeForHidingNavigationBar;
-(CGRect)frameOfPresentedViewInContainerView;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)animatorShouldLayoutPresentationViews;
-(void)_transitionToDidEnd;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(CGRect)finalFrameForContainerView;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(id)presentedView;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(BOOL)searchBarCanContainScopeBar;
-(UIView *)searchBarContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(double)resultsControllerContentOffset;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2 ;
-(BOOL)_shouldSubscribeToKeyboardNotifications;
-(double)statusBarAdjustment;
-(BOOL)forceObeyNavigationBarInsets;
-(void)setContentVisible:(BOOL)arg1 ;
-(void)_transitionToWillBegin;
-(long long)adaptivePresentationStyle;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)resultsUnderlapsSearchBar;
-(void)dealloc;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
@end
