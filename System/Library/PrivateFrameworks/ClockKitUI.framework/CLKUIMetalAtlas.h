/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClockKitUI/CLKUIAtlas.h>

@protocol MTLTexture, OS_dispatch_queue;
@class NSObject;

@interface CLKUIMetalAtlas : CLKUIAtlas {

	id<MTLTexture> _texture;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	id<MTLTexture> _loaderQueue_prewarmedTexture;
	unsigned long long _mainQueue_prewarmState;

}
+(id)_createMTLTextureWithBacking:(id)arg1 device:(id)arg2 encoder:(id)arg3 ;
-(void)purge;
-(void)prewarm;
-(void)dealloc;
-(void)bind:(id)arg1 slot:(unsigned long long)arg2 ;
-(id)initWithUuid:(id)arg1 ;
@end
