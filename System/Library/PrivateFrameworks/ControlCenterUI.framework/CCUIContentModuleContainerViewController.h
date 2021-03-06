/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContainer.h>
#import <libobjc.A.dylib/CCUISafeAppearancePropagationProvider.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol CCUIContentModuleContentViewController, CCUIContentModuleContainerViewControllerDelegate, CCUIContentModule, CCUIContentModuleBackgroundViewController;
@class NSString, UIViewController, NSArray, CCUIContentModuleContainerPresentationController, UIView, CCUIContentModuleBackgroundView, CCUIContentModuleContentContainerView, UITapGestureRecognizer, _UIClickPresentationInteraction;

@interface CCUIContentModuleContainerViewController : UIViewController <_UIClickPresentationInteractionDelegate, UIGestureRecognizerDelegate, CCUIContentModuleContainer, CCUISafeAppearancePropagationProvider, UIPointerInteractionDelegate> {

	BOOL _expanded;
	BOOL _contentModuleProvidesOwnPlatter;
	BOOL _transitioning;
	NSString* _moduleIdentifier;
	UIViewController*<CCUIContentModuleContentViewController> _contentViewController;
	id<CCUIContentModuleContainerViewControllerDelegate> _delegate;
	NSString* _materialGroupName;
	NSArray* _topLevelBlockingGestureRecognizers;
	id<CCUIContentModule> _contentModule;
	UIViewController*<CCUIContentModuleBackgroundViewController> _backgroundViewController;
	CCUIContentModuleContainerPresentationController* _presentationController;
	UIView* _highlightWrapperView;
	CCUIContentModuleBackgroundView* _backgroundView;
	CCUIContentModuleContentContainerView* _contentContainerView;
	UIView* _contentView;
	UIView* _maskView;
	UITapGestureRecognizer* _tapRecognizer;
	_UIClickPresentationInteraction* _clickPresentationInteraction;
	UITapGestureRecognizer* _expandModuleOnTouchTapRecognizer;
	UIEdgeInsets _expandedContentEdgeInsets;

}

@property (nonatomic,copy) NSString * moduleIdentifier;                                                                          //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,retain) id<CCUIContentModule> contentModule;                                                                //@synthesize contentModule=_contentModule - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContainerPresentationController * presentationController;                          //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) BOOL contentModuleProvidesOwnPlatter;                                                               //@synthesize contentModuleProvidesOwnPlatter=_contentModuleProvidesOwnPlatter - In the implementation block
@property (nonatomic,retain) UIView * highlightWrapperView;                                                                      //@synthesize highlightWrapperView=_highlightWrapperView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleBackgroundView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContentContainerView * contentContainerView;                                       //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * maskView;                                                                                  //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                                             //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) _UIClickPresentationInteraction * clickPresentationInteraction;                                     //@synthesize clickPresentationInteraction=_clickPresentationInteraction - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                                          //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * expandModuleOnTouchTapRecognizer;                                          //@synthesize expandModuleOnTouchTapRecognizer=_expandModuleOnTouchTapRecognizer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedContentEdgeInsets;                                                             //@synthesize expandedContentEdgeInsets=_expandedContentEdgeInsets - In the implementation block
@property (nonatomic,readonly) CCUIContentModuleContentContainerView * moduleContentView; 
@property (assign,nonatomic,__weak) id<CCUIContentModuleContainerViewControllerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * materialGroupName;                                                                         //@synthesize materialGroupName=_materialGroupName - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                    //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelBlockingGestureRecognizers;                                                     //@synthesize topLevelBlockingGestureRecognizers=_topLevelBlockingGestureRecognizers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * childViewControllersForAppearancePropagation; 
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(UIViewController*<CCUIContentModuleBackgroundViewController>)backgroundViewController;
-(void)viewWillLayoutSubviews;
-(CGRect)_contentFrameForRestState;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(CGRect)_backgroundFrameForExpandedState;
-(BOOL)definesContentModuleContainer;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(BOOL)isExpanded;
-(void)setClickPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(_UIClickPresentationInteraction *)clickPresentationInteraction;
-(UITapGestureRecognizer *)tapRecognizer;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)displayWillTurnOff;
-(void)setMaterialGroupName:(NSString *)arg1 ;
-(void)_configureForContentModuleGroupRenderingIfNecessary;
-(UIEdgeInsets)expandedContentEdgeInsets;
-(void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toBlockingGestureRecognizers:(id)arg2 ;
-(id)init;
-(CCUIContentModuleContentContainerView *)contentContainerView;
-(UIView *)maskView;
-(id<CCUIContentModuleContainerViewControllerDelegate>)delegate;
-(void)setBackgroundView:(CCUIContentModuleBackgroundView *)arg1 ;
-(double)_continuousCornerRadiusForCompactState;
-(void)setContentViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
-(BOOL)_isForceTouchAvailable;
-(void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(CCUIContentModuleBackgroundView *)backgroundView;
-(void)setExpandedContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setExpandModuleOnTouchTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)setModuleIdentifier:(NSString *)arg1 ;
-(void)_didEndTransitionWithContentModuleContainerTransition:(id)arg1 completed:(BOOL)arg2 ;
-(void)_handleExpandModuleForTapGestureRecognizer:(id)arg1 ;
-(CGRect)_backgroundFrameForRestState;
-(CCUIContentModuleContainerPresentationController *)presentationController;
-(CGRect)_containerFrameForExpandedState;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_configureMaskViewIfNecessary;
-(void)_loadBackgroundViewController:(id)arg1 ;
-(void)transitionToExpandedMode:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITapGestureRecognizer *)expandModuleOnTouchTapRecognizer;
-(id<CCUIContentModule>)contentModule;
-(CGRect)_contentBoundsForExpandedState;
-(void)setContentModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(void)expandModule;
-(void)_loadContentViewController:(id)arg1 ;
-(BOOL)contentModuleProvidesOwnPlatter;
-(void)setDelegate:(id<CCUIContentModuleContainerViewControllerDelegate>)arg1 ;
-(void)_closeExpandedModule:(BOOL)arg1 ;
-(void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)willBecomeActive;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGRect)_contentBoundsForTransitionProgress:(double)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2 presentationContext:(id)arg3 ;
-(void)willResignActive;
-(NSString *)moduleIdentifier;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setContentModule:(id<CCUIContentModule>)arg1 ;
-(CGRect)_contentFrameForExpandedState;
-(CGRect)_presentationFrameForExpandedState;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)willPresentViewController:(id)arg1 ;
-(double)_continuousCornerRadiusForExpandedState;
-(void)setBackgroundViewController:(UIViewController*<CCUIContentModuleBackgroundViewController>)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(UIView *)highlightWrapperView;
-(CCUIContentModuleContentContainerView *)moduleContentView;
-(NSString *)materialGroupName;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 ;
-(void)setMaskView:(UIView *)arg1 ;
-(void)loadView;
-(void)willDismissViewController:(id)arg1 ;
-(void)setContentContainerView:(CCUIContentModuleContentContainerView *)arg1 ;
-(void)setHighlightWrapperView:(UIView *)arg1 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg1 ;
-(UIView *)contentView;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)_setDidExpandModulePreference;
-(BOOL)ccui_shouldPropagateAppearanceCalls;
-(unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setPresentationController:(CCUIContentModuleContainerPresentationController *)arg1 ;
-(NSArray *)topLevelBlockingGestureRecognizers;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
@end

