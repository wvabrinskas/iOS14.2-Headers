/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIClickInteractionDriverDelegate.h>
#import <UIKit/UIInteraction_Private.h>
#import <UIKit/UIInteraction_Internal.h>
#import <UIKit/UIInteraction.h>

@protocol UIInteractionEffect, _UIClickInteractionDelegate, _UIClickInteractionDriving;
@class UIView, _UIClickFeedbackGenerator, NSString;

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIInteraction> {

	BOOL _hapticsEnabled;
	UIView* _view;
	id<UIInteractionEffect> _interactionEffect;
	id<_UIClickInteractionDelegate> _delegate;
	double _allowableMovement;
	id<_UIClickInteractionDriving> _driver;
	_UIClickFeedbackGenerator* _feedbackGenerator;
	Class _overrideDriverClass;

}

@property (nonatomic,retain) id<_UIClickInteractionDriving> driver;                                  //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) _UIClickFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL driverCancelsTouchesInView; 
@property (assign,setter=_setOverrideDriverClass:,nonatomic) Class overrideDriverClass;              //@synthesize overrideDriverClass=_overrideDriverClass - In the implementation block
@property (assign,nonatomic) BOOL hapticsEnabled;                                                    //@synthesize hapticsEnabled=_hapticsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_UIClickInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double allowableMovement;                                               //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<UIInteractionEffect> interactionEffect;                              //@synthesize interactionEffect=_interactionEffect - In the implementation block
@property (nonatomic,__weak,readonly) UIView * view;                                                 //@synthesize view=_view - In the implementation block
-(id<UIInteractionEffect>)interactionEffect;
-(void)_createFeedbackGenerator;
-(void)clickDriver:(id)arg1 didUpdateHighlightProgress:(double)arg2 ;
-(void)cancelInteraction;
-(void)_viewTraitCollectionDidChange:(id)arg1 ;
-(void)clickDriver:(id)arg1 shouldBegin:(/*^block*/id)arg2 ;
-(void)clickDriver:(id)arg1 didPerformEvent:(unsigned long long)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)_endInteraction;
-(double)allowableMovement;
-(void)setInteractionEffect:(id<UIInteractionEffect>)arg1 ;
-(_UIClickFeedbackGenerator *)feedbackGenerator;
-(void)didMoveToView:(id)arg1 ;
-(Class)_driverClass;
-(id)init;
-(void)setAllowableMovement:(double)arg1 ;
-(void)setFeedbackGenerator:(_UIClickFeedbackGenerator *)arg1 ;
-(id<_UIClickInteractionDelegate>)delegate;
-(UIView *)view;
-(Class)overrideDriverClass;
-(id<_UIClickInteractionDriving>)driver;
-(BOOL)hapticsEnabled;
-(void)setDriver:(id<_UIClickInteractionDriving>)arg1 ;
-(void)setDelegate:(id<_UIClickInteractionDelegate>)arg1 ;
-(void)_beginInteraction;
-(void)_updateDriver;
-(void)setDriverCancelsTouchesInView:(BOOL)arg1 ;
-(void)_setOverrideDriverClass:(Class)arg1 ;
-(BOOL)driverCancelsTouchesInView;
-(void)setHapticsEnabled:(BOOL)arg1 ;
@end

