/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNodeMessage.h>

@class FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {

	opaqueCMSampleBufferRef _sampleBuffer;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 recordingSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 ;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3 ;
-(FigCaptureRecordingSettings *)recordingSettings;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(void)dealloc;
@end
