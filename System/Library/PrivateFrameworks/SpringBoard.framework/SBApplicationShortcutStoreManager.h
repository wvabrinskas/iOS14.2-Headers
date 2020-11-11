/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject {

	NSLock* _stateLock;
	NSMutableDictionary* _storesKeyedByBundleIdentifier;

}
+(id)sharedManager;
-(void)invalidateCache;
-(id)init;
-(id)_stateLock_storeForBundleIdentifier:(id)arg1 ;
-(id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2 ;
-(void)_installedAppsDidChange:(id)arg1 ;
-(void)saveSynchronously;
-(void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3 ;
-(void)dealloc;
@end
