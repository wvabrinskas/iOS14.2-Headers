/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFSiriUsageResultHandling.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFSiriRequestHandling.h>
#import <libobjc.A.dylib/AFSiriRequestFailureHandling.h>

@protocol OS_dispatch_queue, AFSiriTaskDelivering, AFSiriTaskmasterDelegate;
@class NSObject, NSXPCListener, NSMapTable, NSString;

@interface AFSiriTaskmaster : NSObject <AFSiriUsageResultHandling, NSXPCListenerDelegate, AFSiriRequestHandling, AFSiriRequestFailureHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskDelivering> _taskDeliverer;
	NSXPCListener* _usageResultListener;
	NSMapTable* _executorForRequest;
	id<AFSiriTaskmasterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AFSiriTaskmasterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskmasterForUIApplicationWithBundleIdentifier:(id)arg1 ;
+(id)taskmasterForMachServiceWithName:(id)arg1 ;
+(id)taskmasterForMachServiceForAppWithBundleIdentifier:(id)arg1 ;
-(id<AFSiriTaskmasterDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDelegate:(id<AFSiriTaskmasterDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithTaskDeliverer:(id)arg1 ;
-(void)_handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)handleSiriTaskUsageResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3 ;
-(void)handleSiriRequest:(id)arg1 deliveryHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

