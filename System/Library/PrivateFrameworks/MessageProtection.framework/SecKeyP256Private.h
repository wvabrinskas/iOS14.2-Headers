/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PrivateKeyProtocol.h>

@class NSData, SecKeyP256Public, NSString;

@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol> {

	id _privateKey;
	NSData* _privateKeyBlob;
	SecKeyP256Public* _publicKey;

}

@property (nonatomic,readonly) id privateKey;                           //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) NSData * privateKeyBlob;                 //@synthesize privateKeyBlob=_privateKeyBlob - In the implementation block
@property (nonatomic,retain) SecKeyP256Public * publicKey;              //@synthesize publicKey=_publicKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generate;
+(id)generateWithAccessControl:(CFStringRef)arg1 ;
+(const CFStringRef)defaultProtectionClassForPlatform;
-(id)getPrivateKeyRefWithError:(id*)arg1 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(SecKeyP256Public *)publicKey;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 isRetry:(BOOL)arg3 ;
-(NSData *)privateKeyBlob;
-(id)keychainData;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 ;
-(id)privateKey;
-(void)setPublicKey:(SecKeyP256Public *)arg1 ;
@end
