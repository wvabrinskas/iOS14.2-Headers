/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject {

	unsigned long long _batchSize;
	NSNumber* _learningRate;
	unsigned long long _maxSequenceLength;
	NSString* _updatedModelPath;

}

@property (assign,nonatomic) unsigned long long batchSize;                        //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSNumber * learningRate;                               //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSequenceLength;              //@synthesize maxSequenceLength=_maxSequenceLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * updatedModelPath;                  //@synthesize updatedModelPath=_updatedModelPath - In the implementation block
-(unsigned long long)batchSize;
-(void)reset;
-(unsigned long long)maxSequenceLength;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(id)initWithSeedModelPath:(id)arg1 ;
-(void)trainAndKeepInMemory:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(id)evaluateOn:(id)arg1 ;
-(NSString *)updatedModelPath;
-(void)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 andKeepInMemory:(BOOL)arg3 ;
-(float*)copyWeightUpdates:(unsigned long long*)arg1 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSNumber *)learningRate;
-(void)setLearningRate:(NSNumber *)arg1 ;
@end
