/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariActivatedHomeScreenQuickActionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _quickAction;
	SCD_Struct_WB1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasQuickAction; 
@property (assign,nonatomic) int quickAction;                           //@synthesize quickAction=_quickAction - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasQuickAction:(BOOL)arg1 ;
-(BOOL)hasQuickAction;
-(id)quickActionAsString:(int)arg1 ;
-(int)StringAsQuickAction:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)quickAction;
-(void)setQuickAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

