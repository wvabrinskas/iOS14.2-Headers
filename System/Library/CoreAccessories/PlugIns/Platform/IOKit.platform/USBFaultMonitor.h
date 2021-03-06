/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IOKit/IOKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface USBFaultMonitor : NSObject {

	NSMutableDictionary* _usbFaultStates;
	NSMutableDictionary* _usbFaultStatesSent;
	NSMutableDictionary* _requestedUSBFaultNotifications;
	IONotificationPortRef _ioUSBCardReaderNotifyPort;
	unsigned _ioUSBCardReaderNotification;
	unsigned _ioUSBCardReaderService;
	unsigned _ioUSBCardReaderMatchIterator;
	unsigned _ioUSBCardReaderTerminateIterator;
	unsigned long long _uid;
	NSMutableArray* _registeredUUIDs;

}
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)startFaultMonitoringForUUID:(id)arg1 ;
-(void)stopFaultMonitoringForUUID:(id)arg1 ;
-(BOOL)getFaultState:(int)arg1 ;
-(void)registerFaultInterest:(int)arg1 ;
-(void)initFaultConditionNotifications;
-(void)setFaultState:(int)arg1 flag:(BOOL)arg2 ;
-(void)sendUSBFaultNotification;
-(void)checkUSBCardReaderProperty:(unsigned)arg1 ;
@end

