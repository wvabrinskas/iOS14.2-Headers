/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class FPAccessControlManager;

@interface PUIFileAccessController : PSListController {

	BOOL _isAccess;
	FPAccessControlManager* _accessManager;

}

@property (assign,nonatomic) BOOL isAccess;                                       //@synthesize isAccess=_isAccess - In the implementation block
@property (nonatomic,retain) FPAccessControlManager * accessManager;              //@synthesize accessManager=_accessManager - In the implementation block
-(id)specifiers;
-(id)init;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(FPAccessControlManager *)accessManager;
-(id)applicationProxiesDictionary;
-(id)bundleIdentifiersAccessingFiles;
-(void)setCameraAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cameraAccessForSpecifier:(id)arg1 ;
-(BOOL)isAccess;
-(void)setIsAccess:(BOOL)arg1 ;
-(void)setAccessManager:(FPAccessControlManager *)arg1 ;
@end

