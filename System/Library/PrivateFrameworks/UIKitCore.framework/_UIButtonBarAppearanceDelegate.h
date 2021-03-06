/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _UIBarButtonItemAppearanceStorage, UIColor;


@protocol _UIButtonBarAppearanceDelegate <NSObject,UICoordinateSpace>
@property (nonatomic,readonly) _UIBarButtonItemAppearanceStorage * appearanceStorage; 
@property (nonatomic,readonly) long long barType; 
@property (nonatomic,readonly) BOOL compactMetrics; 
@property (nonatomic,readonly) BOOL isRTL; 
@property (nonatomic,readonly) UIColor * tintColor; 
@property (nonatomic,readonly) BOOL centerTextButtons; 
@property (nonatomic,readonly) double defaultEdgeSpacing; 
@property (nonatomic,readonly) double defaultTextPadding; 
@property (nonatomic,readonly) double backButtonMargin; 
@property (nonatomic,readonly) double backButtonMaximumWidth; 
@required
-(id)backIndicatorImage;
-(unsigned long long)edgesPaddingBarButtonItem:(id)arg1;
-(id)backIndicatorMaskImage;
-(_UIBarButtonItemAppearanceStorage *)appearanceStorage;
-(long long)barType;
-(double)defaultTextPadding;
-(double)defaultEdgeSpacing;
-(BOOL)centerTextButtons;
-(BOOL)compactMetrics;
-(UIColor *)tintColor;
-(double)absorptionForItem:(id)arg1;
-(double)backButtonMaximumWidth;
-(BOOL)isRTL;
-(double)backButtonMargin;

@end

