/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class PSListController;

@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier {

	PSListController* _hostController;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(void)setHostController:(PSListController *)arg1 ;
-(PSListController *)hostController;
-(void)setFallbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isFallbackEnabled:(id)arg1 ;
-(id)initWithHostController:(id)arg1 ;
@end
