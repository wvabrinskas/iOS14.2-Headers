/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularLargeHeadlineBaseView.h>

@class NTKColoringLabel, NTKRichComplicationLineProgressView;

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularLargeHeadlineBaseView {

	NTKColoringLabel* _bodyLabel;
	NTKRichComplicationLineProgressView* _progressView;

}

@property (nonatomic,readonly) NTKColoringLabel * bodyLabel;                                    //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,readonly) NTKRichComplicationLineProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(long long)progressFillStyle;
+(BOOL)isMeteredProgressView;
-(id)init;
-(void)layoutSubviews;
-(NTKColoringLabel *)bodyLabel;
-(NTKRichComplicationLineProgressView *)progressView;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(/*^block*/id)arg1 ;
-(void)_handleTemplateUpdateWithReason:(long long)arg1 headerViewData:(id)arg2 headerImageProvider:(id)arg3 headerTextProvider:(id)arg4 bodyTextProvider:(id)arg5 gaugeProvider:(id)arg6 ;
@end

