/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUUID, BlastDoorMetadata_StorageContext;

@interface BlastDoorMetadata : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSUUID * messageGUID; 
@property (readonly,nonatomic) BOOL has_timestamp; 
@property (readonly,nonatomic) unsigned long long timestamp; 
@property (readonly,nonatomic) BOOL wantsDeliveryReceipt; 
@property (readonly,nonatomic) BOOL wantsCheckpointing; 
@property (readonly,nonatomic) BlastDoorMetadata_StorageContext * storageContext; 
-(id)init;
-(NSString *)description;
-(NSUUID *)messageGUID;
-(unsigned long long)timestamp;
-(BOOL)has_timestamp;
-(BOOL)wantsDeliveryReceipt;
-(BOOL)wantsCheckpointing;
-(BlastDoorMetadata_StorageContext *)storageContext;
@end

