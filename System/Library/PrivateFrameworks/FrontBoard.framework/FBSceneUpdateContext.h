/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol NSObjectNSCopying;
@class NSString, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext;

@interface FBSceneUpdateContext : NSObject <BSDescriptionProviding> {

	NSString* _sceneID;
	unsigned long long _transactionID;
	FBSSceneSettings* _settings;
	FBSSceneSettingsDiff* _settingsDiff;
	FBSSceneTransitionContext* _transitionContext;
	id<NSObject><NSCopying> _clientContext;

}

@property (nonatomic,copy) NSString * sceneID;                                                  //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) unsigned long long transactionID;                                  //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,retain) FBSSceneSettings * settings;                                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) FBSSceneSettingsDiff * settingsDiff;                               //@synthesize settingsDiff=_settingsDiff - In the implementation block
@property (assign,nonatomic,__weak) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> clientContext;                               //@synthesize clientContext=_clientContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithScene:(id)arg1 ;
-(id)succinctDescription;
-(FBSSceneSettingsDiff *)settingsDiff;
-(void)setSceneID:(NSString *)arg1 ;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(unsigned long long)transactionID;
-(void)setSettingsDiff:(FBSSceneSettingsDiff *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setClientContext:(id<NSObject><NSCopying>)arg1 ;
-(NSString *)sceneID;
-(void)setTransactionID:(unsigned long long)arg1 ;
-(NSString *)description;
-(FBSSceneTransitionContext *)transitionContext;
-(id<NSObject><NSCopying>)clientContext;
-(FBSSceneSettings *)settings;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end
