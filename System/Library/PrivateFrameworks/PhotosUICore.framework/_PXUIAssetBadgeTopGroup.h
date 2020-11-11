/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIView, UIImageView, UILabel, PXUIButton;

@interface _PXUIAssetBadgeTopGroup : NSObject {

	UIView* _backgroundView;
	UIImageView* _imageView;
	UILabel* _label;
	PXUIButton* _button;
	PXAssetBadgeInfo _badgeInfo;
	CGRect _frame;
	CGRect _imageFrame;
	CGRect _labelFrame;
	CGRect _buttonFrame;

}

@property (nonatomic,retain) UIView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PXUIButton * button;                     //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) PXAssetBadgeInfo badgeInfo;              //@synthesize badgeInfo=_badgeInfo - In the implementation block
@property (assign,nonatomic) CGRect frame;                            //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                       //@synthesize imageFrame=_imageFrame - In the implementation block
@property (assign,nonatomic) CGRect labelFrame;                       //@synthesize labelFrame=_labelFrame - In the implementation block
@property (assign,nonatomic) CGRect buttonFrame;                      //@synthesize buttonFrame=_buttonFrame - In the implementation block
-(PXUIButton *)button;
-(PXAssetBadgeInfo)badgeInfo;
-(void)setBadgeInfo:(PXAssetBadgeInfo)arg1 ;
-(UILabel *)label;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)labelFrame;
-(void)setButton:(PXUIButton *)arg1 ;
-(CGRect)buttonFrame;
-(void)setLabelFrame:(CGRect)arg1 ;
-(void)setImageFrame:(CGRect)arg1 ;
-(void)setButtonFrame:(CGRect)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(CGRect)imageFrame;
-(CGRect)frame;
-(void)setLabel:(UILabel *)arg1 ;
@end
