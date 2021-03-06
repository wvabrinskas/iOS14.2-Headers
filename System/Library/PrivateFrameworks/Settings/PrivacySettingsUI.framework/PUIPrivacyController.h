/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, ACAccountStore, NSString;

@interface PUIPrivacyController : PSListController <PSListControllerTestableSpecifiers> {

	PSSpecifier* _locationSpecifier;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2 ;
+(id)booleanCapabilitiesToTest;
-(id)specifiers;
-(id)_accountStore;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)locationServicesEnabled:(id)arg1 ;
-(void)updateLocationServicesVisibility;
-(void)setCapabilityEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)capabilityEnabled:(id)arg1 ;
@end

