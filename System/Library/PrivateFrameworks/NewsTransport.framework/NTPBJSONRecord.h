/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSData;

@interface NTPBJSONRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSData* _json;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasJson; 
@property (nonatomic,retain) NSData * json;                      //@synthesize json=_json - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(unsigned long long)hash;
-(NSData *)json;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasJson;
-(void)setJson:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
