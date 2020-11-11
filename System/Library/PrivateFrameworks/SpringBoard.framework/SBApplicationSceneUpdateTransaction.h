/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class SBApplicationSceneEntity, SBWorkspaceTransitionRequest, SBWorkspaceApplicationSceneTransitionContext, NSString, FBSMutableSceneParameters, UIApplicationSceneTransitionContext, UIApplicationSceneSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	SBWorkspaceTransitionRequest* _request;
	SBWorkspaceApplicationSceneTransitionContext* _transitionContext;
	NSString* _sceneIdentifier;
	FBSMutableSceneParameters* _sceneParameters;
	UIApplicationSceneTransitionContext* _sceneTransitionContext;
	BOOL _suspendedActivation;
	BOOL _shouldSendActivationResult;

}

@property (nonatomic,readonly) SBApplicationSceneEntity * applicationSceneEntity;              //@synthesize applicationSceneEntity=_applicationSceneEntity - In the implementation block
@property (nonatomic,readonly) NSString * sceneIdentifier;                                     //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) UIApplicationSceneSettings * sceneSettings; 
@property (assign,nonatomic) BOOL shouldSendActivationResult;                                  //@synthesize shouldSendActivationResult=_shouldSendActivationResult - In the implementation block
-(UIApplicationSceneSettings *)sceneSettings;
-(void)_didComplete;
-(NSString *)sceneIdentifier;
-(id)_customizedDescriptionProperties;
-(SBApplicationSceneEntity *)applicationSceneEntity;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(void)_sendActivationResultWithError:(id)arg1 ;
-(BOOL)shouldSendActivationResult;
-(void)setShouldSendActivationResult:(BOOL)arg1 ;
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
@end
