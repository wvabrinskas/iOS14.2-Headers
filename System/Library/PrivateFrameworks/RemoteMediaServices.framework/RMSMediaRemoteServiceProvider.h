/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RMSServiceProvider.h>

@protocol RMSServiceProviderDelegate;
@class NSMapTable, NSString;

@interface RMSMediaRemoteServiceProvider : NSObject <RMSServiceProvider> {

	void* _televisionController;
	NSMapTable* _services;
	id<RMSServiceProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)endDiscovery;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)beginDiscovery;
-(void)dealloc;
-(void)_didDiscoverTelevision:(void*)arg1 ;
-(void)_didRemoveTelevision:(void*)arg1 ;
-(id)_serviceWithTelevision:(void*)arg1 ;
@end

