/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWSphereModeSelector : NSObject {

	CFStringRef _currentSphereMode;
	float _maximumFrameRate;
	BOOL _sphereVideoSupported;
	BOOL _sphereVideoEnabled;
	BOOL _avoidsSphereRecentering;
	BOOL _enablesSphereWhenAvailable;
	BOOL _motionDataInvalid;
	BOOL _lowPowerSphereModeEnabled;
	BOOL _stillPreviewActiveSupported;
	BOOL _zeroShutterLagEnabled;
	int _sphereThermalLevel;
	BOOL _tripodModeEnabled;
	BOOL _depthDataDeliveryEnabled;
	BOOL _overCaptureEnabled;
	BOOL _variableFrameRateVideoEnabled;

}

@property (assign,nonatomic) float maximumFrameRate; 
@property (nonatomic,readonly) BOOL sphereVideoSupported; 
@property (assign,nonatomic) BOOL sphereVideoEnabled; 
@property (assign,nonatomic) BOOL avoidsSphereRecentering; 
@property (assign,nonatomic) BOOL enablesSphereWhenAvailable; 
@property (assign,nonatomic) BOOL zeroShutterLagEnabled; 
@property (assign,nonatomic) BOOL lowPowerSphereModeEnabled; 
@property (assign,nonatomic) int systemThermalLevel; 
@property (assign,nonatomic) BOOL tripodModeEnabled; 
@property (assign,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL overCaptureEnabled; 
@property (assign,nonatomic) BOOL variableFrameRateVideoEnabled; 
@property (readonly) CFStringRef currentSphereMode; 
+(void)initialize;
-(BOOL)sphereVideoSupported;
-(void)setMaximumFrameRate:(float)arg1 ;
-(void)setOverCaptureEnabled:(BOOL)arg1 ;
-(BOOL)overCaptureEnabled;
-(float)maximumFrameRate;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(BOOL)depthDataDeliveryEnabled;
-(void)setZeroShutterLagEnabled:(BOOL)arg1 ;
-(BOOL)zeroShutterLagEnabled;
-(void)setTripodModeEnabled:(BOOL)arg1 ;
-(BOOL)enablesSphereWhenAvailable;
-(BOOL)lowPowerSphereModeEnabled;
-(BOOL)avoidsSphereRecentering;
-(BOOL)variableFrameRateVideoEnabled;
-(void)_updateSphereMode;
-(void)setSystemThermalLevel:(int)arg1 ;
-(void)setEnablesSphereWhenAvailable:(BOOL)arg1 ;
-(void)setAvoidsSphereRecentering:(BOOL)arg1 ;
-(BOOL)tripodModeEnabled;
-(BOOL)sphereVideoEnabled;
-(int)systemThermalLevel;
-(id)initWithStillActivePreviewSupported:(BOOL)arg1 sphereVideoSupported:(BOOL)arg2 ;
-(void)setLowPowerSphereModeEnabled:(BOOL)arg1 ;
-(void)setSphereVideoEnabled:(BOOL)arg1 ;
-(void)setVariableFrameRateVideoEnabled:(BOOL)arg1 ;
-(CFStringRef)currentSphereMode;
@end
