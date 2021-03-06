/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneGeometrySettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsGeometryMutationDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsGeometryMutationDiffInspector;              //@synthesize sceneSettingsGeometryMutationDiffInspector=_sceneSettingsGeometryMutationDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateSceneGeometryWithSettingObserverContext:(SCD_Struct_UI36)arg1 windowScene:(id)arg2 transitionContext:(id)arg3 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsGeometryMutationDiffInspector;
-(void)setSceneSettingsGeometryMutationDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
@end

