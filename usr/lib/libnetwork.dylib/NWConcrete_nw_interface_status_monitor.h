/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_nw_interface_status_monitor.h>

@protocol OS_nw_interface, OS_nw_channel, OS_dispatch_queue;
@class NSObject, NSString;

@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor> {

	NSObject*<OS_nw_interface> interface;
	NSObject*<OS_nw_channel> channel;
	/*^block*/id packet_handler;
	NSObject*<OS_dispatch_queue> packet_handler_queue;
	/*^block*/id update_handler;
	NSObject*<OS_dispatch_queue> update_handler_queue;
	void* channel_event_source;
	void* interface_advisory_source;
	unsigned cancelled : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)dealloc;
@end

