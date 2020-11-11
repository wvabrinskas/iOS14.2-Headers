/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSTouchMessage : PBCodable <NSCopying> {

	int _direction;
	unsigned _repeatCount;
	int _sessionIdentifier;
	SCD_Struct_TV1 _has;

}

@property (assign,nonatomic) BOOL hasDirection; 
@property (assign,nonatomic) int direction;                          //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL hasRepeatCount; 
@property (assign,nonatomic) unsigned repeatCount;                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setRepeatCount:(unsigned)arg1 ;
-(unsigned)repeatCount;
-(int)direction;
-(unsigned long long)hash;
-(void)setDirection:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasDirection;
-(BOOL)readFrom:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(id)description;
-(BOOL)hasSessionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDirection:(BOOL)arg1 ;
-(BOOL)hasRepeatCount;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasRepeatCount:(BOOL)arg1 ;
@end
