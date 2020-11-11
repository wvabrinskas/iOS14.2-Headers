/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PBBProtoTinkerWirelessCredentials : PBCodable <NSCopying> {

	NSMutableArray* _serializedNetworkRecords;

}

@property (nonatomic,retain) NSMutableArray * serializedNetworkRecords;              //@synthesize serializedNetworkRecords=_serializedNetworkRecords - In the implementation block
+(Class)serializedNetworkRecordType;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addSerializedNetworkRecord:(id)arg1 ;
-(unsigned long long)serializedNetworkRecordsCount;
-(void)clearSerializedNetworkRecords;
-(id)serializedNetworkRecordAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serializedNetworkRecords;
-(void)setSerializedNetworkRecords:(NSMutableArray *)arg1 ;
@end
