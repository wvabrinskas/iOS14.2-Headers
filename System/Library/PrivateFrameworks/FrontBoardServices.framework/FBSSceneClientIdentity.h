/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class RBSProcessIdentity, NSString;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding> {

	BOOL _local;
	RBSProcessIdentity* _processIdentity;

}

@property (getter=isLocal,nonatomic,readonly) BOOL local;                              //@synthesize local=_local - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity;              //@synthesize processIdentity=_processIdentity - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localIdentity;
+(id)identityForBundleID:(id)arg1 ;
+(id)identityForProcessIdentity:(id)arg1 ;
-(BOOL)isLocal;
-(id)succinctDescription;
-(RBSProcessIdentity *)processIdentity;
-(id)init;
-(unsigned long long)hash;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

