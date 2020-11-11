/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMPerformanceTestHarness.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@class CUCaptureController, NSString, NSMutableDictionary, CAMCaptureRequestIntervalometer;

@interface CAMIntervalometerTestHarness : CAMPerformanceTestHarness <CAMStillImageCaptureRequestDelegate, CAMCaptureRequestIntervalometerDelegate> {

	CUCaptureController* _captureController;
	BOOL _performWarmupCapture;
	BOOL _waitingOnWarmupCapture;
	NSString* _finalRequestPersistenceUUID;
	long long _mode;
	NSMutableDictionary* _numberOfResponsesForRequest;
	unsigned long long _expectedNumberOfResponsesPerRequest;
	double _delayBetweenCaptures;
	double _lastCaptureCompletionTime;
	CAMCaptureRequestIntervalometer* _testIntervalometer;

}

@property (nonatomic,retain) CAMCaptureRequestIntervalometer * testIntervalometer;              //@synthesize testIntervalometer=_testIntervalometer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)startTesting;
-(void)failedTestwithReason:(id)arg1 ;
-(BOOL)_allowOverlappingCaptures;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForPersistenceUUID:(id)arg1 failureReason:(id*)arg2 ;
-(void)intervalometer:(id)arg1 didReachMaximumCountWithRequest:(id)arg2 ;
-(void)stopTesting;
-(void)setTestIntervalometer:(CAMCaptureRequestIntervalometer *)arg1 ;
-(BOOL)_shouldDelayBeforeCapturing;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(BOOL)_hasReceivedExpectedNumberOfResponsesForRequestsWithFailureReason:(id*)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(CAMCaptureRequestIntervalometer *)testIntervalometer;
-(id)initWithTestName:(id)arg1 expectedNumberOfCapturesPerRequest:(unsigned long long)arg2 captureController:(id)arg3 performingWarmupCapture:(BOOL)arg4 forCaptureMode:(long long)arg5 delayBetweenCaptures:(double)arg6 ;
@end
