/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface WLSourceDevice : NSObject <NSSecureCoding> {

	BOOL _isLocal;
	BOOL _supportsFileLength;
	unsigned short _socketPort;
	unsigned short _httpPort;
	NSString* _ipAddress;
	NSString* _persistentIdentifier;
	NSString* _name;
	NSString* _osAPIVersion;
	NSString* _hardwareBrand;
	NSString* _hardwareModel;
	NSString* _hardwareDesign;
	NSString* _hardwareMaker;
	NSString* _hardwareProduct;
	NSArray* _specifiers;

}

@property (nonatomic,copy) NSString * ipAddress;                         //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) unsigned short socketPort;                  //@synthesize socketPort=_socketPort - In the implementation block
@property (assign,nonatomic) unsigned short httpPort;                    //@synthesize httpPort=_httpPort - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                               //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * osAPIVersion;                      //@synthesize osAPIVersion=_osAPIVersion - In the implementation block
@property (nonatomic,copy) NSString * hardwareBrand;                     //@synthesize hardwareBrand=_hardwareBrand - In the implementation block
@property (nonatomic,copy) NSString * hardwareModel;                     //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,copy) NSString * hardwareDesign;                    //@synthesize hardwareDesign=_hardwareDesign - In the implementation block
@property (nonatomic,copy) NSString * hardwareMaker;                     //@synthesize hardwareMaker=_hardwareMaker - In the implementation block
@property (nonatomic,copy) NSString * hardwareProduct;                   //@synthesize hardwareProduct=_hardwareProduct - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                         //@synthesize specifiers=_specifiers - In the implementation block
@property (assign,nonatomic) BOOL supportsFileLength;                    //@synthesize supportsFileLength=_supportsFileLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)specifiers;
-(BOOL)isLocal;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHardwareModel:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(NSString *)hardwareModel;
-(id)initWithCoder:(id)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned short)socketPort;
-(void)setSocketPort:(unsigned short)arg1 ;
-(unsigned short)httpPort;
-(void)setHttpPort:(unsigned short)arg1 ;
-(NSString *)osAPIVersion;
-(void)setOsAPIVersion:(NSString *)arg1 ;
-(NSString *)hardwareBrand;
-(void)setHardwareBrand:(NSString *)arg1 ;
-(NSString *)hardwareDesign;
-(void)setHardwareDesign:(NSString *)arg1 ;
-(NSString *)hardwareMaker;
-(void)setHardwareMaker:(NSString *)arg1 ;
-(NSString *)hardwareProduct;
-(void)setHardwareProduct:(NSString *)arg1 ;
-(BOOL)supportsFileLength;
-(void)setSupportsFileLength:(BOOL)arg1 ;
@end
