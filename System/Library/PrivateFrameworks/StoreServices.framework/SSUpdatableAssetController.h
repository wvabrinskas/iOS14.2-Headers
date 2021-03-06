/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, SSUpdatableAssetManifest, SSUpdatableAssetCacheManager, SSXPCConnection, NSURL, NSObject;

@interface SSUpdatableAssetController : NSObject {

	NSString* _bundledManifestVersion;
	SSUpdatableAssetManifest* _bundledManifest;
	SSUpdatableAssetManifest* _currentManifest;
	SSUpdatableAssetCacheManager* _cacheManager;
	SSXPCConnection* _connection;
	NSURL* _manifestURL;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _bundledManifestURL;

}

@property (nonatomic,readonly) SSUpdatableAssetManifest * currentManifest; 
@property (nonatomic,readonly) SSUpdatableAssetManifest * newestCachedManifest; 
@property (nonatomic,readonly) NSURL * bundledManifestURL;                                   //@synthesize bundledManifestURL=_bundledManifestURL - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                                              //@synthesize manifestURL=_manifestURL - In the implementation block
-(id)_connection;
-(void)clearCache:(/*^block*/id)arg1 ;
-(SSUpdatableAssetManifest *)currentManifest;
-(id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(SSUpdatableAssetManifest *)newestCachedManifest;
-(id)_bundledManifestVersion;
-(id)_bundledManifest;
-(id)initWithBundledManifestURL:(id)arg1 ;
-(void)refreshCachedManifest:(/*^block*/id)arg1 ;
-(NSURL *)bundledManifestURL;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(void)dealloc;
@end

