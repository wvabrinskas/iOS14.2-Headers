/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse : PKAccountWebServiceResponse {

	BOOL _devSigned;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;              //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                  //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                       //@synthesize devSigned=_devSigned - In the implementation block
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSArray *)encryptionCertificates;
-(NSString *)encryptionVersion;
@end
