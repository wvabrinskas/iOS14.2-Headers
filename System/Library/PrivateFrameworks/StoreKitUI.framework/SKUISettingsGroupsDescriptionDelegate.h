/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKUISettingsGroupsDescriptionDelegate <NSObject>
@required
-(id)owningViewControllerForSettingsGroupsDescription:(id)arg1;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 deletedSettingsGroupAtIndex:(unsigned long long)arg2;
-(void)settingsGroupsDescription:(id)arg1 didUpdateSettingsDescription:(id)arg2;
-(void)settingsGroupsDescription:(id)arg1 dismissViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)settingsGroupsDescription:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)settingsGroupsDescription:(id)arg1 viewForSettingAtIndexPath:(id)arg2;
-(void)settingsGroupsDescriptionDidUpdateValidity:(id)arg1;

@end
