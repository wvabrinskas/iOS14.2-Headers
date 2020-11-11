/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface JTCollectionView : UICollectionView {

	BOOL _inLayout;
	CGSize _lastCollectionViewSize;

}

@property (assign,nonatomic) CGSize lastCollectionViewSize;              //@synthesize lastCollectionViewSize=_lastCollectionViewSize - In the implementation block
@property (assign,nonatomic) BOOL inLayout;                              //@synthesize inLayout=_inLayout - In the implementation block
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(void)layoutSubviews;
-(long long)selectedItem;
-(void)layoutIfNeeded;
-(id)firstVisibleIndexPath;
-(void)setInLayout:(BOOL)arg1 ;
-(CGSize)lastCollectionViewSize;
-(void)setLastCollectionViewSize:(CGSize)arg1 ;
-(id)sortedIndexPathsForVisibleItems;
-(BOOL)inLayout;
-(id)visibleSections;
@end
