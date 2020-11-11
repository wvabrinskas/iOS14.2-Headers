/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVVisionIntegrating;
#import <PhotoVision/PhotoVision-Structs.h>
@class PVContext, NSDictionary;

@interface PVVisionAnalyzer : NSObject {

	id<PVVisionIntegrating> _visionIntegration;
	PVContext* _context;
	NSDictionary* _detectionOptions;
	NSDictionary* _detailsExtractionOptions;

}
-(CGPoint)centroidForLandmarkRegion:(id)arg1 ;
-(long long)_expressionTypeFromExpressionString:(id)arg1 ;
-(id)initWithContext:(id)arg1 visionIntegration:(id)arg2 ;
-(void)configureRequest:(id)arg1 ;
-(float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1 ;
-(id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
@end
