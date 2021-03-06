/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/ISSettings.h>
#import <libobjc.A.dylib/ISVitalitySettings.h>

@protocol ISVitalitySettings <NSObject>
@required
-(double)playbackRate;
-(double)maximumDelayBeforePlayback;
-(long long)behavior;
-(double)minimumPhotoTransitionDuration;
-(double)endTimeOffset;
-(double)maxVitalityDelay;
-(double)minimumVisibilityFactor;
-(double)postDuration;
-(double)preDuration;

@end


@class ISVitalitySpecificSettings, NSString;

@interface ISVitalitySettings : ISSettings <ISVitalitySettings> {

	BOOL _shouldPreroll;
	BOOL _useLegacyBehavior;
	ISVitalitySpecificSettings* _oneUpSettings;
	ISVitalitySpecificSettings* _shareViewSettings;
	ISVitalitySpecificSettings* _activityViewSettings;
	ISVitalitySpecificSettings* _orbPreviewSettings;

}

@property (assign,nonatomic) BOOL useLegacyBehavior;                                         //@synthesize useLegacyBehavior=_useLegacyBehavior - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * oneUpSettings;                     //@synthesize oneUpSettings=_oneUpSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * shareViewSettings;                 //@synthesize shareViewSettings=_shareViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * activityViewSettings;              //@synthesize activityViewSettings=_activityViewSettings - In the implementation block
@property (nonatomic,retain) ISVitalitySpecificSettings * orbPreviewSettings;                //@synthesize orbPreviewSettings=_orbPreviewSettings - In the implementation block
@property (assign,nonatomic) BOOL shouldPreroll;                                             //@synthesize shouldPreroll=_shouldPreroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)playbackRate;
-(void)setOneUpSettings:(ISVitalitySpecificSettings *)arg1 ;
-(void)setActivityViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)maximumDelayBeforePlayback;
-(long long)behavior;
-(void)setUseLegacyBehavior:(BOOL)arg1 ;
-(void)setShareViewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(BOOL)shouldPreroll;
-(double)minimumPhotoTransitionDuration;
-(double)endTimeOffset;
-(BOOL)useLegacyBehavior;
-(double)maxVitalityDelay;
-(double)minimumVisibilityFactor;
-(ISVitalitySpecificSettings *)shareViewSettings;
-(void)setOrbPreviewSettings:(ISVitalitySpecificSettings *)arg1 ;
-(double)postDuration;
-(ISVitalitySpecificSettings *)orbPreviewSettings;
-(ISVitalitySpecificSettings *)activityViewSettings;
-(ISVitalitySpecificSettings *)oneUpSettings;
-(double)preDuration;
-(void)setShouldPreroll:(BOOL)arg1 ;
-(id)_defaultSettings;
@end

