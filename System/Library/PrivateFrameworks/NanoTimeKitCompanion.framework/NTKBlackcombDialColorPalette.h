/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIColor;

@interface NTKBlackcombDialColorPalette : NSObject {

	UIColor* _backgroundColor;
	UIColor* _hourMarkerColor;
	UIColor* _smallTickColor;
	UIColor* _largeTickColor;
	UIColor* _largeHandsColor;
	UIColor* _secondHandColor;
	unsigned long long _color;

}

@property (nonatomic,readonly) unsigned long long color;                         //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * hourMarkerColor; 
@property (nonatomic,readonly) UIColor * smallTickColor; 
@property (nonatomic,readonly) UIColor * largeTickColor; 
@property (nonatomic,readonly) long long richComplicationViewTheme; 
@property (nonatomic,readonly) UIColor * platterTextColor; 
+(id)paletteForColor:(unsigned long long)arg1 ;
-(UIColor *)backgroundColor;
-(id)initWithColor:(unsigned long long)arg1 ;
-(unsigned long long)color;
-(UIColor *)platterTextColor;
-(UIColor *)smallTickColor;
-(UIColor *)largeTickColor;
-(UIColor *)hourMarkerColor;
-(long long)richComplicationViewTheme;
@end

