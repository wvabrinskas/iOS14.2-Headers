/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {

	unsigned long long _lastAccessed;
	NSData* _key;
	NSData* _value;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSData * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSData * value;                               //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL hasLastAccessed; 
@property (assign,nonatomic) unsigned long long lastAccessed;              //@synthesize lastAccessed=_lastAccessed - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(NSData *)key;
-(unsigned long long)hash;
-(void)setKey:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasLastAccessed:(BOOL)arg1 ;
-(BOOL)hasLastAccessed;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)value;
-(BOOL)hasValue;
-(void)setLastAccessed:(unsigned long long)arg1 ;
-(unsigned long long)lastAccessed;
-(void)writeTo:(id)arg1 ;
-(void)setValue:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

