/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImage, UIView;

@interface LPAnimationMaskView : UIView {

	UIImage* _image;
	long long _animationOrigin;
	UIView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long animationOrigin;                //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (nonatomic,retain,readonly) UIView * imageView; 
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(UIView *)imageView;
-(void)setAnimationOrigin:(long long)arg1 ;
-(long long)animationOrigin;
@end
