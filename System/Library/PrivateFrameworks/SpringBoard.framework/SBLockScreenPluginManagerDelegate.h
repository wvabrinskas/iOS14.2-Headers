/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBLockScreenPluginManagerDelegate <NSObject>
@required
-(BOOL)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;

@end

