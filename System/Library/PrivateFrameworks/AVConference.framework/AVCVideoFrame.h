/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSData;

@interface AVCVideoFrame : NSObject {

	CVBufferRef _pixelBuffer;
	CVBufferRef _depthPixelBuffer;
	SCD_Struct_VC84 _time;
	NSData* _imageData;
	NSData* _effectsMetadata;
	float _renderProcessTime;
	id _delegate;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;                   //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) CVBufferRef depthPixelBuffer;              //@synthesize depthPixelBuffer=_depthPixelBuffer - In the implementation block
@property (retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign) SCD_Struct_VC84 time;                                //@synthesize time=_time - In the implementation block
@property (retain) NSData * effectsMetadata;                            //@synthesize effectsMetadata=_effectsMetadata - In the implementation block
@property (assign) float renderProcessTime;                             //@synthesize renderProcessTime=_renderProcessTime - In the implementation block
-(CVBufferRef)pixelBuffer;
-(id)delegate;
-(NSData *)effectsMetadata;
-(void)setEffectsMetadata:(NSData *)arg1 ;
-(void)setTime:(SCD_Struct_VC84)arg1 ;
-(SCD_Struct_VC84)time;
-(NSData *)imageData;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_VC84)arg3 imageData:(id)arg4 delegate:(id)arg5 ;
-(float)renderProcessTime;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_VC84)arg2 imageData:(id)arg3 ;
-(void)setDepthPixelBuffer:(CVBufferRef)arg1 ;
-(void)setRenderProcessTime:(float)arg1 ;
-(CVBufferRef)depthPixelBuffer;
@end
