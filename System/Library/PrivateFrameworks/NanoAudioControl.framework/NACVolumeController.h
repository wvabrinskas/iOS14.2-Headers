/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSOrderedSet, NSString;


@protocol NACVolumeController <NSObject>
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable; 
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) BOOL volumeWarningEnabled; 
@property (nonatomic,readonly) long long volumeWarningState; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit; 
@property (assign,getter=isSystemMuted,nonatomic) BOOL systemMuted; 
@property (assign,nonatomic) long long hapticState; 
@property (nonatomic,readonly) NSOrderedSet * availableListeningModes; 
@property (nonatomic,retain) NSString * currentListeningMode; 
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isProminentHapticEnabled,nonatomic) BOOL prominentHapticEnabled; 
@optional
-(void)_ignoreHapticObservation;

@required
-(float)EUVolumeLimit;
-(long long)volumeWarningState;
-(id<NACVolumeControllerDelegate>)delegate;
-(BOOL)isMuted;
-(BOOL)isVolumeControlAvailable;
-(void)allowUserToExceedEUVolumeLimit;
-(void)setMuted:(BOOL)arg1;
-(float)hapticIntensity;
-(void)setDelegate:(id)arg1;
-(void)setVolumeValue:(float)arg1;
-(float)volumeValue;
-(void)setHapticIntensity:(float)arg1;
-(NSOrderedSet *)availableListeningModes;
-(void)setProminentHapticEnabled:(BOOL)arg1;
-(void)setHapticState:(long long)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(BOOL)isVolumeWarningEnabled;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(id)arg1;
-(void)beginObservingListeningModes;
-(void)endObservingListeningModes;
-(void)endObservingVolume;
-(void)beginObservingVolume;
-(void)beginObservingHaptics;
-(void)endObservingHaptics;
-(BOOL)isSystemMuted;
-(long long)hapticState;
-(BOOL)isProminentHapticEnabled;

@end
