/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaAcousticProfile : PBCodable {

	BOOL _hasA;
	NSData* _a;

}

@property (a,nonatomic,copy) NSData * a;                       //@synthesize a=_a - In the implementation block
@property (assign,nonatomic) BOOL hasA;                        //@synthesize hasA=_hasA - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSData *)jsonData;
-(BOOL)hasA;
-(unsigned long long)hash;
-(void)setA:(NSData *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasA:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)a;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
@end

