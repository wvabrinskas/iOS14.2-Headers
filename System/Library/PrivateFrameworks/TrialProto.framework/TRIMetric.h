/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface TRIMetric : PBCodable <NSCopying> {

	double _doubleValue;
	long long _integerValue;
	NSString* _categoricalValue;
	NSString* _name;
	NSData* _userDefinedValue;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerValue; 
@property (assign,nonatomic) long long integerValue;                   //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCategoricalValue; 
@property (nonatomic,retain) NSString * categoricalValue;              //@synthesize categoricalValue=_categoricalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefinedValue; 
@property (nonatomic,retain) NSData * userDefinedValue;                //@synthesize userDefinedValue=_userDefinedValue - In the implementation block
+(id)metricWithName:(id)arg1 ;
+(id)metricWithName:(id)arg1 doubleValue:(double)arg2 ;
+(id)metricWithName:(id)arg1 integerValue:(long long)arg2 ;
+(id)metricWithName:(id)arg1 categoricalValue:(id)arg2 ;
+(id)metricWithName:(id)arg1 userDefinedValue:(id)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasDoubleValue;
-(long long)integerValue;
-(BOOL)hasName;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(double)doubleValue;
-(id)dictionaryRepresentation;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)hasIntegerValue;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)name;
-(void)setHasIntegerValue:(BOOL)arg1 ;
-(id)description;
-(void)setIntegerValue:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setCategoricalValue:(NSString *)arg1 ;
-(void)setUserDefinedValue:(NSData *)arg1 ;
-(BOOL)hasCategoricalValue;
-(BOOL)hasUserDefinedValue;
-(NSString *)categoricalValue;
-(NSData *)userDefinedValue;
@end

