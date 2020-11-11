/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalAudio.framework/PersonalAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HearingCore/HCSettings.h>

@class PAConfiguration, NSDictionary;

@interface PASettings : HCSettings

@property (assign,nonatomic) BOOL personalMediaEnabled; 
@property (nonatomic,retain) PAConfiguration * personalMediaConfiguration; 
@property (nonatomic,retain) PAConfiguration * audiogramConfiguration; 
@property (assign,nonatomic) unsigned long long personalAudioAccommodationTypes; 
@property (assign,nonatomic) unsigned long long currentEnrollmentProgress; 
@property (assign,nonatomic) BOOL configurationCameFromEnrollment; 
@property (assign,nonatomic) BOOL configurationCameFromUser; 
@property (assign,nonatomic) BOOL shouldUpdateAccessory; 
@property (nonatomic,retain) NSDictionary * transparencyCustomized; 
@property (nonatomic,retain) NSDictionary * transparencyAmplification; 
@property (nonatomic,retain) NSDictionary * transparencyBalance; 
@property (nonatomic,retain) NSDictionary * transparencyTone; 
@property (assign,nonatomic) BOOL personalSoundVisible; 
@property (assign,nonatomic) BOOL personalMediaDebugMode; 
+(id)sharedInstance;
-(NSDictionary *)transparencyAmplification;
-(void)setTransparencyAmplification:(NSDictionary *)arg1 ;
-(void)setTransparencyTone:(double)arg1 forAddress:(id)arg2 ;
-(void)setPersonalAudioAccommodationTypes:(unsigned long long)arg1 ;
-(id)preferenceKeyForSelector:(SEL)arg1 ;
-(double)transparencyAmplificationForAddress:(id)arg1 ;
-(void)setTransparencyAmplification:(double)arg1 forAddress:(id)arg2 ;
-(BOOL)configurationCameFromEnrollment;
-(void)setTransparencyCustomized:(BOOL)arg1 forAddress:(id)arg2 ;
-(void)setConfiguration:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)personalAudioAccommodationTypes;
-(void)logMessage:(id)arg1 ;
-(unsigned long long)currentEnrollmentProgress;
-(void)setTransparencyBalance:(double)arg1 forAddress:(id)arg2 ;
-(PAConfiguration *)personalMediaConfiguration;
-(id)configurationWithKey:(id)arg1 ;
-(double)transparencyBalanceForAddress:(id)arg1 ;
-(NSDictionary *)transparencyCustomized;
-(void)setShouldUpdateAccessory:(BOOL)arg1 ;
-(void)setPersonalMediaDebugMode:(BOOL)arg1 ;
-(double)transparencyToneForAddress:(id)arg1 ;
-(void)setAudiogramConfiguration:(PAConfiguration *)arg1 ;
-(void)setPersonalSoundVisible:(BOOL)arg1 ;
-(void)setTransparencyCustomized:(NSDictionary *)arg1 ;
-(PAConfiguration *)audiogramConfiguration;
-(void)setConfigurationCameFromUser:(BOOL)arg1 ;
-(void)setPersonalMediaConfiguration:(PAConfiguration *)arg1 ;
-(BOOL)transparencyCustomizedForAddress:(id)arg1 ;
-(id)preferenceDomain;
-(void)setTransparencyBalance:(NSDictionary *)arg1 ;
-(NSDictionary *)transparencyTone;
-(void)setCurrentEnrollmentProgress:(unsigned long long)arg1 ;
-(BOOL)personalSoundVisible;
-(BOOL)personalMediaEnabled;
-(BOOL)shouldUpdateAccessory;
-(BOOL)configurationCameFromUser;
-(void)setConfigurationCameFromEnrollment:(BOOL)arg1 ;
-(NSDictionary *)transparencyBalance;
-(void)setPersonalMediaEnabled:(BOOL)arg1 ;
-(BOOL)personalMediaDebugMode;
-(id)keysToSync;
-(BOOL)shouldStoreLocally;
-(void)setTransparencyTone:(NSDictionary *)arg1 ;
@end
