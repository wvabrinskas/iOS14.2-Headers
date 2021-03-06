/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying> {

	int _assertionType;
	NSString* _requestUUIDString;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NSString * requestUUIDString;              //@synthesize requestUUIDString=_requestUUIDString - In the implementation block
@property (assign,nonatomic) BOOL hasAssertionType; 
@property (assign,nonatomic) int assertionType;                         //@synthesize assertionType=_assertionType - In the implementation block
@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                              //@synthesize pending=_pending - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)pending;
-(unsigned long long)hash;
-(int)assertionType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPending:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAssertionType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasAssertionType:(BOOL)arg1 ;
-(BOOL)hasAssertionType;
-(void)setRequestUUIDString:(NSString *)arg1 ;
-(id)assertionTypeAsString:(int)arg1 ;
-(int)StringAsAssertionType:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(NSString *)requestUUIDString;
@end

