/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIPinchGestureRecognizer.h>

@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {

	CGPoint _touch0InitialLocation;
	CGPoint _touch1InitialLocation;
	double _lastTransitionProgress;
	unsigned long long _transitionDirection;

}

@property (nonatomic,readonly) double transitionProgress; 
@property (nonatomic,readonly) CGSize centerOffset; 
@property (nonatomic,readonly) unsigned long long transitionDirection;              //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) BOOL transitionShouldFinish; 
-(void)setState:(long long)arg1 ;
-(CGSize)centerOffset;
-(double)transitionProgress;
-(void)reset;
-(unsigned long long)transitionDirection;
-(void)_resetTransitionState;
-(BOOL)transitionShouldFinish;
@end

