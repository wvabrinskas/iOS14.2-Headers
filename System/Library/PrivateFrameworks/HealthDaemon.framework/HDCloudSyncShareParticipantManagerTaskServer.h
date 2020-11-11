/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKCloudSyncShareParticipantManagerServerInterface.h>

@class NSString;

@interface HDCloudSyncShareParticipantManagerTaskServer : HDStandardTaskServer <HKCloudSyncShareParticipantManagerServerInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
+(BOOL)validateClient:(id)arg1 error:(id*)arg2 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)remote_fetchSharingParticipantStatus:(/*^block*/id)arg1 ;
-(void)remote_fetchAllShareParticipantEmailAddressesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_revokeAccessForAllShareParticipantsWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_tearDownHealthSharingForProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
