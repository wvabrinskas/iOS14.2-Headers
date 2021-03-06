/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SNProcessorCreating, SNMLModel;
@class NSString;

@interface SNDetectorHeadConfiguration : NSObject {

	unsigned _windowLengthFrames;
	unsigned _stepSizeFrames;
	id<SNProcessorCreating> _featureExtractorConfiguration;
	id<SNMLModel> _model;
	NSString* _outputLabel;
	double _sampleRate;

}

@property (nonatomic,readonly) id<SNProcessorCreating> featureExtractorConfiguration;              //@synthesize featureExtractorConfiguration=_featureExtractorConfiguration - In the implementation block
@property (nonatomic,readonly) id<SNMLModel> model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSString * outputLabel;                                             //@synthesize outputLabel=_outputLabel - In the implementation block
@property (nonatomic,readonly) double sampleRate;                                                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (nonatomic,readonly) unsigned windowLengthFrames;                                        //@synthesize windowLengthFrames=_windowLengthFrames - In the implementation block
@property (nonatomic,readonly) unsigned stepSizeFrames;                                            //@synthesize stepSizeFrames=_stepSizeFrames - In the implementation block
-(id<SNMLModel>)model;
-(double)sampleRate;
-(NSString *)outputLabel;
-(unsigned)windowLengthFrames;
-(id<SNProcessorCreating>)featureExtractorConfiguration;
-(unsigned)stepSizeFrames;
-(id)initWithMLModel:(id)arg1 outputLabel:(id)arg2 sampleRate:(double)arg3 windowLengthFrames:(unsigned)arg4 stepSizeFrames:(unsigned)arg5 featureExtractorConfiguration:(id)arg6 ;
@end

