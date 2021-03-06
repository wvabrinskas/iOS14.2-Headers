/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PeopleSuggester/PeopleSuggester-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ContactEmbeddingAnalysisPETNeuralNetEmbedding : PBCodable <NSCopying> {

	SCD_Struct_Co3* _embeddings;

}

@property (nonatomic,readonly) unsigned long long embeddingsCount; 
@property (nonatomic,readonly) float* embeddings; 
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEmbeddings:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)embeddingsCount;
-(void)clearEmbeddings;
-(float)embeddingsAtIndex:(unsigned long long)arg1 ;
-(void)addEmbeddings:(float)arg1 ;
-(float*)embeddings;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

