/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator {

	float* _channelABuffer;
	float* _scratch1Buffer;
	float* _scratch2Buffer;
	float* _correlationBuffer;
	float* _upsamplerFilterCoefficientsBuffer;
	long long _upsamplerFilterCoefficientsLength;

}
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
@end

