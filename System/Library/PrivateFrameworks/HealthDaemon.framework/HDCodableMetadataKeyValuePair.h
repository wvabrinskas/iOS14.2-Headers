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

@class NSData, NSString, HDCodableQuantity;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {

	double _dateValue;
	double _numberDoubleValue;
	long long _numberIntValue;
	NSData* _dataValue;
	NSString* _key;
	HDCodableQuantity* _quantityValue;
	NSString* _stringValue;
	SCD_Struct_HD12 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                         //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) BOOL hasDateValue; 
@property (assign,nonatomic) double dateValue;                               //@synthesize dateValue=_dateValue - In the implementation block
@property (assign,nonatomic) BOOL hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;                       //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) BOOL hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;                       //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasQuantityValue; 
@property (nonatomic,retain) HDCodableQuantity * quantityValue;              //@synthesize quantityValue=_quantityValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                             //@synthesize dataValue=_dataValue - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(double)dateValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)key;
-(BOOL)hasStringValue;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(void)setDataValue:(NSData *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(NSData *)dataValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDataValue;
-(void)setDateValue:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(HDCodableQuantity *)quantityValue;
-(void)setQuantityValue:(HDCodableQuantity *)arg1 ;
-(BOOL)hasDateValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDateValue:(BOOL)arg1 ;
-(void)setNumberIntValue:(long long)arg1 ;
-(void)setHasNumberIntValue:(BOOL)arg1 ;
-(BOOL)hasNumberIntValue;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setHasNumberDoubleValue:(BOOL)arg1 ;
-(BOOL)hasNumberDoubleValue;
-(BOOL)hasQuantityValue;
-(long long)numberIntValue;
-(double)numberDoubleValue;
@end

