/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXUnitConverter, UIColor;

@interface SXDataTableBorder : SXJSONObject {

	double _width;
	SXUnitConverter* unitConverter;

}

@property (nonatomic,readonly) SXConvertibleValue actualWidth; 
@property (nonatomic,readonly) double width;                                //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,retain) SXUnitConverter * unitConverter; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
-(UIColor *)color;
-(SXConvertibleValue)actualWidth;
-(double)width;
-(SXUnitConverter *)unitConverter;
-(void)setUnitConverter:(SXUnitConverter *)arg1 ;
@end

