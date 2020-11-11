/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBLockScreenPluginAction;


@protocol SBLockScreenPluginController <SBPluginBundleController,SBUIOptionalLegibility>
@property (assign,nonatomic,__weak) id<SBLockScreenPluginAgent> pluginAgent; 
@property (nonatomic,readonly) long long pluginPriority; 
@property (nonatomic,readonly) UIViewController*<SBLockScreenPluginViewController> pluginViewController; 
@property (nonatomic,readonly) id<SBLockScreenPluginAppearance> pluginAppearance; 
@property (nonatomic,retain,readonly) SBLockScreenPluginAction * pluginUnlockAction; 
@optional
-(void)updateForPresentation:(id)arg1;
-(void)pluginWillActivateWithContext:(id)arg1;
-(void)pluginDidDeactivateWithContext:(id)arg1;
-(BOOL)pluginHandleEvent:(long long)arg1;
-(SBLockScreenPluginAction *)pluginUnlockAction;

@required
-(UIViewController*<SBLockScreenPluginViewController>)pluginViewController;
-(id<SBLockScreenPluginAgent>)pluginAgent;
-(void)setPluginAgent:(id)arg1;
-(long long)pluginPriority;
-(id<SBLockScreenPluginAppearance>)pluginAppearance;

@end
