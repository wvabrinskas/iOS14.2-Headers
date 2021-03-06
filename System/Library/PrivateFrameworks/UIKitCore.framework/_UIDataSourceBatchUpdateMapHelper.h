/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _UIDataSourceSnapshotter, NSArray, NSMutableIndexSet;

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {

	_UIDataSourceSnapshotter* _initialSnapshot;
	_UIDataSourceSnapshotter* _finalSnapshot;
	NSArray* _updateItems;
	NSMutableIndexSet* _movedItems;
	NSMutableIndexSet* _movedSections;
	NSMutableIndexSet* _deletedSections;
	NSMutableIndexSet* _insertedSections;
	long long* _oldSectionMap;
	long long* _newSectionMap;
	long long* _oldGlobalItemMap;
	long long* _newGlobalItemMap;

}
-(long long)finalSectionIndexForInitialSectionIndex:(long long)arg1 ;
-(long long)initialSectionIndexForFinalSectionIndex:(long long)arg1 ;
-(void)_computeItemUpdates;
-(long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1 ;
-(void)_computeSectionUpdates;
-(id)finalIndexPathForInitialIndexPath:(id)arg1 ;
-(id)description;
-(id)initialIndexPathForFinalIndexPath:(id)arg1 ;
-(id)initWithInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2 updates:(id)arg3 ;
-(long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1 ;
-(void)dealloc;
@end

