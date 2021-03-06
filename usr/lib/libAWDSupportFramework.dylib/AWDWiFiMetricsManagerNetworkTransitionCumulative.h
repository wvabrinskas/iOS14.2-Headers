/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerNetworkTransitionCumulative : PBCodable <NSCopying> {

	SCD_Struct_AW21* _channelScanCounts;
	unsigned long long _timestamp;
	unsigned _colocatedNetworksFoundCount;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasColocatedNetworksFoundCount; 
@property (assign,nonatomic) unsigned colocatedNetworksFoundCount;                     //@synthesize colocatedNetworksFoundCount=_colocatedNetworksFoundCount - In the implementation block
@property (nonatomic,readonly) unsigned long long channelScanCountsCount; 
@property (nonatomic,readonly) unsigned* channelScanCounts; 
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)channelScanCountsCount;
-(void)clearChannelScanCounts;
-(unsigned)channelScanCountAtIndex:(unsigned long long)arg1 ;
-(void)addChannelScanCount:(unsigned)arg1 ;
-(void)setColocatedNetworksFoundCount:(unsigned)arg1 ;
-(void)setHasColocatedNetworksFoundCount:(BOOL)arg1 ;
-(BOOL)hasColocatedNetworksFoundCount;
-(unsigned*)channelScanCounts;
-(void)setChannelScanCounts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)colocatedNetworksFoundCount;
@end

