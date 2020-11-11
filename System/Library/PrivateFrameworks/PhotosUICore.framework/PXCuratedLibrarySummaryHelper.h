/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXBrowserSummaryControllerDataSource.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXLibrarySummaryDataSource, PXLibrarySummaryOutputPresenter, PXDisplayAssetCollection;
@class PXBrowserSummaryController, NSString;

@interface PXCuratedLibrarySummaryHelper : NSObject <PXBrowserSummaryControllerDataSource, PXChangeObserver> {

	BOOL _isPerformingUpdates;
	BOOL _isPerformingChanges;
	SCD_Struct_PX24 _needsUpdateFlags;
	SCD_Struct_PX24 _dataSourceRespondsTo;
	SCD_Struct_PX94 _outputPresenterRespondsTo;
	BOOL _shouldUseAbbreviatedDates;
	id<PXLibrarySummaryDataSource> _dataSource;
	id<PXLibrarySummaryOutputPresenter> _outputPresenter;
	PXBrowserSummaryController* _summaryController;
	id<PXDisplayAssetCollection> _topmostAssetCollection;

}

@property (nonatomic,readonly) PXBrowserSummaryController * summaryController;                                                    //@synthesize summaryController=_summaryController - In the implementation block
@property (setter=_setTopmostAssetCollection:,nonatomic,retain) id<PXDisplayAssetCollection> topmostAssetCollection;              //@synthesize topmostAssetCollection=_topmostAssetCollection - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryDataSource> dataSource;                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PXLibrarySummaryOutputPresenter> outputPresenter;                                          //@synthesize outputPresenter=_outputPresenter - In the implementation block
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates;                                                                      //@synthesize shouldUseAbbreviatedDates=_shouldUseAbbreviatedDates - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowImportDates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOutputPresenter:(id<PXLibrarySummaryOutputPresenter>)arg1 ;
-(void)_updateTopmostAssetCollection;
-(BOOL)shouldUseAbbreviatedDates;
-(id)init;
-(void)_updateTitle;
-(PXBrowserSummaryController *)summaryController;
-(void)_invalidateSubtitle;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1 ;
-(void)_updateTitleFromSummaryController;
-(void)setDataSource:(id<PXLibrarySummaryDataSource>)arg1 ;
-(void)_updateIfNeeded;
-(id)visibleContentSnapshotForBrowserSummaryController:(id)arg1 ;
-(void)_invalidateTopmostAssetCollection;
-(id<PXLibrarySummaryDataSource>)dataSource;
-(void)_updateSubtitle;
-(id<PXDisplayAssetCollection>)topmostAssetCollection;
-(void)_invalidateTitle;
-(id<PXLibrarySummaryOutputPresenter>)outputPresenter;
-(BOOL)_needsUpdate;
-(void)_setTopmostAssetCollection:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)browserSummaryControllerShouldUpdateImmediately:(id)arg1 ;
-(void)_updateSubtitleFromSummaryController;
-(void)visibleContentDidChange;
-(void)_setNeedsUpdate;
-(void)_performChanges:(/*^block*/id)arg1 ;
@end
