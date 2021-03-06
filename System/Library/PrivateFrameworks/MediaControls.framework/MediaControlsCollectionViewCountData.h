/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaControls/MediaControls-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSIndexSet;

@interface MediaControlsCollectionViewCountData : NSObject <NSCopying> {

	NSMutableIndexSet* _insertedIndexes;
	NSMutableIndexSet* _deletedIndexes;
	NSMutableIndexSet* _updatedIndexes;
	BOOL _hasPendingChanges;
	long long _numberOfItems;

}

@property (assign,nonatomic) long long numberOfItems;                          //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) BOOL hasPendingChanges;                           //@synthesize hasPendingChanges=_hasPendingChanges - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * updatedIndexes; 
-(NSIndexSet *)updatedIndexes;
-(id)init;
-(long long)numberOfItems;
-(void)deleteItemsAtIndexes:(id)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(void)reloadItemAtIndex:(long long)arg1 ;
-(void)insertItemAtIndex:(long long)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(NSIndexSet *)deletedIndexes;
-(void)setHasPendingChanges:(BOOL)arg1 ;
-(id)initWithNumberOfItems:(long long)arg1 ;
-(void)applyChanges;
-(BOOL)validateCountForNumberOfItems:(long long)arg1 ;
-(void)moveItemAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)deleteItemAtIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

