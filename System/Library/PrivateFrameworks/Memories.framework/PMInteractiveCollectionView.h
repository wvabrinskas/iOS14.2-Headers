/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionView.h>

@interface PMInteractiveCollectionView : UICollectionView {

	BOOL _supportsReordering;
	BOOL _checkedSupportsReordering;

}

@property (nonatomic,readonly) BOOL supportsReordering;                                   //@synthesize supportsReordering=_supportsReordering - In the implementation block
@property (assign,nonatomic) BOOL checkedSupportsReordering;                              //@synthesize checkedSupportsReordering=_checkedSupportsReordering - In the implementation block
@property (assign,nonatomic,__weak) id<MiroCollectionViewDelegate> delegate; 
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
-(BOOL)supportsReordering;
-(BOOL)checkedSupportsReordering;
-(void)setCheckedSupportsReordering:(BOOL)arg1 ;
@end

