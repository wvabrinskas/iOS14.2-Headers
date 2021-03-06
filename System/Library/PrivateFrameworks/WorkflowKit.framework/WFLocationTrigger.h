/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger {

	CLCircularRegion* _region;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (nonatomic,copy) CLCircularRegion * region;              //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                     //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timestampDateFormatter;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(NSDate *)endTime;
-(CLCircularRegion *)region;
-(NSDate *)startTime;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasValidConfiguration;
@end

