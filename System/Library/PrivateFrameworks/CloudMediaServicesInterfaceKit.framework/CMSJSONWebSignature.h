/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceKit-Structs.h>
@class NSString, NSData, NSError;

@interface CMSJSONWebSignature : NSObject {

	NSString* _keyID;
	NSData* _payload;
	NSError* _verificationError;

}

@property (nonatomic,readonly) NSString * keyID;                         //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSError * verificationError;              //@synthesize verificationError=_verificationError - In the implementation block
-(NSData *)payload;
-(NSString *)keyID;
-(NSError *)verificationError;
-(id)initWithJWSCompactEncodedString:(id)arg1 keyID:(id)arg2 publicKey:(id)arg3 ;
-(BOOL)_validateJWSProtectedHeader:(id)arg1 ;
-(SecKeyRef)_createPublicKeyFromPEM:(id)arg1 ;
-(void)_validateJWSSignature:(id)arg1 ofHeader:(id)arg2 andPayload:(id)arg3 withPublicKey:(SecKeyRef)arg4 ;
-(id)_createASN1SignatureFromJWSSignature:(id)arg1 ;
@end
