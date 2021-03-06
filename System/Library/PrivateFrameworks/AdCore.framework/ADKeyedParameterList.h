/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADKeyedParameterList : PBCodable <NSCopying> {

	NSString* _key;
	NSMutableArray* _parameterLists;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameterLists;              //@synthesize parameterLists=_parameterLists - In the implementation block
+(id)options;
+(Class)parameterListType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addParameterList:(id)arg1 ;
-(unsigned long long)parameterListsCount;
-(void)clearParameterLists;
-(id)parameterListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)parameterLists;
-(void)setParameterLists:(NSMutableArray *)arg1 ;
@end

