/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPContainerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver> {

	unsigned long long _lastKnownItemCount;
	unsigned long long _minimumDeletesForDataLoss;
	double _minimumDeleteRatioForDataLoss;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _keepMetrics;
	unsigned long long _dataLossPolicyOffenses;

}

@property (assign,nonatomic) BOOL keepMetrics;                                       //@synthesize keepMetrics=_keepMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long dataLossPolicyOffenses;              //@synthesize dataLossPolicyOffenses=_dataLossPolicyOffenses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(id)init;
-(BOOL)keepMetrics;
-(unsigned long long)dataLossPolicyOffenses;
-(void)setDataLossPolicyOffenses:(unsigned long long)arg1 ;
-(id)observationQueueForContainer:(id)arg1 ;
-(void)containerWillEraseContents:(id)arg1 ;
-(void)setContainerItemCount:(unsigned long long)arg1 ;
-(void)setKeepMetrics:(BOOL)arg1 ;
@end
