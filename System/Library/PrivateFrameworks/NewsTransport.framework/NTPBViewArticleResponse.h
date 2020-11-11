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

@class NSString;

@interface NTPBViewArticleResponse : PBCodable <NSCopying> {

	NSString* _articleId;
	NSString* _channelId;

}

@property (nonatomic,readonly) BOOL hasChannelId; 
@property (nonatomic,retain) NSString * channelId;              //@synthesize channelId=_channelId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;              //@synthesize articleId=_articleId - In the implementation block
-(void)setArticleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(BOOL)hasChannelId;
-(void)writeTo:(id)arg1 ;
-(NSString *)channelId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)articleId;
@end
