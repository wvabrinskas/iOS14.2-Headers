/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiDPSAWDLSnapshot : PBCodable <NSCopying> {

	unsigned long long _ts;
	unsigned _duration;
	unsigned _sdb;
	unsigned _use;
	SCD_Struct_Wi6 _has;

}

@property (assign,nonatomic) BOOL hasTs; 
@property (assign,nonatomic) unsigned long long ts;              //@synthesize ts=_ts - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasUse; 
@property (assign,nonatomic) unsigned use;                       //@synthesize use=_use - In the implementation block
@property (assign,nonatomic) BOOL hasSdb; 
@property (assign,nonatomic) unsigned sdb;                       //@synthesize sdb=_sdb - In the implementation block
-(unsigned)use;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(unsigned)sdb;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTs;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasUse;
-(BOOL)hasSdb;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUse:(unsigned)arg1 ;
-(void)setSdb:(unsigned)arg1 ;
-(unsigned long long)ts;
-(unsigned)duration;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTs:(unsigned long long)arg1 ;
-(void)setHasTs:(BOOL)arg1 ;
-(void)setHasUse:(BOOL)arg1 ;
-(void)setHasSdb:(BOOL)arg1 ;
@end
