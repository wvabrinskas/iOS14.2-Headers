/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface _UIDragBadge : UIView {

	UILabel* _label;
	UIImageView* _imageView;
	long long _style;
	long long _itemCount;

}

@property (nonatomic,readonly) UILabel * _label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * _imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long itemCount;                            //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPointForAlignment; 
-(UIImageView *)_imageView;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)_label;
-(void)_updateForStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(CGPoint)anchorPointForAlignment;
-(void)_updateLabelTextFromItemCount;
-(void)layoutSubviews;
-(long long)style;
-(id)initWithCoder:(id)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(long long)itemCount;
-(void)setStyle:(long long)arg1 ;
@end
