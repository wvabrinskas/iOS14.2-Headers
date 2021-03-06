/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, AVPresentationContainerViewLayer, AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerView : UIView {

	BOOL _counterRotatingContentView;
	BOOL _wantsAppearanceConfigValues;
	BOOL _beingPresented;
	BOOL _beingDismissed;
	BOOL _willBeginOrientationChange;
	UIView* _presentationContainerContentView;
	long long _fromOrientation;
	long long _toOrientation;

}

@property (nonatomic,readonly) AVPresentationContainerViewLayer * layer; 
@property (assign,getter=isCounterRotatingContentView,nonatomic) BOOL counterRotatingContentView;              //@synthesize counterRotatingContentView=_counterRotatingContentView - In the implementation block
@property (assign,getter=isBeingPresented,nonatomic) BOOL beingPresented;                                      //@synthesize beingPresented=_beingPresented - In the implementation block
@property (assign,getter=isBeingDismissed,nonatomic) BOOL beingDismissed;                                      //@synthesize beingDismissed=_beingDismissed - In the implementation block
@property (assign,nonatomic) long long fromOrientation;                                                        //@synthesize fromOrientation=_fromOrientation - In the implementation block
@property (assign,nonatomic) long long toOrientation;                                                          //@synthesize toOrientation=_toOrientation - In the implementation block
@property (assign,nonatomic) BOOL willBeginOrientationChange;                                                  //@synthesize willBeginOrientationChange=_willBeginOrientationChange - In the implementation block
@property (assign,nonatomic,__weak) UIView * presentationContainerContentView;                                 //@synthesize presentationContainerContentView=_presentationContainerContentView - In the implementation block
@property (nonatomic,readonly) AVPresentationContainerViewAppearanceProxy * appearanceProxy; 
@property (assign,nonatomic) BOOL wantsAppearanceConfigValues;                                                 //@synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues - In the implementation block
+(Class)layerClass;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(double)_cornerRadius;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
-(void)willBeginAdjustingOrientation;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1 ;
-(void)didStopTransition;
-(double)_radiansForCounterRotation;
-(void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(BOOL)arg3 ;
-(BOOL)isCounterRotatingContentView;
-(void)setCounterRotatingContentView:(BOOL)arg1 ;
-(UIView *)presentationContainerContentView;
-(void)setPresentationContainerContentView:(UIView *)arg1 ;
-(void)setBeingPresented:(BOOL)arg1 ;
-(void)setBeingDismissed:(BOOL)arg1 ;
-(BOOL)willBeginOrientationChange;
-(void)setWillBeginOrientationChange:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGAffineTransform)_contentTransform;
-(UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
-(BOOL)avkit_isVideoGravityFrozen;
-(BOOL)avkit_isCounterRotatedForTransition;
-(BOOL)avkit_isBeingDismissed;
-(BOOL)avkit_isBeingPresented;
-(void)layoutSubviews;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(long long)toOrientation;
-(long long)fromOrientation;
-(BOOL)isBeingPresented;
-(BOOL)isBeingDismissed;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setToOrientation:(long long)arg1 ;
-(void)setFromOrientation:(long long)arg1 ;
@end

