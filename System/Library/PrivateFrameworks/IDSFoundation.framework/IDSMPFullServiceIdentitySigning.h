/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentitySigning : IDSMPIdentity

@property (nonatomic,readonly) long long identityServiceType; 
@property (nonatomic,readonly) NSString * identityServiceTypeName; 
+(id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id*)arg3 ;
+(id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicServiceIdentitySigningWithError:(id*)arg1 ;
-(long long)identityServiceType;
-(NSString *)identityServiceTypeName;
@end
