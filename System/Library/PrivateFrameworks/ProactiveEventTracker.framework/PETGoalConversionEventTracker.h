/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/PETEventTracker.h>

@class NSString;

@interface PETGoalConversionEventTracker : PETEventTracker {

	NSString* _opportunityEvent;
	NSString* _conversionEvent;

}

@property (nonatomic,readonly) NSString * opportunityEvent;              //@synthesize opportunityEvent=_opportunityEvent - In the implementation block
@property (nonatomic,readonly) NSString * conversionEvent;               //@synthesize conversionEvent=_conversionEvent - In the implementation block
-(void)trackGoalOpportunityEventWithPropertyValues:(id)arg1 ;
-(void)trackGoalOpportunityEventWithConversion:(BOOL)arg1 propertyValues:(id)arg2 ;
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 propertySubsets:(id)arg5 ;
-(void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4 ;
-(void)trackGoalConversionEventWithPropertyValues:(id)arg1 ;
-(NSString *)opportunityEvent;
-(id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 ;
-(NSString *)conversionEvent;
-(id)_keyMetadataForEvent:(id)arg1 ;
@end

