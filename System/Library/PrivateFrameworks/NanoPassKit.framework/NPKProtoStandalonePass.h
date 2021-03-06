/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NPKProtoStandalonePass : PBCodable <NSCopying> {

	NSString* _deviceName;
	NSData* _imageData;
	NSString* _localizedDescription;
	NSString* _localizedName;
	NSString* _organizationName;
	int _passType;
	NSString* _passTypeIdentifier;
	NSString* _serialNumber;
	NSMutableArray* _userInfos;
	BOOL _remotePass;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPassType; 
@property (assign,nonatomic) int passType;                                 //@synthesize passType=_passType - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPassTypeIdentifier; 
@property (nonatomic,retain) NSString * passTypeIdentifier;                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasImageData; 
@property (nonatomic,retain) NSData * imageData;                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedName; 
@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                  //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,retain) NSMutableArray * userInfos;                   //@synthesize userInfos=_userInfos - In the implementation block
@property (assign,nonatomic) BOOL hasRemotePass; 
@property (assign,nonatomic) BOOL remotePass;                              //@synthesize remotePass=_remotePass - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                        //@synthesize deviceName=_deviceName - In the implementation block
+(Class)userInfosType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSMutableArray *)userInfos;
-(void)setUserInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasSerialNumber;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setPassType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)organizationName;
-(NSString *)passTypeIdentifier;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)passType;
-(void)setRemotePass:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)localizedName;
-(BOOL)hasDeviceName;
-(BOOL)hasLocalizedDescription;
-(NSData *)imageData;
-(void)writeTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)hasImageData;
-(unsigned long long)userInfosCount;
-(void)clearUserInfos;
-(void)addUserInfos:(id)arg1 ;
-(id)userInfosAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPassTypeIdentifier;
-(BOOL)hasLocalizedName;
-(void)setHasPassType:(BOOL)arg1 ;
-(BOOL)hasPassType;
-(id)passTypeAsString:(int)arg1 ;
-(int)StringAsPassType:(id)arg1 ;
-(void)setHasRemotePass:(BOOL)arg1 ;
-(BOOL)hasRemotePass;
-(BOOL)remotePass;
@end

