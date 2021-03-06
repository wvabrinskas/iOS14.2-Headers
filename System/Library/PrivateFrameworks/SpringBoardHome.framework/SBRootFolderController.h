/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBFolderController.h>
#import <libobjc.A.dylib/SBFramewiseInteractiveTransitionAnimatorDelegate.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBRootFolderViewDelegate.h>
#import <libobjc.A.dylib/SBSearchGestureObserver.h>
#import <libobjc.A.dylib/SBHAddWidgetSheetViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHWidgetSheetViewControllerPresenter.h>
#import <libobjc.A.dylib/SBHStackConfigurationViewControllerAppearanceDelegate.h>
#import <libobjc.A.dylib/SBHWidgetDragHandling.h>
#import <libobjc.A.dylib/SBRootFolderPageStateTransitioning.h>
#import <libobjc.A.dylib/SBHIconRootViewProviding.h>

@protocol SBHLegibility, SBHLibraryProvider, SBHSidebarProvider, SBRootFolderControllerAccessoryViewControllerDelegate, BSInvalidatable, SBRootFolderPageTransition;
@class SBViewControllerTransitionContext, SBFramewiseInteractiveTransitionAnimator, SBPercentPassthroughInteractiveTransition, NSHashTable, NSArray, SBHAddWidgetSheetViewController, UIViewController, SBSearchGesture, _SBRootFolderPageTransitionHandle, SBHRecentsDocumentExtensionProvider, CHSAvocadoDescriptorProvider, SBRootFolderView, SBRootFolder, NSSet, UIView, SBFParallaxSettings, NSString, _UILegibilitySettings, SBFolderIconImageCache, SBHIconImageCache;

@interface SBRootFolderController : SBFolderController <SBFramewiseInteractiveTransitionAnimatorDelegate, SBViewControllerTransitionContextDelegate, SBRootFolderViewDelegate, SBSearchGestureObserver, SBHAddWidgetSheetViewControllerDelegate, UIGestureRecognizerDelegate, SBHWidgetSheetViewControllerPresenter, SBHStackConfigurationViewControllerAppearanceDelegate, SBHWidgetDragHandling, SBRootFolderPageStateTransitioning, SBHIconRootViewProviding> {

	SBViewControllerTransitionContext* _currentTransitionContext;
	SBFramewiseInteractiveTransitionAnimator* _currentTransitionAnimator;
	SBPercentPassthroughInteractiveTransition* _currentTransitionInteractor;
	NSHashTable* _pageStateObservers;
	NSArray* _editingSuggestedWidgetItems;
	SBHAddWidgetSheetViewController* _addSheetViewController;
	BOOL _showsDoneButtonWhileEditing;
	BOOL _showsAddWidgetButtonWhileEditing;
	BOOL _suppressesExtraEditingButtons;
	BOOL _favoriteTodayViewVisible;
	BOOL _managesStatusBarWidth;
	long long _pageState;
	UIViewController* _pullDownSearchViewController;
	UIViewController*<SBHLegibility> _todayViewController;
	UIViewController*<SBHLibraryProvider> _trailingCustomViewController;
	UIViewController*<SBHSidebarProvider> _sidebarViewController;
	SBSearchGesture* _searchGesture;
	id<SBRootFolderControllerAccessoryViewControllerDelegate> _accessoryViewControllerDelegate;
	unsigned long long _presentationSource;
	double _effectiveSidebarVisibilityProgress;
	id<BSInvalidatable> _searchGestureIconViewTouchCancellationAssertion;
	_SBRootFolderPageTransitionHandle* _currentTransitionHandle;
	id<SBRootFolderPageTransition> _searchGestureTransition;
	id<SBRootFolderPageTransition> _implicitScrollTransition;
	SBHRecentsDocumentExtensionProvider* _recentsDocumentExtensionProvider;
	CHSAvocadoDescriptorProvider* _avocadoDescriptorProvider;

}

@property (assign,nonatomic) BOOL managesStatusBarWidth;                                                                                               //@synthesize managesStatusBarWidth=_managesStatusBarWidth - In the implementation block
@property (nonatomic,readonly) SBRootFolderView * rootFolderView; 
@property (nonatomic,retain) SBSearchGesture * searchGesture;                                                                                          //@synthesize searchGesture=_searchGesture - In the implementation block
@property (nonatomic,retain) id<BSInvalidatable> searchGestureIconViewTouchCancellationAssertion;                                                      //@synthesize searchGestureIconViewTouchCancellationAssertion=_searchGestureIconViewTouchCancellationAssertion - In the implementation block
@property (assign,nonatomic) long long pageState;                                                                                                      //@synthesize pageState=_pageState - In the implementation block
@property (nonatomic,retain) _SBRootFolderPageTransitionHandle * currentTransitionHandle;                                                              //@synthesize currentTransitionHandle=_currentTransitionHandle - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> searchGestureTransition;                                                                   //@synthesize searchGestureTransition=_searchGestureTransition - In the implementation block
@property (nonatomic,retain) id<SBRootFolderPageTransition> implicitScrollTransition;                                                                  //@synthesize implicitScrollTransition=_implicitScrollTransition - In the implementation block
@property (nonatomic,retain) SBHRecentsDocumentExtensionProvider * recentsDocumentExtensionProvider;                                                   //@synthesize recentsDocumentExtensionProvider=_recentsDocumentExtensionProvider - In the implementation block
@property (nonatomic,readonly) long long todayViewPageIndex; 
@property (nonatomic,readonly) long long favoriteTodayViewPageIndex; 
@property (nonatomic,readonly) long long sidebarPageIndex; 
@property (nonatomic,readonly) long long trailingCustomViewPageIndex; 
@property (nonatomic,readonly) CHSAvocadoDescriptorProvider * avocadoDescriptorProvider;                                                               //@synthesize avocadoDescriptorProvider=_avocadoDescriptorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SBRootFolderControllerDelegate> folderDelegate; 
@property (nonatomic,retain) SBRootFolder * folder; 
@property (assign,nonatomic) unsigned long long dockEdge; 
@property (nonatomic,readonly) double dockHeight; 
@property (getter=isDockExternal,nonatomic,readonly) BOOL dockExternal; 
@property (getter=isDockPinnedForRotation,nonatomic,readonly) BOOL dockPinnedForRotation; 
@property (nonatomic,copy,readonly) NSSet * nonDockPresentedIconLocations; 
@property (nonatomic,readonly) BOOL showsDoneButtonWhileEditing;                                                                                       //@synthesize showsDoneButtonWhileEditing=_showsDoneButtonWhileEditing - In the implementation block
@property (nonatomic,readonly) BOOL showsAddWidgetButtonWhileEditing;                                                                                  //@synthesize showsAddWidgetButtonWhileEditing=_showsAddWidgetButtonWhileEditing - In the implementation block
@property (assign,nonatomic) BOOL suppressesExtraEditingButtons;                                                                                       //@synthesize suppressesExtraEditingButtons=_suppressesExtraEditingButtons - In the implementation block
@property (nonatomic,readonly) UIViewController * pullDownSearchViewController;                                                                        //@synthesize pullDownSearchViewController=_pullDownSearchViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHLegibility> todayViewController;                                                                   //@synthesize todayViewController=_todayViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHLibraryProvider> trailingCustomViewController;                                                     //@synthesize trailingCustomViewController=_trailingCustomViewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHSidebarProvider> sidebarViewController;                                                            //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,readonly) double spotlightFirstIconRowOffset; 
@property (assign,nonatomic,__weak) id<SBRootFolderControllerAccessoryViewControllerDelegate> accessoryViewControllerDelegate;                         //@synthesize accessoryViewControllerDelegate=_accessoryViewControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long presentationSource;                                                                                    //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,copy,readonly) NSArray * folderControllers; 
@property (assign,nonatomic) BOOL allowsAutoscrollToTodayView; 
@property (getter=isTodayViewVisible,nonatomic,readonly) BOOL todayViewVisible; 
@property (getter=isFavoriteTodayViewVisible,nonatomic,readonly) BOOL favoriteTodayViewVisible;                                                        //@synthesize favoriteTodayViewVisible=_favoriteTodayViewVisible - In the implementation block
@property (getter=isTodayViewTransitioning,nonatomic,readonly) BOOL todayViewTransitioning; 
@property (assign,getter=isTodayViewPageHidden,nonatomic) BOOL todayViewPageHidden; 
@property (getter=isPullDownSearchVisible,nonatomic,readonly) BOOL pullDownSearchVisible; 
@property (getter=isPullDownSearchVisibleOrTransitioningToVisible,nonatomic,readonly) BOOL pullDownSearchVisibleOrTransitioningToVisible; 
@property (getter=isPullDownSearchTransitioning,nonatomic,readonly) BOOL pullDownSearchTransitioning; 
@property (getter=isPullDownSearchVisibleOrTransitioning,nonatomic,readonly) BOOL pullDownSearchVisibleOrTransitioning; 
@property (getter=isOnTodayPage,nonatomic,readonly) BOOL todayPage; 
@property (getter=isTodayViewVisibleOrTransitionDestination,nonatomic,readonly) BOOL todayViewVisibleOrTransitionDestination; 
@property (getter=isTodayViewSearchVisible,nonatomic,readonly) BOOL todayViewSearchVisible; 
@property (getter=isTodayViewSearchTransitioning,nonatomic,readonly) BOOL todayViewSearchTransitioning; 
@property (getter=isTodayViewSearchVisibleOrTransitioning,nonatomic,readonly) BOOL todayViewSearchVisibleOrTransitioning; 
@property (getter=isAnySearchVisible,nonatomic,readonly) BOOL anySearchVisible; 
@property (getter=isAnySearchVisibleOrTransitioning,nonatomic,readonly) BOOL anySearchVisibleOrTransitioning; 
@property (nonatomic,readonly) UIView * searchableTodayWrapperView; 
@property (nonatomic,readonly) UIView * searchBackdropView; 
@property (assign,nonatomic) double sidebarVisibilityProgress; 
@property (assign,nonatomic) double effectiveSidebarVisibilityProgress;                                                                                //@synthesize effectiveSidebarVisibilityProgress=_effectiveSidebarVisibilityProgress - In the implementation block
@property (getter=isSidebarVisible,nonatomic,readonly) BOOL sidebarVisible; 
@property (getter=isSidebarEffectivelyVisible,nonatomic,readonly) BOOL sidebarEffectivelyVisible; 
@property (getter=isSidebarEffectivelyAtLeastHalfVisible,nonatomic,readonly) BOOL sidebarEffectivelyAtLeastHalfVisible; 
@property (assign,getter=isSidebarPinned,nonatomic) BOOL sidebarPinned; 
@property (getter=isSidebarVisibilityGestureActive,nonatomic,readonly) BOOL sidebarVisibilityGestureActive; 
@property (nonatomic,readonly) SBFParallaxSettings * parallaxSettings; 
@property (getter=isPageManagementUIVisible,nonatomic,readonly) BOOL pageManagementUIVisible; 
@property (assign,getter=isOccludedByOverlay,nonatomic) BOOL occludedByOverlay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SBHWidgetDragHandling> widgetDragHandler; 
@property (assign,nonatomic) double titledButtonsAlpha; 
@property (getter=isTransitioningPageState,nonatomic,readonly) BOOL transitioningPageState; 
@property (nonatomic,readonly) long long destinationPageState; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIViewController * deepestFolderController; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollTracking,nonatomic,readonly) BOOL scrollTracking; 
@property (assign,nonatomic) long long currentPageIndex; 
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache; 
@property (nonatomic,retain) SBHIconImageCache * iconImageCache; 
@property (nonatomic,copy,readonly) NSSet * presentedIconLocations; 
+(id)dockIconLocation;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 pageWidth:(double)arg2 pageSpacing:(double)arg3 pages:(const long long*)arg4 pageCount:(unsigned long long)arg5 userInterfaceLayoutDirection:(long long)arg6 currentPageState:(long long)arg7 ;
+(id)iconLocation;
+(Class)configurationClass;
+(Class)_contentViewClass;
-(SBSearchGesture *)searchGesture;
-(unsigned long long)presenterType;
-(id)dockListView;
-(void)stackConfigurationViewControllerViewWillAppear:(id)arg1 ;
-(id<SBRootFolderPageTransition>)implicitScrollTransition;
-(BOOL)isDockExternal;
-(BOOL)isSidebarVisibilityGestureActive;
-(UIView *)searchableTodayWrapperView;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 options:(unsigned long long)arg3 ;
-(void)updateExtraButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)removePageStateObserver:(id)arg1 ;
-(void)folderController:(id)arg1 didEndEditingTitle:(id)arg2 ;
-(UIViewController*<SBHSidebarProvider>)sidebarViewController;
-(void)_checkForImproperScrollOffsetForPageState;
-(void)setSearchGesture:(SBSearchGesture *)arg1 ;
-(BOOL)isTodayViewVisible;
-(SBRootFolderView *)rootFolderView;
-(BOOL)isDockVisible;
-(BOOL)isSidebarPinned;
-(BOOL)isOnTodayPage;
-(void)didBeginDraggingWidgetIcon:(id)arg1 ;
-(void)setTodayViewPageHidden:(BOOL)arg1 ;
-(long long)destinationPageState;
-(unsigned long long)presentationSource;
-(BOOL)allowsAutoscrollToTodayView;
-(id<SBHWidgetDragHandling>)widgetDragHandler;
-(BOOL)isSidebarVisible;
-(void)setTodayViewController:(UIViewController*<SBHLegibility>)arg1 ;
-(id)viewControllerForPageState:(long long)arg1 ;
-(UIViewController*<SBHLegibility>)todayViewController;
-(BOOL)suspendsWallpaperAnimationWhileOpen;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1 ;
-(BOOL)_isDescriptorAllowed:(id)arg1 ;
-(SBFParallaxSettings *)parallaxSettings;
-(BOOL)closesAfterDragExits;
-(void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2 ;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(void)addPageStateObserver:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(BOOL)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2 ;
-(void)setAccessoryViewControllerDelegate:(id<SBRootFolderControllerAccessoryViewControllerDelegate>)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isTodayViewSearchVisible;
-(double)sidebarVisibilityProgress;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(void)folderViewWillEndDragging:(id)arg1 ;
-(void)_handleWidgetSheetViewControllerDidDisappear:(id)arg1 ;
-(void)enterPageManagementUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSSet *)presentedIconLocations;
-(void)folderView:(id)arg1 didBeginEditingTitle:(id)arg2 ;
-(long long)todayViewPageIndex;
-(void)addWidgetSheetViewControllerWillAppear:(id)arg1 ;
-(double)dockHeight;
-(BOOL)shouldOpenFolderIcon:(id)arg1 ;
-(void)_reduceTransparencyChanged;
-(id)_viewControllersToNotifyForViewObscuration;
-(void)setIdleText:(id)arg1 ;
-(void)rootFolderView:(id)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2 ;
-(void)transitionWillReverse:(id)arg1 ;
-(id)extraViewsContainers;
-(id<BSInvalidatable>)searchGestureIconViewTouchCancellationAssertion;
-(void)folderView:(id)arg1 didEndEditingTitle:(id)arg2 ;
-(BOOL)isTransitioningBetweenIconAndTrailingCustomView;
-(void)searchGesture:(id)arg1 resetAnimated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)willBeginTransitionToState:(long long)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3 ;
-(void)transitionWillBegin:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isDockPinnedForRotation;
-(unsigned long long)_depth;
-(void)orientationDidChange:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canTransitionPageStateToState:(long long)arg1 ;
-(void)dismissSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canAcceptFolderIconDrags;
-(void)setCurrentTransitionHandle:(_SBRootFolderPageTransitionHandle *)arg1 ;
-(BOOL)disablesScrollingWhileIconDragIsDropping;
-(BOOL)isPageManagementUIVisible;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(CHSAvocadoDescriptorProvider *)avocadoDescriptorProvider;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)prepareToTearDown;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(void)folderViewWillUpdatePageDuringScrolling:(id)arg1 ;
-(id)beginModifyingDockOffscreenFractionForReason:(id)arg1 ;
-(void)setFolderDelegate:(id<SBRootFolderControllerDelegate>)arg1 ;
-(void)folderViewDidEndScrolling:(id)arg1 ;
-(void)_setupDebugTapGestureRecognizerForDockIconListView:(id)arg1 ;
-(id)viewControllersForPageIndex:(long long)arg1 ;
-(void)presentSpotlightAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_makeContentViewWithConfiguration:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(void)folderViewWillBeginScrolling:(id)arg1 ;
-(id)dockIconListView;
-(BOOL)isDisplayingIconView:(id)arg1 options:(unsigned long long)arg2 ;
-(void)folderViewWillBeginDragging:(id)arg1 ;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(void)prepareToClose;
-(void)_insertSmartStackSpecialAvocadosAtTheTopOfApplicationWidgetCollections:(id)arg1 ;
-(void)stackConfigurationViewControllerViewDidAppear:(id)arg1 ;
-(SBHRecentsDocumentExtensionProvider *)recentsDocumentExtensionProvider;
-(void)_addSiriSuggestionsSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(void)folderViewDidScroll:(id)arg1 ;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(void)setTitledButtonsAlpha:(double)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(double)titledButtonsAlpha;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(void)_handleWidgetSheetViewControllerDidAppear:(id)arg1 ;
-(BOOL)isTransitioningBetweenIconPageAndTrailingCustomPage;
-(id<SBRootFolderPageTransition>)searchGestureTransition;
-(id)extraViews;
-(id)_widgetIconAnimationExtraViewsProvider;
-(BOOL)isTransitiongBetweenPageStateVerticalGroups;
-(void)setPageState:(long long)arg1 ;
-(double)visibilityProgressTowardPageStateMatchingTest:(/*^block*/id)arg1 ;
-(BOOL)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)suppressesExtraEditingButtons;
-(id)viewControllerForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 ;
-(void)_configureAppStatusBarInsetsForOrientation:(long long)arg1 ;
-(BOOL)isPullDownSearchVisible;
-(void)_addShortcutsSpecialAvocadoToApplicationWidgetCollections:(id)arg1 ;
-(BOOL)shouldAnimateLastTwoViewsAsOne;
-(void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2 ;
-(void)setRecentsDocumentExtensionProvider:(SBHRecentsDocumentExtensionProvider *)arg1 ;
-(id)widgetIconForGalleryItem:(id)arg1 sizeClass:(long long)arg2 ;
-(id)widgetIconForDescriptor:(id)arg1 sizeClass:(long long)arg2 ;
-(BOOL)isTransitioningBetweenIconAndTodayView;
-(BOOL)_isVisibilityWidgetDefined:(long long)arg1 ;
-(UIView *)searchBackdropView;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)_shouldAddSpecialAvocadoOfType:(unsigned long long)arg1 ;
-(UIViewController*<SBHLibraryProvider>)trailingCustomViewController;
-(BOOL)isDisplayingIcon:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isAnySearchVisible;
-(unsigned long long)dockEdge;
-(BOOL)isTodayViewOrTodayViewSearchVisible;
-(BOOL)isTodayViewVisibleOrTransitionDestination;
-(BOOL)isTodayViewPageHidden;
-(BOOL)shouldAnimateFirstTwoViewsAsOne;
-(double)distanceToTopOfSpotlightIconsForRootFolderView:(id)arg1 ;
-(NSSet *)nonDockPresentedIconLocations;
-(void)_configureViewForOrientationWithoutAnimation:(long long)arg1 ;
-(void)didContinueTransitionToState:(long long)arg1 progress:(double)arg2 ;
-(void)stackConfigurationViewControllerViewWillDisappear:(id)arg1 ;
-(BOOL)isPullDownSearchVisibleOrTransitioning;
-(void)setSuppressesExtraEditingButtons:(BOOL)arg1 ;
-(BOOL)_todayViewPageIsVisibleForOrientation:(long long)arg1 ;
-(void)setSearchGestureIconViewTouchCancellationAssertion:(id<BSInvalidatable>)arg1 ;
-(double)_anySearchVisibilityProgress;
-(id)addWidgetSheetViewController:(id)arg1 widgetIconForDescriptor:(id)arg2 sizeClass:(long long)arg3 ;
-(void)willEndTransitionToState:(long long)arg1 successfully:(BOOL)arg2 ;
-(void)transitionContext:(id)arg1 updateTransitionProgress:(double)arg2 ;
-(BOOL)_isDescriptorVisibleByDefault:(id)arg1 ;
-(void)presentWidgetEditingViewControllerFromViewController:(id)arg1 ;
-(BOOL)isSidebarEffectivelyVisible;
-(void)addWidgetSheetViewControllerDidAppear:(id)arg1 ;
-(void)rootFolderView:(id)arg1 willPresentPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(_SBRootFolderPageTransitionHandle *)currentTransitionHandle;
-(void)rootFolderView:(id)arg1 didOverscrollOnLastPageByAmount:(double)arg2 ;
-(void)setSearchGestureTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(BOOL)isTodayViewTransitioning;
-(void)viewDidLoad;
-(void)_configureDockViewForOrientationDuringAnimation:(long long)arg1 dockAnimationWindow:(id)arg2 dockBorrowedAssertion:(id)arg3 ;
-(id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)enumeratePageStateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(BOOL)isAnySearchVisibleOrTransitioning;
-(void)transitionWillFinish:(id)arg1 ;
-(BOOL)isAnySearchTransitioning;
-(BOOL)isTransitioningPageState;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateSearchGestureIconViewTouchCancellationAssertion;
-(double)externalDockHeightForRootFolderView:(id)arg1 ;
-(id)rootFolderViewIfLoaded;
-(id)backgroundViewForEditingDoneButtonForRootFolderView:(id)arg1 ;
-(void)setPresentationSource:(unsigned long long)arg1 ;
-(void)folderController:(id)arg1 didBeginEditingTitle:(id)arg2 ;
-(id)_vendorNameForBundleIdentifier:(id)arg1 ;
-(void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)exitPageManagementUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_addFilesSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(void)pageTransitionHandle:(id)arg1 endPageStateTransitionSuccessfully:(BOOL)arg2 ;
-(void)setManagesStatusBarWidth:(BOOL)arg1 ;
-(void)searchGesture:(id)arg1 startedShowing:(BOOL)arg2 ;
-(void)_handleWidgetSheetViewControllerWillDisappear:(id)arg1 ;
-(NSArray *)folderControllers;
-(long long)pageState;
-(void)rootFolderView:(id)arg1 didChangeSidebarVisibilityProgress:(double)arg2 ;
-(BOOL)showsDoneButtonWhileEditing;
-(double)effectiveSidebarVisibilityProgress;
-(BOOL)managesStatusBarWidth;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SBRootFolderPageStateTransitionSnapshot)pageStateTransitionSnapshotForScrollOffset:(double)arg1 ;
-(long long)trailingCustomViewPageIndex;
-(void)rootFolderView:(id)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2 ;
-(BOOL)isSidebarEffectivelyAtLeastHalfVisible;
-(void)setOccludedByOverlay:(BOOL)arg1 ;
-(void)setPullDownSearchViewController:(UIViewController *)arg1 ;
-(void)rootFolderView:(id)arg1 willDismissPageManagementUsingAnimator:(id)arg2 context:(id)arg3 ;
-(id)updateStateTransitionsDuringScrollingScrollView:(id)arg1 pageBounceComparator:(/*function pointer*/void*)arg2 ;
-(void)addWidgetSheetViewControllerDidDisappear:(id)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)didEndTransitionFromState:(long long)arg1 toState:(long long)arg2 successfully:(BOOL)arg3 ;
-(BOOL)isPullDownSearchVisibleOrTransitioningToVisible;
-(void)performDefaultPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)searchGesture:(id)arg1 completedShowing:(BOOL)arg2 ;
-(double)maxExternalDockHeightForRootFolderView:(id)arg1 ;
-(void)setAllowsAutoscrollToTodayView:(BOOL)arg1 ;
-(void)configureAppStatusBarInsets;
-(BOOL)isTransitioningBetweenHorizontalPageStates;
-(void)setSidebarViewController:(UIViewController*<SBHSidebarProvider>)arg1 ;
-(BOOL)_dockLayoutReversedForInterfaceOrientation:(long long)arg1 ;
-(id)_widgetIconForDescriptors:(id)arg1 sizeClass:(long long)arg2 ;
-(void)rootFolderViewWantsWidgetEditingViewControllerPresented:(id)arg1 ;
-(double)pageTransitionProgress;
-(double)_trailingCustomViewVisibilityProgress;
-(id)backgroundViewForDockForRootFolderView:(id)arg1 ;
-(BOOL)isPullDownSearchTransitioning;
-(double)spotlightFirstIconRowOffset;
-(BOOL)isOccludedByOverlay;
-(double)_additionalMinimumOffsetForSheetPresentation;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setParallaxDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)updateViewsAfterOrientationChange;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(long long)sidebarPageIndex;
-(UIViewController *)pullDownSearchViewController;
-(void)setSidebarPinned:(BOOL)arg1 ;
-(id<SBRootFolderControllerAccessoryViewControllerDelegate>)accessoryViewControllerDelegate;
-(id)defaultTransitionForTransitioningFromPageState:(long long)arg1 toPageState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4 ;
-(void)rootFolderView:(id)arg1 didDismissPageManagementWithContext:(id)arg2 ;
-(void)_handleWidgetSheetViewControllerWillAppear:(id)arg1 ;
-(void)_doPageManagementEducation;
-(BOOL)isTodayViewSearchVisibleOrTransitioning;
-(void)addWidgetSheetViewControllerDidCancel:(id)arg1 ;
-(BOOL)_isDockSwitchedForOrientation:(long long)arg1 ;
-(void)rootFolderView:(id)arg1 didEndSidebarVisibilityTransitionWithEffectiveProgress:(double)arg2 ;
-(void)_configureTodayViewPageForOrientation:(long long)arg1 ;
-(void)rootFolderView:(id)arg1 didEndOverscrollOnLastPageWithVelocity:(double)arg2 translation:(double)arg3 ;
-(void)setEffectiveSidebarVisibilityProgress:(double)arg1 ;
-(void)pageTransitionHandle:(id)arg1 updateCurrentPageStateTransitionToProgress:(double)arg2 ;
-(void)setSuppressesEditingStateForListView:(BOOL)arg1 ;
-(BOOL)isTodayViewSearchTransitioning;
-(void)_addBatteriesSpecialAvocadosToApplicationWidgetCollections:(id)arg1 ;
-(void)_configureAppStatusBarInsetsAnimated:(BOOL)arg1 ;
-(long long)favoriteTodayViewPageIndex;
-(void)_cancelTouchesForSearchGestureOnIconView:(id)arg1 ;
-(void)rootFolderViewWantsToEndEditing:(id)arg1 ;
-(double)_todayViewVisibilityProgress;
-(void)setSidebarVisibilityProgress:(double)arg1 ;
-(void)addWidgetSheetViewControllerWillDisappear:(id)arg1 ;
-(void)setImplicitScrollTransition:(id<SBRootFolderPageTransition>)arg1 ;
-(void)rootFolderView:(id)arg1 didOverscrollOnFirstPageByAmount:(double)arg2 ;
-(BOOL)isTransitioningBetweenIconPageAndTodayPage;
-(BOOL)showsAddWidgetButtonWhileEditing;
-(void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2 ;
-(double)preferredExternalDockVerticalMarginForRootFolderView:(id)arg1 ;
-(void)stackConfigurationViewControllerViewDidDisappear:(id)arg1 ;
-(void)prepareToOpen;
-(BOOL)isFavoriteTodayViewVisible;
@end

