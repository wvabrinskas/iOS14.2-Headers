/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class NSNumber, CIImage, NSDictionary;

@interface CIDisparityRefinementV3 : CIFilter {

	NSNumber* inputScale;
	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputDraftMode;

}

@property (copy) NSNumber * inputScale; 
@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMainImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMainImage;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(void)setInputMainImage:(CIImage *)arg1 ;
-(id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2 ;
@end
