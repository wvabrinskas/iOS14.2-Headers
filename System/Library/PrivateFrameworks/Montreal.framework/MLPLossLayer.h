/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPImageLayer.h>

@class MPSNDArrayMultiplication, MPSNDArrayReductionSum, MPSMatrixSoftMax, MPSMatrixLogSoftMax, MPSMatrixNeuron, MPSMatrixCopy;

@interface MLPLossLayer : MLPImageLayer {

	MPSNDArrayMultiplication* _multiplication;
	MPSNDArrayReductionSum* _reductionSum;
	MPSMatrixSoftMax* _matrixSoftMax;
	MPSMatrixLogSoftMax* _matrixLogSoftMax;
	MPSMatrixNeuron* _negativeNeuron;
	MPSMatrixCopy* _matrixLargeCopyFilter;
	MPSMatrixCopy* _matrixSingleCopyFilter;

}

@property (retain) MPSNDArrayMultiplication * multiplication;              //@synthesize multiplication=_multiplication - In the implementation block
@property (retain) MPSNDArrayReductionSum * reductionSum;                  //@synthesize reductionSum=_reductionSum - In the implementation block
@property (retain) MPSMatrixSoftMax * matrixSoftMax;                       //@synthesize matrixSoftMax=_matrixSoftMax - In the implementation block
@property (retain) MPSMatrixLogSoftMax * matrixLogSoftMax;                 //@synthesize matrixLogSoftMax=_matrixLogSoftMax - In the implementation block
@property (retain) MPSMatrixNeuron * negativeNeuron;                       //@synthesize negativeNeuron=_negativeNeuron - In the implementation block
@property (retain) MPSMatrixCopy * matrixLargeCopyFilter;                  //@synthesize matrixLargeCopyFilter=_matrixLargeCopyFilter - In the implementation block
@property (retain) MPSMatrixCopy * matrixSingleCopyFilter;                 //@synthesize matrixSingleCopyFilter=_matrixSingleCopyFilter - In the implementation block
-(void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3 ;
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(void)createKernel;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_Mo4*)arg2 ;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg1 input:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
-(id)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(id)arg3 ;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4 ;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5 ;
-(void)setReductionSum:(MPSNDArrayReductionSum *)arg1 ;
-(void)setMatrixSoftMax:(MPSMatrixSoftMax *)arg1 ;
-(void)setMatrixLogSoftMax:(MPSMatrixLogSoftMax *)arg1 ;
-(void)setMultiplication:(MPSNDArrayMultiplication *)arg1 ;
-(MPSNDArrayReductionSum *)reductionSum;
-(void)setNegativeNeuron:(MPSMatrixNeuron *)arg1 ;
-(MPSMatrixNeuron *)negativeNeuron;
-(void)setMatrixLargeCopyFilter:(MPSMatrixCopy *)arg1 ;
-(void)setMatrixSingleCopyFilter:(MPSMatrixCopy *)arg1 ;
-(id)imageInferenceForward:(id)arg1 input:(id)arg2 lossLabels:(id)arg3 ;
-(id)imageTrainingForward:(id)arg1 input:(id)arg2 lossLabels:(id)arg3 ;
-(MPSMatrixCopy *)matrixLargeCopyFilter;
-(id)seqInferenceForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 ;
-(id)seqTrainingForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 computeLossGradient:(BOOL)arg4 ;
-(MPSMatrixCopy *)matrixSingleCopyFilter;
-(MPSMatrixSoftMax *)matrixSoftMax;
-(MPSNDArrayMultiplication *)multiplication;
-(id)seqTrainingForward:(id)arg1 subMatrix:(id)arg2 reductionSumResults:(id)arg3 alphaVec:(id)arg4 labels:(id)arg5 rowOffset:(unsigned long long)arg6 computeNRows:(unsigned long long)arg7 computeLossGradient:(BOOL)arg8 ;
-(MPSMatrixLogSoftMax *)matrixLogSoftMax;
-(id)seqForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 runInference:(BOOL)arg4 ;
@end
