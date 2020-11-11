/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSNDArray/MPSNDArray-Structs.h>
#import <MPSNDArray/MPSNDArrayUnaryKernel.h>

@interface MPSNDArrayBandPart : MPSNDArrayUnaryKernel {

	long long _numLower;
	long long _numUpper;

}

@property (assign,nonatomic) long long numLower;              //@synthesize numLower=_numLower - In the implementation block
@property (assign,nonatomic) long long numUpper;              //@synthesize numUpper=_numUpper - In the implementation block
+(const MPSLibraryInfo*)libraryInfo:(MPSDevice*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1 ;
-(long long)numLower;
-(void)setNumLower:(long long)arg1 ;
-(long long)numUpper;
-(void)setNumUpper:(long long)arg1 ;
@end
