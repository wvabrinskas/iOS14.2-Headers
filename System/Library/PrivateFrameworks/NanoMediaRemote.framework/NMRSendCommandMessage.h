/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandMessageProtobuf, NSString, NSDictionary, NSNumber, NSDate;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
-(NSString *)bundleID;
-(unsigned)command;
-(NSDictionary *)options;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(NSNumber *)originIdentifier;
-(id)initWithCommand:(unsigned)arg1 bundleID:(id)arg2 options:(id)arg3 originIdentifier:(id)arg4 ;
@end

