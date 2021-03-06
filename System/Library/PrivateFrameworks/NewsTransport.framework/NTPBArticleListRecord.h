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

@class NSMutableArray, NTPBRecordBase, NSString;

@interface NTPBArticleListRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIDs;
	NTPBRecordBase* _base;
	NSString* _metadata;
	int _type;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                    //@synthesize base=_base - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs;              //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                      //@synthesize metadata=_metadata - In the implementation block
+(Class)articleIDsType;
-(void)mergeFrom:(id)arg1 ;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(NSMutableArray *)articleIDs;
-(void)setArticleIDs:(NSMutableArray *)arg1 ;
-(unsigned long long)articleIDsCount;
-(void)setMetadata:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(NSString *)metadata;
-(void)clearArticleIDs;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMetadata;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(void)addArticleIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)articleIDsAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

