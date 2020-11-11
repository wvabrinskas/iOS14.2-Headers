/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPQuaternion : PBCodable <NSCopying> {

	float _w;
	float _x;
	float _y;
	float _z;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasW; 
@property (assign,w,nonatomic) float w;              //@synthesize w=_w - In the implementation block
@property (assign,x,nonatomic) float x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;              //@synthesize y=_y - In the implementation block
@property (assign,z,nonatomic) float z;              //@synthesize z=_z - In the implementation block
-(float)z;
-(void)mergeFrom:(id)arg1 ;
-(void)setY:(float)arg1 ;
-(void)setW:(float)arg1 ;
-(void)setX:(float)arg1 ;
-(float)y;
-(float)x;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)w;
-(void)setHasW:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasW;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setZ:(float)arg1 ;
@end
