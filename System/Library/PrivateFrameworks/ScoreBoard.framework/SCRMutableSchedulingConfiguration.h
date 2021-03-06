/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ScoreBoard/SCRSchedulingConfiguration.h>

@class NSDate;

@interface SCRMutableSchedulingConfiguration : SCRSchedulingConfiguration

@property (nonatomic,retain) NSDate * latestStartDate; 
@property (nonatomic,copy) NSDate * earliestStartDate; 
@property (assign,nonatomic) double schedulingWindow; 
@property (assign,nonatomic) BOOL wakeDeviceForDeadline; 
@property (assign,nonatomic) BOOL requiresClassAAccess; 
@property (assign,nonatomic) BOOL requiresNetworkAccess; 
-(void)setLatestStartDate:(NSDate *)arg1 ;
@end

