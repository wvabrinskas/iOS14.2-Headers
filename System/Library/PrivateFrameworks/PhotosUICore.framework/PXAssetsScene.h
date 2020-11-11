/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObjectPoolDelegate.h>
#import <libobjc.A.dylib/PXAssetsDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXTileSource.h>
#import <libobjc.A.dylib/PXTilingControllerScrollDelegate.h>
#import <libobjc.A.dylib/PXTilingControllerTransitionDelegate.h>

@protocol PXAssetsSceneDelegate;
@class PXTilingController, PXMediaProvider, PXAssetsDataSourceManager, PXSectionedSelectionManager, PXAssetBadgeManager, PXScrollViewSpeedometer, PXReusableObjectPool, PXAssetsDataSource, NSMutableArray, PXAssetsTilingLayout, NSString;

@interface PXAssetsScene : NSObject <PXReusableObjectPoolDelegate, PXAssetsDataSourceManagerObserver, PXChangeObserver, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	BOOL _hasScheduledUpdate;
	SCD_Struct_PX38 _needsUpdateFlags;
	SCD_Struct_PX51 _delegateFlags;
	BOOL _isAskingForTileIdentifierConverter;
	BOOL _isAskingForTransitionAnimationCoordinator;
	BOOL _animatesContent;
	BOOL _autoplayTilesWaitForInput;
	id<PXAssetsSceneDelegate> _delegate;
	PXTilingController* _tilingController;
	PXMediaProvider* _mediaProvider;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXSectionedSelectionManager* _selectionManager;
	PXAssetBadgeManager* _badgeManager;
	PXScrollViewSpeedometer* _scrollSpeedometer;
	PXReusableObjectPool* _viewTileReusePool;
	PXAssetsDataSource* __dataSource;
	NSMutableArray* __anchors;
	unsigned long long _autoplayBehavior;

}

@property (setter=_setDataSource:,nonatomic,retain) PXAssetsDataSource * _dataSource;              //@synthesize _dataSource=__dataSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _anchors;                                          //@synthesize _anchors=__anchors - In the implementation block
@property (assign,nonatomic) unsigned long long autoplayBehavior;                                  //@synthesize autoplayBehavior=_autoplayBehavior - In the implementation block
@property (assign,nonatomic) BOOL autoplayTilesWaitForInput;                                       //@synthesize autoplayTilesWaitForInput=_autoplayTilesWaitForInput - In the implementation block
@property (assign,nonatomic,__weak) id<PXAssetsSceneDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXTilingController * tilingController;                              //@synthesize tilingController=_tilingController - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager;                      //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                     //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) PXAssetBadgeManager * badgeManager;                                 //@synthesize badgeManager=_badgeManager - In the implementation block
@property (nonatomic,readonly) PXScrollViewSpeedometer * scrollSpeedometer;                        //@synthesize scrollSpeedometer=_scrollSpeedometer - In the implementation block
@property (nonatomic,readonly) PXReusableObjectPool * viewTileReusePool;                           //@synthesize viewTileReusePool=_viewTileReusePool - In the implementation block
@property (nonatomic,readonly) PXAssetsTilingLayout * targetLayout; 
@property (nonatomic,readonly) PXAssetsTilingLayout * currentLayout; 
@property (assign,nonatomic) BOOL animatesContent;                                                 //@synthesize animatesContent=_animatesContent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXAssetsDataSourceManager *)dataSourceManager;
-(void)updateIfNeeded;
-(PXSectionedSelectionManager *)selectionManager;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(PXMediaProvider *)mediaProvider;
-(PXAssetsTilingLayout *)currentLayout;
-(id)init;
-(id<PXAssetsSceneDelegate>)delegate;
-(BOOL)needsUpdate;
-(BOOL)providesTileForIdentifier:(PXTileIdentifier)arg1 ;
-(void)_configureLayout:(id)arg1 ;
-(PXAssetsTilingLayout *)targetLayout;
-(PXTilingController *)tilingController;
-(void)transitionToLayout:(id)arg1 ;
-(void)setDelegate:(id<PXAssetsSceneDelegate>)arg1 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 selectionManager:(id)arg4 delegate:(id)arg5 ;
-(void)willTransitionToDataSource:(id)arg1 ;
-(PXAssetsDataSource *)_dataSource;
-(void)_updateDataSourceIfNeeded;
-(NSMutableArray *)_anchors;
-(void)_updateLayoutIfNeeded;
-(void)_invalidateLayout;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setNeedsUpdate;
-(void)_setDataSource:(id)arg1 ;
-(id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2 ;
-(id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2 ;
-(CGPoint)tilingController:(id)arg1 targetVisibleOriginForLayout:(id)arg2 proposedVisibleOrigin:(CGPoint)arg3 ;
-(PXAssetBadgeManager *)badgeManager;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithTilingController:(id)arg1 mediaProvider:(id)arg2 dataSourceManager:(id)arg3 delegate:(id)arg4 ;
-(void)didTransitionToDataSource:(id)arg1 ;
-(void)setAnimatesContent:(BOOL)arg1 ;
-(void)_saveAnchorAsset;
-(PXScrollViewSpeedometer *)scrollSpeedometer;
-(PXReusableObjectPool *)viewTileReusePool;
-(BOOL)animatesContent;
-(unsigned long long)autoplayBehavior;
-(void)setAutoplayBehavior:(unsigned long long)arg1 ;
-(BOOL)autoplayTilesWaitForInput;
-(void)setAutoplayTilesWaitForInput:(BOOL)arg1 ;
@end
