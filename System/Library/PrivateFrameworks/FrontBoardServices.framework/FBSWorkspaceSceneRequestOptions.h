/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneSpecification, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {

	BOOL _keyboardScene;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneClientSettings* _initialClientSettings;

}

@property (assign,getter=isKeyboardScene,nonatomic) BOOL keyboardScene;                 //@synthesize keyboardScene=_keyboardScene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                       //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * initialClientSettings;              //@synthesize initialClientSettings=_initialClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(FBSSceneSpecification *)specification;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(void)setInitialClientSettings:(FBSSceneClientSettings *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setKeyboardScene:(BOOL)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(BOOL)isKeyboardScene;
-(FBSSceneClientSettings *)initialClientSettings;
-(void)setIdentifier:(NSString *)arg1 ;
@end

