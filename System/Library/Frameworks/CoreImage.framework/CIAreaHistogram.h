/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	NSNumber* inputScale;
	NSNumber* inputCount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputCount; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(id)outputData;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(IRect)_netExtent;
-(BOOL)_inputsAreOK;
-(id)outputImageMPS;
-(id)outputImageNonMPS;
@end
