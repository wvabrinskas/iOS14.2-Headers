/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXMutableMockAssetsDataSourceManager.h>

@class NSArray, NSMutableArray, PXSectionedChangeDetailsCoalescer, PXMockAssetsDataSource, NSString;

@interface PXMockAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableMockAssetsDataSourceManager> {

	NSArray* _initialAssetsBySection;
	NSArray* _initialAssetCollections;
	BOOL _isPerformingDataSourceChanges;
	NSMutableArray* _nextAssetsBySection;
	NSMutableArray* _nextAssetCollections;
	PXSectionedChangeDetailsCoalescer* _changeDetailsCoalescer;
	BOOL _changeIsReload;

}

@property (nonatomic,readonly) PXMockAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithConfigurationBlock:(/*^block*/id)arg1 ;
-(void)insertItemAtIndexPath:(id)arg1 assetProperties:(id)arg2 ;
-(void)markChangeAsReload;
-(void)changeItemAtIndexPath:(id)arg1 toAssetProperties:(id)arg2 ;
-(void)insertSectionAtIndex:(long long)arg1 count:(long long)arg2 assetProperties:(id)arg3 assetCollection:(id)arg4 ;
-(void)changeSectionAtIndex:(long long)arg1 toAssetCollection:(id)arg2 ;
-(void)performDataSourceChanges:(/*^block*/id)arg1 ;
-(void)_appendIncrementalChangeDetails:(id)arg1 ;
-(id)createInitialDataSource;
-(void)removeSectionAtIndex:(long long)arg1 ;
@end

