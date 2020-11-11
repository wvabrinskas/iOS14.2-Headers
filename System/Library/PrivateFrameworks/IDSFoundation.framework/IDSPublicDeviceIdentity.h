/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENDevicePublicKey.h>

@class IDSMPPublicLegacyIdentity, IDSMPPublicDeviceIdentity, IDSPublicAccountIdentity, NSString;

@interface IDSPublicDeviceIdentity : NSObject <ENDevicePublicKey> {

	IDSMPPublicLegacyIdentity* _legacyIdentity;
	IDSMPPublicDeviceIdentity* _modernIdentity;
	IDSPublicAccountIdentity* _accountIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * legacyIdentity;              //@synthesize legacyIdentity=_legacyIdentity - In the implementation block
@property (nonatomic,readonly) IDSMPPublicDeviceIdentity * modernIdentity;              //@synthesize modernIdentity=_modernIdentity - In the implementation block
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountIdentity;              //@synthesize accountIdentity=_accountIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(IDSMPPublicLegacyIdentity *)legacyIdentity;
-(id)initWithPublicLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3 ;
-(IDSMPPublicDeviceIdentity *)modernIdentity;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IDSPublicAccountIdentity *)accountIdentity;
@end
