/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewImplicitlyAnimating.h>

@class NSArray, NSString;

@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating> {

	NSArray* _trackingAnimators;

}

@property (nonatomic,readonly) NSArray * trackingAnimators;                //@synthesize trackingAnimators=_trackingAnimators - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (assign,getter=isReversed,nonatomic) BOOL reversed; 
@property (assign,nonatomic) double fractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopAnimation:(BOOL)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(void)setReversed:(BOOL)arg1 ;
-(BOOL)isReversed;
-(void)pauseAnimation;
-(void)setFractionComplete:(double)arg1 ;
-(double)fractionComplete;
-(void)finishAnimationAtPosition:(long long)arg1 ;
-(id)initWithAnimators:(id)arg1 ;
-(void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2 ;
-(void)startAnimation;
-(void)startAnimationAfterDelay:(double)arg1 ;
-(long long)state;
-(BOOL)isRunning;
-(NSArray *)trackingAnimators;
@end
