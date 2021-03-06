/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoginPerformanceKit.framework/LoginPerformanceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableDictionary;

@interface LPKUserSwitchEvent : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSMutableDictionary* _signposts;

}

@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * signposts;              //@synthesize signposts=_signposts - In the implementation block
-(id)init;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setSignposts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)signposts;
-(void)setStartDate:(NSDate *)arg1 ;
@end

