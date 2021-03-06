/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HomeUI/HomeUI-Structs.h>
@class HUVelocitySample;

@interface HUVelocitySampler : NSObject {

	HUVelocitySample* _currentSample;
	HUVelocitySample* _previousSample;

}

@property (nonatomic,retain) HUVelocitySample * currentSample;               //@synthesize currentSample=_currentSample - In the implementation block
@property (nonatomic,retain) HUVelocitySample * previousSample;              //@synthesize previousSample=_previousSample - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
-(void)reset;
-(CGVector)velocity;
-(HUVelocitySample *)currentSample;
-(void)setPreviousSample:(HUVelocitySample *)arg1 ;
-(void)setCurrentSample:(HUVelocitySample *)arg1 ;
-(HUVelocitySample *)previousSample;
-(void)addTouchSample:(CGPoint)arg1 ;
@end

