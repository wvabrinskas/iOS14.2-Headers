/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MTLTileRenderPipelineColorAttachmentDescriptorArray, MTLPipelineBufferDescriptorArray, NSArray;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> tileFunction; 
@property (assign,nonatomic) unsigned long long rasterSampleCount; 
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray * colorAttachments; 
@property (assign,nonatomic) BOOL threadgroupSizeMatchesTileSize; 
@property (readonly) MTLPipelineBufferDescriptorArray * tileBuffers; 
@property (assign,nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (nonatomic,copy) NSArray * binaryArchives; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

