/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKit/CLKComplicationTemplateGraphicExtraLargeCircular.h>

@class CLKGaugeProvider, CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKFullColorImageProvider* _bottomImageProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                             //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKFullColorImageProvider * bottomImageProvider;              //@synthesize bottomImageProvider=_bottomImageProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;                         //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
+(id)templateWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(CLKFullColorImageProvider *)bottomImageProvider;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(void)setBottomImageProvider:(CLKFullColorImageProvider *)arg1 ;
-(id)initWithGaugeProvider:(id)arg1 bottomImageProvider:(id)arg2 centerTextProvider:(id)arg3 ;
@end

