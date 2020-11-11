/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineHistogramBin : PBCodable <NSCopying> {

	unsigned _count;
	unsigned _value;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(BOOL)hasCount;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(unsigned)count;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
