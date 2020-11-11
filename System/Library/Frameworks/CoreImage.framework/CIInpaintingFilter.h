/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSArray, NSNumber, InpaintingExecutionContext;

@interface CIInpaintingFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputMaskImage;
	CIVector* inputMaskBoundingBox;
	NSArray* inputFaceBoundingBoxes;
	NSArray* inputInpaintingProcessingResolutions;
	NSNumber* inputInpaintingBlendingRadius;
	NSNumber* inputInpaintingMode;
	InpaintingExecutionContext* _executionContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) CIVector * inputMaskBoundingBox; 
@property (nonatomic,retain) NSArray * inputFaceBoundingBoxes; 
@property (nonatomic,retain) NSArray * inputInpaintingProcessingResolutions; 
@property (nonatomic,retain) NSNumber * inputInpaintingBlendingRadius; 
@property (nonatomic,retain) NSNumber * inputInpaintingMode; 
@property (getter=getLastProcessingResolution,readonly) int lastProcessingResolution; 
@property (getter=getLastExecutionTime,readonly) double lastExecutionTime; 
@property (readonly) InpaintingExecutionContext * executionContext;                                //@synthesize executionContext=_executionContext - In the implementation block
+(id)getEspressoResources;
+(id)customAttributes;
-(InpaintingExecutionContext *)executionContext;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)init;
-(BOOL)shouldFaceSpecificModelBeUsed;
-(id)getSelectedFacesInpaintingModelDescriptor;
-(int)getLastProcessingResolution;
-(id)getSelectedGeneralInpaintingModelDescriptor;
-(id)performSinglePassInpaintingWithParameters:(id)arg1 ;
-(id)performTilingPipelineInpaintingWithParameters:(id)arg1 ;
-(id)performMultiresolutionInpaintingWithParameters:(id)arg1 ;
-(id)performFullPipelineInpaintingWithParameters:(id)arg1 ;
-(CGRect)inputMaskBoundingBoxAsValidCGRect;
-(double)getLastExecutionTime;
-(CIVector *)inputMaskBoundingBox;
-(void)setInputMaskBoundingBox:(CIVector *)arg1 ;
-(NSArray *)inputFaceBoundingBoxes;
-(void)setInputFaceBoundingBoxes:(NSArray *)arg1 ;
-(NSArray *)inputInpaintingProcessingResolutions;
-(void)setInputInpaintingProcessingResolutions:(NSArray *)arg1 ;
-(NSNumber *)inputInpaintingBlendingRadius;
-(void)setInputInpaintingBlendingRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputInpaintingMode;
-(void)setInputInpaintingMode:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)dealloc;
@end
