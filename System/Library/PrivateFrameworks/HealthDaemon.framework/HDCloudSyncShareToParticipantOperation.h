/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>

@class CKUserIdentityLookupInfo, NSUUID, NSString, NSNumber, HDCloudSyncZone, NSArray, HDCloudSyncShareSetupMetadata;

@interface HDCloudSyncShareToParticipantOperation : HDCloudSyncOperation {

	os_unfair_lock_s _lock;
	CKUserIdentityLookupInfo* _identityLookupInfo;
	NSUUID* _storeIdentifier;
	NSString* _ownerIdentifier;
	BOOL _requireExistingRelationship;
	NSNumber* _expectedDeviceMode;
	HDCloudSyncZone* _participantPushZone;
	NSArray* _addedParticipants;
	HDCloudSyncShareSetupMetadata* _result;

}

@property (readonly) HDCloudSyncShareSetupMetadata * result;              //@synthesize result=_result - In the implementation block
-(void)main;
-(HDCloudSyncShareSetupMetadata *)result;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 identityLookupInfo:(id)arg3 requireExistingRelationship:(BOOL)arg4 requireZoneDeviceMode:(id)arg5 ;
@end

