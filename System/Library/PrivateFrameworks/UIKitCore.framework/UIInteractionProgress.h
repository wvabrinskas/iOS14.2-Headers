/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	double _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	long long _atLeastTwoUpdates;
	double _percentComplete;

}

@property (nonatomic,readonly) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(void)setPercentComplete:(double)arg1 ;
-(id)init;
-(double)percentComplete;
-(id)description;
-(double)velocity;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(long long)numberOfObservers;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
-(void)endInteraction:(BOOL)arg1 ;
-(void)addProgressObserver:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
@end

