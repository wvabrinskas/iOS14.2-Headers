/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class _UIPageControlVisualProvider, UIColor, _UILegibilitySettings, UIImage;

@interface UIPageControl : UIControl {

	_UIPageControlVisualProvider* _visualProvider;
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
		unsigned allowScrubbing : 1;
		unsigned flickToEndGestureEnabled : 1;
	}  _pageControlFlags;
	SCD_Struct_UI62 _custom;
	double _horizontalPadding;
	double _verticalPadding;
	double _indicatorSpacing;
	unsigned long long _preferredNumberOfVisibleIndicators;
	long long _numberOfPages;
	long long _currentPage;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;
	long long _backgroundStyle;
	long long _previousPage;

}

@property (assign,nonatomic) long long previousPage;                                                                                            //@synthesize previousPage=_previousPage - In the implementation block
@property (assign,setter=_setFlickToEndGestureEnabled:,nonatomic) BOOL _flickToEndGestureEnabled; 
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long legibilityStyle; 
@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) long long numberOfPages;                                                                                           //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long currentPage;                                                                                             //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) BOOL hidesForSinglePage; 
@property (nonatomic,retain) UIColor * pageIndicatorTintColor;                                                                                  //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,retain) UIColor * currentPageIndicatorTintColor;                                                                           //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                                         //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) long long interactionState; 
@property (assign,nonatomic) BOOL allowsContinuousInteraction; 
@property (nonatomic,retain) UIImage * preferredIndicatorImage; 
@property (assign,nonatomic) BOOL defersCurrentPageDisplay; 
+(BOOL)doesOverrideMethod:(SEL)arg1 inBaseClass:(Class)arg2 ;
+(BOOL)_supportsInteractivePageControl;
+(id)_visualProviderForPageControl:(id)arg1 ;
-(long long)interactionState;
-(id)_legibilitySettings;
-(id)indicatorImageForPage:(long long)arg1 ;
-(void)setPreferredIndicatorImage:(UIImage *)arg1 ;
-(UIImage *)preferredIndicatorImage;
-(unsigned long long)_controlEventsForActionTriggered;
-(BOOL)canBecomeFocused;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(long long)_displayMode;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)numberOfPages;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setNumberOfPages:(long long)arg1 ;
-(long long)currentPage;
-(void)_setLegibilitySettings:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(void)_setFlickToEndGestureEnabled:(BOOL)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(long long)_legibilityStyle;
-(void)setCurrentPage:(long long)arg1 ;
-(BOOL)shouldTrack;
-(long long)previousPage;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(long long)backgroundStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(BOOL)hidesForSinglePage;
-(BOOL)_implementsCustomPageImagesOverride;
-(BOOL)_implementsCustomCurrentPageImagesOverride;
-(void)_setIndicatorImage:(id)arg1 ;
-(void)setHidesForSinglePage:(BOOL)arg1 ;
-(void)setDefersCurrentPageDisplay:(BOOL)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)_setDisplayMode:(long long)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(UIColor *)pageIndicatorTintColor;
-(UIColor *)currentPageIndicatorTintColor;
-(void)_invalidateIndicators;
-(void)_updateCurrentPage:(long long)arg1 updateDisplayImmediately:(BOOL)arg2 ;
-(void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)arg1 ;
-(BOOL)defersCurrentPageDisplay;
-(void)setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)_setCurrentPage:(long long)arg1 ;
-(void)updateCurrentPageDisplay;
-(BOOL)_flickToEndGestureEnabled;
-(BOOL)allowsContinuousInteraction;
-(double)_customVerticalPadding;
-(void)setAllowsContinuousInteraction:(BOOL)arg1 ;
-(void)setPreviousPage:(long long)arg1 ;
-(void)_setIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(double)_customIndicatorSpacing;
-(double)_customHorizontalPadding;
-(void)_setCustomVerticalPadding:(double)arg1 ;
-(void)_setCustomHorizontalPadding:(double)arg1 ;
-(void)_setCurrentPageImage:(id)arg1 ;
-(void)_setCustomIndicatorSpacing:(double)arg1 ;
-(void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)arg1 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)_interactionState;
-(long long)_displayedPage;
-(void)_setPageImage:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(void)dealloc;
@end

