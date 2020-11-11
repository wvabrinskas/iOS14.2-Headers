/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate> {

	NSString* _title;
	UIImage* _appIconImage;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * appIconImage;                    //@synthesize appIconImage=_appIconImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)preferredSize;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(NSString *)title;
-(void)prepareForReuse;
-(UIImage *)appIconImage;
-(void)configureWithTitle:(id)arg1 appIconImage:(id)arg2 ;
@end
