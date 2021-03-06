/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {

	SCD_Struct_NT15* _events;
	double _defaultClicks;
	double _defaultImpressions;
	double _groupBias;
	double _impressionBias;
	unsigned long long _timestamp;
	NSString* _featureKey;
	SCD_Struct_NT11 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureKey; 
@property (nonatomic,retain) NSString * featureKey;                         //@synthesize featureKey=_featureKey - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultClicks; 
@property (assign,nonatomic) double defaultClicks;                          //@synthesize defaultClicks=_defaultClicks - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultImpressions; 
@property (assign,nonatomic) double defaultImpressions;                     //@synthesize defaultImpressions=_defaultImpressions - In the implementation block
@property (nonatomic,readonly) unsigned long long eventsCount; 
@property (nonatomic,readonly) unsigned* events; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasImpressionBias; 
@property (assign,nonatomic) double impressionBias;                         //@synthesize impressionBias=_impressionBias - In the implementation block
@property (assign,nonatomic) BOOL hasGroupBias; 
@property (assign,nonatomic) double groupBias;                              //@synthesize groupBias=_groupBias - In the implementation block
+(void)fc_swizzleFor24117796;
-(BOOL)applyToAggregate:(id)arg1 withTreatment:(id)arg2 ;
-(void)addAction:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)applyToDelta:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned*)events;
-(void)addEvents:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)featureKey;
-(void)setFeatureKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(double)groupBias;
-(double)defaultClicks;
-(double)defaultImpressions;
-(double)impressionBias;
-(void)setDefaultClicks:(double)arg1 ;
-(void)setDefaultImpressions:(double)arg1 ;
-(void)setImpressionBias:(double)arg1 ;
-(void)setGroupBias:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clearEvents;
-(void)dealloc;
-(unsigned)eventsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFeatureKey;
-(void)setHasDefaultClicks:(BOOL)arg1 ;
-(BOOL)hasDefaultClicks;
-(void)setHasDefaultImpressions:(BOOL)arg1 ;
-(BOOL)hasDefaultImpressions;
-(void)setEvents:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasImpressionBias:(BOOL)arg1 ;
-(BOOL)hasImpressionBias;
-(void)setHasGroupBias:(BOOL)arg1 ;
-(BOOL)hasGroupBias;
-(unsigned long long)eventsCount;
@end

