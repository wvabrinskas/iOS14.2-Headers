/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIColor;


@protocol PXMutableBarAppearance <NSObject>
@property (assign,nonatomic) BOOL prefersStatusBarVisible; 
@property (assign,nonatomic) long long barAppearancePreferredStatusBarStyle; 
@property (assign,nonatomic) BOOL prefersNavigationBarVisible; 
@property (assign,nonatomic) BOOL prefersToolbarVisible; 
@property (assign,nonatomic) BOOL prefersTabBarVisible; 
@property (nonatomic,copy) UIColor * navigationBarTintColor; 
@required
-(BOOL)prefersNavigationBarVisible;
-(BOOL)prefersToolbarVisible;
-(BOOL)prefersTabBarVisible;
-(void)setNavigationBarTintColor:(id)arg1;
-(BOOL)prefersStatusBarVisible;
-(long long)barAppearancePreferredStatusBarStyle;
-(void)setBarAppearancePreferredStatusBarStyle:(long long)arg1;
-(UIColor *)navigationBarTintColor;
-(void)setPrefersStatusBarVisible:(BOOL)arg1;
-(void)setPrefersNavigationBarVisible:(BOOL)arg1;
-(void)setPrefersToolbarVisible:(BOOL)arg1;
-(void)setPrefersTabBarVisible:(BOOL)arg1;

@end
