/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMISystemResourceUsageMonitorProtocol
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
@required
-(id)getCurrentSystemResourceUsage;
-(void)start;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

