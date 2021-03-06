/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	BOOL _appHasPolledOnceThisForegroundSession;

}
+(BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg1 ;
+(id)iCloudServiceAccount;
+(void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)_photoStreamsEnabled;
+(BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(id)sharedPhotoStreamsHelper;
-(id)lastPhotoStreamUpdateDate;
-(BOOL)shouldPublishScreenShots;
-(id)photoStreamsPublishStreamID;
-(id)init;
-(void)resetServerState;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(long long)imageLimitForFriendStream;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(id)imageLimitsByAssetType;
-(void)clearCachedAccountState;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(BOOL)removeBreadcrumbsForHashString:(id)arg1 ;
-(long long)maxPixelSizeForDerivative;
-(void)fetchMPSStateWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_appDidEnterBackground:(id)arg1 ;
-(void)handleMPSStateIfNecessaryInLibrary:(id)arg1 ;
-(long long)friendsLimit;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3 ;
-(long long)imageLimitForOwnStream;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(BOOL)dequeueAssetsForPSPublishing:(id)arg1 ;
-(void)pollForNewSubscriptionContent;
-(id)pause_mstreamd;
-(id)temporaryPathForConvertedAssetWithUUID:(id)arg1 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2 ;
-(id)psHashAsString:(id)arg1 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)resume_mstreamd:(id)arg1 ;
-(BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(unsigned long long)arg4 publicGlobalUUID:(id*)arg5 ;
-(void)dealloc;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(void)_clearPhotoStreamAccountSettings;
-(long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
@end

