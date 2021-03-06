/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPIEventSender : NSObject {

	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_queue> _eventSendingQueue;
	unsigned long long _senderID;

}

@property (assign,nonatomic) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setSenderID:(unsigned long long)arg1 ;
-(unsigned long long)senderID;
-(void)sendEventRepresentation:(id)arg1 ;
-(void)sendIOHIDEventRef:(IOHIDEventRef)arg1 ;
@end

