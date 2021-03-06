/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>

@class UIApplicationSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, UIView, NSString;

@interface SBNubView : UIView <SBDeviceApplicationSceneHandleObserver> {

	UIApplicationSceneClientSettingsDiffInspector* _applicationSceneClientSettingsDiffInspector;
	BOOL _highlighted;
	SBDeviceApplicationSceneHandle* _deviceApplicationSceneHandle;
	UIView* _nubView;

}

@property (nonatomic,readonly) UIView * nubView;                                                           //@synthesize nubView=_nubView - In the implementation block
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * deviceApplicationSceneHandle;              //@synthesize deviceApplicationSceneHandle=_deviceApplicationSceneHandle - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                        //@synthesize highlighted=_highlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)hitTestWidth;
+(double)height;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isHighlighted;
-(UIView *)nubView;
-(id)initWithCoder:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
-(void)_updateNubViewBackgroundColor;
-(SBDeviceApplicationSceneHandle *)deviceApplicationSceneHandle;
@end

