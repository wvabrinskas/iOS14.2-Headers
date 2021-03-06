/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class WAAQIScale, UIImageView;

@interface WAAQIScaleView : UIView {

	WAAQIScale* _scale;
	unsigned long long _AQI;
	double _aqiPercentageInRange;
	UIImageView* _thumbImageView;

}

@property (assign,nonatomic) double aqiPercentageInRange;               //@synthesize aqiPercentageInRange=_aqiPercentageInRange - In the implementation block
@property (nonatomic,retain) UIImageView * thumbImageView;              //@synthesize thumbImageView=_thumbImageView - In the implementation block
@property (nonatomic,retain) WAAQIScale * scale;                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long AQI;                    //@synthesize AQI=_AQI - In the implementation block
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setAqiPercentageInRange:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)AQI;
-(void)drawRect:(CGRect)arg1 ;
-(void)setThumbImageView:(UIImageView *)arg1 ;
-(void)setScale:(WAAQIScale *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 ;
-(unsigned long long)sanitizedAQI:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)thumbImageView;
-(void)setAQI:(unsigned long long)arg1 ;
-(double)aqiPercentageInRange;
-(void)updateThumbImage;
-(WAAQIScale *)scale;
@end

