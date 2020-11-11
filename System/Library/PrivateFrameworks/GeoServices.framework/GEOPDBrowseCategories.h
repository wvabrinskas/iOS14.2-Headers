/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDBrowseCategories : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _browseCategorys;

}

@property (nonatomic,retain) NSMutableArray * browseCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)browseCategoryType;
+(BOOL)isValid:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)addBrowseCategory:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)browseCategorysCount;
-(void)clearBrowseCategorys;
-(id)browseCategoryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)browseCategorys;
-(void)setBrowseCategorys:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)readAll:(BOOL)arg1 ;
@end
