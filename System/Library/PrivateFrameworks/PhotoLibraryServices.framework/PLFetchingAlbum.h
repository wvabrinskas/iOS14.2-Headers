/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/_PLFetchingAlbum.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>
#import <libobjc.A.dylib/PLFileSystemAlbumMetadataPersistence.h>

@class NSArray, NSPredicate, NSOrderedSet, NSFetchRequest, NSData, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLCloudDeletable, PLFileSystemAlbumMetadataPersistence> {

	unsigned long long _countForDisplay;
	unsigned long long _photosCount;
	unsigned long long _videosCount;
	int _emptyState;
	NSArray* _cachedKeyAssets;
	BOOL _needsPersistenceUpdate;
	NSPredicate* _ALAssetsGroupFilterPredicate;
	unsigned long long _batchSize;

}

@property (nonatomic,retain) NSOrderedSet * fetchedAssets; 
@property (assign,nonatomic) BOOL needsPersistenceUpdate;                             //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (nonatomic,retain) NSFetchRequest * fetchRequest; 
@property (nonatomic,retain) NSData * customQueryParameters; 
@property (nonatomic,retain) NSString * customQueryType; 
@property (nonatomic,readonly) NSPredicate * extraFilterPredicate; 
@property (nonatomic,retain) NSPredicate * ALAssetsGroupFilterPredicate;              //@synthesize ALAssetsGroupFilterPredicate=_ALAssetsGroupFilterPredicate - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsCache; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+(id)validKindsForPersistence;
+(id)predicateForAlbumKind:(int)arg1 ;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
+(id)_predicateForAssetSubtype:(short)arg1 ;
+(id)sortDescriptorsForAlbumKind:(int)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(unsigned long long)batchSize;
-(BOOL)canPerformDeleteOperation;
-(void)removePersistedFileSystemDataWithPathManager:(id)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)prepareForDeletion;
-(long long)cloudDeletionType;
-(BOOL)isValidForPersistence;
-(void)willSave;
-(BOOL)needsPersistenceUpdate;
-(id)mutableAssets;
-(void)setNeedsPersistenceUpdate:(BOOL)arg1 ;
-(NSString *)cloudUUIDForDeletion;
-(void)persistMetadataToFileSystemWithPathManager:(id)arg1 ;
-(id)assets;
-(NSPredicate *)extraFilterPredicate;
-(void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg1 ;
-(id)_performFetchWithRequest:(id)arg1 ;
-(unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(BOOL)hasAssetsCache;
-(id)fastPointerAccessSetForAssets:(id)arg1 ;
-(BOOL)mayHaveAssetsInCommon:(id)arg1 ;
-(NSPredicate *)ALAssetsGroupFilterPredicate;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)didSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(unsigned long long)count;
-(NSFetchRequest *)fetchRequest;
-(BOOL)isEmpty;
-(void)setFetchRequest:(NSFetchRequest *)arg1 ;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(id)keyAsset;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(void)setKeyAsset:(id)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)primitiveAssets;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(unsigned long long)approximateCount;
-(void)setAssets:(id)arg1 ;
-(void)didTurnIntoFault;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(void)updateSnapshotAndClearCaches:(id)arg1 ;
-(id)_cachedKeyAssets;
-(void)setupFetchRequest;
@end

