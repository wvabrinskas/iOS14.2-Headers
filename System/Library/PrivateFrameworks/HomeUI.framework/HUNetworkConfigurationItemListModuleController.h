/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUItemTableModuleController.h>

@interface HUNetworkConfigurationItemListModuleController : HUItemTableModuleController {

	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(unsigned long long)style;
-(BOOL)canSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithModule:(id)arg1 style:(unsigned long long)arg2 ;
-(id)presentNetworkConfigurationSettingsForItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg1 ;
@end
