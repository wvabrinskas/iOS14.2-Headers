/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureDeviceInternal, NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInputSource;

@interface AVCaptureDevice : NSObject {

	AVCaptureDeviceInternal* _internal;
	BOOL _inUseByAnotherApplication;
	int _transportType;
	NSString* _manufacturer;
	NSArray* _linkedDevices;
	NSArray* _inputSources;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * manufacturer;                                                        //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,readonly) int transportType;                                                              //@synthesize transportType=_transportType - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isInUseByAnotherApplication,nonatomic,readonly) BOOL inUseByAnotherApplication;              //@synthesize inUseByAnotherApplication=_inUseByAnotherApplication - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,readonly) NSArray * linkedDevices;                                                        //@synthesize linkedDevices=_linkedDevices - In the implementation block
@property (nonatomic,readonly) NSArray * formats; 
@property (nonatomic,retain) AVCaptureDeviceFormat * activeFormat; 
@property (assign,nonatomic) SCD_Struct_AV0 activeVideoMinFrameDuration; 
@property (assign,nonatomic) SCD_Struct_AV0 activeVideoMaxFrameDuration; 
@property (nonatomic,readonly) NSArray * inputSources;                                                         //@synthesize inputSources=_inputSources - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInputSource * activeInputSource; 
+(void)initialize;
+(long long)authorizationStatusForMediaType:(id)arg1 ;
+(void)requestAccessForMediaType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_devicesWithPriorRegisteredDevices:(id)arg1 ;
+(id)defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
+(id)deviceWithUniqueID:(id)arg1 ;
+(id)_devices;
+(id)defaultDeviceWithMediaType:(id)arg1 ;
+(void)_filterConnectedDevices:(id)arg1 withDeviceTypes:(id)arg2 mediaType:(id)arg3 position:(long long)arg4 ;
+(id)_legacyDevicesWithMediaType:(id)arg1 ;
+(void)_filterConnectedLegacyDevices:(id)arg1 ;
+(id)_defaultDeviceWithDeviceType:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)arg4 ;
+(void)_registerOnceForServerConnectionDiedNotification;
+(id)extrinsicMatrixFromDevice:(id)arg1 toDevice:(id)arg2 ;
+(void)_reconnectDevices:(id)arg1 ;
+(id)devicesWithMediaType:(id)arg1 ;
+(id)devices;
+(id)_devicesWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(BOOL)isVideoHDRSuspended;
-(void)setNonDestructiveCropEnabled:(BOOL)arg1 ;
-(BOOL)isTorchAvailable;
-(float)lensPosition;
-(BOOL)isFlashActive;
-(void)setImageControlMode:(long long)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isFlashAvailable;
-(double)videoZoomFactor;
-(void)setTimeLapseCaptureRate:(float)arg1 ;
-(void)setSpatialOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)isTorchActive;
-(void)setVariableFrameRateVideoCaptureEnabled:(BOOL)arg1 ;
-(float)timeLapseCaptureRate;
-(BOOL)isConnected;
-(long long)flashMode;
-(void)setTorchMode:(long long)arg1 ;
-(void)setDigitalFlashMode:(long long)arg1 ;
-(void)setVideoZoomFactor:(double)arg1 ;
-(long long)torchMode;
-(void)_setPhotoSettingsForSceneMonitoring:(id)arg1 ;
-(void)setActiveFormat:(AVCaptureDeviceFormat *)arg1 ;
-(BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2 ;
-(id)deviceType;
-(long long)digitalFlashMode;
-(void)close;
-(void)_setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(NSString *)manufacturer;
-(BOOL)isHDRSceneDetectedForPhotoOutput;
-(BOOL)isExposureModeSupported:(long long)arg1 ;
-(float)exposureTargetOffset;
-(float)ISO;
-(void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
-(long long)whiteBalanceMode;
-(void)setActiveVideoMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(float)focalLength;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(BOOL)isExposurePointOfInterestSupported;
-(int)transportType;
-(BOOL)isRampingVideoZoom;
-(BOOL)hevcAllowBFramesForHighCTUCount;
-(long long)timeOfFlightBankCount;
-(int)faceRectangleAngle;
-(long long)imageControlMode;
-(id)cameraPoseMatrix;
-(BOOL)hasTorch;
-(BOOL)lockForConfiguration:(id*)arg1 ;
-(BOOL)isOpen;
-(void)setExposureModeCustomWithDuration:(SCD_Struct_AV0)arg1 ISO:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)arg1 ;
-(BOOL)isVirtualDevice;
-(BOOL)isHEVCPreferred;
-(BOOL)_isDepthDataDeliveryEnabled;
-(BOOL)isSmoothAutoFocusSupported;
-(SCD_Struct_AV26)grayWorldDeviceWhiteBalanceGains;
-(BOOL)eyeClosedDetectionEnabled;
-(id)debugDescription;
-(BOOL)_isFlashScene;
-(float)minExposureTargetBias;
-(BOOL)isEyeDetectionSupported;
-(void)setFocusPointOfInterest:(CGPoint)arg1 ;
-(void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(BOOL)isMachineReadableCodeDetectionSupported;
-(BOOL)providesStortorgetMetadata;
-(BOOL)isSubjectAreaChangeMonitoringEnabled;
-(SCD_Struct_AV26)deviceWhiteBalanceGains;
-(void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(BOOL)isSmileDetectionSupported;
-(SCD_Struct_AV0)activeVideoMinFrameDuration;
-(OpaqueCMClockRef)deviceClock;
-(void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(BOOL)isLockedForConfiguration;
-(void)setWhiteBalanceMode:(long long)arg1 ;
-(id)systemPressureState;
-(id)virtualDeviceSwitchOverVideoZoomFactors;
-(float)torchLevel;
-(NSString *)modelID;
-(void)setActiveMaxExposureDuration:(SCD_Struct_AV0)arg1 ;
-(void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1 ;
-(float)maxExposureTargetBias;
-(float)ISODigitalThreshold;
-(CGRect)faceRectangle;
-(SCD_Struct_AV26)deviceWhiteBalanceGainsForTemperatureAndTintValues:(SCD_Struct_AV27)arg1 ;
-(BOOL)isLockingFocusWithCustomLensPositionSupported;
-(void)setVideoMinFrameDurationOverride:(SCD_Struct_AV0)arg1 forOwner:(id)arg2 ;
-(void)setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(void)setFocusMode:(long long)arg1 ;
-(CGPoint)focusPointOfInterest;
-(void)setEyeDetectionEnabled:(BOOL)arg1 ;
-(CGPoint)exposurePointOfInterest;
-(BOOL)hasMediaType:(id)arg1 ;
-(BOOL)isFaceDetectionDuringVideoPreviewSupported;
-(id)description;
-(BOOL)isTorchModeSupported:(long long)arg1 ;
-(void)resetVideoMinFrameDurationOverrideForOwner:(id)arg1 ;
-(id)digitalFlashSceneForPhotoOutput;
-(long long)focusMode;
-(BOOL)isActiveVideoMinFrameDurationSet;
-(BOOL)isAdjustingFocus;
-(void)setSmileDetectionEnabled:(BOOL)arg1 ;
-(int)powerConsumptionAt30FPSForOISMode:(int)arg1 ;
-(id)AVVideoSettingsForSessionPreset:(id)arg1 ;
-(BOOL)isAdjustingWhiteBalance;
-(BOOL)isGlobalToneMappingEnabled;
-(BOOL)isImageControlModeSupported:(long long)arg1 ;
-(BOOL)hasFlash;
-(BOOL)isHEVCMemoryUsageMinimizationSupported;
-(long long)_digitalFlashStatus;
-(BOOL)isFlashModeSupported:(long long)arg1 ;
-(BOOL)isVideoHDREnabled;
-(BOOL)open:(id*)arg1 ;
-(BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
-(BOOL)cachesFigCaptureSourceConfigurationChanges;
-(void)setFocusModeLockedWithLensPosition:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isSuspended;
-(BOOL)isAutoFocusRangeRestrictionSupported;
-(BOOL)isFaceDetectionSupported;
-(SCD_Struct_AV22)maxH264PhotoDimensions;
-(SCD_Struct_AV0)activeMaxExposureDurationClientOverride;
-(BOOL)isAdjustingExposure;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(BOOL)automaticallyAdjustsVideoHDREnabled;
-(void)setSmoothAutoFocusEnabled:(BOOL)arg1 ;
-(void)unlockForConfiguration;
-(SCD_Struct_AV0)activeMaxExposureDuration;
-(int)hevcTurboModeVersion;
-(long long)position;
-(float)exposureTargetBias;
-(BOOL)isHEVCSupported;
-(BOOL)automaticallyAdjustsImageControlMode;
-(BOOL)isNonDestructiveCropEnabled;
-(BOOL)isTimeOfFlightProjectorModeSupported:(long long)arg1 ;
-(BOOL)isWhiteBalanceModeSupported:(long long)arg1 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg1 ;
-(BOOL)isSmoothAutoFocusEnabled;
-(long long)exposureMode;
-(BOOL)isGeometricDistortionCorrectionSupported;
-(double)maxAvailableVideoZoomFactor;
-(NSString *)localizedName;
-(BOOL)_startUsingDevice:(id*)arg1 ;
-(void)setAutoFocusRangeRestriction:(long long)arg1 ;
-(void)_stopUsingDevice;
-(BOOL)startUsingDevice:(id*)arg1 ;
-(void)stopUsingDevice;
-(AVCaptureDeviceInputSource *)activeInputSource;
-(void)setActiveInputSource:(AVCaptureDeviceInputSource *)arg1 ;
-(BOOL)isLowLightBoostSupported;
-(BOOL)isLowLightBoostEnabled;
-(BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
-(void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1 ;
-(void)setBravoCameraSelectionBehavior:(id)arg1 ;
-(void)setExposureTargetBias:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setVideoHDREnabled:(BOOL)arg1 ;
-(unsigned long long)degradedCaptureQualityFactors;
-(BOOL)isInUseByAnotherApplication;
-(NSArray *)linkedDevices;
-(NSArray *)inputSources;
-(int)minMacroblocksForHighProfileAbove30fps;
-(void)setActiveDepthDataFormat:(id)arg1 ;
-(void)setActiveDepthDataMinFrameDuration:(SCD_Struct_AV0)arg1 ;
-(id)constituentDeviceWithDeviceType:(id)arg1 ;
-(SCD_Struct_AV27)chromaticityValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 ;
-(long long)shallowDepthOfFieldEffectStatus;
-(long long)autoFocusRangeRestriction;
-(void)_setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)isActiveVideoMaxFrameDurationSet;
-(SCD_Struct_AV26)deviceWhiteBalanceGainsForChromaticityValues:(SCD_Struct_AV27)arg1 ;
-(BOOL)isLowLightVideoCaptureEnabled;
-(BOOL)isWideColorSupported;
-(SCD_Struct_AV0)exposureDuration;
-(BOOL)isEyeClosedDetectionSupported;
-(void)setExposureMode:(long long)arg1 ;
-(BOOL)isFocusModeSupported:(long long)arg1 ;
-(id)availableBoxedMetadataFormatDescriptions;
-(void)rampExponentiallyToVideoZoomFactor:(float)arg1 withDuration:(double)arg2 ;
-(double)dualCameraSwitchOverVideoZoomFactor;
-(id)bravoCameraSelectionBehavior;
-(AVCaptureDeviceFormat *)activeFormat;
-(BOOL)hevcAllowBFramesForHighCTUCountAndHighResolution;
-(BOOL)isVariableFrameRateVideoCaptureEnabled;
-(BOOL)isConstituentPhotoCalibrationDataSupported;
-(void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)arg1 ;
-(BOOL)isVideoStabilizationSupported;
-(SCD_Struct_AV22)maxH264VideoDimensions;
-(float)lensAperture;
-(id)supportedMetadataObjectIdentifiers;
-(void)_setActiveVideoMaxFrameDuration:(SCD_Struct_AV0)arg1 ;
-(BOOL)supportsMultiCamCaptureWithDevice:(id)arg1 ;
-(int)minMacroblocksForHighProfileUpTo30fps;
-(long long)activeColorSpace;
-(SCD_Struct_AV0)activeVideoMaxFrameDuration;
-(BOOL)isLensStabilizationSupported;
-(NSArray *)formats;
-(void)setEyeClosedDetectionEnabled:(BOOL)arg1 ;
-(void)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(void)setNonDestructiveCropAspectRatio:(long long)arg1 ;
-(void)setTimeOfFlightProjectorMode:(long long)arg1 ;
-(BOOL)isAutoRedEyeReductionSupported;
-(BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
-(NSString *)uniqueID;
-(void)setGlobalToneMappingEnabled:(BOOL)arg1 ;
-(SCD_Struct_AV27)temperatureAndTintValuesForDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 ;
-(BOOL)isGeometricDistortionCorrectionEnabled;
-(id)activeDepthDataFormat;
-(id)initSubclass;
-(void)cancelVideoZoomRamp;
-(void)_setVideoHDREnabled:(BOOL)arg1 ;
-(double)minAvailableVideoZoomFactor;
-(float)maxWhiteBalanceGain;
-(BOOL)isHEIFSupported;
-(void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(SCD_Struct_AV26)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isFaceDetectionDrivenImageProcessingEnabled;
-(id)constituentDevices;
-(void)setExposurePointOfInterest:(CGPoint)arg1 ;
-(BOOL)isCameraIntrinsicMatrixDeliverySupported;
-(BOOL)isFlashSceneDetectedForPhotoOutput;
-(BOOL)isFocusPointOfInterestSupported;
-(BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
-(void)setVideoHDRSuspended:(BOOL)arg1 ;
-(SCD_Struct_AV0)activeDepthDataMinFrameDuration;
-(void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(long long)timeOfFlightProjectorMode;
-(BOOL)isSpatialOverCaptureEnabled;
-(id)_digitalFlashExposureTimes;
-(long long)nonDestructiveCropAspectRatio;
-(void)dealloc;
-(void)_checkTCCAccess;
-(BOOL)eyeDetectionEnabled;
-(void)setActiveColorSpace:(long long)arg1 ;
-(void)setLowLightVideoCaptureEnabled:(BOOL)arg1 ;
-(BOOL)smileDetectionEnabled;
@end

