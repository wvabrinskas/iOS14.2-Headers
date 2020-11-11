/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXAutoScrollerDelegate.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <UIKit/UIMultiSelectInteractionDelegate.h>

@protocol PXSwipeSelectionManagerDelegate;
@class UIScrollView, PXSectionedSelectionManager, UIMultiSelectInteraction, PXIndexPathSet, PXUIAutoScroller, NSString;

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate> {

	SCD_Struct_PX38 _needsUpdateFlags;
	struct {
		BOOL respondsToItemIndexPathAtLocation;
		BOOL respondsToItemIndexPathClosestLeadingLocation;
		BOOL respondsToItemIndexPathClosestAboveLocation;
		BOOL respondsToShouldSelectItemAtIndexPath;
		BOOL respondsToShouldBeginSelectionAtLocation;
		BOOL respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint;
		BOOL respondsToAutomaticallyTransitionToMultiSelectMode;
		BOOL respondsToIndexPathSetFromIndexPathToIndexPath;
		BOOL respondsToDidAutoScroll;
	}  _delegateFlags;
	id<PXSwipeSelectionManagerDelegate> _delegate;
	unsigned long long _state;
	UIScrollView* _scrollView;
	PXSectionedSelectionManager* _selectionManager;
	UIMultiSelectInteraction* _multiSelectInteraction;
	unsigned long long __currentDataSourceIdentifier;
	PXIndexPathSet* __selectedIndexPathsBeforeSwipe;
	id __pausingChangesToken;
	PXUIAutoScroller* __autoScroller;
	PXSimpleIndexPath __startingIndexPath;
	PXSimpleIndexPath __currentIndexPath;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;                                                             //@synthesize state=_state - In the implementation block
@property (assign,setter=_setCurrentDataSourceIdentifier:,nonatomic) unsigned long long _currentDataSourceIdentifier;                //@synthesize _currentDataSourceIdentifier=__currentDataSourceIdentifier - In the implementation block
@property (assign,setter=_setStartingIndexPath:,nonatomic) PXSimpleIndexPath _startingIndexPath;                                     //@synthesize _startingIndexPath=__startingIndexPath - In the implementation block
@property (assign,setter=_setCurrentIndexPath:,nonatomic) PXSimpleIndexPath _currentIndexPath;                                       //@synthesize _currentIndexPath=__currentIndexPath - In the implementation block
@property (setter=_setSelectedIndexPathsBeforeSwipe:,nonatomic,retain) PXIndexPathSet * _selectedIndexPathsBeforeSwipe;              //@synthesize _selectedIndexPathsBeforeSwipe=__selectedIndexPathsBeforeSwipe - In the implementation block
@property (setter=_setPausingChangesToken:,nonatomic,retain) id _pausingChangesToken;                                                //@synthesize _pausingChangesToken=__pausingChangesToken - In the implementation block
@property (nonatomic,readonly) PXUIAutoScroller * _autoScroller;                                                                     //@synthesize _autoScroller=__autoScroller - In the implementation block
@property (assign,nonatomic,__weak) id<PXSwipeSelectionManagerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                                                       //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) UIMultiSelectInteraction * multiSelectInteraction;                                                    //@synthesize multiSelectInteraction=_multiSelectInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(BOOL)isInMultiSelectMode;
-(BOOL)_isSelecting;
-(PXIndexPathSet *)_selectedIndexPathsBeforeSwipe;
-(id)init;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(id<PXSwipeSelectionManagerDelegate>)delegate;
-(PXSimpleIndexPath)_itemIndexPathClosestAboveLocation:(CGPoint)arg1 ;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_updateSelectedIndexPaths;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(unsigned long long)_currentDataSourceIdentifier;
-(void)_setCurrentDataSourceIdentifier:(unsigned long long)arg1 ;
-(id)_pausingChangesToken;
-(unsigned long long)state;
-(PXSimpleIndexPath)_currentIndexPath;
-(UIScrollView *)scrollView;
-(void)setDelegate:(id<PXSwipeSelectionManagerDelegate>)arg1 ;
-(PXSimpleIndexPath)_itemIndexPathAtLocation:(CGPoint)arg1 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)_endSelection;
-(void)_updateWithDataSource:(id)arg1 changeHistory:(id)arg2 ;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)_setSelectedIndexPathsBeforeSwipe:(id)arg1 ;
-(PXUIAutoScroller *)_autoScroller;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateSelectionWithHitIndexPath:(PXSimpleIndexPath)arg1 leadingClosestIndexPath:(PXSimpleIndexPath)arg2 aboveClosestIndexPath:(PXSimpleIndexPath)arg3 ;
-(id)initWithSelectionManager:(id)arg1 scrollView:(id)arg2 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)_beginSelectionFromIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)_shouldBeginMultiSelectAtLocation:(CGPoint)arg1 ;
-(void)_setCurrentIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)_invalidateSelectedIndexPaths;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 ;
-(PXSimpleIndexPath)_itemIndexPathClosestLeadingLocation:(CGPoint)arg1 ;
-(void)_setStartingIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)autoScroller:(id)arg1 didAutoscrollWithTimestamp:(double)arg2 ;
-(void)_setPausingChangesToken:(id)arg1 ;
-(PXSimpleIndexPath)_startingIndexPath;
-(UIMultiSelectInteraction *)multiSelectInteraction;
@end
