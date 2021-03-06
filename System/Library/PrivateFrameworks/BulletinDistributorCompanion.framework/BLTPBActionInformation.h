/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBActionInformation : PBCodable <NSCopying> {

	NSData* _context;
	NSData* _contextNulls;

}

@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) NSData * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL hasContextNulls; 
@property (nonatomic,retain) NSData * contextNulls;               //@synthesize contextNulls=_contextNulls - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)context;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setContext:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContext;
-(void)setContextNulls:(NSData *)arg1 ;
-(BOOL)hasContextNulls;
-(NSData *)contextNulls;
@end

