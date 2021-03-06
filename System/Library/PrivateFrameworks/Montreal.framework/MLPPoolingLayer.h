/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MLPConvolutionBase.h>

@interface MLPPoolingLayer : MLPConvolutionBase
-(id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long*)arg3 ;
-(id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 kernelStride:(unsigned long long)arg6 ;
-(void)createKernel;
-(id)initWithName:(id)arg1 previousLayer:(id)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 kernelStride:(unsigned long long)arg5 ;
-(id)initWithName:(id)arg1 parameters:(SCD_Struct_ML0*)arg2 ;
-(id)forward:(id)arg1 input:(id)arg2 labels:(id)arg3 runInference:(BOOL)arg4 ;
-(id)backward:(id)arg1 inputGradient:(id)arg2 ;
@end

