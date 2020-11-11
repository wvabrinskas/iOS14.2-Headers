/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView {

	NTKColoringLabel* _centerLabel;
	NTKRichComplicationRingProgressView* _progressView;

}

@property (nonatomic,retain) NTKColoringLabel * centerLabel;                                  //@synthesize centerLabel=_centerLabel - In the implementation block
@property (nonatomic,retain) NTKRichComplicationRingProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(void)setProgressView:(NTKRichComplicationRingProgressView *)arg1 ;
-(void)layoutSubviews;
-(NTKRichComplicationRingProgressView *)progressView;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)initWithFamily:(long long)arg1 ;
-(void)_editingDidEnd;
-(NTKColoringLabel *)centerLabel;
-(void)setCenterLabel:(NTKColoringLabel *)arg1 ;
@end
