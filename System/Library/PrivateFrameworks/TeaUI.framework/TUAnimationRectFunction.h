/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TeaUI/TeaUI-Structs.h>
@class CAMediaTimingFunction, TUAnimationPointFunction, TUAnimationSizeFunction;

@interface TUAnimationRectFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	double _speed;
	TUAnimationPointFunction* _originFunction;
	TUAnimationSizeFunction* _sizeFunction;
	CGRect _startValue;
	CGRect _endValue;

}

@property (nonatomic,retain) TUAnimationPointFunction * originFunction;              //@synthesize originFunction=_originFunction - In the implementation block
@property (nonatomic,retain) TUAnimationSizeFunction * sizeFunction;                 //@synthesize sizeFunction=_sizeFunction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                 //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) CGRect startValue;                                      //@synthesize startValue=_startValue - In the implementation block
@property (assign,nonatomic) CGRect endValue;                                        //@synthesize endValue=_endValue - In the implementation block
@property (assign,nonatomic) double speed;                                           //@synthesize speed=_speed - In the implementation block
-(double)speed;
-(void)setSizeFunction:(TUAnimationSizeFunction *)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)_reloadFunctions;
-(id)initWithTimingFunction:(id)arg1 startRect:(CGRect)arg2 endRect:(CGRect)arg3 speed:(double)arg4 ;
-(TUAnimationPointFunction *)originFunction;
-(void)setOriginFunction:(TUAnimationPointFunction *)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(CGRect)solveForTime:(double)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setStartValue:(CGRect)arg1 ;
-(void)setEndValue:(CGRect)arg1 ;
-(CGRect)endValue;
-(CGRect)startValue;
-(TUAnimationSizeFunction *)sizeFunction;
@end

