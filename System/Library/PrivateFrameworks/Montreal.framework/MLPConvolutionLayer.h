/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPConvolutionBase.h>

@class MLPModelConvolutionDataSource;

@interface MLPConvolutionLayer : MLPConvolutionBase {

	MLPModelConvolutionDataSource* _dataSource;
	const void* _initialWeights;
	const void* _initialBias;

}

@property (retain) MLPModelConvolutionDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) const void* initialWeights;                              //@synthesize initialWeights=_initialWeights - In the implementation block
@property (assign) const void* initialBias;                                 //@synthesize initialBias=_initialBias - In the implementation block
-(void)setDataSource:(MLPModelConvolutionDataSource *)arg1 ;
-(MLPModelConvolutionDataSource *)dataSource;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(void)createKernel;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
-(void)setInitialWeights:(const void*)arg1 ;
-(const void*)initialWeights;
-(void)updatePrimaryCurrentState:(id)arg1 index:(id)arg2 inference:(BOOL)arg3 ;
-(void)setInitialBias:(const void*)arg1 ;
-(const void*)initialBias;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 outputChannels:(unsigned long long)arg7 neuronType:(int)arg8 neuronParams:(id)arg9 ;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 outputChannels:(unsigned long long)arg6 neuronType:(int)arg7 neuronParams:(id)arg8 ;
@end

