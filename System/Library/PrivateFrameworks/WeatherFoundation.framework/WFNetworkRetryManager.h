/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMutableSet, NSArray;

@interface WFNetworkRetryManager : NSObject {

	NSMutableDictionary* _failTrackerDict;
	NSMutableSet* _failingAPIVersionsSet;

}

@property (nonatomic,readonly) NSMutableDictionary * failTrackerDict;              //@synthesize failTrackerDict=_failTrackerDict - In the implementation block
@property (nonatomic,readonly) NSMutableSet * failingAPIVersionsSet;               //@synthesize failingAPIVersionsSet=_failingAPIVersionsSet - In the implementation block
@property (nonatomic,readonly) NSArray * apiVersions; 
@property (nonatomic,readonly) NSArray * failingAPIVersions; 
-(void)requestSuccessForAPIVersion:(id)arg1 ;
-(id)apiVersionForSettings:(id)arg1 ;
-(id)init;
-(int)consecutiveFailsForAPIVersion:(id)arg1 ;
-(NSMutableSet *)failingAPIVersionsSet;
-(void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2 ;
-(NSArray *)failingAPIVersions;
-(BOOL)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2 ;
-(NSArray *)apiVersions;
-(NSMutableDictionary *)failTrackerDict;
-(double)lastFailTimeInSecondsForAPIVersion:(id)arg1 ;
@end

