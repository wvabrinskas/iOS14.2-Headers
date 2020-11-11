/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMPanoramaProcessorDelegate.h>
#import <libobjc.A.dylib/AVCaptureVideoThumbnailContentsDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVCaptureDevice, AVCaptureDeviceInput, CAMPanoramaConfiguration, AVCapturePhotoOutput, CAMCaptureMovieFileOutput, CAMPanoramaOutput, AVCaptureMetadataOutput, AVCaptureVideoDataOutput, AVCaptureVideoThumbnailOutput, CAMMemoizationCache, AVCaptureSession, NSObject, AVCaptureVideoPreviewLayer, AVSpatialOverCaptureVideoPreviewLayer, CAMPowerController, NSMutableDictionary, NSMutableSet, NSURL, NSMutableArray, CAMPanoramaProcessor, CIContext, NSHashTable, NSString;

@interface CAMCaptureEngine : NSObject <CAMPanoramaProcessorDelegate, AVCaptureVideoThumbnailContentsDelegate> {

	AVCaptureDevice* _audioCameraDevice;
	AVCaptureDeviceInput* _audioCaptureDeviceInput;
	CAMPanoramaConfiguration* _panoramaConfiguration;
	AVCapturePhotoOutput* _stillImageOutput;
	CAMCaptureMovieFileOutput* _movieFileOutput;
	CAMPanoramaOutput* _panoramaVideoDataOutput;
	AVCaptureMetadataOutput* _metadataOutput;
	AVCaptureVideoDataOutput* _effectsPreviewVideoDataOutput;
	AVCaptureVideoThumbnailOutput* _videoThumbnailOutput;
	BOOL _interrupted;
	BOOL _managedDevicesLockedForConfiguration;
	BOOL __performingRecovery;
	unsigned __panoramaAssertionIdentifier;
	CAMMemoizationCache* __captureEngineDeviceCache;
	long long __engineOptions;
	AVCaptureSession* __captureSession;
	NSObject*<OS_dispatch_queue> __captureSessionQueue;
	NSObject*<OS_dispatch_queue> __captureResultsQueue;
	AVCaptureVideoPreviewLayer* __videoPreviewLayer;
	AVSpatialOverCaptureVideoPreviewLayer* __overCaptureVideoPreviewLayer;
	CAMPowerController* __powerController;
	AVCaptureDevice* _currentCameraDevice;
	AVCapturePhotoOutput* _currentStillImageOutput;
	NSMutableDictionary* __resultsQueueRegisteredStillImageRequests;
	NSMutableSet* __resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
	NSMutableDictionary* __sessionQueueCachedPhotoInitiationSettings;
	NSMutableDictionary* __resultsQueueRequestsBeingRecorded;
	NSURL* __resultsQueueLastCompletedVideoURL;
	double __resultsQueueLastCompletedVideoZoomFactor;
	NSObject*<OS_dispatch_queue> __captureServicesQueue;
	NSMutableArray* __servicesQueueCaptureServices;
	NSObject*<OS_dispatch_queue> __metadataObjectsQueue;
	NSObject*<OS_dispatch_queue> __panoramaSampleBufferQueue;
	NSObject*<OS_dispatch_queue> __panoramaSubgraphQueue;
	CAImageQueueRef __panoramaImageQueue;
	CAMPanoramaProcessor* __panoramaProcessor;
	NSObject*<OS_dispatch_semaphore> __panoramaFirstImageQueueUpdateSemaphore;
	NSObject*<OS_dispatch_queue> __panoramaFirstImageQueueUpdateSemaphoreQueue;
	NSObject*<OS_dispatch_queue> __effectsPreviewSurfaceFilteringQueue;
	CIContext* __effectsPreviewSurfaceFilteringContext;
	NSObject*<OS_dispatch_queue> __effectsPreviewSampleBufferQueue;
	NSHashTable* __effectsPreviewSampleBufferDelegates;
	NSHashTable* __videoThumbnailContentsDelegates;
	NSObject*<OS_dispatch_queue> __recoveryMutexQueue;
	unsigned long long __numberOfRecoveryAttempts;

}

@property (nonatomic,readonly) CAMMemoizationCache * _captureEngineDeviceCache;                                                                                        //@synthesize _captureEngineDeviceCache=__captureEngineDeviceCache - In the implementation block
@property (nonatomic,readonly) long long _engineOptions;                                                                                                               //@synthesize _engineOptions=__engineOptions - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * _captureSession;                                                                                                     //@synthesize _captureSession=__captureSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureSessionQueue;                                                                                      //@synthesize _captureSessionQueue=__captureSessionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureResultsQueue;                                                                                      //@synthesize _captureResultsQueue=__captureResultsQueue - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * _videoPreviewLayer;                                                                                        //@synthesize _videoPreviewLayer=__videoPreviewLayer - In the implementation block
@property (nonatomic,readonly) AVSpatialOverCaptureVideoPreviewLayer * _overCaptureVideoPreviewLayer;                                                                  //@synthesize _overCaptureVideoPreviewLayer=__overCaptureVideoPreviewLayer - In the implementation block
@property (assign,setter=_setInterrupted:,getter=isInterrupted,nonatomic) BOOL interrupted;                                                                            //@synthesize interrupted=_interrupted - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                  //@synthesize _powerController=__powerController - In the implementation block
@property (assign,setter=_setPanoramaAssertionIdentifier:,nonatomic) unsigned _panoramaAssertionIdentifier;                                                            //@synthesize _panoramaAssertionIdentifier=__panoramaAssertionIdentifier - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentCameraDevice;                                                                                                    //@synthesize currentCameraDevice=_currentCameraDevice - In the implementation block
@property (nonatomic,retain) AVCapturePhotoOutput * currentStillImageOutput;                                                                                           //@synthesize currentStillImageOutput=_currentStillImageOutput - In the implementation block
@property (assign,getter=areManagedDevicesLockedForConfiguration,nonatomic) BOOL managedDevicesLockedForConfiguration;                                                 //@synthesize managedDevicesLockedForConfiguration=_managedDevicesLockedForConfiguration - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultsQueueRegisteredStillImageRequests;                                                                        //@synthesize _resultsQueueRegisteredStillImageRequests=__resultsQueueRegisteredStillImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;                                                     //@synthesize _resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue=__resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionQueueCachedPhotoInitiationSettings;                                                                       //@synthesize _sessionQueueCachedPhotoInitiationSettings=__sessionQueueCachedPhotoInitiationSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultsQueueRequestsBeingRecorded;                                                                               //@synthesize _resultsQueueRequestsBeingRecorded=__resultsQueueRequestsBeingRecorded - In the implementation block
@property (setter=_setResultsQueueLastCompletedVideoURL:,nonatomic,retain) NSURL * _resultsQueueLastCompletedVideoURL;                                                 //@synthesize _resultsQueueLastCompletedVideoURL=__resultsQueueLastCompletedVideoURL - In the implementation block
@property (assign,setter=_setResultsQueueLastCompletedVideoZoomFactor:,nonatomic) double _resultsQueueLastCompletedVideoZoomFactor;                                    //@synthesize _resultsQueueLastCompletedVideoZoomFactor=__resultsQueueLastCompletedVideoZoomFactor - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _captureServicesQueue;                                                                                     //@synthesize _captureServicesQueue=__captureServicesQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _servicesQueueCaptureServices;                                                                                         //@synthesize _servicesQueueCaptureServices=__servicesQueueCaptureServices - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _metadataObjectsQueue;                                                                                     //@synthesize _metadataObjectsQueue=__metadataObjectsQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSampleBufferQueue;                                                                                //@synthesize _panoramaSampleBufferQueue=__panoramaSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaSubgraphQueue;                                                                                    //@synthesize _panoramaSubgraphQueue=__panoramaSubgraphQueue - In the implementation block
@property (assign,setter=_setPanoramaImageQueue:,nonatomic) CAImageQueueRef _panoramaImageQueue;                                                                       //@synthesize _panoramaImageQueue=__panoramaImageQueue - In the implementation block
@property (setter=_setPanoramaProcessor:,nonatomic,retain) CAMPanoramaProcessor * _panoramaProcessor;                                                                  //@synthesize _panoramaProcessor=__panoramaProcessor - In the implementation block
@property (setter=_setPanoramaFirstImageQueueUpdateSemaphore:,nonatomic,retain) NSObject*<OS_dispatch_semaphore> _panoramaFirstImageQueueUpdateSemaphore;              //@synthesize _panoramaFirstImageQueueUpdateSemaphore=__panoramaFirstImageQueueUpdateSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _panoramaFirstImageQueueUpdateSemaphoreQueue;                                                              //@synthesize _panoramaFirstImageQueueUpdateSemaphoreQueue=__panoramaFirstImageQueueUpdateSemaphoreQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSurfaceFilteringQueue;                                                                      //@synthesize _effectsPreviewSurfaceFilteringQueue=__effectsPreviewSurfaceFilteringQueue - In the implementation block
@property (nonatomic,readonly) CIContext * _effectsPreviewSurfaceFilteringContext;                                                                                     //@synthesize _effectsPreviewSurfaceFilteringContext=__effectsPreviewSurfaceFilteringContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _effectsPreviewSampleBufferQueue;                                                                          //@synthesize _effectsPreviewSampleBufferQueue=__effectsPreviewSampleBufferQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * _effectsPreviewSampleBufferDelegates;                                                                                     //@synthesize _effectsPreviewSampleBufferDelegates=__effectsPreviewSampleBufferDelegates - In the implementation block
@property (nonatomic,readonly) NSHashTable * _videoThumbnailContentsDelegates;                                                                                         //@synthesize _videoThumbnailContentsDelegates=__videoThumbnailContentsDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _recoveryMutexQueue;                                                                                       //@synthesize _recoveryMutexQueue=__recoveryMutexQueue - In the implementation block
@property (assign,setter=_setPerformingRecovery:,getter=_isPerformingRecovery,nonatomic) BOOL _performingRecovery;                                                     //@synthesize _performingRecovery=__performingRecovery - In the implementation block
@property (assign,setter=_setNumberOfRecoveryAttempts:,nonatomic) unsigned long long _numberOfRecoveryAttempts;                                                        //@synthesize _numberOfRecoveryAttempts=__numberOfRecoveryAttempts - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cacheKeyForDeviceType:(id)arg1 position:(long long)arg2 ;
+(void)preheatCaptureResources;
-(CAMPowerController *)_powerController;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(NSMutableDictionary *)_sessionQueueCachedPhotoInitiationSettings;
-(unsigned long long)_numberOfRecoveryAttempts;
-(void)stopRecording;
-(void)currentInflightCapturesStringWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_metadataObjectsQueue;
-(long long)_notificationForError:(CFStringRef)arg1 ;
-(id)backTripleCameraDevice;
-(void)_updateEffectsSubgraph;
-(void)_setPanoramaFirstImageQueueUpdateSemaphore:(id)arg1 ;
-(void)_setPanoramaImageQueue:(CAImageQueueRef)arg1 ;
-(void)changePanoramaEncodingBehaviorIfNeeded:(long long)arg1 ;
-(id)frontPearlCameraDevice;
-(NSObject*<OS_dispatch_queue>)_panoramaFirstImageQueueUpdateSemaphoreQueue;
-(void)_setResultsQueueLastCompletedVideoZoomFactor:(double)arg1 ;
-(void)captureOutput:(id)arg1 didFinishMovieCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(id)initWithPowerController:(id)arg1 options:(long long)arg2 ;
-(void)captureOutput:(id)arg1 willBeginCaptureBeforeResolvingSettingsForUniqueID:(long long)arg2 ;
-(double)_delayForRecoveryAttempt:(unsigned long long)arg1 ;
-(id)effectsPreviewVideoDataOutput;
-(id)stillImageOutput;
-(void)videoThumbnailOutput:(id)arg1 willBeginRenderingThumbnailsWithContents:(id)arg2 ;
-(void)_handleFailedSessionRecoveryAttemptAfterDelay:(BOOL)arg1 ;
-(NSHashTable *)_effectsPreviewSampleBufferDelegates;
-(NSHashTable *)_videoThumbnailContentsDelegates;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_captureResultsQueue;
-(SCD_Struct_CA34)_previewFilterSetForRequest:(id)arg1 photo:(id)arg2 ;
-(void)_scheduleDelayedRecoveryCheckIfNecessary;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)_unlockManagedCaptureDevice:(id)arg1 ;
-(BOOL)_updatePanoramaSubgraphForEnteringBackground:(BOOL)arg1 ;
-(double)_resultsQueueLastCompletedVideoZoomFactor;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(id)backSuperWideCameraDevice;
-(id)_videoDeviceInputFromSession:(id)arg1 ;
-(void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2 ;
-(id)backTelephotoCameraDevice;
-(BOOL)_shouldStartSessionOnConfigurationChanges;
-(CIContext *)_effectsPreviewSurfaceFilteringContext;
-(void)enqueueCommand:(id)arg1 ;
-(void)enqueueCommands:(id)arg1 ;
-(id)_coordinationInfoForCTMVideoRequest:(id)arg1 videoOutputURL:(id)arg2 resolvedMomentCaptureMovieSettings:(id)arg3 ;
-(CVBufferRef)_newFilteredPixelBufferFromPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 filters:(id)arg3 ;
-(void)_handleSessionDidStopRunning:(id)arg1 ;
-(void)_cancelDelayedSessionNonstartRecovery;
-(void)registerVideoEndZoomFactor:(double)arg1 ;
-(AVSpatialOverCaptureVideoPreviewLayer *)_overCaptureVideoPreviewLayer;
-(id)cachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(id)panoramaVideoDataOutput;
-(void)_commitSessionConfigurationIfNecessaryWithLogReason:(id)arg1 ;
-(void)_notifyServicesOfPanoramaConfigurationChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(void)_resultsQueue_performPostprocessingForPreviewBuffer:(CVBufferRef)arg1 metadata:(id)arg2 filters:(SCD_Struct_CA34)arg3 stillImageCaptureRequestKey:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)stopPanoramaCaptureInterrupted:(BOOL)arg1 ;
-(NSMutableArray *)_servicesQueueCaptureServices;
-(id)_captureEngineDeviceForDeviceType:(id)arg1 position:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)_captureSessionQueue;
-(NSObject*<OS_dispatch_semaphore>)_panoramaFirstImageQueueUpdateSemaphore;
-(id)_accumulatedUserInfoFromCommand:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_panoramaSampleBufferQueue;
-(void)_validateSessionRecovery;
-(void)_resetPerformingRecoveryState;
-(void)_unlockAllEngineManagedDevices;
-(void)_handleSessionDidStartRunning:(id)arg1 ;
-(id)_expectedResultSpecifiersForResolvedPhotoSettings:(id)arg1 ;
-(id)videoThumbnailOutput;
-(BOOL)_lockManagedCapturedDevice:(id)arg1 ;
-(void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2 ;
-(void)_setInterrupted:(BOOL)arg1 ;
-(id)backDualCameraDevice;
-(void)captureOutput:(id)arg1 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg2 resolvedSettings:(id)arg3 ;
-(id)audioCaptureDevice;
-(void)_captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 forVideoCaptureRequest:(id)arg4 videoZoomFactor:(double)arg5 error:(id)arg6 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3 ;
-(id)prewarmedAudioDeviceInput:(id)arg1 device:(id)arg2 ;
-(CAImageQueueRef)_panoramaImageQueue;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSurfaceFilteringQueue;
-(id)frontCameraDevice;
-(void)_setPanoramaProcessor:(id)arg1 ;
-(void)startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateContext:(id)arg1 ;
-(AVCapturePhotoOutput *)currentStillImageOutput;
-(void)_executeCommand:(id)arg1 withContext:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_recoveryMutexQueue;
-(void)_subgraphQueueHandlePanoramaErrorNotification:(CFStringRef)arg1 ;
-(void)_setResultsQueueLastCompletedVideoURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_panoramaSubgraphQueue;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)movieFileOutput;
-(void)_enumerateCaptureServicesUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableSet *)_resultsQueueRegisteredStillImageRequestsDispatchedToFilteringQueue;
-(BOOL)areManagedDevicesLockedForConfiguration;
-(NSURL *)_resultsQueueLastCompletedVideoURL;
-(void)registerCaptureService:(id)arg1 ;
-(long long)_engineOptions;
-(id)_photoOutputFromSession:(id)arg1 ;
-(void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1 ;
-(AVCaptureSession *)_captureSession;
-(void)_subgraphQueueCreatePanoramaProcessorIfNecessaryWithEncodingBehavior:(long long)arg1 ;
-(void)captureOutput:(id)arg1 didFinishRecordingMovie:(id)arg2 ;
-(BOOL)_isPerformingRecovery;
-(BOOL)_isSessionModificationRequiredByCommand:(id)arg1 logReason:(out id*)arg2 minimumExecutionTime:(out double*)arg3 ;
-(void)_performSessionRuntimeRecovery:(id)arg1 ;
-(void)setCurrentStillImageOutput:(AVCapturePhotoOutput *)arg1 ;
-(void)_sessionQueue_startWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sessionQueuePanoramaTeardown;
-(void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2 ;
-(void)_setPanoramaAssertionIdentifier:(unsigned)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 forMetadataObjectTypes:(id)arg3 fromConnection:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)_captureServicesQueue;
-(void)captureOutput:(id)arg1 didFinishWritingMovie:(id)arg2 error:(id)arg3 ;
-(CAMPanoramaProcessor *)_panoramaProcessor;
-(id)backCameraDevice;
-(void)_performSessionNonstartRecoveryIfNeeded;
-(void)registerVideoCaptureRequest:(id)arg1 ;
-(id)prewarmedVideoDeviceInput:(id)arg1 position:(long long)arg2 device:(id)arg3 ;
-(void)setCurrentCameraDevice:(AVCaptureDevice *)arg1 ;
-(void)setManagedDevicesLockedForConfiguration:(BOOL)arg1 ;
-(void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2 ;
-(id)overCaptureVideoPreviewLayer;
-(void)_subgraphQueueCreatePanoramaImageQueueIfNecessary;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(id)audioCaptureDeviceInput;
-(void)_handleCaptureOutputDidFinishCapturingPhoto:(id)arg1 deferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)_resultsQueueRegisteredStillImageRequests;
-(void)_updateVideoThumbnailSubgraph;
-(void)captureOutput:(id)arg1 didBeginMovieCaptureForResolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2 ;
-(id)backWideDualCameraDevice;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleSessionRuntimeError:(id)arg1 ;
-(id)_coordinationInfoForRequest:(id)arg1 photo:(id)arg2 ;
-(id)_validateVideoAtURL:(id)arg1 withCaptureID:(long long)arg2 withCaptureError:(id)arg3 isVideoComplement:(BOOL)arg4 stillImageDisplayTime:(SCD_Struct_CA7)arg5 reportedDuration:(SCD_Struct_CA7)arg6 outActualDuration:(SCD_Struct_CA7*)arg7 outVideoRecordingStoppedReason:(long long*)arg8 ;
-(void)captureOutput:(id)arg1 didFinishCapturingDeferredPhotoProxy:(id)arg2 error:(id)arg3 ;
-(AVCaptureDevice *)currentCameraDevice;
-(unsigned)_panoramaAssertionIdentifier;
-(void)_recoverFromSessionRuntimeError;
-(BOOL)isInterrupted;
-(NSObject*<OS_dispatch_queue>)_effectsPreviewSampleBufferQueue;
-(void)_handleSessionInterruption:(id)arg1 ;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)_didFinishStillImageCaptureForUniqueID:(long long)arg1 error:(id)arg2 ;
-(void)videoThumbnailOutputWillEndRenderingThumbnails:(id)arg1 ;
-(void)_checkCallbacksForUniqueID:(long long)arg1 afterDelay:(double)arg2 startTime:(double)arg3 ;
-(CAMMemoizationCache *)_captureEngineDeviceCache;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)_subgraphQueueHandlePanoramaStatusNotification:(CFStringRef)arg1 ;
-(void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3 ;
-(void)_beginSessionConfigurationIfRequiredByCommand:(id)arg1 withContext:(id)arg2 logReason:(out id*)arg3 minimumExecutionTime:(out double*)arg4 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)_subgraphQueueHandlePanoramaWarningNotification:(CFStringRef)arg1 ;
-(void)captureOutput:(id)arg1 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg2 duration:(SCD_Struct_CA7)arg3 photoDisplayTime:(SCD_Struct_CA7)arg4 resolvedSettings:(id)arg5 error:(id)arg6 ;
-(NSMutableDictionary *)_resultsQueueRequestsBeingRecorded;
-(void)_updateCurrentlyConfiguredObjects;
-(BOOL)_lockAllEngineManagedDevices;
-(id)_coordinationInfoForRequest:(id)arg1 resolvedSettings:(id)arg2 videoComplementURL:(id)arg3 isFiltered:(BOOL)arg4 ;
-(void)_resultsQueue_logReceivedCallbacksForID:(long long)arg1 withIntroString:(id)arg2 ;
-(void)_panoramaSampleBufferQueue_stopPanoramaCaptureIfNecessaryInterrupted:(BOOL)arg1 ;
-(void)_sessionQueuePanoramaSetup;
-(id)_previewFiltersForFilterSet:(SCD_Struct_CA34)arg1 ;
-(id)metadataOutput;
-(void)_scheduleDelayedSessionNonstartRecovery;
-(void)panoramaProcessor:(id)arg1 didProcessSampleBuffer:(opaqueCMSampleBufferRef)arg2 withStatus:(int)arg3 forRequest:(id)arg4 ;
-(SCD_Struct_CA34)_previewFilterSetForRequest:(id)arg1 previewSize:(CGSize)arg2 ;
-(id)_expectedResultSpecifiersForResolvedMomentCaptureMovieSettings:(id)arg1 ;
-(CVBufferRef)_createOutputPixelBufferWithSize:(CGSize)arg1 matchingInputPixelBuffer:(CVBufferRef)arg2 ;
-(void)_setPerformingRecovery:(BOOL)arg1 ;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)_handleSessionInterruptionEnded:(id)arg1 ;
-(id)prewarmedCaptureSession;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)dealloc;
-(void)_setNumberOfRecoveryAttempts:(unsigned long long)arg1 ;
-(AVCaptureVideoPreviewLayer *)_videoPreviewLayer;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
