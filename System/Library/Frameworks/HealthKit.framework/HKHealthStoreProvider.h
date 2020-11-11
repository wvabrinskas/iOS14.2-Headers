/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol HKHealthStoreProviderProxyProvider;
@class NSString;

@interface HKHealthStoreProvider : NSObject <_HKXPCExportable> {

	id<HKHealthStoreProviderProxyProvider> _proxyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteInterface;
-(id)init;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(id)initWithProxyProvider:(id)arg1 ;
-(void)fetchStoreForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAvailableIdentifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)requestAuthorizationToNewStoreToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHealthStore:(id)arg1 ;
@end
