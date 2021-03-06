/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class NEConfiguration, NSMutableArray;

@interface PUINetworkController : PSListController {

	NEConfiguration* _pathControllerConfiguration;
	NSMutableArray* _dnsConfigurations;

}

@property (retain) NEConfiguration * pathControllerConfiguration;              //@synthesize pathControllerConfiguration=_pathControllerConfiguration - In the implementation block
@property (retain) NSMutableArray * dnsConfigurations;                         //@synthesize dnsConfigurations=_dnsConfigurations - In the implementation block
-(id)specifiers;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pathRuleForBundleID:(id)arg1 create:(BOOL)arg2 ;
-(id)isLocalNetworkEnabled:(id)arg1 ;
-(void)setLocalNetworkEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)loadConfigurationsForceRefresh:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dnsConfigurationChanged:(id)arg1 ;
-(NEConfiguration *)pathControllerConfiguration;
-(void)setDnsConfigurations:(NSMutableArray *)arg1 ;
-(void)setPathControllerConfiguration:(NEConfiguration *)arg1 ;
-(NSMutableArray *)dnsConfigurations;
-(id)eligibleApplications;
-(void)saveConfiguration;
-(id)networkConfigurationEnabled:(id)arg1 ;
@end

