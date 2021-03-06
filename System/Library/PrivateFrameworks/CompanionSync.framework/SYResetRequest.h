/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYResetRequest : PBRequest <NSCopying> {

	NSString* _cancelSessionID;
	SYMessageHeader* _header;

}

@property (nonatomic,retain) SYMessageHeader * header;                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelSessionID; 
@property (nonatomic,retain) NSString * cancelSessionID;              //@synthesize cancelSessionID=_cancelSessionID - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cancelSessionID;
-(void)setCancelSessionID:(NSString *)arg1 ;
-(BOOL)hasCancelSessionID;
@end

