/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityTraffic : PBCodable <NSCopying> {

	unsigned long long _value;
	int _traffic;
	SCD_Struct_Wi7 _has;

}

@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasTraffic; 
@property (assign,nonatomic) int traffic;                           //@synthesize traffic=_traffic - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setTraffic:(int)arg1 ;
-(int)traffic;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTraffic;
-(unsigned long long)value;
-(BOOL)hasValue;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasTraffic:(BOOL)arg1 ;
-(id)trafficAsString:(int)arg1 ;
-(int)StringAsTraffic:(id)arg1 ;
@end
