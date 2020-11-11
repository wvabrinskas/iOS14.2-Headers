/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSPlaybackCommandMessage : PBCodable <NSCopying> {

	int _playbackCommand;
	int _sessionIdentifier;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasPlaybackCommand; 
@property (assign,nonatomic) int playbackCommand;                    //@synthesize playbackCommand=_playbackCommand - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(id)description;
-(BOOL)hasSessionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)playbackCommand;
-(void)setPlaybackCommand:(int)arg1 ;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setHasPlaybackCommand:(BOOL)arg1 ;
-(BOOL)hasPlaybackCommand;
@end
