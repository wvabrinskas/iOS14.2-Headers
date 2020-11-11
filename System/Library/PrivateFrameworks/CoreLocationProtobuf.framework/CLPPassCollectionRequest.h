/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMeta, NSMutableArray, NSData;

@interface CLPPassCollectionRequest : PBRequest <NSCopying> {

	CLPMeta* _meta;
	NSMutableArray* _passLocations;
	NSData* _signature;

}

@property (nonatomic,retain) CLPMeta * meta;                              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * passLocations;              //@synthesize passLocations=_passLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                          //@synthesize signature=_signature - In the implementation block
+(Class)passLocationType;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)signature;
-(CLPMeta *)meta;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(void)setMeta:(CLPMeta *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPassLocation:(id)arg1 ;
-(unsigned long long)passLocationsCount;
-(void)clearPassLocations;
-(id)passLocationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)passLocations;
-(void)setPassLocations:(NSMutableArray *)arg1 ;
@end
