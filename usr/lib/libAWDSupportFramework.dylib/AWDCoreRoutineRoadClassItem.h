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

@interface AWDCoreRoutineRoadClassItem : PBCodable <NSCopying> {

	int _percentage;
	int _roadClass;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasRoadClass; 
@property (assign,nonatomic) int roadClass;                   //@synthesize roadClass=_roadClass - In the implementation block
@property (assign,nonatomic) BOOL hasPercentage; 
@property (assign,nonatomic) int percentage;                  //@synthesize percentage=_percentage - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(int)roadClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRoadClass:(int)arg1 ;
-(BOOL)hasRoadClass;
-(void)setHasRoadClass:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)percentage;
-(void)setPercentage:(int)arg1 ;
-(void)setHasPercentage:(BOOL)arg1 ;
-(BOOL)hasPercentage;
@end

