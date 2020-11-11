/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMVideoCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMPanoramaCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMStillImageCapturingVideoDelegate.h>

@class NSTimer, NSString;

@interface CAMIdleController : NSObject <CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMStillImageCapturingVideoDelegate> {

	BOOL _updatingIdleTimer;
	NSTimer* _enableIdleTimer;

}

@property (assign,setter=_setUpdatingIdleTimer:,getter=isUpdatingIdleTimer,nonatomic) BOOL updatingIdleTimer;              //@synthesize updatingIdleTimer=_updatingIdleTimer - In the implementation block
@property (getter=_isIdleTimerIndefinitelyDisabled,nonatomic,readonly) BOOL idleTimerIndefinitelyDisabled; 
@property (setter=_setEnableIdleTimer:,getter=_enableIdleTimer,nonatomic,retain) NSTimer * enableIdleTimer;                //@synthesize enableIdleTimer=_enableIdleTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(id)_enableIdleTimer;
-(void)_immediatelyEnableApplicationIdleTimer;
-(id)init;
-(BOOL)_isIdleTimerIndefinitelyDisabled;
-(void)timelapseRequestDidResumeCapturing;
-(void)startUpdatingIdleTimer;
-(void)_setEnableIdleTimer:(id)arg1 ;
-(BOOL)isUpdatingIdleTimer;
-(void)timelapseRequestDidStopCapturing;
-(void)_setUpdatingIdleTimer:(BOOL)arg1 ;
-(void)stopUpdatingIdleTimer;
-(void)_indefinitelyDisableApplicationIdleTimer;
-(void)timelapseRequestDidStartCapturing;
-(void)_delayIdleTimerByTimeIntervalUnlessIndefinitelyDisabled:(double)arg1 ;
-(void)_delayIdleTimerByTimeInterval:(double)arg1 ;
-(void)_teardownEnableIdleTimer;
-(void)dealloc;
@end
