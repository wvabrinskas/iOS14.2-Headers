/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PBBProtoDeviceName : PBCodable <NSCopying> {

	NSString* _deviceName;

}

@property (nonatomic,readonly) BOOL hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)deviceName;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDeviceName;
-(void)writeTo:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
