/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIGraphicsImageRenderer;

@interface _HKGraphViewOverlayView : UIImageView {

	UIGraphicsImageRenderer* _imageRenderer;

}

@property (nonatomic,retain) UIGraphicsImageRenderer * imageRenderer;              //@synthesize imageRenderer=_imageRenderer - In the implementation block
-(UIGraphicsImageRenderer *)imageRenderer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageRenderer:(UIGraphicsImageRenderer *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawContentUsingBlock:(/*^block*/id)arg1 ;
-(void)_updateRendererSize:(CGSize)arg1 ;
@end

