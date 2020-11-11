/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCModelPlaybackAssetCacheProviding.h>

@class MPMediaLibrary, NSString;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding> {

	MPMediaLibrary* _mediaLibrary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_highQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)_lowQualityCachedAssetDestinationDirectoryForMediaLibrary:(id)arg1 ;
+(id)deviceLibraryProviderWithUserIdentity:(id)arg1 ;
-(void)getPlaybackAssetCacheDestinationURL:(id*)arg1 purchaseBundleDestinationURL:(id*)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5 ;
-(void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithMediaLibrary:(id)arg1 ;
@end
