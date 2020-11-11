/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLRenderPipelineState;
#import <ARKit/ARKit-Structs.h>
@interface ARCoachingDotsRenderer : NSObject {

	unsigned long long _pixelFormat;
	id<MTLRenderPipelineState> _pipelineState;

}
-(id)init:(id)arg1 pixelFormat:(unsigned long long)arg2 metalLibrary:(id)arg3 sampleCount:(int)arg4 ;
-(void)encode:(id)arg1 renderCommandEncoder:(id)arg2 mvp:(SCD_Struct_AR0)arg3 visibility:(float)arg4 renderParams:(SCD_Struct_AR18)arg5 time:(double)arg6 ;
@end
