/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/Montreal-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@protocol MTLBuffer;
@class MPSCNNConvolutionDescriptor, NSString, MLPDeviceHandler, MPSCNNConvolutionWeightsAndBiasesState, MPSNNOptimizerAdam, MPSVector, NSData;

@interface MLPModelConvolutionDataSource : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _seed;
	unsigned long long _outputFeatureChannels;
	unsigned long long _inputFeatureChannels;
	unsigned long long _kernelHeight;
	unsigned long long _kernelWidth;
	MPSCNNConvolutionDescriptor* _convDesc;
	NSString* _kernelParamsBinaryName;
	unsigned long long _sizeBias;
	unsigned long long _sizeWeights;
	id<MTLBuffer> _weightBuffer;
	id<MTLBuffer> _biasBuffer;
	MLPDeviceHandler* _deviceHandler;
	const void* _initialWeights;
	const void* _initialBias;
	MPSCNNConvolutionWeightsAndBiasesState* _state;
	MPSNNOptimizerAdam* _optimizer;
	MPSVector* _weightMomentumVector;
	MPSVector* _weightVelocityVector;
	MPSVector* _biasMomentumVector;
	MPSVector* _biasVelocityVector;
	MLPModelOptimizerOptions _optimizerOptions;

}

@property (nonatomic,readonly) MPSNNOptimizerAdam * optimizer;                              //@synthesize optimizer=_optimizer - In the implementation block
@property (nonatomic,readonly) MPSVector * weightMomentumVector;                            //@synthesize weightMomentumVector=_weightMomentumVector - In the implementation block
@property (nonatomic,readonly) MPSVector * weightVelocityVector;                            //@synthesize weightVelocityVector=_weightVelocityVector - In the implementation block
@property (nonatomic,readonly) MPSVector * biasMomentumVector;                              //@synthesize biasMomentumVector=_biasMomentumVector - In the implementation block
@property (nonatomic,readonly) MPSVector * biasVelocityVector;                              //@synthesize biasVelocityVector=_biasVelocityVector - In the implementation block
@property (readonly) unsigned long long outputFeatureChannels;                              //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (readonly) unsigned long long inputFeatureChannels;                               //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (readonly) unsigned long long kernelHeight;                                       //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (readonly) unsigned long long kernelWidth;                                        //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (readonly) MPSCNNConvolutionDescriptor * convDesc;                                //@synthesize convDesc=_convDesc - In the implementation block
@property (readonly) NSString * kernelParamsBinaryName;                                     //@synthesize kernelParamsBinaryName=_kernelParamsBinaryName - In the implementation block
@property (readonly) unsigned long long sizeBias;                                           //@synthesize sizeBias=_sizeBias - In the implementation block
@property (readonly) unsigned long long sizeWeights;                                        //@synthesize sizeWeights=_sizeWeights - In the implementation block
@property (readonly) unsigned seed;                                                         //@synthesize seed=_seed - In the implementation block
@property (readonly) MLPModelOptimizerOptions optimizerOptions;                             //@synthesize optimizerOptions=_optimizerOptions - In the implementation block
@property (readonly) id<MTLBuffer> weightBuffer;                                            //@synthesize weightBuffer=_weightBuffer - In the implementation block
@property (readonly) id<MTLBuffer> biasBuffer;                                              //@synthesize biasBuffer=_biasBuffer - In the implementation block
@property (readonly) MLPDeviceHandler * deviceHandler;                                      //@synthesize deviceHandler=_deviceHandler - In the implementation block
@property (readonly) NSData * weightsInWHIOOrder; 
@property (assign) const void* initialWeights;                                              //@synthesize initialWeights=_initialWeights - In the implementation block
@property (assign) const void* initialBias;                                                 //@synthesize initialBias=_initialBias - In the implementation block
@property (nonatomic,readonly) MPSCNNConvolutionWeightsAndBiasesState * state;              //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)seed;
-(BOOL)load;
-(unsigned)dataType;
-(void)purge;
-(id)label;
-(id)descriptor;
-(unsigned long long)outputFeatureChannels;
-(unsigned long long)inputFeatureChannels;
-(MPSCNNConvolutionWeightsAndBiasesState *)state;
-(unsigned long long)bias_size;
-(MLPDeviceHandler *)deviceHandler;
-(unsigned long long)weight_size;
-(unsigned long long)sizeBias;
-(MPSCNNConvolutionDescriptor *)convDesc;
-(void)setInitialWeights:(const void*)arg1 ;
-(const void*)initialWeights;
-(void)setInitialBias:(const void*)arg1 ;
-(const void*)initialBias;
-(unsigned long long)sizeWeights;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 ;
-(id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 stride:(unsigned long long)arg5 kernelParamsBinaryName:(id)arg6 initialWeights:(const void*)arg7 initialBias:(const void*)arg8 deviceHandler:(id)arg9 optimizerOptions:(MLPModelOptimizerOptions)arg10 ;
-(NSData *)weightsInWHIOOrder;
-(id<MTLBuffer>)biasBuffer;
-(void)bootstrapWeights:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5 ;
-(id<MTLBuffer>)weightBuffer;
-(MPSVector *)biasMomentumVector;
-(void)bootstrapBias:(id*)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 values:(const void*)arg5 ;
-(void)bootstrapBuffer:(id)arg1 length:(unsigned long long)arg2 device:(id)arg3 stdDev:(float)arg4 ;
-(void)checkpointWithCommandQueue:(id)arg1 ;
-(MPSVector *)weightMomentumVector;
-(MPSVector *)weightVelocityVector;
-(MPSVector *)biasVelocityVector;
-(NSString *)kernelParamsBinaryName;
-(MLPModelOptimizerOptions)optimizerOptions;
-(void*)weights;
-(MPSNNOptimizerAdam *)optimizer;
-(float*)biasTerms;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
@end

