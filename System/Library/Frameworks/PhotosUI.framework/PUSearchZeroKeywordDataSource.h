/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PUSearchZeroKeywordChangeDelegate, OS_dispatch_queue;
@class NSObject, NSArray;

@interface PUSearchZeroKeywordDataSource : NSObject {

	BOOL _fetchInProgress;
	id<PUSearchZeroKeywordChangeDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSArray* _sections;

}

@property (assign,nonatomic) BOOL fetchInProgress;                                               //@synthesize fetchInProgress=_fetchInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;                            //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                   //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<PUSearchZeroKeywordChangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_fetchOptionsForPersonFetching;
+(id)_fetchAssetCollectionsForIdentifiers:(id)arg1 ;
+(id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)arg1 socialGroupZeroKeywords:(id)arg2 ;
+(id)_personsByLocalIdentifiers:(id)arg1 allUniqueLocalIdentifiers:(id)arg2 ;
+(void)_fetchKeyAssetsForAssetCollectionViewModels:(id)arg1 ;
+(id)_personViewModelForKeywordDictionary:(id)arg1 person:(id)arg2 ;
+(id)_socialGroupViewModelForKeywordDictionary:(id)arg1 peopleByKeyword:(id)arg2 ;
+(id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)arg1 ;
+(id)_meaningViewModelForKeywordDictionary:(id)arg1 ;
+(id)_zeroKeywordsFromDefaultKeywordStore;
+(id)zeroKeywordLog;
+(id)_personsForLocalIdentifiers:(id)arg1 ;
+(id)_fetchKeyAssetOfAssetCollection:(id)arg1 withOptions:(id)arg2 ;
+(id)_sceneViewModelForKeywordDictionary:(id)arg1 ;
+(void)_fetchAssetsForAssetViewModels:(id)arg1 ;
+(id)_homeViewModelForKeywordDictionary:(id)arg1 ;
+(id)_fetchAssetsWithLocalIdentifiers:(id)arg1 ;
+(id)_fetchKeyAssetForSceneIdentifier:(int)arg1 ;
+(id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)arg1 ;
+(id)_dateViewModelForKeywordDictionary:(id)arg1 ;
+(id)_seasonViewModelForKeywordDictionary:(id)arg1 ;
+(id)_placeViewModelForKeywordDictionary:(id)arg1 ;
+(id)_holidayViewModelForKeywordDictionary:(id)arg1 ;
+(id)_sectionsForZeroKeywords:(id)arg1 personsByLocalIdentifier:(id)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)init;
-(id<PUSearchZeroKeywordChangeDelegate>)delegate;
-(unsigned long long)numberOfSections;
-(long long)sectionTypeForSection:(unsigned long long)arg1 ;
-(id)viewModelForIndexPath:(id)arg1 ;
-(void)ppt_prepareZeroKeywordRequest:(/*^block*/id)arg1 ;
-(BOOL)_shouldFetchItems;
-(long long)indexForPlaceKey:(id)arg1 ;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)tapToRadarAttachments;
-(id)_zeroKeywordsFromDefaultKeywordStore;
-(void)setDelegate:(id<PUSearchZeroKeywordChangeDelegate>)arg1 ;
-(id)description;
-(BOOL)fetchInProgress;
-(void)setFetchInProgress:(BOOL)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)fetchItems;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(BOOL)hasZeroKeywords;
-(long long)sectionForSectionType:(long long)arg1 ;
-(id)debugDictionary;
@end
