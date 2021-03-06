/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBatchOpportunisticTileDownloader.h>

@class GEOTileDB, GEOResourceManifestManager, GEOTileKeyList, GEOTileKeyMap;

@interface GEOStaleTileUpdater : GEOBatchOpportunisticTileDownloader {

	GEOTileDB* _diskCache;
	GEOResourceManifestManager* _manifestManager;
	GEOTileKeyList* _keysRemaining;
	unsigned long long _numberOfTilesOriginallyConsidered;
	GEOTileKeyMap* _cacheMissType;
	unsigned long long _batchSize;

}
+(unsigned char)_reason;
-(BOOL)cancelKey:(const GEOTileKey*)arg1 ;
-(void)_determineStaleKeysToUpdate;
-(void)determineNextBatchWithQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_addMoreKeysToListIfNeeded:(id)arg1 staleCachedETags:(id)arg2 staleCachedData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)downloadDidSucceedForTile:(GEOTileKey*)arg1 downloadSize:(unsigned long long)arg2 httpStatus:(unsigned)arg3 ;
-(void)downloadDidFailForTile:(GEOTileKey*)arg1 error:(id)arg2 ;
-(unsigned long long)numberOfTilesConsidered;
-(id)initWithDiskCache:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 manifestManager:(id)arg4 tileRequesterCreationBlock:(/*^block*/id)arg5 ;
@end

