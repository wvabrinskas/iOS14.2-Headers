/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, _MRTransactionKeyProtobuf, NSString, NSData, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying> {

	NSMutableData* _data;
	_MRTransactionKeyProtobuf* _key;
	unsigned long long _writeLength;
	unsigned long long _writePosition;
	NSString* _identifier;
	unsigned long long _totalLength;
	unsigned long long _totalWritePosition;

}

@property (nonatomic,readonly) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) _MRTransactionKeyProtobuf * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) _MRTransactionPacketProtobuf * protobuf; 
@property (assign,nonatomic) unsigned long long writeLength;                           //@synthesize writeLength=_writeLength - In the implementation block
@property (nonatomic,readonly) unsigned long long writePosition;                       //@synthesize writePosition=_writePosition - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long actualLength; 
@property (nonatomic,readonly) unsigned long long totalLength;                         //@synthesize totalLength=_totalLength - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWritePosition;                  //@synthesize totalWritePosition=_totalWritePosition - In the implementation block
@property (getter=isReadComplete,nonatomic,readonly) BOOL readComplete; 
@property (getter=isWriteComplete,nonatomic,readonly) BOOL writeComplete; 
-(_MRTransactionKeyProtobuf *)key;
-(BOOL)isComplete;
-(NSString *)identifier;
-(id)description;
-(NSData *)data;
-(_MRTransactionPacketProtobuf *)protobuf;
-(unsigned long long)totalLength;
-(unsigned long long)writeLength;
-(unsigned long long)actualLength;
-(BOOL)isReadComplete;
-(id)initWithPackets:(id)arg1 ;
-(BOOL)writeComplete;
-(void)setWriteLength:(unsigned long long)arg1 ;
-(BOOL)isWriteComplete;
-(unsigned long long)writePosition;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned long long)totalWritePosition;
-(id)initWithData:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

