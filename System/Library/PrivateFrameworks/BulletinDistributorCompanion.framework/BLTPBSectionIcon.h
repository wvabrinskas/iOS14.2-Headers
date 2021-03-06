/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBSectionIcon : PBCodable <NSCopying> {

	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSMutableArray * variants;              //@synthesize variants=_variants - In the implementation block
+(Class)variantType;
-(NSMutableArray *)variants;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)addVariant:(id)arg1 ;
-(id)variantAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(unsigned long long)variantsCount;
-(void)clearVariants;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

