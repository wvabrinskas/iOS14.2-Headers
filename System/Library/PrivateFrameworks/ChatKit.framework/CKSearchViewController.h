/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/CKSearchResultsTitleHeaderCellDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>
#import <UIKit/UICollectionViewDragDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKSearchControllerDelegate.h>

@protocol CKContainerSearchControllerDelegate;
@class NSArray, NSString, CKSearchCollectionView, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, NSMutableSet, IMTimingCollection, UIContextMenuInteraction;

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, UIContextMenuInteractionDelegate, UICollectionViewDragDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate> {

	BOOL _insetCollectionViewForMacToolbar;
	BOOL _searchInProgress;
	BOOL _isInitialLoad;
	id<CKContainerSearchControllerDelegate> _delegate;
	unsigned long long _mode;
	NSArray* _searchControllers;
	NSString* _searchText;
	CKSearchCollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	UICollectionViewCompositionalLayout* _collectionViewLayout;
	/*^block*/id _performAfterInitialLoadBlock;
	NSMutableSet* _searchCompleteControllerSet;
	IMTimingCollection* _timingCollection;
	UIContextMenuInteraction* _contextMenuInteraction;

}

@property (nonatomic,retain) NSArray * searchControllers;                                             //@synthesize searchControllers=_searchControllers - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL searchInProgress;                                                   //@synthesize searchInProgress=_searchInProgress - In the implementation block
@property (nonatomic,retain) CKSearchCollectionView * collectionView;                                 //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) BOOL isInitialLoad;                                                      //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (nonatomic,copy) id performAfterInitialLoadBlock;                                           //@synthesize performAfterInitialLoadBlock=_performAfterInitialLoadBlock - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchCompleteControllerSet;                              //@synthesize searchCompleteControllerSet=_searchCompleteControllerSet - In the implementation block
@property (nonatomic,retain) IMTimingCollection * timingCollection;                                   //@synthesize timingCollection=_timingCollection - In the implementation block
@property (nonatomic,retain) UIContextMenuInteraction * contextMenuInteraction;                       //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (assign,nonatomic,__weak) id<CKContainerSearchControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL insetCollectionViewForMacToolbar;                                   //@synthesize insetCollectionViewForMacToolbar=_insetCollectionViewForMacToolbar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(BOOL)isInitialLoad;
-(id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(id<CKContainerSearchControllerDelegate>)delegate;
-(void)setInsetCollectionViewForMacToolbar:(BOOL)arg1 ;
-(void)searchWithText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setContextMenuInteraction:(UIContextMenuInteraction *)arg1 ;
-(void)setTimingCollection:(IMTimingCollection *)arg1 ;
-(IMTimingCollection *)timingCollection;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2 ;
-(void)deleteTransferGUID:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)mode;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searchControllerContentsDidChange:(id)arg1 ;
-(void)deleteMessageItem:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithSearchControllerClasses:(id)arg1 ;
-(BOOL)conversationSearchHasResult;
-(double)widthForDeterminingAvatarVisibility;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(id)scrollView;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(void)setDelegate:(id<CKContainerSearchControllerDelegate>)arg1 ;
-(void)findNext;
-(UICollectionViewDiffableDataSource *)dataSource;
-(NSString *)searchText;
-(id)containerTraitCollectionForController:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)parentMarginInsetsForSearchController:(id)arg1 ;
-(void)cancelCurrentQuery;
-(void)searchEnded;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(NSArray *)searchControllers;
-(void)setSearchControllers:(NSArray *)arg1 ;
-(void)_searchImmediately;
-(id)layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)setSearchInProgress:(BOOL)arg1 ;
-(id)globalLayoutConfiguration;
-(void)reloadData;
-(NSMutableSet *)searchCompleteControllerSet;
-(id)_identifiersToAppendForResults:(id)arg1 ;
-(Class)_searchResultsHeaderClass;
-(BOOL)_needsIndexing;
-(void)_configureIndexingCell:(id)arg1 ;
-(void)_searchResultHeaderButtonTapped:(id)arg1 ;
-(id)_newSnapshotForCurrentControllerState;
-(id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2 ;
-(void)loadView;
-(void)_registerCells;
-(id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2 ;
-(void)setSearchCompleteControllerSet:(NSMutableSet *)arg1 ;
-(id)performAfterInitialLoadBlock;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementryViewKind:(id)arg3 ;
-(BOOL)insetCollectionViewForMacToolbar;
-(void)setPerformAfterInitialLoadBlock:(id)arg1 ;
-(id)_layoutSectionForController:(id)arg1 withEnvironment:(id)arg2 ;
-(BOOL)searchInProgress;
-(BOOL)_hasSelectedItemAtIndexPath:(id*)arg1 ;
-(void)findPrevious;
-(long long)rowIndexFindNextForIndex:(long long)arg1 numberOfTotalItems:(long long)arg2 ;
-(void)_selectItemForFindAtIndexPath:(id)arg1 ;
-(long long)rowIndexFindPreviousForIndex:(long long)arg1 numberOfTotalItems:(long long)arg2 ;
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3 ;
-(void)searchResultsTitleCellShowAllButtonTapped:(id)arg1 ;
-(CKSearchCollectionView *)collectionView;
-(void)setSearchText:(NSString *)arg1 ;
-(BOOL)_isInternalInstall;
-(void)setCollectionView:(CKSearchCollectionView *)arg1 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(void)dealloc;
-(double)containerWidthForController:(id)arg1 ;
-(BOOL)_currentModeIsDetails;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3 ;
@end
