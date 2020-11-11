/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNSystemConfiguration : NSObject {

	unsigned _channelCount;
	double _sampleRate;

}

@property (assign,nonatomic) double sampleRate;                  //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned channelCount;              //@synthesize channelCount=_channelCount - In the implementation block
-(unsigned long long)hash;
-(unsigned)channelCount;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(double)sampleRate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setChannelCount:(unsigned)arg1 ;
-(id)initWithSampleRate:(double)arg1 channelCount:(unsigned)arg2 ;
@end
