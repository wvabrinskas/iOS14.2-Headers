/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol HKSPClient;
@class NSXPCConnection, NSString;

@interface HKSPXPCClient : NSObject <BSDescriptionProviding> {

	NSXPCConnection* _connection;
	id<HKSPClient> _clientLink;
	NSString* _clientIdentifier;

}

@property (copy) NSString * clientIdentifier;                             //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) id<HKSPClient> clientLink;                 //@synthesize clientLink=_clientLink - In the implementation block
@property (nonatomic,readonly) int processID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientForConnection:(id)arg1 clientLink:(id)arg2 ;
+(id)clientForConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3 ;
-(id)succinctDescription;
-(unsigned long long)hash;
-(id<HKSPClient>)clientLink;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)clientIdentifier;
-(int)processID;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConnection:(id)arg1 clientIdentifierProvider:(id)arg2 clientLink:(id)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSXPCConnection *)connection;
-(id)succinctDescriptionBuilder;
@end

