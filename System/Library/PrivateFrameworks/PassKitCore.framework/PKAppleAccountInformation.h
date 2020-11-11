/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSandboxAccount;
	NSString* _aidaAlternateDSID;
	NSString* _aidaToken;
	NSString* _aaDSID;
	NSString* _aaAlternateDSID;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmailAddress;

}

@property (nonatomic,copy) NSString * aidaAlternateDSID;                //@synthesize aidaAlternateDSID=_aidaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * aidaToken;                        //@synthesize aidaToken=_aidaToken - In the implementation block
@property (nonatomic,copy) NSString * aaDSID;                           //@synthesize aaDSID=_aaDSID - In the implementation block
@property (nonatomic,copy) NSString * aaAlternateDSID;                  //@synthesize aaAlternateDSID=_aaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                          //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) BOOL isSandboxAccount;                     //@synthesize isSandboxAccount=_isSandboxAccount - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;              //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)firstName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)lastName;
-(NSString *)aaAlternateDSID;
-(NSString *)aidaToken;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)aidaAccountAvailable;
-(void)setAidaToken:(NSString *)arg1 ;
-(void)setAaAlternateDSID:(NSString *)arg1 ;
-(id)primaryAppleAccountHash;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)aidaAlternateDSID;
-(void)setAaDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
-(NSString *)aaDSID;
-(NSString *)primaryEmailAddress;
-(void)setAidaAlternateDSID:(NSString *)arg1 ;
-(BOOL)isSandboxAccount;
-(id)authorizationHeader;
-(void)setIsSandboxAccount:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
