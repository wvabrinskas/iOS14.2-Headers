/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

@interface _UIUpdateVisibleCellsContext : NSObject {

	NSMutableArray* _sizes;
	NSMutableArray* _attributes;
	NSMutableArray* _indexPaths;
	NSMutableIndexSet* _sectionIndexes;
	long long _visibleCellsRefCount;

}

@property (nonatomic,readonly) NSArray * sizes;                           //@synthesize sizes=_sizes - In the implementation block
@property (nonatomic,readonly) NSArray * indexPaths;                      //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,readonly) NSIndexSet * sectionIndexes; 
@property (nonatomic,readonly) BOOL hasLeftVisibleCellsPass; 
@property (nonatomic,readonly) NSArray * attributes; 
-(NSArray *)sizes;
-(BOOL)shouldInvalidate;
-(NSArray *)indexPaths;
-(id)init;
-(BOOL)hasLeftVisibleCellsPass;
-(void)didEnterVisibleCellsPass;
-(NSIndexSet *)sectionIndexes;
-(id)description;
-(void)didLeaveVisibleCellsPass;
-(void)addPreferredAttributes:(id)arg1 ;
-(NSArray *)attributes;
@end

