/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIBackdropViewObserver, _UIBackdropViewGraphicsQualityChangeDelegate;
@class NSHashTable, _UIBackdropViewSettings, _UIBackdropEffectView, NSString, UIImage, UIView, CAFilter, NSMutableSet, NSMutableDictionary, UIColor;

@interface _UIBackdropView : UIView {

	double _cornerRadius;
	BOOL _cornerRadiusIsContinuous;
	BOOL _autosizesToFitSuperview;
	BOOL _computesColorSettings;
	BOOL _appliesOutputSettingsAutomatically;
	BOOL _applySaturationBeforeBlur;
	BOOL _appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
	BOOL _applyingBackdropChanges;
	BOOL _applyingTransition;
	BOOL _requiresTintViews;
	BOOL _blursBackground;
	BOOL _allowsColorSettingsSuppression;
	BOOL _autoGroup;
	BOOL _contentViewAccessed;
	BOOL _contentViewAccessorGuard;
	BOOL _applySettingsAfterLayout;
	BOOL _updateMaskViewsForViewReentrancyGuard;
	BOOL _simulatesMasks;
	BOOL _backdropVisibilitySetOnce;
	BOOL _blurRadiusSetOnce;
	BOOL _transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;
	BOOL __backdropVisible;
	long long _style;
	NSHashTable* _observers;
	id<_UIBackdropViewObserver> _observer;
	double _appliesOutputSettingsAnimationDuration;
	_UIBackdropViewSettings* _inputSettings;
	_UIBackdropViewSettings* _outputSettings;
	_UIBackdropViewSettings* _savedInputSettingsDuringRenderInContext;
	long long _configuration;
	_UIBackdropEffectView* _backdropEffectView;
	NSString* _groupName;
	UIImage* _filterMaskImage;
	UIView* _grayscaleTintView;
	UIImage* _grayscaleTintMaskImage;
	UIView* _colorTintView;
	UIImage* _colorTintMaskImage;
	UIView* _colorBurnTintView;
	UIImage* _colorBurnTintMaskImage;
	CAFilter* _gaussianBlurFilter;
	CAFilter* _colorSaturateFilter;
	CAFilter* _tintFilter;
	CAFilter* _colorOffsetFilter;
	UIView* _contentView;
	UIView* _darkeningTintView;
	UIImage* _darkeningTintMaskImage;
	long long _maskMode;
	NSMutableSet* _partialMaskViews;
	UIView* _grayscaleTintMaskViewContainer;
	NSMutableDictionary* _grayscaleTintMaskViewMap;
	UIView* _colorTintMaskViewContainer;
	NSMutableDictionary* _colorTintMaskViewMap;
	UIView* _colorBurnTintMaskViewContainer;
	NSMutableDictionary* _colorBurnTintMaskViewMap;
	UIView* _darkeningTintMaskViewContainer;
	NSMutableDictionary* _darkeningTintMaskViewMap;
	UIView* _filterMaskViewContainer;
	NSMutableDictionary* _filterMaskViewMap;
	id _computeAndApplySettingsNotificationObserver;
	double _colorMatrixGrayscaleTintLevel;
	double _colorMatrixGrayscaleTintAlpha;
	UIColor* _colorMatrixColorTint;
	double _colorMatrixColorTintAlpha;
	double _previousBackdropStatisticsRed;
	double _previousBackdropStatisticsGreen;
	double _previousBackdropStatisticsBlue;
	double _previousBackdropStatisticsContrast;
	id<_UIBackdropViewGraphicsQualityChangeDelegate> _graphicsQualityChangeDelegate;
	NSString* __blurQuality;
	double __blurRadius;
	double __saturationDeltaFactor;

}

@property (assign,nonatomic) long long style;                                                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                     //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewObserver> observer;                                                        //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL computesColorSettings;                                                                  //@synthesize computesColorSettings=_computesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomatically;                                                     //@synthesize appliesOutputSettingsAutomatically=_appliesOutputSettingsAutomatically - In the implementation block
@property (assign,nonatomic) double appliesOutputSettingsAnimationDuration;                                               //@synthesize appliesOutputSettingsAnimationDuration=_appliesOutputSettingsAnimationDuration - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettings;                                                     //@synthesize inputSettings=_inputSettings - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettings;                                                    //@synthesize outputSettings=_outputSettings - In the implementation block
@property (assign,nonatomic) BOOL applySaturationBeforeBlur;                                                              //@synthesize applySaturationBeforeBlur=_applySaturationBeforeBlur - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;                           //@synthesize savedInputSettingsDuringRenderInContext=_savedInputSettingsDuringRenderInContext - In the implementation block
@property (nonatomic,readonly) UIView * effectView; 
@property (assign,nonatomic) long long configuration;                                                                     //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) BOOL autosizesToFitSuperview;                                                                //@synthesize autosizesToFitSuperview=_autosizesToFitSuperview - In the implementation block
@property (assign,nonatomic) BOOL appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;                         //@synthesize appliesOutputSettingsAutomaticallyEnabledComputesColorSettings=_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings - In the implementation block
@property (assign,nonatomic) BOOL applyingBackdropChanges;                                                                //@synthesize applyingBackdropChanges=_applyingBackdropChanges - In the implementation block
@property (assign,nonatomic) BOOL applyingTransition;                                                                     //@synthesize applyingTransition=_applyingTransition - In the implementation block
@property (assign,nonatomic) BOOL requiresTintViews;                                                                      //@synthesize requiresTintViews=_requiresTintViews - In the implementation block
@property (assign,nonatomic) BOOL blursBackground;                                                                        //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL allowsColorSettingsSuppression;                                                         //@synthesize allowsColorSettingsSuppression=_allowsColorSettingsSuppression - In the implementation block
@property (nonatomic,retain) _UIBackdropEffectView * backdropEffectView;                                                  //@synthesize backdropEffectView=_backdropEffectView - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                                                          //@synthesize groupName=_groupName - In the implementation block
@property (assign,nonatomic) BOOL autoGroup;                                                                              //@synthesize autoGroup=_autoGroup - In the implementation block
@property (nonatomic,retain) UIImage * filterMaskImage;                                                                   //@synthesize filterMaskImage=_filterMaskImage - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintView;                                                                  //@synthesize grayscaleTintView=_grayscaleTintView - In the implementation block
@property (nonatomic,retain) UIImage * grayscaleTintMaskImage;                                                            //@synthesize grayscaleTintMaskImage=_grayscaleTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorTintView;                                                                      //@synthesize colorTintView=_colorTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorTintMaskImage;                                                                //@synthesize colorTintMaskImage=_colorTintMaskImage - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintView;                                                                  //@synthesize colorBurnTintView=_colorBurnTintView - In the implementation block
@property (nonatomic,retain) UIImage * colorBurnTintMaskImage;                                                            //@synthesize colorBurnTintMaskImage=_colorBurnTintMaskImage - In the implementation block
@property (nonatomic,retain) CAFilter * gaussianBlurFilter;                                                               //@synthesize gaussianBlurFilter=_gaussianBlurFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorSaturateFilter;                                                              //@synthesize colorSaturateFilter=_colorSaturateFilter - In the implementation block
@property (nonatomic,retain) CAFilter * tintFilter;                                                                       //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,retain) CAFilter * colorOffsetFilter;                                                                //@synthesize colorOffsetFilter=_colorOffsetFilter - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintView;                                                                  //@synthesize darkeningTintView=_darkeningTintView - In the implementation block
@property (nonatomic,retain) UIImage * darkeningTintMaskImage;                                                            //@synthesize darkeningTintMaskImage=_darkeningTintMaskImage - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessed;                                                                    //@synthesize contentViewAccessed=_contentViewAccessed - In the implementation block
@property (assign,nonatomic) BOOL contentViewAccessorGuard;                                                               //@synthesize contentViewAccessorGuard=_contentViewAccessorGuard - In the implementation block
@property (assign,nonatomic) long long maskMode;                                                                          //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,retain) NSMutableSet * partialMaskViews;                                                             //@synthesize partialMaskViews=_partialMaskViews - In the implementation block
@property (nonatomic,retain) UIView * grayscaleTintMaskViewContainer;                                                     //@synthesize grayscaleTintMaskViewContainer=_grayscaleTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * grayscaleTintMaskViewMap;                                              //@synthesize grayscaleTintMaskViewMap=_grayscaleTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorTintMaskViewContainer;                                                         //@synthesize colorTintMaskViewContainer=_colorTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorTintMaskViewMap;                                                  //@synthesize colorTintMaskViewMap=_colorTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * colorBurnTintMaskViewContainer;                                                     //@synthesize colorBurnTintMaskViewContainer=_colorBurnTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colorBurnTintMaskViewMap;                                              //@synthesize colorBurnTintMaskViewMap=_colorBurnTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * darkeningTintMaskViewContainer;                                                     //@synthesize darkeningTintMaskViewContainer=_darkeningTintMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * darkeningTintMaskViewMap;                                              //@synthesize darkeningTintMaskViewMap=_darkeningTintMaskViewMap - In the implementation block
@property (nonatomic,retain) UIView * filterMaskViewContainer;                                                            //@synthesize filterMaskViewContainer=_filterMaskViewContainer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterMaskViewMap;                                                     //@synthesize filterMaskViewMap=_filterMaskViewMap - In the implementation block
@property (assign,nonatomic) BOOL applySettingsAfterLayout;                                                               //@synthesize applySettingsAfterLayout=_applySettingsAfterLayout - In the implementation block
@property (nonatomic,retain) id computeAndApplySettingsNotificationObserver;                                              //@synthesize computeAndApplySettingsNotificationObserver=_computeAndApplySettingsNotificationObserver - In the implementation block
@property (assign,nonatomic) BOOL updateMaskViewsForViewReentrancyGuard;                                                  //@synthesize updateMaskViewsForViewReentrancyGuard=_updateMaskViewsForViewReentrancyGuard - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintLevel;                                                        //@synthesize colorMatrixGrayscaleTintLevel=_colorMatrixGrayscaleTintLevel - In the implementation block
@property (assign,nonatomic) double colorMatrixGrayscaleTintAlpha;                                                        //@synthesize colorMatrixGrayscaleTintAlpha=_colorMatrixGrayscaleTintAlpha - In the implementation block
@property (nonatomic,retain) UIColor * colorMatrixColorTint;                                                              //@synthesize colorMatrixColorTint=_colorMatrixColorTint - In the implementation block
@property (assign,nonatomic) double colorMatrixColorTintAlpha;                                                            //@synthesize colorMatrixColorTintAlpha=_colorMatrixColorTintAlpha - In the implementation block
@property (assign,nonatomic) BOOL simulatesMasks;                                                                         //@synthesize simulatesMasks=_simulatesMasks - In the implementation block
@property (assign,nonatomic) BOOL backdropVisibilitySetOnce;                                                              //@synthesize backdropVisibilitySetOnce=_backdropVisibilitySetOnce - In the implementation block
@property (assign,nonatomic) BOOL blurRadiusSetOnce;                                                                      //@synthesize blurRadiusSetOnce=_blurRadiusSetOnce - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsRed;                                                        //@synthesize previousBackdropStatisticsRed=_previousBackdropStatisticsRed - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsGreen;                                                      //@synthesize previousBackdropStatisticsGreen=_previousBackdropStatisticsGreen - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsBlue;                                                       //@synthesize previousBackdropStatisticsBlue=_previousBackdropStatisticsBlue - In the implementation block
@property (assign,nonatomic) double previousBackdropStatisticsContrast;                                                   //@synthesize previousBackdropStatisticsContrast=_previousBackdropStatisticsContrast - In the implementation block
@property (assign,nonatomic) id<_UIBackdropViewGraphicsQualityChangeDelegate> graphicsQualityChangeDelegate;              //@synthesize graphicsQualityChangeDelegate=_graphicsQualityChangeDelegate - In the implementation block
@property (assign,nonatomic) BOOL transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;                        //@synthesize transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack=_transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack - In the implementation block
@property (nonatomic,copy) NSString * _blurQuality;                                                                       //@synthesize _blurQuality=__blurQuality - In the implementation block
@property (assign,nonatomic) double _blurRadius;                                                                          //@synthesize _blurRadius=__blurRadius - In the implementation block
@property (assign,nonatomic) double _saturationDeltaFactor;                                                               //@synthesize _saturationDeltaFactor=__saturationDeltaFactor - In the implementation block
@property (assign,nonatomic) BOOL _backdropVisible;                                                                       //@synthesize _backdropVisible=__backdropVisible - In the implementation block
+(Class)layerClass;
+(void)setAllBackdropViewsToGraphicsQuality:(long long)arg1 ;
+(void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1 ;
+(void)suppressColorSettingsForRequester:(id)arg1 ;
+(id)allBackdropViews;
+(Class)defaultSettingsClass;
+(void)restoreColorSettingsForRequester:(id)arg1 ;
-(void)setDarkeningTintMaskViewContainer:(UIView *)arg1 ;
-(BOOL)blurRadiusSetOnce;
-(void)setColorTintMaskImage:(UIImage *)arg1 ;
-(CAFilter *)colorSaturateFilter;
-(BOOL)contentViewAccessorGuard;
-(UIView *)grayscaleTintView;
-(void)updateMaskViewsForView:(id)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(double)colorMatrixGrayscaleTintLevel;
-(void)setGrayscaleTintMaskImage:(UIImage *)arg1 ;
-(void)setTintOpacity:(double)arg1 ;
-(void)setAllowsColorSettingsSuppression:(BOOL)arg1 ;
-(UIView *)darkeningTintMaskViewContainer;
-(double)previousBackdropStatisticsBlue;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(double)previousBackdropStatisticsRed;
-(NSString *)groupName;
-(void)ensureProperSubviewOrdering;
-(void)addDarkeningTintViewIfNeededForSettings:(id)arg1 ;
-(void)setPreviousBackdropStatisticsGreen:(double)arg1 ;
-(CAFilter *)colorOffsetFilter;
-(BOOL)applyingBackdropChanges;
-(void)setDarkeningTintMaskImage:(UIImage *)arg1 ;
-(UIView *)effectView;
-(void)setColorTintMaskViewContainer:(UIView *)arg1 ;
-(BOOL)_backdropVisible;
-(void)addColorBurnTintViewIfNeededForSettings:(id)arg1 ;
-(void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2 ;
-(void)setTintFilterForSettings:(id)arg1 ;
-(BOOL)transitioningBetweenMaterialsRequiringRasterizationAndAlphaHack;
-(void)prepareForTransitionToSettings:(id)arg1 ;
-(NSMutableSet *)partialMaskViews;
-(id)initWithFrame:(CGRect)arg1 autosizesToFitSuperview:(BOOL)arg2 settings:(id)arg3 ;
-(void)set_blurQuality:(NSString *)arg1 ;
-(BOOL)appliesOutputSettingsAutomatically;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(double)_blurRadius;
-(void)setComputeAndApplySettingsNotificationObserver:(id)arg1 ;
-(BOOL)isBackdropVisible;
-(UIColor *)colorMatrixColorTint;
-(void)setRequiresTintViews:(BOOL)arg1 ;
-(BOOL)autosizesToFitSuperview;
-(void)settingsDidChange:(id)arg1 ;
-(void)setColorSaturateFilter:(CAFilter *)arg1 ;
-(void)applyOverlayBlendModeToView:(id)arg1 ;
-(void)transitionComplete;
-(void)setGrayscaleTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)set_blurRadius:(double)arg1 ;
-(void)removeMaskViews;
-(double)colorMatrixGrayscaleTintAlpha;
-(void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)filters;
-(UIImage *)darkeningTintMaskImage;
-(void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(BOOL)arg1 ;
-(BOOL)disablesOccludedBackdropBlurs;
-(void)set_saturationDeltaFactor:(double)arg1 ;
-(void)setGraphicsQualityChangeDelegate:(id<_UIBackdropViewGraphicsQualityChangeDelegate>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
-(void)setMaskMode:(long long)arg1 ;
-(double)appliesOutputSettingsAnimationDuration;
-(NSString *)_blurQuality;
-(void)updateMaskViewForView:(id)arg1 flag:(long long)arg2 ;
-(double)saturationDeltaFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)colorTintMaskImage;
-(void)setTransitioningBetweenMaterialsRequiringRasterizationAndAlphaHack:(BOOL)arg1 ;
-(double)colorMatrixColorTintAlpha;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(void)setDarkeningTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(BOOL)autoGroup;
-(UIView *)colorTintMaskViewContainer;
-(_UIBackdropEffectView *)backdropEffectView;
-(id)initWithPrivateStyle:(long long)arg1 ;
-(void)setSavedInputSettingsDuringRenderInContext:(_UIBackdropViewSettings *)arg1 ;
-(void)setShouldRasterizeEffectsView:(BOOL)arg1 ;
-(double)blurRadius;
-(BOOL)computesColorSettings;
-(void)setGrayscaleTintMaskViewContainer:(UIView *)arg1 ;
-(id)blurQuality;
-(id)init;
-(void)setAppliesOutputSettingsAutomatically:(BOOL)arg1 ;
-(void)setAutoGroup:(BOOL)arg1 ;
-(NSMutableDictionary *)darkeningTintMaskViewMap;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)setBlurRadiusSetOnce:(BOOL)arg1 ;
-(void)addContentViewIfNeededForSettings:(id)arg1 ;
-(void)_updateFilters;
-(void)setBackdropEffectView:(_UIBackdropEffectView *)arg1 ;
-(void)setContentViewAccessed:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)computeAndApplySettingsForTransition;
-(void)transitionToStyle:(long long)arg1 ;
-(BOOL)applySettingsAfterLayout;
-(BOOL)blursBackground;
-(void)_transitionToGraphicsQuality:(long long)arg1 ;
-(void)setApplyingBackdropChanges:(BOOL)arg1 ;
-(void)setBackdropVisibilitySetOnce:(BOOL)arg1 ;
-(UIView *)colorTintView;
-(CAFilter *)gaussianBlurFilter;
-(void)setColorTintView:(UIView *)arg1 ;
-(void)setColorMatrixColorTintAlpha:(double)arg1 ;
-(void)setGrayscaleTintView:(UIView *)arg1 ;
-(void)setColorOffsetFilterForSettings:(id)arg1 ;
-(void)updateSubviewHierarchyIfNeededForSettings:(id)arg1 ;
-(void)setBlurQuality:(id)arg1 ;
-(void)setSaturationDeltaFactor:(double)arg1 ;
-(void)setPartialMaskViews:(NSMutableSet *)arg1 ;
-(void)setPreviousBackdropStatisticsRed:(double)arg1 ;
-(void)_setBlursBackground:(BOOL)arg1 ;
-(BOOL)applySaturationBeforeBlur;
-(double)_continuousCornerRadius;
-(void)setColorBurnTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(id)computeAndApplySettingsNotificationObserver;
-(void)setObserver:(id<_UIBackdropViewObserver>)arg1 ;
-(_UIBackdropViewSettings *)inputSettings;
-(void)setGaussianBlurFilter:(CAFilter *)arg1 ;
-(void)setUpdateMaskViewsForViewReentrancyGuard:(BOOL)arg1 ;
-(NSHashTable *)observers;
-(void)addColorTintViewIfNeededForSettings:(id)arg1 ;
-(void)setColorBurnTintMaskViewContainer:(UIView *)arg1 ;
-(void)setApplyingTransition:(BOOL)arg1 ;
-(UIImage *)grayscaleTintMaskImage;
-(double)previousBackdropStatisticsContrast;
-(void)setPreviousBackdropStatisticsBlue:(double)arg1 ;
-(double)_cornerRadius;
-(void)setDarkeningTintView:(UIView *)arg1 ;
-(BOOL)applyingTransition;
-(_UIBackdropViewSettings *)outputSettings;
-(void)setPreviousBackdropStatisticsContrast:(double)arg1 ;
-(void)set_backdropVisible:(BOOL)arg1 ;
-(void)setColorBurnTintMaskImage:(UIImage *)arg1 ;
-(BOOL)simulatesMasks;
-(NSMutableDictionary *)colorTintMaskViewMap;
-(id)backdropViewLayer;
-(void)setComputesColorSettings:(BOOL)arg1 ;
-(void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2 ;
-(void)setMaskImage:(id)arg1 onLayer:(id)arg2 ;
-(void)setFilterMaskViewMap:(NSMutableDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 settings:(id)arg2 ;
-(double)previousBackdropStatisticsGreen;
-(BOOL)allowsColorSettingsSuppression;
-(UIView *)darkeningTintView;
-(UIView *)grayscaleTintMaskViewContainer;
-(void)setColorMatrixColorTint:(UIColor *)arg1 ;
-(UIView *)colorBurnTintView;
-(void)transitionToSettings:(id)arg1 ;
-(void)setApplySaturationBeforeBlur:(BOOL)arg1 ;
-(long long)maskMode;
-(void)setUsesZoom;
-(void)transitionToColor:(id)arg1 ;
-(void)adjustTintImplementationIfNeeded:(id)arg1 ;
-(void)addGrayscaleTintViewIfNeededForSettings:(id)arg1 ;
-(void)setColorMatrixGrayscaleTintLevel:(double)arg1 ;
-(void)setColorMatrixGrayscaleTintAlpha:(double)arg1 ;
-(BOOL)contentViewAccessed;
-(UIImage *)colorBurnTintMaskImage;
-(void)setFilterMaskViewContainer:(UIView *)arg1 ;
-(void)applySettingsWithBuiltInAnimation:(id)arg1 ;
-(void)setInputSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setTintFilter:(CAFilter *)arg1 ;
-(NSMutableDictionary *)colorBurnTintMaskViewMap;
-(void)setSimulatesMasks:(BOOL)arg1 ;
-(void)setColorTintMaskViewMap:(NSMutableDictionary *)arg1 ;
-(void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2 ;
-(id<_UIBackdropViewGraphicsQualityChangeDelegate>)graphicsQualityChangeDelegate;
-(void)addBackdropEffectViewIfNeededForSettings:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_applyCornerRadiusToSubviews;
-(void)setApplySettingsAfterLayout:(BOOL)arg1 ;
-(void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 ;
-(void)transitionToPrivateStyle:(long long)arg1 ;
-(void)removeOverlayBlendModeFromView:(id)arg1 ;
-(NSMutableDictionary *)grayscaleTintMaskViewMap;
-(double)_saturationDeltaFactor;
-(void)setColorOffsetFilter:(CAFilter *)arg1 ;
-(BOOL)backdropVisibilitySetOnce;
-(UIImage *)filterMaskImage;
-(void)setAppliesOutputSettingsAnimationDuration:(double)arg1 ;
-(void)setColorBurnTintView:(UIView *)arg1 ;
-(_UIBackdropViewSettings *)savedInputSettingsDuringRenderInContext;
-(void)setBlursBackground:(BOOL)arg1 ;
-(void)setOutputSettings:(_UIBackdropViewSettings *)arg1 ;
-(BOOL)updateMaskViewsForViewReentrancyGuard;
-(BOOL)requiresTintViews;
-(CAFilter *)tintFilter;
-(void)setAutosizesToFitSuperview:(BOOL)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(NSMutableDictionary *)filterMaskViewMap;
-(void)setContentViewAccessorGuard:(BOOL)arg1 ;
-(UIView *)colorBurnTintMaskViewContainer;
-(void)_updateBackdropGroupName;
-(void)setBackdropVisible:(BOOL)arg1 ;
-(void)setFilterMaskImage:(UIImage *)arg1 ;
-(UIView *)filterMaskViewContainer;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)applySettings:(id)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)didMoveToSuperview;
-(void)addObserver:(id)arg1 ;
-(long long)style;
-(void)_setCornerRadius:(double)arg1 ;
-(id<_UIBackdropViewObserver>)observer;
-(UIView *)contentView;
-(void)setConfiguration:(long long)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)configuration;
-(void)dealloc;
@end

