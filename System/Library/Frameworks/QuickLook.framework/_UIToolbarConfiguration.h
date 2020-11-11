/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject <NSCopying> {

	BOOL _translucent;
	long long _barStyle;
	UIImage* _shadowImage;
	UIImage* _backgroundImage;
	UIColor* _backgroundColor;
	UIColor* _barTintColor;

}

@property (assign,nonatomic) long long barStyle;                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                              //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                             //@synthesize barTintColor=_barTintColor - In the implementation block
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UIColor *)barTintColor;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(BOOL)isTranslucent;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowImage:(UIImage *)arg1 ;
@end
