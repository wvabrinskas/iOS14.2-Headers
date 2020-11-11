/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLFence.h>
#import <libobjc.A.dylib/MTLFenceSPI.h>

@protocol MTLDevice;
@class MTLIOAccelDevice, NSString;

@interface MTLIOAccelFence : _MTLFence <MTLFenceSPI> {

	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned _fenceIndex;

}

@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 fenceIndex:(unsigned)arg2 ;
-(void)dealloc;
@end
