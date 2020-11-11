/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NTKZeudleComplicationDisplay <NSObject>
@property (assign,nonatomic) unsigned long long style; 
@property (nonatomic,readonly) id<NTKZeudleColorPalette> palette; 
@property (assign,nonatomic) BOOL legibilityEnabled; 
@required
-(id<NTKZeudleColorPalette>)palette;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1;
-(id)initWithBackgroundView:(id)arg1;
-(void)applyPalette:(id)arg1;
-(void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1;

@end
