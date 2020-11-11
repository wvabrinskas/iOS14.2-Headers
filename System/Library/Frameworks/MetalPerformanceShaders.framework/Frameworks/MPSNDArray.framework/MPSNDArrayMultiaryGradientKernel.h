/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayMultiaryBase.h>

@interface MPSNDArrayMultiaryGradientKernel : MPSNDArrayMultiaryBase {

	unsigned long long _sourceGradientIndex;

}
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 sourceGradientIndex:(unsigned long long)arg3 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 kernelDAGObject:(id)arg6 ;
@end
