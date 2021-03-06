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

@class NSMutableArray, NSString;

@interface NTPBCategory : PBCodable <NSCopying> {

	NSMutableArray* _categoryHierarchys;
	NSMutableArray* _curatedTagIds;
	NSString* _entityId;
	NSString* _name;
	NSMutableArray* _recommendedChannels;
	NSMutableArray* _recommendedTopics;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityId; 
@property (nonatomic,retain) NSString * entityId;                               //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedTopics;                //@synthesize recommendedTopics=_recommendedTopics - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedChannels;              //@synthesize recommendedChannels=_recommendedChannels - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoryHierarchys;               //@synthesize categoryHierarchys=_categoryHierarchys - In the implementation block
@property (nonatomic,retain) NSMutableArray * curatedTagIds;                    //@synthesize curatedTagIds=_curatedTagIds - In the implementation block
+(Class)recommendedTopicsType;
+(Class)recommendedChannelsType;
+(Class)categoryHierarchyType;
+(Class)curatedTagIdsType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)entityId;
-(unsigned long long)hash;
-(BOOL)hasName;
-(void)setEntityId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addRecommendedTopics:(id)arg1 ;
-(void)addRecommendedChannels:(id)arg1 ;
-(void)addCategoryHierarchy:(id)arg1 ;
-(void)addCuratedTagIds:(id)arg1 ;
-(BOOL)hasEntityId;
-(void)clearRecommendedTopics;
-(unsigned long long)recommendedTopicsCount;
-(void)clearCuratedTagIds;
-(BOOL)readFrom:(id)arg1 ;
-(id)recommendedTopicsAtIndex:(unsigned long long)arg1 ;
-(void)clearRecommendedChannels;
-(unsigned long long)recommendedChannelsCount;
-(id)recommendedChannelsAtIndex:(unsigned long long)arg1 ;
-(void)clearCategoryHierarchys;
-(unsigned long long)categoryHierarchysCount;
-(id)categoryHierarchyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)curatedTagIdsCount;
-(id)curatedTagIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)recommendedTopics;
-(void)setRecommendedTopics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recommendedChannels;
-(void)setRecommendedChannels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categoryHierarchys;
-(void)setCategoryHierarchys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)curatedTagIds;
-(void)setCuratedTagIds:(NSMutableArray *)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

