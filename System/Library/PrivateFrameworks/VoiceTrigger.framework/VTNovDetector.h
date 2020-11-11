/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTNovDetector : NSObject {

	void* _novDetect;

}
-(id)getOptionValue:(id)arg1 ;
-(id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2 ;
-(id)getSuperVectorWithEndPoint:(unsigned long long)arg1 ;
-(id)getAnalyzedResultForPhraseId:(unsigned)arg1 ;
-(void)reset;
-(void)resetBest;
-(unsigned)numResultsAvailable;
-(void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(void)dealloc;
@end
