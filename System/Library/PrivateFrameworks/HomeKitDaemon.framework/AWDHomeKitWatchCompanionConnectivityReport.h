/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitWatchCompanionConnectivityReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numWatchAddEvents;
	unsigned _numWatchRemoveEvents;
	BOOL _reportComplete;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumWatchAddEvents; 
@property (assign,nonatomic) unsigned numWatchAddEvents;                 //@synthesize numWatchAddEvents=_numWatchAddEvents - In the implementation block
@property (assign,nonatomic) BOOL hasNumWatchRemoveEvents; 
@property (assign,nonatomic) unsigned numWatchRemoveEvents;              //@synthesize numWatchRemoveEvents=_numWatchRemoveEvents - In the implementation block
@property (assign,nonatomic) BOOL hasReportComplete; 
@property (assign,nonatomic) BOOL reportComplete;                        //@synthesize reportComplete=_reportComplete - In the implementation block
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
-(void)setReportComplete:(BOOL)arg1 ;
-(void)setNumWatchAddEvents:(unsigned)arg1 ;
-(void)setNumWatchRemoveEvents:(unsigned)arg1 ;
-(BOOL)reportComplete;
-(void)setHasNumWatchAddEvents:(BOOL)arg1 ;
-(BOOL)hasNumWatchAddEvents;
-(void)setHasNumWatchRemoveEvents:(BOOL)arg1 ;
-(BOOL)hasNumWatchRemoveEvents;
-(void)setHasReportComplete:(BOOL)arg1 ;
-(BOOL)hasReportComplete;
-(unsigned)numWatchAddEvents;
-(unsigned)numWatchRemoveEvents;
@end
