/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface VUICollectionViewCell : UICollectionViewCell {

	UIView* _childView;

}

@property (nonatomic,retain) UIView * childView;              //@synthesize childView=_childView - In the implementation block
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setChildView:(UIView *)arg1 ;
-(UIView *)childView;
@end

