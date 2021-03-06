/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MCHoldingTankManifest : NSObject {

	NSMutableDictionary* _universalManifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
-(id)_pathToHoldingTankManifestForDevice:(unsigned long long)arg1 ;
-(id)init;
-(id)pathToHoldingTankProfileDataForIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 createDirectory:(BOOL)arg3 ;
-(id)_manifestForDevice:(unsigned long long)arg1 createIfNil:(BOOL)arg2 ;
-(id)_profileDataFileNameForProfileIdentifier:(id)arg1 ;
-(id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)arg1 ;
-(id)uninstalledProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)removeProfileDataWithIdentifier:(id)arg1 fromHoldingTankForDevice:(unsigned long long)arg2 ;
-(BOOL)_adjustManifestForDevice:(unsigned long long)arg1 withIdentifier:(id)arg2 addingIdentifer:(BOOL)arg3 outError:(id*)arg4 ;
-(BOOL)addProfileData:(id)arg1 withIdentifier:(id)arg2 toHoldingTankForDevice:(unsigned long long)arg3 outError:(id*)arg4 ;
-(id)uninstalledProfileIdentifiersForDevice:(unsigned long long)arg1 ;
-(void)_createDirectory:(id)arg1 withIntermediateDirectories:(BOOL)arg2 ;
-(id)uninstalledProfileDataWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)dealloc;
@end

