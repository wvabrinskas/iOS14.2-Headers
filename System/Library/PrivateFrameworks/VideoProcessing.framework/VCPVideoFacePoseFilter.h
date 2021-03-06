/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseFilter : NSObject {

	Matrix<float, 12, 1, false> _previousState;
	Matrix<float, 12, 12, false> _previousCovar;
	BOOL _previousStateIsValid;

}
-(int)rotationToEulerAngles:(float)arg1 angles:(float)arg2 ;
-(int)kalmanFiltering:(float)arg1 T:(float)arg2 ;
-(int)eulerAnglesToRotation:(float)arg1 R:(float)arg2 ;
-(int)filteringPose:(SCD_Struct_VC45*)arg1 ;
-(void)reset;
@end

