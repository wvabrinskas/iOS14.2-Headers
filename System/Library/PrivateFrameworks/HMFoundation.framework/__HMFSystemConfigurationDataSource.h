/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSource.h>

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource> {

	os_unfair_lock_s _lock;
	id<HMFSystemInfoNameDataSourceDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	SCDynamicStoreRef _store;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SCDynamicStoreRef store;                           //@synthesize store=_store - In the implementation block
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(NSString *)name;
-(void)setDelegate:(id<HMFSystemInfoNameDataSourceDelegate>)arg1 ;
-(SCDynamicStoreRef)store;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

