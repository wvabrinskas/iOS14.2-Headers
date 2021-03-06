/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDAppleMediaAccessoryDailySetRoomEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _currentRoom;
	NSString* _previousRoom;

}

@property (copy,readonly) NSString * currentRoom;               //@synthesize currentRoom=_currentRoom - In the implementation block
@property (copy,readonly) NSString * previousRoom;              //@synthesize previousRoom=_previousRoom - In the implementation block
+(id)uuid;
+(id)filterToAllowedRoomName:(id)arg1 ;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithCurrentRoom:(id)arg1 previousRoom:(id)arg2 ;
-(NSString *)currentRoom;
-(NSString *)previousRoom;
@end

