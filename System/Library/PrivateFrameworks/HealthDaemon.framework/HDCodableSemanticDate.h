/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableSemanticDate : PBCodable <NSCopying> {

	double _date;
	NSString* _keyPath;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                     //@synthesize date=_date - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)keyPath;
-(void)setDate:(double)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(double)date;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDate;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasKeyPath;
@end

