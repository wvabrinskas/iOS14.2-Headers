/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {

	VCPCNNModel* _modelLandmarks;
	VCPCNNData* _faceInput;

}
-(id)init;
-(float*)getInputBuffer;
-(int)computeLandmarks:(float*)arg1 ;
@end
