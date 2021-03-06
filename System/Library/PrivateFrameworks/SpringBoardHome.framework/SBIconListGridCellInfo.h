/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBIconListGridCellInfo : NSObject <NSCopying, BSDescriptionProviding> {

	unsigned short _indexes[128];
	unsigned short* _extraGridCellIndexes;
	unsigned long long _extraGridCellIndexesSize;
	unsigned short* _extraIconIndexes;
	unsigned long long _extraIconIndexesSize;
	SBHIconGridSize _gridSize;
	unsigned long long _numberOfUsedRows;
	unsigned long long _numberOfUsedColumns;

}

@property (assign,nonatomic) SBHIconGridSize gridSize;                                         //@synthesize gridSize=_gridSize - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfUsedRows;                              //@synthesize numberOfUsedRows=_numberOfUsedRows - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfUsedColumns;                           //@synthesize numberOfUsedColumns=_numberOfUsedColumns - In the implementation block
@property (getter=isLayoutOutOfBounds,nonatomic,readonly) BOOL layoutOutOfBounds; 
@property (nonatomic,copy,readonly) NSString * layoutDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)layoutDescription;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)numberOfUsedColumns;
-(unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUsedRows;
-(SBHIconGridSize)gridSize;
-(NSString *)description;
-(void)addEmptyRows:(unsigned long long)arg1 ;
-(SBIconCoordinate)coordinateForGridCellIndex:(unsigned long long)arg1 ;
-(unsigned long long)gridCellIndexForCoordinate:(SBIconCoordinate)arg1 ;
-(void)clearAllIconAndGridCellIndexes;
-(void)setNumberOfUsedRows:(unsigned long long)arg1 ;
-(void)setIconIndex:(unsigned long long)arg1 forGridCellIndex:(unsigned long long)arg2 ;
-(void)setGridCellIndex:(unsigned long long)arg1 forIconIndex:(unsigned long long)arg2 ;
-(void)addEmptyColumns:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)arg1 columnRange:(NSRange)arg2 ;
-(unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)arg1 rowRange:(NSRange)arg2 ;
-(SBHIconGridRange)gridRangeForGridCellIndex:(unsigned long long)arg1 ;
-(BOOL)isOutOfBoundsAtIconIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)arg1 ;
-(unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)arg1 ;
-(BOOL)isLayoutOutOfBounds;
-(unsigned long long)maxGridCellIndexForIconIndex:(unsigned long long)arg1 ;
-(SBHIconGridSize)gridSizeForGridCellIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfOutOfBoundsIconInRange:(NSRange)arg1 ;
-(void)setGridSize:(SBHIconGridSize)arg1 ;
-(void)setNumberOfUsedColumns:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)iconIndexForGridCellIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

