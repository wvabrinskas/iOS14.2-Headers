/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DeviceIdentitySignature : NSObject {

	NSString* _signature;
	NSString* _leafCertificate;
	NSString* _intermediateCertificate;

}

@property (nonatomic,copy) NSString * signature;                            //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * leafCertificate;                      //@synthesize leafCertificate=_leafCertificate - In the implementation block
@property (nonatomic,copy) NSString * intermediateCertificate;              //@synthesize intermediateCertificate=_intermediateCertificate - In the implementation block
-(NSString *)signature;
-(id)description;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)leafCertificate;
-(NSString *)intermediateCertificate;
-(void)setLeafCertificate:(NSString *)arg1 ;
-(void)setIntermediateCertificate:(NSString *)arg1 ;
@end

