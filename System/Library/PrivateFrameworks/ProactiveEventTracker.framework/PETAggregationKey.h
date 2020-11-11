/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PETRawMessage;

@interface PETAggregationKey : PBCodable <NSCopying> {

	double _bucket;
	unsigned _datestamp;
	PETRawMessage* _rawMessage;
	int _type;
	SCD_Struct_PE4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDatestamp; 
@property (assign,nonatomic) unsigned datestamp;                      //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBucket; 
@property (assign,nonatomic) double bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,readonly) BOOL hasRawMessage; 
@property (nonatomic,retain) PETRawMessage * rawMessage;              //@synthesize rawMessage=_rawMessage - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsType:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(unsigned)datestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setRawMessage:(PETRawMessage *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDatestamp;
-(int)type;
-(void)setHasBucket:(BOOL)arg1 ;
-(BOOL)hasRawMessage;
-(double)bucket;
-(void)setBucket:(double)arg1 ;
-(BOOL)hasBucket;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDatestamp:(BOOL)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(PETRawMessage *)rawMessage;
@end
