/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _sharingInstanceIdentifier;
	NSString* _provisioningCredentialHash;
	unsigned long long _sharingStatus;

}

@property (nonatomic,copy) NSString * sharingInstanceIdentifier;               //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningCredentialHash;              //@synthesize provisioningCredentialHash=_provisioningCredentialHash - In the implementation block
@property (assign,nonatomic) unsigned long long sharingStatus;                 //@synthesize sharingStatus=_sharingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)provisioningCredentialHash;
-(void)setProvisioningCredentialHash:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)sharingStatus;
-(BOOL)isEqualToEncryptedProvisioningTarget:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

