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

@interface NTPBAlternateHeadline : PBCodable <NSCopying> {

	int _articleHeadlineTreatmentId;
	int _articleHeadlineTreatmentState;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentState; 
@property (assign,nonatomic) int articleHeadlineTreatmentState;                  //@synthesize articleHeadlineTreatmentState=_articleHeadlineTreatmentState - In the implementation block
@property (assign,nonatomic) BOOL hasArticleHeadlineTreatmentId; 
@property (assign,nonatomic) int articleHeadlineTreatmentId;                     //@synthesize articleHeadlineTreatmentId=_articleHeadlineTreatmentId - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(int)articleHeadlineTreatmentState;
-(void)setArticleHeadlineTreatmentId:(int)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(void)setArticleHeadlineTreatmentState:(int)arg1 ;
-(BOOL)hasArticleHeadlineTreatmentState;
-(BOOL)hasArticleHeadlineTreatmentId;
-(BOOL)readFrom:(id)arg1 ;
-(int)articleHeadlineTreatmentId;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasArticleHeadlineTreatmentState:(BOOL)arg1 ;
-(void)setHasArticleHeadlineTreatmentId:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

