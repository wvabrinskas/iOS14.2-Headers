/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCCKPOplockFailure, FCCKPUniqueFieldFailure;

@interface FCCKPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	FCCKPOplockFailure* _oplockFailure;
	int _type;
	FCCKPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_FC4 _has;

}

@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) FCCKPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) FCCKPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(void)setOplockFailure:(FCCKPOplockFailure *)arg1 ;
-(void)setUniqueFieldFailure:(FCCKPUniqueFieldFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(FCCKPOplockFailure *)oplockFailure;
-(BOOL)hasUniqueFieldFailure;
-(FCCKPUniqueFieldFailure *)uniqueFieldFailure;
-(id)dictionaryRepresentation;
-(void)setType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(int)type;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
