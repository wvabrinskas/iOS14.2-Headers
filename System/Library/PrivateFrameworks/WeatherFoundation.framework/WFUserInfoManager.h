/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFUserInfoManagerDelegate, OS_dispatch_queue;
@class NSUbiquitousKeyValueStore, NSObject;

@interface WFUserInfoManager : NSObject {

	NSUbiquitousKeyValueStore* _encryptedStore;
	id<WFUserInfoManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _ubiquitousKVSCommunicationsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ubiquitousKVSCommunicationsQueue;              //@synthesize ubiquitousKVSCommunicationsQueue=_ubiquitousKVSCommunicationsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) NSUbiquitousKeyValueStore * encryptedStore;                               //@synthesize encryptedStore=_encryptedStore - In the implementation block
@property (nonatomic,retain) id<WFUserInfoManagerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(void)encryptedStoreChanged:(id)arg1 ;
-(id)init;
-(id<WFUserInfoManagerDelegate>)delegate;
-(void)synchronize;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)readUserIdentifierAndNotify;
-(NSObject*<OS_dispatch_queue>)ubiquitousKVSCommunicationsQueue;
-(void)setUbiquitousKVSCommunicationsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<WFUserInfoManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)dealloc;
-(NSUbiquitousKeyValueStore *)encryptedStore;
@end
