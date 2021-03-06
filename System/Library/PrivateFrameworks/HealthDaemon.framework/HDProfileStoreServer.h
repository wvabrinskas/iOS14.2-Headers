/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKProfileStoreServer.h>
#import <libobjc.A.dylib/HDProfileManagerObserver.h>

@class HDProfileManager, NSString;

@interface HDProfileStoreServer : HDStandardTaskServer <HKProfileStoreServer, HDProfileManagerObserver>

@property (readonly) HDProfileManager * profileManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)remoteInterface;
-(id)exportedInterface;
-(void)remote_fetchDisplayImageData:(/*^block*/id)arg1 ;
-(void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_getAllProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchDisplayNameWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setDisplayImageData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_startObservingWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(HDProfileManager *)profileManager;
-(void)profileListDidChange;
@end

