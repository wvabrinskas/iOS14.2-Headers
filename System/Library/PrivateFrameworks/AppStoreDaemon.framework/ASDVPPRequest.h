/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSUUID;

@interface ASDVPPRequest : NSObject <NSSecureCoding> {

	NSNumber* _accountIdentifier;
	long long _archiveType;
	NSString* _bundleIdentifier;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _itemIdentifier;
	NSUUID* _requestIdentifier;
	long long _requestType;

}

@property (copy) NSNumber * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign) long long archiveType;                           //@synthesize archiveType=_archiveType - In the implementation block
@property (copy) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSNumber * externalVersionIdentifier;              //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (copy) NSNumber * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSUUID * requestIdentifier;                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setRequestType:(long long)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSNumber *)externalVersionIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSUUID *)requestIdentifier;
-(long long)requestType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)archiveType;
-(void)setArchiveType:(long long)arg1 ;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
@end

