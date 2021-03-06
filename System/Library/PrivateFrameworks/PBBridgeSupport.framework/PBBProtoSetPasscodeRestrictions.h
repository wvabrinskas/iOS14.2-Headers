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

@class NSData;

@interface PBBProtoSetPasscodeRestrictions : PBCodable <NSCopying> {

	NSData* _restrictions;
	BOOL _wristDetectionDisabled;
	SCD_Struct_PB2 _has;

}

@property (nonatomic,retain) NSData * restrictions;                       //@synthesize restrictions=_restrictions - In the implementation block
@property (assign,nonatomic) BOOL hasWristDetectionDisabled; 
@property (assign,nonatomic) BOOL wristDetectionDisabled;                 //@synthesize wristDetectionDisabled=_wristDetectionDisabled - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)restrictions;
-(void)setRestrictions:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWristDetectionDisabled:(BOOL)arg1 ;
-(void)setHasWristDetectionDisabled:(BOOL)arg1 ;
-(BOOL)hasWristDetectionDisabled;
-(BOOL)wristDetectionDisabled;
@end

