/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol IMMetricsControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * topic; 
@required
-(void)recordEvent:(id)arg1;
-(NSString *)topic;
-(BOOL)shouldSuppressUserInfo;
-(void)flushImmediately;
-(BOOL)shouldIgnoreDNU;

@end
