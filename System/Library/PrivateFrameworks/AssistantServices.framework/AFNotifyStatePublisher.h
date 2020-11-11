/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface AFNotifyStatePublisher : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	char* _name;
	int _registrationToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)publishState:(unsigned long long)arg1 ;
-(void)_register;
-(void)_unregister;
-(BOOL)_setState:(unsigned long long)arg1 withToken:(int)arg2 ;
-(BOOL)_getState:(unsigned long long*)arg1 withToken:(int)arg2 ;
-(void)publishStateWithBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end
