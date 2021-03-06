/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CEKAbstractSlider <NSObject>
@property (assign,nonatomic) long long sliderVerticalAlignment; 
@property (assign,nonatomic) double sliderVerticalOffset; 
@property (assign,nonatomic) double labelVerticalPadding; 
@property (assign,nonatomic) BOOL useLegibilityShadows; 
@property (assign,nonatomic) BOOL useTickMarkLegibilityShadows; 
@property (assign,nonatomic) long long textOrientation; 
@property (assign,nonatomic) long long titleAlignment; 
@property (assign,nonatomic) CGPoint gradientInsets; 
@property (assign,nonatomic) unsigned long long fontStyle; 
@required
-(void)setUseLegibilityShadows:(BOOL)arg1;
-(void)setUseTickMarkLegibilityShadows:(BOOL)arg1;
-(unsigned long long)fontStyle;
-(void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2;
-(long long)titleAlignment;
-(void)setLabelVerticalPadding:(double)arg1;
-(void)setTransparentGradients;
-(void)setTitleAlignment:(long long)arg1;
-(void)setFontStyle:(unsigned long long)arg1;
-(void)setSliderVerticalAlignment:(long long)arg1;
-(void)setSliderVerticalOffset:(double)arg1;
-(void)setGradientInsets:(CGPoint)arg1;
-(void)setOpaqueGradientsWithColor:(id)arg1;
-(void)removeGradients;
-(void)setTextOrientation:(long long)arg1;
-(BOOL)useTickMarkLegibilityShadows;
-(long long)textOrientation;
-(double)labelVerticalPadding;
-(long long)sliderVerticalAlignment;
-(double)sliderVerticalOffset;
-(CGPoint)gradientInsets;
-(BOOL)useLegibilityShadows;

@end

