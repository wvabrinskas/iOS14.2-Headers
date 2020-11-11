/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@interface PIApertureRedEyeProcessorKernel : CIImageProcessorKernel
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(int)outputFormat;
+(SCD_Struct_PI6)ROIForCenterPoint:(CGPoint)arg1 radius:(double)arg2 ;
+(void)convertFloat:(const float*)arg1 toFixed16:(unsigned short*)arg2 count:(unsigned long long)arg3 ;
+(void)convertFixed16:(const unsigned short*)arg1 toFloat:(float*)arg2 count:(unsigned long long)arg3 ;
@end
