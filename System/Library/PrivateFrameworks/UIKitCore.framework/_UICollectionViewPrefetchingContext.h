/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSArray, NSMutableOrderedSet, NSMutableDictionary, NSObject;

@interface _UICollectionViewPrefetchingContext : NSObject {

	NSArray* _remainingIndexPaths;
	NSMutableOrderedSet* _items;
	NSMutableDictionary* _itemsDict;
	NSObject*<OS_dispatch_queue> _dataAccessQueue;

}

@property (nonatomic,retain) NSArray * remainingIndexPaths;                             //@synthesize remainingIndexPaths=_remainingIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsDict;                           //@synthesize itemsDict=_itemsDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataAccessQueue;              //@synthesize dataAccessQueue=_dataAccessQueue - In the implementation block
+(id)prefetchingContextWithItems:(id)arg1 ;
-(id)peekNextItem;
-(void)setDataAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setItems:(NSMutableOrderedSet *)arg1 ;
-(id)popNextItem;
-(void)_invalidateRemainingIndexPaths;
-(BOOL)hasRemainingItems;
-(NSArray *)remainingIndexPaths;
-(void)setRemainingIndexPaths:(NSArray *)arg1 ;
-(NSMutableOrderedSet *)items;
-(id)initWithPrefetchItems:(id)arg1 ;
-(NSMutableDictionary *)itemsDict;
-(NSObject*<OS_dispatch_queue>)dataAccessQueue;
-(id)_items;
-(void)setItemsDict:(NSMutableDictionary *)arg1 ;
-(void)prefetchCompleteForItemAtIndexPath:(id)arg1 ;
@end

