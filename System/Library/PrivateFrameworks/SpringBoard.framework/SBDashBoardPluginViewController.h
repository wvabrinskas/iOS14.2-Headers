/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBLockScreenPluginDelegate.h>

@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate> {

	SBLockScreenPlugin* _plugin;

}

@property (nonatomic,readonly) SBLockScreenPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)_updateLegibility;
-(id)coverSheetIdentifier;
-(long long)presentationPriority;
-(long long)presentationTransition;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)displayLayoutElementIdentifier;
-(BOOL)handleEvent:(id)arg1 ;
-(void)updateForPresentation:(id)arg1 ;
-(id)view;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)presentationStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(SBLockScreenPlugin *)plugin;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)aggregateBehavior:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)aggregateAppearance:(id)arg1 ;
-(void)willTransitionToPresented:(BOOL)arg1 ;
-(long long)_presentationPriority;
-(void)pluginAppearanceDidChange:(id)arg1 ;
-(id)initWithLockScreenPlugin:(id)arg1 ;
@end

