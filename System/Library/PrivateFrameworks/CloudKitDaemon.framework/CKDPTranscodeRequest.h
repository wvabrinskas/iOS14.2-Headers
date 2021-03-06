/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CKCodeRecordTransport;

@interface CKDPTranscodeRequest : PBRequest <NSCopying> {

	NSData* _constructedAssetDownloadParameters;
	CKCodeRecordTransport* _record;

}

@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) CKCodeRecordTransport * record;                            //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) BOOL hasConstructedAssetDownloadParameters; 
@property (nonatomic,retain) NSData * constructedAssetDownloadParameters;               //@synthesize constructedAssetDownloadParameters=_constructedAssetDownloadParameters - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(void)setRecord:(CKCodeRecordTransport *)arg1 ;
-(CKCodeRecordTransport *)record;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasRecord;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)constructedAssetDownloadParameters;
-(void)setConstructedAssetDownloadParameters:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasConstructedAssetDownloadParameters;
@end

