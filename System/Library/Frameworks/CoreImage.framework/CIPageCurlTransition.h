/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPageCurlTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputBacksideImage;
	CIImage* inputShadingImage;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIPageCurlTransNoEmap;
-(id)_CIPageCurlTransition;
@end
