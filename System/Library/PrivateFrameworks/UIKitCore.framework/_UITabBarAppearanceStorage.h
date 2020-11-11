/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, UIColor, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {

	UIImage* backgroundImage;
	UIImage* shadowImage;
	UIImage* selectionIndicatorImage;
	UIColor* barTintColor;
	UIColor* selectedImageTintColor;
	_UITabBarItemAppearanceStorage* tabItemAppearanceStorage;
	UIColor* _unselectedImageTintColor;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,retain) UIImage * selectionIndicatorImage; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIColor * selectedImageTintColor; 
@property (nonatomic,retain) UIColor * unselectedImageTintColor;                                     //@synthesize unselectedImageTintColor=_unselectedImageTintColor - In the implementation block
@property (nonatomic,retain) _UITabBarItemAppearanceStorage * tabItemAppearanceStorage; 
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setTabItemAppearanceStorage:(_UITabBarItemAppearanceStorage *)arg1 ;
-(UIImage *)selectionIndicatorImage;
-(void)setSelectionIndicatorImage:(UIImage *)arg1 ;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setSelectedImageTintColor:(UIColor *)arg1 ;
-(id)_tabItemAppearanceStorage;
-(UIColor *)unselectedImageTintColor;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setUnselectedImageTintColor:(UIColor *)arg1 ;
-(UIColor *)selectedImageTintColor;
-(void)setShadowImage:(UIImage *)arg1 ;
-(_UITabBarItemAppearanceStorage *)tabItemAppearanceStorage;
@end
