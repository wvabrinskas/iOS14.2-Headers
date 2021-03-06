/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularOpenGaugeContentView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularOpenGaugeImageView : NTKRichComplicationCircularOpenGaugeContentView {

	NTKRichComplicationImageView* _bottomImageView;

}

@property (nonatomic,retain) NTKRichComplicationImageView * bottomImageView;              //@synthesize bottomImageView=_bottomImageView - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(id)bottomView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(NTKRichComplicationImageView *)bottomImageView;
-(void)gaugeProvider:(id*)arg1 andCenterTextProvider:(id*)arg2 fromTemplate:(id)arg3 ;
-(void)setBottomImageView:(NTKRichComplicationImageView *)arg1 ;
@end

