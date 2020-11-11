/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, NSArray, UIImage, NSAttributedString;

@interface WATodayHourlyForecastView : UIView {

	UIVisualEffectView* _temperatureLabelVisualEffectView;
	UIVisualEffectView* _timeLabelVisualEffectView;
	UILabel* _temperatureLabel;
	UILabel* _timeLabel;
	UIImageView* _conditionsImageView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * temperatureLabelVisualEffectView;              //@synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * timeLabelVisualEffectView;                     //@synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                         //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                                  //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImage * conditionsImage; 
@property (nonatomic,copy) NSAttributedString * temperature; 
@property (nonatomic,copy) NSAttributedString * time; 
-(void)_setupConstraints;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(NSArray *)constraints;
-(UILabel *)timeLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTemperature:(NSAttributedString *)arg1 ;
-(NSAttributedString *)temperature;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(void)setTemperatureLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)temperatureLabelVisualEffectView;
-(UIVisualEffectView *)timeLabelVisualEffectView;
-(void)setTimeLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTime:(NSAttributedString *)arg1 ;
-(NSAttributedString *)time;
-(void)applyVibrancyToTimeWithEffect:(id)arg1 ;
-(UIImageView *)conditionsImageView;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(UILabel *)temperatureLabel;
-(UIImage *)conditionsImage;
@end
