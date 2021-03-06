/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) BOOL forceResourceIndex; 
@property (assign,nonatomic) unsigned long long resourceIndex; 
@property (assign,nonatomic) unsigned long long textureType; 
@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (assign,nonatomic) unsigned long long width; 
@property (assign,nonatomic) unsigned long long height; 
@property (assign,nonatomic) unsigned long long depth; 
@property (assign,nonatomic) unsigned long long mipmapLevelCount; 
@property (assign,nonatomic) unsigned long long sampleCount; 
@property (assign,nonatomic) unsigned long long arrayLength; 
@property (assign,nonatomic) unsigned long long resourceOptions; 
@property (assign,nonatomic) unsigned long long cpuCacheMode; 
@property (assign,nonatomic) unsigned long long storageMode; 
@property (assign,nonatomic) unsigned long long hazardTrackingMode; 
@property (assign,nonatomic) unsigned long long usage; 
@property (assign,nonatomic) BOOL allowGPUOptimizedContents; 
@property (assign,nonatomic) SCD_Struct_MT58 swizzle; 
+(id)textureBufferDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 resourceOptions:(unsigned long long)arg3 usage:(unsigned long long)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)textureCubeDescriptorWithPixelFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 mipmapped:(BOOL)arg3 ;
+(id)alloc;
+(id)texture2DDescriptorWithPixelFormat:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 mipmapped:(BOOL)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

