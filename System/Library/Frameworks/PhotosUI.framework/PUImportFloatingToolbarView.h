/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIVisualEffectView, UIToolbar, UIView, NSArray;

@interface PUImportFloatingToolbarView : UIView {

	BOOL _shouldBlurBackground;
	NSString* _backdropViewGroupName;
	UIVisualEffectView* _visualEffectView;
	UIToolbar* _toolbar;
	UIView* _shadowView;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) BOOL shouldBlurBackground;                          //@synthesize shouldBlurBackground=_shouldBlurBackground - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                     //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
-(UIVisualEffectView *)visualEffectView;
-(void)_updateBackground;
-(CGSize)intrinsicContentSize;
-(UIToolbar *)toolbar;
-(id)init;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)sizeToFit;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
-(NSArray *)items;
-(NSString *)backdropViewGroupName;
-(void)setShouldBlurBackground:(BOOL)arg1 ;
-(void)_updateBackdropViewGroupName;
-(BOOL)shouldBlurBackground;
@end

