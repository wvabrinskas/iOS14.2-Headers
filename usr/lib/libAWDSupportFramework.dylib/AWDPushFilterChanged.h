/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDPushFilterChanged : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _changedReason;
	unsigned _changedTopicsCount;
	NSString* _guid;
	NSString* _topic;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasChangedReason; 
@property (assign,nonatomic) unsigned changedReason;                    //@synthesize changedReason=_changedReason - In the implementation block
@property (assign,nonatomic) BOOL hasChangedTopicsCount; 
@property (assign,nonatomic) unsigned changedTopicsCount;               //@synthesize changedTopicsCount=_changedTopicsCount - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                          //@synthesize topic=_topic - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NSString *)guid;
-(BOOL)hasGuid;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(void)setChangedTopicsCount:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setHasChangedTopicsCount:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)hasChangedReason;
-(BOOL)hasTopic;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)changedTopicsCount;
-(id)description;
-(void)setHasChangedReason:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)changedReason;
-(void)setChangedReason:(unsigned)arg1 ;
-(BOOL)hasChangedTopicsCount;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

