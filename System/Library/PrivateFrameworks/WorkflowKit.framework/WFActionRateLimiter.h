/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSDictionary;

@interface WFActionRateLimiter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                   //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSDictionary * attempts; 
+(id)sharedInstance;
+(void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSUserDefaults *)userDefaults;
-(id)init;
-(NSDictionary *)attempts;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)modify:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAttempts:(NSDictionary *)arg1 ;
@end

