/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMaterial/CoreMaterial-Structs.h>
@interface MTColor : NSObject {

	CGColorRef _cachedColor;

}
+(id)colorWithWhite:(double)arg1 alpha:(double)arg2 ;
+(id)colorWithDescription:(id)arg1 ;
+(id)blackColor;
+(id)pinkColor;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)whiteColor;
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_rgbColor;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(void)dealloc;
-(id)colorDescription;
@end

