/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SyncedDefaults/SyncedDefaults-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYDStoreID;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying> {

	SYDStoreID* _storeID;

}

@property (nonatomic,retain) SYDStoreID * storeID;              //@synthesize storeID=_storeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(SYDStoreID *)storeID;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStoreID:(id)arg1 ;
-(void)setStoreID:(SYDStoreID *)arg1 ;
@end

