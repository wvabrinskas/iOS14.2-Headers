/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoRemoteAdminAvailabilityChangeRequest : PBRequest <NSCopying> {

	BOOL _isAvailable;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasIsAvailable; 
@property (assign,nonatomic) BOOL isAvailable;                 //@synthesize isAvailable=_isAvailable - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isAvailable;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIsAvailable;
-(void)setHasIsAvailable:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsAvailable:(BOOL)arg1 ;
@end
