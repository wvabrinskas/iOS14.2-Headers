/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface CIPortraitAntialias : CIFilter {

	CIImage* inputImage;
	NSNumber* inputMaxBlurInPixels;
	NSNumber* inputAntiAliasRadius;
	NSNumber* inputLumaNoiseAmpl;
	NSNumber* inputLumaNoiseModelCoeff;
	NSNumber* inputScale;
	CIVector* inputRect;
	CIVector* inputSensorSize;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputMaxBlurInPixels; 
@property (nonatomic,copy) NSNumber * inputAntiAliasRadius; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseAmpl; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseModelCoeff; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) CIVector * inputRect; 
@property (nonatomic,copy) CIVector * inputSensorSize; 
-(NSNumber *)inputScale;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputLumaNoiseAmpl;
-(void)setInputLumaNoiseAmpl:(NSNumber *)arg1 ;
-(NSNumber *)inputLumaNoiseModelCoeff;
-(void)setInputLumaNoiseModelCoeff:(NSNumber *)arg1 ;
-(CIVector *)inputRect;
-(id)_kernel:(BOOL)arg1 withAddedNoise:(BOOL)arg2 ;
-(id)_noiseGeneratorKernel;
-(id)noiseColorKernel;
-(CIVector *)inputSensorSize;
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 ;
-(NSNumber *)inputMaxBlurInPixels;
-(void)setInputMaxBlurInPixels:(NSNumber *)arg1 ;
-(NSNumber *)inputAntiAliasRadius;
-(void)setInputRect:(CIVector *)arg1 ;
-(void)setInputAntiAliasRadius:(NSNumber *)arg1 ;
-(void)setInputSensorSize:(CIVector *)arg1 ;
@end

