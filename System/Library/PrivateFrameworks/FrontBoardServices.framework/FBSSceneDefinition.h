/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneIdentity, FBSSceneClientIdentity, FBSSceneSpecification, NSString;

@interface FBSSceneDefinition : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	FBSSceneIdentity* _identity;
	FBSSceneClientIdentity* _clientIdentity;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,copy) FBSSceneIdentity * identity;                          //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) FBSSceneClientIdentity * clientIdentity;              //@synthesize clientIdentity=_clientIdentity - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setIdentity:(FBSSceneIdentity *)arg1 ;
-(id)succinctDescription;
-(FBSSceneSpecification *)specification;
-(FBSSceneIdentity *)identity;
-(unsigned long long)hash;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setClientIdentity:(FBSSceneClientIdentity *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(FBSSceneClientIdentity *)clientIdentity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
@end

