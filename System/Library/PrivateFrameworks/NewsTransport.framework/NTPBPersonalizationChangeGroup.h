/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {

	unsigned long long _changeNumber;
	NSMutableArray* _deltas;
	NSString* _instanceIdentifier;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,retain) NSMutableArray * deltas;                      //@synthesize deltas=_deltas - In the implementation block
@property (nonatomic,readonly) BOOL hasInstanceIdentifier; 
@property (nonatomic,retain) NSString * instanceIdentifier;                //@synthesize instanceIdentifier=_instanceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasChangeNumber; 
@property (assign,nonatomic) unsigned long long changeNumber;              //@synthesize changeNumber=_changeNumber - In the implementation block
+(Class)deltasType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasInstanceIdentifier;
-(unsigned long long)hash;
-(NSMutableArray *)deltas;
-(id)dictionaryRepresentation;
-(void)clearDeltas;
-(unsigned long long)deltasCount;
-(id)deltasAtIndex:(unsigned long long)arg1 ;
-(void)setHasChangeNumber:(BOOL)arg1 ;
-(BOOL)hasChangeNumber;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(void)setChangeNumber:(unsigned long long)arg1 ;
-(void)addDeltas:(id)arg1 ;
-(unsigned long long)changeNumber;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)instanceIdentifier;
-(void)setInstanceIdentifier:(NSString *)arg1 ;
-(void)dealloc;
@end

