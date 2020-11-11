/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {

	int _comparisonType;
	NSString* _property;
	MPPMediaPredicateValue* _value;
	SCD_Struct_MP50 _has;

}

@property (nonatomic,readonly) BOOL hasProperty; 
@property (nonatomic,retain) NSString * property;                         //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) MPPMediaPredicateValue * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasComparisonType; 
@property (assign,nonatomic) int comparisonType;                          //@synthesize comparisonType=_comparisonType - In the implementation block
-(NSString *)property;
-(int)comparisonType;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(MPPMediaPredicateValue *)value;
-(BOOL)hasValue;
-(void)setComparisonType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(MPPMediaPredicateValue *)arg1 ;
-(BOOL)hasProperty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasComparisonType;
-(void)setHasComparisonType:(BOOL)arg1 ;
-(void)dealloc;
@end
