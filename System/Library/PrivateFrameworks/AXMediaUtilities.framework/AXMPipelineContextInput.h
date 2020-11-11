/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CIImage, AXMPixelBufferWrapper, NSURL;

@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {

	long long _inputType;
	CIImage* _ciImage;
	AXMPixelBufferWrapper* _pixelBuffer;
	CGColorSpaceRef _extendedSRGBColorSpace;
	NSURL* _URL;
	CGSize _cachedImageURLSize;

}

@property (nonatomic,readonly) long long inputType; 
@property (nonatomic,readonly) CIImage * ciImage; 
@property (nonatomic,readonly) AXMPixelBufferWrapper * pixelBuffer; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGColorSpaceRef imageColorSpace; 
@property (nonatomic,readonly) CVBufferRef wrappedPixelBuffer; 
+(BOOL)supportsSecureCoding;
+(id)inputWithPixelBuffer:(id)arg1 ;
+(id)inputWithURL:(id)arg1 ;
+(id)new;
+(id)inputWithCIImage:(id)arg1 ;
-(AXMPixelBufferWrapper *)pixelBuffer;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithCIImage:(id)arg1 ;
-(id)_initWithPixelBuffer:(id)arg1 ;
-(CGColorSpaceRef)imageColorSpace;
-(CGImageRef)createCGImageWithMetrics:(id)arg1 ;
-(CVBufferRef)wrappedPixelBuffer;
-(CGSize)size;
-(id)description;
-(long long)inputType;
-(CIImage *)ciImage;
-(id)_initWithURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)dealloc;
@end
