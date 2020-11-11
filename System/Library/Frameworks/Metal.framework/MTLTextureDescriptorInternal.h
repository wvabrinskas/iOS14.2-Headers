/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTextureDescriptor.h>

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {

	MTLTextureDescriptorPrivate _private;

}
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(SCD_Struct_MT58)swizzle;
-(unsigned long long)usage;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)storageMode;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)height;
-(BOOL)framebufferOnly;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setIsDrawable:(BOOL)arg1 ;
-(unsigned long long)width;
-(void)setTextureType:(unsigned long long)arg1 ;
-(unsigned)swizzleKey;
-(id)init;
-(void)setHeight:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setAllowGPUOptimizedContents:(BOOL)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setRotation:(unsigned long long)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(BOOL)writeSwizzleEnabled;
-(void)setTextureUsage:(unsigned long long)arg1 ;
-(unsigned long long)hazardTrackingMode;
-(void)setDepth:(unsigned long long)arg1 ;
-(const MTLTextureDescriptorPrivate*)descriptorPrivate;
-(unsigned long long)sampleCount;
-(unsigned long long)rotation;
-(id)description;
-(void)setCompressionMode:(unsigned long long)arg1 ;
-(void)setWriteSwizzleEnabled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(BOOL)allowGPUOptimizedContents;
-(unsigned long long)resourceOptions;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)resourceIndex;
-(unsigned long long)compressionMode;
-(unsigned long long)cpuCacheMode;
-(BOOL)validateWithDevice:(id)arg1 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(BOOL)isDrawable;
-(BOOL)forceResourceIndex;
-(void)setSwizzle:(SCD_Struct_MT58)arg1 ;
-(unsigned long long)textureUsage;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(void)setSwizzleKey:(unsigned)arg1 ;
-(void)setSparseSurfaceDefaultValue:(unsigned long long)arg1 ;
-(unsigned long long)protectionOptions;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)sparseSurfaceDefaultValue;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(void)setResourceOptions:(unsigned long long)arg1 ;
@end
