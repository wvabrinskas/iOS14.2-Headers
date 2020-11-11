/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	id<MPSCNNConvolutionDataSource> _source;
	NeuronInfo _info;
	MPSCNNConvolutionDescriptor* _descriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)load;
-(unsigned)dataType;
-(void)purge;
-(id)label;
-(id)descriptor;
-(id)initWithSource:(id)arg1 neuronInfo:(NeuronInfo)arg2 batchNorm:(id)arg3 ;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end
