/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSArray, NSSet;


@protocol PSBrokerCapabilities <NSObject>
@property (readonly) NSUUID * identifier; 
@property (copy,readonly) NSArray * exportedTopics; 
@property (copy,readonly) NSSet * supportedTransportIdentifiers; 
@required
-(NSUUID *)identifier;
-(NSSet *)supportedTransportIdentifiers;
-(NSArray *)exportedTopics;

@end

