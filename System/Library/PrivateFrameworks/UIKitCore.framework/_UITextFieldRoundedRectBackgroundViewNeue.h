/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView {

	SCD_Struct_UI62 _flags;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _lineWidth;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL usesSinglePixelLineWidth; 
@property (nonatomic,retain) UIColor * strokeColor;                      //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                           //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                        //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleCornerRadius; 
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(UIColor *)fillColor;
-(void)updateView;
-(id)_fillColor:(BOOL)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(double)_cornerRadiusAdjustedForBoundsHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)setUsesSinglePixelLineWidth:(BOOL)arg1 ;
-(BOOL)usesSinglePixelLineWidth;
-(double)cornerRadius;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasFlexibleCornerRadius;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setHasFlexibleCornerRadius:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 active:(BOOL)arg2 usesSinglePixelLineWidth:(BOOL)arg3 updateView:(BOOL)arg4 ;
-(double)_screenScale;
@end

