/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUSectionedTilingLayout.h>

@interface PUGridTilingLayout : PUSectionedTilingLayout {

	long long _numberOfColumns;
	CGSize _itemSize;
	CGSize _interItemSpacing;

}

@property (assign,nonatomic) CGSize itemSize;                      //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;              //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
-(void)prepareLayout;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(id)init;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)interItemSpacing;
-(CGSize)estimatedSectionSize;
-(CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(id)preferredScrollInfo;
-(void)setVisibleRect:(CGRect)arg1 ;
-(CGSize)itemSize;
-(void)addLayoutInfosForTilesInRect:(CGRect)arg1 section:(long long)arg2 toSet:(id)arg3 ;
-(id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2 ;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 ;
-(long long)_numberOfColumns;
@end

