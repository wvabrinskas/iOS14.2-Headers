/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUHistogramCalculator : NSObject {

	long long _binCount;
	SCD_Struct_NU11 _range;
	SCD_Struct_NU13 _colorMatrix;

}

@property (assign,nonatomic) long long binCount;                       //@synthesize binCount=_binCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU11 range;                    //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU13 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(SCD_Struct_NU11)range;
-(id)init;
-(SCD_Struct_NU13)colorMatrix;
-(void)setRange:(SCD_Struct_NU11)arg1 ;
-(long long)binCount;
-(void)setColorMatrix:(SCD_Struct_NU13)arg1 ;
-(id)computeHistogramFromBuffer:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferBGRA8:(id)arg1 error:(out id*)arg2 ;
-(id)_computeHistogramForBufferRGBAhHLG:(id)arg1 error:(out id*)arg2 ;
-(void)setBinCount:(long long)arg1 ;
@end

