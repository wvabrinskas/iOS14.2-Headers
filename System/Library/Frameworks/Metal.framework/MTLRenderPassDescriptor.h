/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLRenderPassColorAttachmentDescriptorArray, MTLRenderPassDepthAttachmentDescriptor, MTLRenderPassStencilAttachmentDescriptor, MTLRenderPassSampleBufferAttachmentDescriptorArray;

@interface MTLRenderPassDescriptor : NSObject <NSCopying> {

	unsigned long long _imageblockSampleLength;
	unsigned long long _threadgroupMemoryLength;
	unsigned long long _tileWidth;
	unsigned long long _tileHeight;

}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments; 
@property (nonatomic,copy) MTLRenderPassDepthAttachmentDescriptor * depthAttachment; 
@property (nonatomic,copy) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment; 
@property (nonatomic,retain) id<MTLBuffer> visibilityResultBuffer; 
@property (assign,nonatomic) unsigned long long renderTargetArrayLength; 
@property (assign,nonatomic) unsigned long long imageblockSampleLength;                                         //@synthesize imageblockSampleLength=_imageblockSampleLength - In the implementation block
@property (assign,nonatomic) unsigned long long threadgroupMemoryLength;                                        //@synthesize threadgroupMemoryLength=_threadgroupMemoryLength - In the implementation block
@property (assign,nonatomic) unsigned long long tileWidth;                                                      //@synthesize tileWidth=_tileWidth - In the implementation block
@property (assign,nonatomic) unsigned long long tileHeight;                                                     //@synthesize tileHeight=_tileHeight - In the implementation block
@property (assign,nonatomic) unsigned long long defaultRasterSampleCount; 
@property (assign,nonatomic) unsigned long long renderTargetWidth; 
@property (assign,nonatomic) unsigned long long renderTargetHeight; 
@property (nonatomic,retain) id<MTLRasterizationRateMap> rasterizationRateMap; 
@property (readonly) MTLRenderPassSampleBufferAttachmentDescriptorArray * sampleBufferAttachments; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)renderPassDescriptor;
+(id)alloc;
-(unsigned long long)tileWidth;
-(void)setImageblockSampleLength:(unsigned long long)arg1 ;
-(void)setTileWidth:(unsigned long long)arg1 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(void)setTileHeight:(unsigned long long)arg1 ;
-(unsigned long long)imageblockSampleLength;
-(void)setThreadgroupMemoryLength:(unsigned long long)arg1 ;
-(unsigned long long)tileHeight;
-(unsigned long long)threadgroupMemoryLength;
-(void)setSamplePositions:(const SCD_Struct_MT35*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

