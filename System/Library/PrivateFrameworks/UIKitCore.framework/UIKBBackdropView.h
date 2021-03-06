/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@class UIImage;

@interface UIKBBackdropView : UIVisualEffectView {

	UIImage* _imageForCorners;

}

@property (nonatomic,retain) UIImage * imageForCorners;              //@synthesize imageForCorners=_imageForCorners - In the implementation block
-(void)_setRenderConfig:(id)arg1 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(unsigned long long)arg2 ;
-(int)textEffectsVisibilityLevel;
-(void)transitionToStyle:(long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(BOOL)_applyCornerMaskToSelf;
-(UIImage *)imageForCorners;
-(id)_generateCornerContentsImage:(unsigned long long)arg1 ;
-(void)setImageForCorners:(UIImage *)arg1 ;
-(void)dealloc;
@end

