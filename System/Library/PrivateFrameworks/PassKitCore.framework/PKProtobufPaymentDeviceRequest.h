/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface PKProtobufPaymentDeviceRequest : PBRequest <NSCopying> {

	NSString* _deviceName;
	NSMutableArray* _knownManifestHashes;
	unsigned _protocolVersion;
	BOOL _shouldAdvertise;
	SCD_Struct_PK7 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                             //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL hasShouldAdvertise; 
@property (assign,nonatomic) BOOL shouldAdvertise;                              //@synthesize shouldAdvertise=_shouldAdvertise - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownManifestHashes;              //@synthesize knownManifestHashes=_knownManifestHashes - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolVersion; 
@property (assign,nonatomic) unsigned protocolVersion;                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(Class)knownManifestHashesType;
-(void)mergeFrom:(id)arg1 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(NSString *)deviceName;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasProtocolVersion;
-(id)description;
-(void)addKnownManifestHashes:(id)arg1 ;
-(unsigned long long)knownManifestHashesCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearKnownManifestHashes;
-(id)knownManifestHashesAtIndex:(unsigned long long)arg1 ;
-(void)setShouldAdvertise:(BOOL)arg1 ;
-(BOOL)hasShouldAdvertise;
-(void)setHasShouldAdvertise:(BOOL)arg1 ;
-(BOOL)shouldAdvertise;
-(NSMutableArray *)knownManifestHashes;
-(void)setKnownManifestHashes:(NSMutableArray *)arg1 ;
-(unsigned)protocolVersion;
-(void)setHasProtocolVersion:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceName;
-(void)writeTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
