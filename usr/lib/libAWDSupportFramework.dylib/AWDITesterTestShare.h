/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestShare : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _shareMethod;
	NSString* _shareOption;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMethod; 
@property (nonatomic,retain) NSString * shareMethod;                    //@synthesize shareMethod=_shareMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasShareOption; 
@property (nonatomic,retain) NSString * shareOption;                    //@synthesize shareOption=_shareOption - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasShareMethod;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)shareMethod;
-(void)setShareMethod:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setShareOption:(NSString *)arg1 ;
-(NSString *)shareOption;
-(BOOL)hasShareOption;
@end

