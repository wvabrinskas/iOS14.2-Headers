/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject {

	NSString* _eventNameRoot;

}

@property (nonatomic,copy,readonly) NSString * eventNameRoot;              //@synthesize eventNameRoot=_eventNameRoot - In the implementation block
+(id)sharedInstance;
-(void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(NSString *)eventNameRoot;
-(id)initWithEventNameRoot:(id)arg1 ;
-(void)_handleCallbackAtDate:(id)arg1 ;
@end
