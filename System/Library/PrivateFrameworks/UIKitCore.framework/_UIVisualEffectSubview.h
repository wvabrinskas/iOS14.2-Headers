/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIVisualEffectViewParticipating.h>

@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;
@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, UIView, NSString;

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectViewParticipating> {

	NSArray* _filters;
	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	UIView*<_UIVisualEffectViewParticipating> _containedView;
	NSArray* _viewEffects;
	id<_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor;              //@synthesize subviewMonitor=_subviewMonitor - In the implementation block
@property (assign,nonatomic) BOOL disableGroupFiltering; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView;                     //@synthesize containedView=_containedView - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                         //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContainedView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setViewEffects:(NSArray *)arg1 ;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)applyIdentityViewEffects;
-(void)applyIdentityFilterEffects;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedViewEffects;
-(void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)applyRequestedFilterEffects;
-(BOOL)disableGroupFiltering;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(NSArray *)viewEffects;
@end

