/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMSharedUI/IMAudioControllerDelegate.h>
#import <IMSharedUI/IMFullScreenEffectSoundPlayer.h>

@protocol IMFullScreenEffectSoundPlayer <NSObject>
@property (assign,nonatomic,__weak) id<IMFullScreenEffectSoundPlayerDelegate> delegate; 
@required
-(id<IMFullScreenEffectSoundPlayerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stopPlayingSound;
-(id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2;
-(void)prepareToPlaySound;
-(void)startPlayingSound;

@end


@protocol IMFullScreenEffectSoundPlayerDelegate;
@class IMAudioController, NSURL, NSString;

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer> {

	BOOL _started;
	BOOL _hasHapticTrack;
	float _currentVolume;
	id<IMFullScreenEffectSoundPlayerDelegate> _delegate;
	IMAudioController* _audioController;
	NSURL* _soundURL;

}

@property (nonatomic,retain) IMAudioController * audioController;                                    //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSURL * soundURL;                                                     //@synthesize soundURL=_soundURL - In the implementation block
@property (nonatomic,readonly) BOOL hasHapticTrack;                                                  //@synthesize hasHapticTrack=_hasHapticTrack - In the implementation block
@property (assign,nonatomic) float currentVolume;                                                    //@synthesize currentVolume=_currentVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IMFullScreenEffectSoundPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(float)currentVolume;
-(void)setStarted:(BOOL)arg1 ;
-(id<IMFullScreenEffectSoundPlayerDelegate>)delegate;
-(BOOL)started;
-(void)setCurrentVolume:(float)arg1 ;
-(void)_didPrepare;
-(IMAudioController *)audioController;
-(void)setAudioController:(IMAudioController *)arg1 ;
-(void)setDelegate:(id<IMFullScreenEffectSoundPlayerDelegate>)arg1 ;
-(BOOL)_supportsSoundEffects;
-(void)_audioSessionOptionsWillChange:(id)arg1 ;
-(id)_ensureAudioPlayer;
-(NSURL *)soundURL;
-(void)_didStart;
-(void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(BOOL)arg3 ;
-(BOOL)hasHapticTrack;
-(void)_didStop;
-(void)stopPlayingSound;
-(id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2 ;
-(void)prepareToPlaySound;
-(void)startPlayingSound;
@end

