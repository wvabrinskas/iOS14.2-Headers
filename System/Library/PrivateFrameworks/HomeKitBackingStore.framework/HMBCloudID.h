/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBModelObjectStorage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKContainerID, NSString, NSUUID;

@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSSecureCoding, NSCopying> {

	CKContainerID* _containerID;
	long long _scope;
	NSString* _name;
	NSUUID* _modelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKContainerID * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSUUID * modelID;                         //@synthesize modelID=_modelID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)attributeDescriptions;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 name:(id)arg3 modelID:(id)arg4 ;
-(id)initWithContainerID:(id)arg1 scope:(long long)arg2 ;
-(unsigned long long)hash;
-(id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CKContainerID *)containerID;
-(NSUUID *)modelID;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(long long)scope;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

