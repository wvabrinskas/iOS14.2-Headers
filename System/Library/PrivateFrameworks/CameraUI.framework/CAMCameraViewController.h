/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CAMCaptureResultDelegate.h>
#import <libobjc.A.dylib/CAMPersistenceResultDelegate.h>
#import <libobjc.A.dylib/CAMCVCStillImageResultCoordinatorDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderReviewButtonSource.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CAMCameraCaptureDelegate, OS_dispatch_queue, CAMCameraViewControllerPresentationDelegate, CAMCameraViewControllerCameraSessionDelegate;
@class PAImageConversionServiceClient, PAVideoConversionServiceClient, CUCaptureController, CAMTimelapseController, CAMPersistenceController, CAMMotionController, CAMLocationController, CAMPowerController, CAMBurstController, CAMKeepAliveController, CAMProtectionController, CAMRemoteShutterController, CAMNebulaDaemonProxyManager, CAMReviewButton, NSObject, NSMutableDictionary, CAMThumbnailGenerator, CAMViewfinderViewController, NSString;

@interface CAMCameraViewController : UIViewController <CAMCaptureResultDelegate, CAMPersistenceResultDelegate, CAMCVCStillImageResultCoordinatorDelegate, CAMViewfinderReviewButtonSource, NSCoding, NSSecureCoding> {

	BOOL _automaticallyManagesCameraSession;
	PAImageConversionServiceClient* __imageConversionClient;
	PAVideoConversionServiceClient* __videoConversionClient;
	id<CAMCameraCaptureDelegate> _captureDelegate;
	CUCaptureController* _captureController;
	CAMTimelapseController* _timelapseController;
	CAMPersistenceController* _persistenceController;
	CAMMotionController* _motionController;
	CAMLocationController* _locationController;
	CAMPowerController* _powerController;
	CAMBurstController* _burstController;
	CAMKeepAliveController* _keepAliveController;
	CAMProtectionController* _protectionController;
	CAMRemoteShutterController* _remoteShutterController;
	CAMNebulaDaemonProxyManager* _nebulaDaemonProxyManager;
	CAMReviewButton* __reviewButton;
	NSObject*<OS_dispatch_queue> __resultProcessingQueue;
	NSMutableDictionary* __resultQueueStillImageResultCoordinators;
	CAMThumbnailGenerator* __resultQueueThumbnailGenerator;
	CAMViewfinderViewController* _viewfinderViewController;
	id<CAMCameraViewControllerPresentationDelegate> _presentationDelegate;
	id<CAMCameraViewControllerCameraSessionDelegate> _cameraSessionDelegate;

}

@property (nonatomic,readonly) CUCaptureController * captureController;                                                              //@synthesize captureController=_captureController - In the implementation block
@property (nonatomic,readonly) CAMTimelapseController * timelapseController;                                                         //@synthesize timelapseController=_timelapseController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * persistenceController;                                                     //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * motionController;                                                               //@synthesize motionController=_motionController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * locationController;                                                           //@synthesize locationController=_locationController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * powerController;                                                                 //@synthesize powerController=_powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * burstController;                                                                 //@synthesize burstController=_burstController - In the implementation block
@property (nonatomic,readonly) CAMKeepAliveController * keepAliveController;                                                         //@synthesize keepAliveController=_keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * protectionController;                                                       //@synthesize protectionController=_protectionController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * remoteShutterController;                                                 //@synthesize remoteShutterController=_remoteShutterController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * nebulaDaemonProxyManager;                                               //@synthesize nebulaDaemonProxyManager=_nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) CAMReviewButton * _reviewButton;                                                                      //@synthesize _reviewButton=__reviewButton - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultProcessingQueue;                                                  //@synthesize _resultProcessingQueue=__resultProcessingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _resultQueueStillImageResultCoordinators;                                       //@synthesize _resultQueueStillImageResultCoordinators=__resultQueueStillImageResultCoordinators - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _resultQueueThumbnailGenerator;                                               //@synthesize _resultQueueThumbnailGenerator=__resultQueueThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) PAImageConversionServiceClient * _imageConversionClient;                                              //@synthesize _imageConversionClient=__imageConversionClient - In the implementation block
@property (nonatomic,readonly) PAVideoConversionServiceClient * _videoConversionClient;                                              //@synthesize _videoConversionClient=__videoConversionClient - In the implementation block
@property (nonatomic,readonly) CAMViewfinderViewController * viewfinderViewController;                                               //@synthesize viewfinderViewController=_viewfinderViewController - In the implementation block
@property (assign,getter=isDisablingMultipleCaptureFeatures,nonatomic) BOOL disablingMultipleCaptureFeatures; 
@property (assign,getter=isDisablingAdditionalCaptures,nonatomic) BOOL disablingAdditionalCaptures; 
@property (getter=isPreventingAdditionalCaptures,nonatomic,readonly) BOOL preventingAdditionalCaptures; 
@property (assign,nonatomic) unsigned long long persistenceBehavior; 
@property (assign,nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer; 
@property (assign,nonatomic,__weak) id<CAMCameraViewControllerPresentationDelegate> presentationDelegate;                            //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,getter=creativeCameraDelegate,nonatomic,__weak) id<CAMCreativeCameraDelegate> creativeCameraDelegate; 
@property (assign,getter=isPerformingTileTransition,nonatomic) BOOL performingTileTransition; 
@property (assign,nonatomic) BOOL automaticallyManagesCameraSession;                                                                 //@synthesize automaticallyManagesCameraSession=_automaticallyManagesCameraSession - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraViewControllerCameraSessionDelegate> cameraSessionDelegate;                          //@synthesize cameraSessionDelegate=_cameraSessionDelegate - In the implementation block
@property (nonatomic,readonly) long long messagesTransitionState; 
@property (assign,nonatomic,__weak) id<CAMCameraConfigurationDelegate> configurationDelegate; 
@property (nonatomic,readonly) long long captureMode; 
@property (nonatomic,readonly) long long captureDevice; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long timerDuration; 
@property (assign,nonatomic) long long livePhotoMode; 
@property (assign,nonatomic) long long photoModeAspectRatioCrop; 
@property (assign,nonatomic,__weak) id<CAMCameraCaptureDelegate> captureDelegate;                                                    //@synthesize captureDelegate=_captureDelegate - In the implementation block
@property (getter=isCapturingPhoto,nonatomic,readonly) BOOL capturingPhoto; 
@property (getter=isCapturingLivePhoto,nonatomic,readonly) BOOL capturingLivePhoto; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEmulatingImagePicker;
+(BOOL)supportsSecureCoding;
-(CAMReviewButton *)_reviewButton;
-(long long)livePhotoMode;
-(void)setTimerDuration:(long long)arg1 ;
-(BOOL)isDisablingAdditionalCaptures;
-(void)setFlashMode:(long long)arg1 ;
-(unsigned long long)persistenceBehavior;
-(long long)timerDuration;
-(id<CAMCameraConfigurationDelegate>)configurationDelegate;
-(void)handleVolumeButtonReleased;
-(long long)flashMode;
-(void)setTorchMode:(long long)arg1 ;
-(BOOL)isCapturingPhoto;
-(void)handleVolumeButtonPressed;
-(BOOL)isPerformingTileTransition;
-(BOOL)stopRecording;
-(void)setHDRMode:(long long)arg1 ;
-(long long)captureDevice;
-(void)setConfigurationDelegate:(id<CAMCameraConfigurationDelegate>)arg1 ;
-(long long)torchMode;
-(BOOL)startRecording;
-(BOOL)automaticallyAdjustsApplicationIdleTimer;
-(BOOL)isDisablingMultipleCaptureFeatures;
-(void)setDisablingMultipleCaptureFeatures:(BOOL)arg1 ;
-(long long)photoModeAspectRatioCrop;
-(id<CAMCreativeCameraDelegate>)creativeCameraDelegate;
-(BOOL)isRecording;
-(BOOL)isCapturingLivePhoto;
-(BOOL)capturePhoto;
-(long long)hdrMode;
-(CAMLocationController *)locationController;
-(CGSize)viewSystemLayoutSizeFittingSize:(CGSize)arg1 forCaptureMode:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CAMMotionController *)motionController;
-(CUCaptureController *)captureController;
-(CAMProtectionController *)protectionController;
-(void)setMessagesTransitionState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPersistenceBehavior:(unsigned long long)arg1 ;
-(CAMViewfinderViewController *)viewfinderViewController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CAMPersistenceController *)persistenceController;
-(PAImageConversionServiceClient *)_imageConversionClient;
-(void)didReceiveMemoryWarning;
-(void)setLivePhotoMode:(long long)arg1 ;
-(void)viewDidLoad;
-(id)reviewButton;
-(CAMBurstController *)burstController;
-(long long)captureMode;
-(void)setDisablingAdditionalCaptures:(BOOL)arg1 ;
-(CAMKeepAliveController *)keepAliveController;
-(id)childViewControllerForStatusBarHidden;
-(CAMTimelapseController *)timelapseController;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CAMCameraViewControllerPresentationDelegate>)presentationDelegate;
-(void)setPhotoModeAspectRatioCrop:(long long)arg1 ;
-(void)setCreativeCameraDelegate:(id<CAMCreativeCameraDelegate>)arg1 ;
-(void)loadView;
-(BOOL)isPreventingAdditionalCaptures;
-(long long)messagesTransitionState;
-(void)setAutomaticallyAdjustsApplicationIdleTimer:(BOOL)arg1 ;
-(CAMRemoteShutterController *)remoteShutterController;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(CAMPowerController *)powerController;
-(CAMNebulaDaemonProxyManager *)nebulaDaemonProxyManager;
-(PAVideoConversionServiceClient *)_videoConversionClient;
-(void)setPerformingTileTransition:(BOOL)arg1 ;
-(void)setPresentationDelegate:(id<CAMCameraViewControllerPresentationDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2 ;
-(void)setCaptureDelegate:(id<CAMCameraCaptureDelegate>)arg1 ;
-(void)configureForCaptureMode:(long long)arg1 captureDevice:(long long)arg2 ;
-(void)handleReviewButtonReleased:(id)arg1 ;
-(void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2 ;
-(void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(void)captureController:(id)arg1 didGenerateStillImageCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsDispatchForResultSpecifiers:(unsigned long long)arg2 photoProperties:(id)arg3 videoProperties:(id)arg4 unfilteredPhotoProperties:(id)arg5 unfilteredVideoProperties:(id)arg6 assetAdjustments:(id)arg7 error:(id)arg8 ;
-(void)stillImagePersistenceCoordinatorDidCompleteAllDispatches:(id)arg1 ;
-(void)_commonCAMCameraViewControllerInitializationWithOverrides:(id)arg1 usingEmulationMode:(long long)arg2 initialLayoutStyle:(long long)arg3 privateOptions:(long long)arg4 ;
-(BOOL)automaticallyManagesCameraSession;
-(void)resumeCameraSession;
-(void)suspendCameraSession;
-(id<CAMCameraViewControllerCameraSessionDelegate>)cameraSessionDelegate;
-(unsigned long long)_capturePersistenceBehaviorForViewfinderPersistenceBehavior:(unsigned long long)arg1 ;
-(unsigned long long)_viewfinderPersistenceBehaviorForCapturePersistenceBehavior:(unsigned long long)arg1 ;
-(CAMThumbnailGenerator *)_resultQueueThumbnailGenerator;
-(id<CAMCameraCaptureDelegate>)captureDelegate;
-(id)_resultQueueSafeImageFromSurface:(void*)arg1 imageOrientation:(long long)arg2 ;
-(id)_previewImageFromVideoURL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_resultProcessingQueue;
-(id)_clientPropertiesForStillImageWithURL:(id)arg1 captureMode:(long long)arg2 captureOrientation:(long long)arg3 previewSurface:(void*)arg4 previewOrientation:(long long)arg5 uniqueIdentifier:(id)arg6 savedToPhotoLibrary:(BOOL)arg7 captureResult:(id)arg8 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfPhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(id)_behaviorDefinedDestinationURLForRequest:(id)arg1 withLocalDestinationURL:(id)arg2 linkedDestinationURL:(id)arg3 ;
-(id)_exportPropertiesForClientProperties:(id)arg1 ;
-(id)_resultQueue_getOrCreateStillImageResultCoordinatorForRequest:(id)arg1 captureTimeExpectedResultSpecifiers:(id)arg2 isExpectingPairedVideo:(BOOL)arg3 isDisablingMultipleCaptures:(BOOL)arg4 isGeneratingFilteredMedia:(BOOL)arg5 ;
-(id)_mediaConversionOptionsForAdjustments:(id)arg1 mediaType:(long long)arg2 ;
-(id)_clientPropertiesForPhotoProperties:(id)arg1 withFilteredImageURL:(id)arg2 conversionOutputInfo:(id)arg3 error:(id)arg4 ;
-(void)_handleCTMVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)_handleLivePhotoVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)_handleVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(id)_clientPropertiesForLivePhotoVideoURL:(id)arg1 duration:(SCD_Struct_CA7)arg2 error:(id)arg3 ;
-(void)_handleCTMVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 size:(CGSize)arg4 videoURL:(id)arg5 renderedToURL:(id)arg6 renderedAdjustments:(id)arg7 ;
-(id)_clientPropertiesForVideoURL:(id)arg1 renderedURL:(id)arg2 duration:(SCD_Struct_CA7)arg3 size:(CGSize)arg4 creationDate:(id)arg5 captureOrientation:(long long)arg6 previewOrientation:(long long)arg7 adjustments:(id)arg8 uniqueIdentifier:(id)arg9 savedToPhotoLibrary:(BOOL)arg10 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfVideo:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(void)_resultQueue_forceCompletionIfPossibleForRequest:(id)arg1 ;
-(id)_resultQueue_getStillImageResultCoordinatorForRequest:(id)arg1 ;
-(NSMutableDictionary *)_resultQueueStillImageResultCoordinators;
-(void)_renderLivePhotoWithCoordinator:(id)arg1 specifiers:(unsigned long long)arg2 photoProperties:(id)arg3 videoProperties:(id)arg4 adjustments:(id)arg5 ;
-(void)_handlePhotoProperties:(id)arg1 videoProperties:(id)arg2 unfilteredPhotoProperties:(id)arg3 unfilteredVideoProperties:(id)arg4 assetAdjustments:(id)arg5 attemptPairingVideo:(BOOL)arg6 error:(id)arg7 ;
-(void)_notifyCaptureDelegateOfCompletedCaptureOfLivePhoto:(id)arg1 withProperties:(id)arg2 error:(id)arg3 ;
-(void)_resultQueue_removeStillImageResultCoordinatorForIdentifier:(id)arg1 ;
-(id)initWithOverrides:(id)arg1 initialLayoutStyle:(long long)arg2 privateOptions:(long long)arg3 ;
-(void)setAutomaticallyManagesCameraSession:(BOOL)arg1 ;
-(void)setCameraSessionDelegate:(id<CAMCameraViewControllerCameraSessionDelegate>)arg1 ;
@end

