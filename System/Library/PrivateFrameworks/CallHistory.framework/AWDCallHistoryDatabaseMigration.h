/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryDatabaseMigration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	unsigned _newSchema;
	unsigned _oldSchema;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasOldSchema; 
@property (assign,nonatomic) unsigned oldSchema;                        //@synthesize oldSchema=_oldSchema - In the implementation block
@property (assign,nonatomic) BOOL hasNewSchema; 
@property (assign,nonatomic) unsigned newSchema;                        //@synthesize newSchema=_newSchema - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setOldSchema:(unsigned)arg1 ;
-(void)setNewSchema:(unsigned)arg1 ;
-(void)setHasOldSchema:(BOOL)arg1 ;
-(BOOL)hasOldSchema;
-(void)setHasNewSchema:(BOOL)arg1 ;
-(BOOL)hasNewSchema;
-(unsigned)error;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(void)setError:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDomain;
-(BOOL)hasError;
-(void)copyTo:(id)arg1 ;
-(unsigned)domain;
-(unsigned)oldSchema;
-(void)setHasError:(BOOL)arg1 ;
-(unsigned)newSchema;
-(void)setHasDomain:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

