/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying> {

	HDCodableCodedQuantity* _denominator;
	HDCodableCodedQuantity* _numerator;

}

@property (nonatomic,readonly) BOOL hasNumerator; 
@property (nonatomic,retain) HDCodableCodedQuantity * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,readonly) BOOL hasDenominator; 
@property (nonatomic,retain) HDCodableCodedQuantity * denominator;              //@synthesize denominator=_denominator - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(HDCodableCodedQuantity *)numerator;
-(HDCodableCodedQuantity *)denominator;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNumerator:(HDCodableCodedQuantity *)arg1 ;
-(void)setDenominator:(HDCodableCodedQuantity *)arg1 ;
-(BOOL)hasNumerator;
-(BOOL)hasDenominator;
@end
