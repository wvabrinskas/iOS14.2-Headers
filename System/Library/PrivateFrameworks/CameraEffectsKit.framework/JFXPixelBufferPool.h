/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXPixelBufferPool : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	unsigned _type;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(unsigned)type;
-(void)dealloc;
-(CVBufferRef)createPixelBuffer;
-(id)initWithSize:(CGSize)arg1 type:(unsigned)arg2 ;
@end
