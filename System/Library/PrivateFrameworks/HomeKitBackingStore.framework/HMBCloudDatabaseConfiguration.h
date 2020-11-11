/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKContainerID, NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _manateeContainer;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKOperationConfiguration* _defaultOperationConfiguration;
	HMFScheduler* _apsRegistrationScheduler;

}

@property (getter=isManateeContainer) BOOL manateeContainer;                            //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (copy) CKOperationConfiguration * defaultOperationConfiguration;              //@synthesize defaultOperationConfiguration=_defaultOperationConfiguration - In the implementation block
@property (copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler;                   //@synthesize apsRegistrationScheduler=_apsRegistrationScheduler - In the implementation block
@property (copy,readonly) CKContainerID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
-(id)attributeDescriptions;
-(HMFScheduler *)apsRegistrationScheduler;
-(void)setApsRegistrationScheduler:(HMFScheduler *)arg1 ;
-(BOOL)isManateeContainer;
-(CKContainerID *)containerID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContainerID:(id)arg1 ;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setManateeContainer:(BOOL)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKOperationConfiguration *)defaultOperationConfiguration;
@end
