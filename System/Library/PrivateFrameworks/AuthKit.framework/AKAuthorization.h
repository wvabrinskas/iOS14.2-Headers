/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKCredentialRequestProtocol, AKCredential;
@interface AKAuthorization : NSObject <NSSecureCoding> {

	id<AKCredentialRequestProtocol> _authorizedRequest;
	id<AKCredential> _credential;

}

@property (nonatomic,retain) id<AKCredentialRequestProtocol> authorizedRequest;              //@synthesize authorizedRequest=_authorizedRequest - In the implementation block
@property (nonatomic,retain) id<AKCredential> credential;                                    //@synthesize credential=_credential - In the implementation block
+(BOOL)supportsSecureCoding;
-(id<AKCredential>)credential;
-(id<AKCredentialRequestProtocol>)authorizedRequest;
-(void)setAuthorizedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCredential:(id<AKCredential>)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

