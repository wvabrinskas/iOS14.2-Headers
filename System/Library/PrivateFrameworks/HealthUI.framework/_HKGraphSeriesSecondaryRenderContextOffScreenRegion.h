/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface _HKGraphSeriesSecondaryRenderContextOffScreenRegion : NSObject {

	double _start;
	double _end;
	UIColor* _color;

}

@property (assign,nonatomic) double start;                 //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                   //@synthesize end=_end - In the implementation block
@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
-(double)end;
-(double)start;
-(void)setStart:(double)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setEnd:(double)arg1 ;
-(UIColor *)color;
@end
