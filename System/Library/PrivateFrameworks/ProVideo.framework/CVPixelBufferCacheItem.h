/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class NSArray, PVColorSpace;

@interface CVPixelBufferCacheItem : NSObject {

	NSArray* _buffers;
	NSArray* _DODs;
	PVColorSpace* _colorSpace;
	CGSize _fullSize;

}

@property (nonatomic,readonly) NSArray * buffers;                      //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,readonly) NSArray * DODs;                         //@synthesize DODs=_DODs - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                        //@synthesize fullSize=_fullSize - In the implementation block
@property (nonatomic,readonly) PVColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
-(PVColorSpace *)colorSpace;
-(NSArray *)DODs;
-(NSArray *)buffers;
-(CGSize)fullSize;
-(id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(CGSize)arg3 colorSpace:(id)arg4 ;
@end

