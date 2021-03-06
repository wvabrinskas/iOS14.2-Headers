/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BSObjCProtocol;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSString* _identifier;
	BSObjCProtocol* _server;
	BSObjCProtocol* _client;
	CFBooleanRef _clientWaitsForActivation;

}

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) long long clientMessagingExpectation; 
@property (nonatomic,copy,readonly) BSObjCProtocol * server; 
@property (nonatomic,copy,readonly) BSObjCProtocol * client; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceWithServer:(id)arg1 client:(id)arg2 ;
-(id)succinctDescription;
-(BSObjCProtocol *)server;
-(long long)clientMessagingExpectation;
-(id)init;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(BSObjCProtocol *)client;
-(NSString *)identifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

