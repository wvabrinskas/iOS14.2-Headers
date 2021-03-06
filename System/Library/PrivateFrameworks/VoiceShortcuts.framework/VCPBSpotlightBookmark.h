/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <NSCopying> {

	unsigned long long _identifier;
	NSMutableArray* _pairs;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pairs;                     //@synthesize pairs=_pairs - In the implementation block
+(Class)pairsType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)pairs;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)pairsCount;
-(unsigned long long)hash;
-(void)clearPairs;
-(id)dictionaryRepresentation;
-(unsigned long long)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPairs:(id)arg1 ;
-(id)pairsAtIndex:(unsigned long long)arg1 ;
@end

