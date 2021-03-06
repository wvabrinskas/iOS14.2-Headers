/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVRemoteCore/_TVRCAudioBuffer.h>

@class NSString;

@interface _TVRCMRAudioBufferWrapper : NSObject <_TVRCAudioBuffer> {

	void* _buffer;
	float _gain;
	double _sampleRate;
	double _timestamp;

}

@property (assign,nonatomic) unsigned long long packetCount; 
@property (assign,nonatomic) double sampleRate;                           //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float gain;                                  //@synthesize gain=_gain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)audioBuffer;
-(NSString *)description;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(void)setGain:(float)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)packetCount;
-(void)setPacketCount:(unsigned long long)arg1 ;
-(float)gain;
-(void)dealloc;
-(void)writeAudioData:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)writePacketDescriptions:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3 ;
@end

