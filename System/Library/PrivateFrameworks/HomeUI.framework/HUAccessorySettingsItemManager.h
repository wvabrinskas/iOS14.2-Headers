/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModule;

@interface HUAccessorySettingsItemManager : HFItemManager {

	HFAccessorySettingGroupItem* _groupItem;
	HUAccessorySettingsItemModule* _accessorySettingsSectionItemModule;

}

@property (nonatomic,retain) HUAccessorySettingsItemModule * accessorySettingsSectionItemModule;              //@synthesize accessorySettingsSectionItemModule=_accessorySettingsSectionItemModule - In the implementation block
@property (nonatomic,retain) HFAccessorySettingGroupItem * groupItem;                                         //@synthesize groupItem=_groupItem - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(HFAccessorySettingGroupItem *)groupItem;
-(HUAccessorySettingsItemModule *)accessorySettingsSectionItemModule;
-(id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2 ;
-(void)setGroupItem:(HFAccessorySettingGroupItem *)arg1 ;
-(void)setAccessorySettingsSectionItemModule:(HUAccessorySettingsItemModule *)arg1 ;
@end
