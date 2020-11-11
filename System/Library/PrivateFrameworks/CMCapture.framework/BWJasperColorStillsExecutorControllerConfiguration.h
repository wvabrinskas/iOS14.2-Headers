/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWJasperColorStillsExecutorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputColorFormat;
	BWVideoFormat* _outputDepthFormat;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;

}

@property (nonatomic,retain) BWVideoFormat * inputColorFormat;               //@synthesize inputColorFormat=_inputColorFormat - In the implementation block
@property (nonatomic,retain) BWVideoFormat * outputDepthFormat;              //@synthesize outputDepthFormat=_outputDepthFormat - In the implementation block
@property (assign,nonatomic) int horizontalSensorBinningFactor;              //@synthesize horizontalSensorBinningFactor=_horizontalSensorBinningFactor - In the implementation block
@property (assign,nonatomic) int verticalSensorBinningFactor;                //@synthesize verticalSensorBinningFactor=_verticalSensorBinningFactor - In the implementation block
-(int)verticalSensorBinningFactor;
-(BWVideoFormat *)inputColorFormat;
-(void)setInputColorFormat:(BWVideoFormat *)arg1 ;
-(BWVideoFormat *)outputDepthFormat;
-(void)setOutputDepthFormat:(BWVideoFormat *)arg1 ;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)dealloc;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)horizontalSensorBinningFactor;
@end
