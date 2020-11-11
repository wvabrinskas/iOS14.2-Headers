/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidFailToCreatePasscode : PBCodable <NSCopying> {

	int _error;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                  //@synthesize error=_error - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(int)error;
-(id)dictionaryRepresentation;
-(void)setError:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasError;
-(void)copyTo:(id)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
