/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray, MPSImage, VCPCNNMetalContext;

@interface VCPCNNData : NSObject {

	BOOL _isInputOutput;
	NSMutableArray* _size;
	float* _data;
	MPSImage* _mpsImg;
	VCPCNNMetalContext* _context;

}

@property (retain) NSMutableArray * size;                     //@synthesize size=_size - In the implementation block
@property (assign) float* data;                               //@synthesize data=_data - In the implementation block
@property (assign) BOOL isInputOutput;                        //@synthesize isInputOutput=_isInputOutput - In the implementation block
@property (retain) MPSImage * mpsImg;                         //@synthesize mpsImg=_mpsImg - In the implementation block
@property (__weak) VCPCNNMetalContext * context;              //@synthesize context=_context - In the implementation block
+(id)cnnData;
+(id)cnnDataWithGPUContext:(id)arg1 ;
+(Class)cnnDataClass;
+(id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(void)setSize:(NSMutableArray *)arg1 ;
-(void)setData:(float*)arg1 ;
-(id)init;
-(MPSImage *)mpsImg;
-(NSMutableArray *)size;
-(VCPCNNMetalContext *)context;
-(int)softmax;
-(float*)data;
-(int)normalization;
-(int)randInit;
-(int)allocBuffers:(BOOL)arg1 ;
-(int)reallocGPUTemporalBuffers;
-(int)readFromDisk:(_sFILE*)arg1 quantFactor:(short)arg2 ;
-(id)initWithGPUContext:(id)arg1 ;
-(int)bufferAllocCPU;
-(int)convertCPUData2GPU;
-(id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4 ;
-(int)convertGPUData2CPU;
-(int)copyImage:(CVBufferRef)arg1 withChunk:(int)arg2 ;
-(BOOL)isInputOutput;
-(void)setIsInputOutput:(BOOL)arg1 ;
-(void)setMpsImg:(MPSImage *)arg1 ;
-(void)setContext:(VCPCNNMetalContext *)arg1 ;
-(void)dealloc;
@end

