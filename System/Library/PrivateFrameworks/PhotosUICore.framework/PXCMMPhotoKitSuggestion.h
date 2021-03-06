/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMediaTypeAggregating.h>
#import <libobjc.A.dylib/PXCMMSuggestion.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, PHAssetCollection, PHFetchResult, PXAssetCollectionActionManager;

@interface PXCMMPhotoKitSuggestion : NSObject <PXMediaTypeAggregating, PXCMMSuggestion, NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _previewAssetsFetchResult;
	PHFetchResult* _peopleSuggestionsFetchResult;

}

@property (nonatomic,readonly) long long aggregateMediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                                        //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * previewAssetsFetchResult;                                   //@synthesize previewAssetsFetchResult=_previewAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * peopleSuggestionsFetchResult;                               //@synthesize peopleSuggestionsFetchResult=_peopleSuggestionsFetchResult - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) long long count; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                             //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                  //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) id<PXPeopleFetchResult> peopleFetchResult; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
+(id)fastSuggestionWithAssetCollection:(id)arg1 ;
+(id)sharedCachingImageManager;
+(id)suggestionWithAssetCollection:(id)arg1 ;
+(id)_fetchPreviewAssetsForAssetCollection:(id)arg1 ;
+(id)_fetchPeopleSuggestionsForAssetCollection:(id)arg1 ;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)arg1 ;
-(id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)arg1 ;
-(PHFetchResult *)peopleSuggestionsFetchResult;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(NSString *)subtitle;
-(id)initWithAssetCollection:(id)arg1 ;
-(long long)count;
-(NSString *)identifier;
-(long long)aggregateMediaType;
-(PHFetchResult *)previewAssetsFetchResult;
-(void)decline;
-(id<PXPeopleFetchResult>)peopleFetchResult;
-(NSString *)description;
-(BOOL)containsUnverifiedPersons;
-(NSString *)title;
-(id)contextForActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 ;
-(void)markAsActiveIfNeeded;
-(id)diagnosticsItem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PHAssetCollection *)assetCollection;
@end

