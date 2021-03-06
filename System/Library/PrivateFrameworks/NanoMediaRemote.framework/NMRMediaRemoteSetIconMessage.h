/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetIconMessage, NSData, NSString, NSNumber, NSDate;

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetIconMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * icon; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
-(NSString *)bundleID;
-(NSData *)icon;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(NSNumber *)originIdentifier;
-(NSData *)originalDigest;
-(id)_initWithIcon:(id)arg1 originalDigest:(id)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4 ;
@end

