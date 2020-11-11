/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MessageLegacy/MessageLegacy-Structs.h>
@class MFCertificateTrustInfo, NSString, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	MFCertificateTrustInfo* _signingCertificateTrustInfo;
	MFCertificateTrustInfo* _encryptionCertificateTrustInfo;
	NSString* _sender;

}

@property (nonatomic,readonly) MFCertificateTrustInfo * signingCertificateTrustInfo;                 //@synthesize signingCertificateTrustInfo=_signingCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) MFCertificateTrustInfo * encryptionCertificateTrustInfo;              //@synthesize encryptionCertificateTrustInfo=_encryptionCertificateTrustInfo - In the implementation block
@property (nonatomic,readonly) NSString * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) MFError * error; 
-(NSString *)sender;
-(MFError *)error;
-(id)initWithSender:(id)arg1 signingTrust:(SecTrustRef)arg2 encryptionTrust:(SecTrustRef)arg3 verification:(int)arg4 ;
-(MFCertificateTrustInfo *)signingCertificateTrustInfo;
-(MFCertificateTrustInfo *)encryptionCertificateTrustInfo;
@end
