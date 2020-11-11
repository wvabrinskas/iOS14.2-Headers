/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTAvatarPicker.h>

@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate, AVTStickerTaskScheduler;
@class UIView, UICollectionView, AVTEdgeDisappearingCollectionViewLayout, AVTAvatarPickerDataSource, AVTImageStore, NSMutableDictionary, _AVTAvatarRecordImageProvider, AVTViewSessionProvider, AVTRenderingScope, AVTSimpleAvatarPickerHeaderView, NSString;

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker> {

	BOOL _allowEditing;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTAvatarPickerDelegate> avatarPickerDelegate;
	double _minimumInteritemSpacing;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTEdgeDisappearingCollectionViewLayout* _collectionViewLayout;
	AVTAvatarPickerDataSource* _dataSource;
	AVTImageStore* _imageStore;
	NSMutableDictionary* _itemsToTasksMap;
	id<AVTStickerTaskScheduler> _taskScheduler;
	_AVTAvatarRecordImageProvider* _imageProvider;
	AVTViewSessionProvider* _viewSessionProvider;
	AVTRenderingScope* _renderingScope;
	AVTSimpleAvatarPickerHeaderView* _headerView;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) UIView * view;                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) AVTEdgeDisappearingCollectionViewLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) AVTAvatarPickerDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AVTImageStore * imageStore;                                                  //@synthesize imageStore=_imageStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsToTasksMap;                                       //@synthesize itemsToTasksMap=_itemsToTasksMap - In the implementation block
@property (nonatomic,readonly) id<AVTStickerTaskScheduler> taskScheduler;                                 //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                             //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * viewSessionProvider;                              //@synthesize viewSessionProvider=_viewSessionProvider - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * renderingScope;                                        //@synthesize renderingScope=_renderingScope - In the implementation block
@property (assign,nonatomic,__weak) AVTSimpleAvatarPickerHeaderView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                           //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                                              //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                   //@synthesize contentInset=_contentInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarPickerDelegate> avatarPickerDelegate; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(AVTSimpleAvatarPickerHeaderView *)headerView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setHeaderView:(AVTSimpleAvatarPickerHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)contentInset;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIView *)view;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setImageStore:(AVTImageStore *)arg1 ;
-(void)setDataSource:(AVTAvatarPickerDataSource *)arg1 ;
-(BOOL)allowEditing;
-(id)initWithDataSource:(id)arg1 recordImageProvider:(id)arg2 taskScheduler:(id)arg3 allowEditing:(BOOL)arg4 ;
-(BOOL)shouldShowHeaderButton;
-(long long)indexForSelectedAvatar;
-(id)selectedAvatar;
-(void)presentActionsForAvatarRecord:(id)arg1 ;
-(void)presentMemojiEditorForCreation;
-(id)actionsModelForRecord:(id)arg1 ;
-(void)headerViewButtonPressed;
-(void)updateHeaderButtonForSelectedAvatar:(id)arg1 invalidateLayout:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)cancelCurrentRenderingTaskForRecordItem:(id)arg1 ;
-(void)unregisterCurrentRenderingTaskForRecordItem:(id)arg1 ;
-(void)scheduleRenderingTask:(/*^block*/id)arg1 forRecordItem:(id)arg2 ;
-(id)currentCellForRecordItem:(id)arg1 atIndexPath:(id)arg2 displaySessionUUID:(id)arg3 previousCell:(id)arg4 ;
-(void)deselectPreviousSelectedItemExcludingIndexPath:(id)arg1 ;
-(BOOL)isItemAtIndexPathOffscreen:(id)arg1 ;
-(void)registerRenderingTask:(/*^block*/id)arg1 forRecordItem:(id)arg2 ;
-(NSMutableDictionary *)itemsToTasksMap;
-(/*^block*/id)currentRenderingTaskForRecordItem:(id)arg1 ;
-(id)initWithStore:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(void)setAllowEditing:(BOOL)arg1 ;
-(id)viewForAddItem;
-(void)setItemsToTasksMap:(NSMutableDictionary *)arg1 ;
-(void)presentActionsForAvatarForPPT:(id)arg1 ;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(id<AVTAvatarPickerDelegate>)avatarPickerDelegate;
-(id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg1 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarPickerDelegate:(id<AVTAvatarPickerDelegate>)arg1 ;
-(void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(AVTAvatarPickerDataSource *)dataSource;
-(AVTViewSessionProvider *)viewSessionProvider;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)reloadDataSource;
-(id<AVTStickerTaskScheduler>)taskScheduler;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)setCollectionViewLayout:(AVTEdgeDisappearingCollectionViewLayout *)arg1 ;
-(CGSize)itemSize;
-(AVTEdgeDisappearingCollectionViewLayout *)collectionViewLayout;
-(void)reloadData;
-(void)loadView;
-(double)minimumInteritemSpacing;
-(BOOL)canCreateAvatar;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(AVTImageStore *)imageStore;
-(AVTRenderingScope *)renderingScope;
@end
