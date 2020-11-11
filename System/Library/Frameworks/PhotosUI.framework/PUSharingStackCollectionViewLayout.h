/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUSharingStackCollectionViewLayoutDelegate;
@class NSArray;

@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout {

	id<PUSharingStackCollectionViewLayoutDelegate> _delegate;
	NSArray* _stackedItemsLayoutAttributes;

}

@property (nonatomic,copy,readonly) NSArray * stackedItemsLayoutAttributes;                               //@synthesize stackedItemsLayoutAttributes=_stackedItemsLayoutAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<PUSharingStackCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id<PUSharingStackCollectionViewLayoutDelegate>)delegate;
-(void)setDelegate:(id<PUSharingStackCollectionViewLayoutDelegate>)arg1 ;
-(id)_layoutItemInputAtIndexPath:(id)arg1 ;
-(NSArray *)stackedItemsLayoutAttributes;
@end
