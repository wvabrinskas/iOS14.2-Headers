/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging> {

	os_unfair_lock_s _lock;
	BOOL _valid;
	BOOL _observing;
	/*^block*/id _handler;
	NSString* _keyPath;
	id _observedObject;
	unsigned long long _options;

}

@property (copy,readonly) NSString * keyPath;                       //@synthesize keyPath=_keyPath - In the implementation block
@property (__weak,readonly) id observedObject;                      //@synthesize observedObject=_observedObject - In the implementation block
@property (readonly) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)keyPath;
-(id)observedObject;
-(id)init;
-(unsigned long long)options;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(id)logIdentifier;
-(void)invalidate;
-(void)dealloc;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)__invalidate;
-(id)initWithKeyPath:(id)arg1 object:(id)arg2 ;
@end
