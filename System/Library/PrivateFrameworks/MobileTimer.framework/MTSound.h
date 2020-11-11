/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding> {

	unsigned long long _soundType;
	NSString* _toneIdentifier;
	NSNumber* _mediaItemIdentifier;
	NSString* _vibrationIdentifier;
	NSNumber* _soundVolume;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long soundType;                //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;                   //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * mediaItemIdentifier;              //@synthesize mediaItemIdentifier=_mediaItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * vibrationIdentifier;              //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * soundVolume;                      //@synthesize soundVolume=_soundVolume - In the implementation block
+(id)defaultSoundForCategory:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_loadDefaultTimerSound;
+(void)_saveDefaultAlarmSound:(id)arg1 ;
+(id)descriptionForCategory:(unsigned long long)arg1 ;
+(id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3 ;
+(id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3 ;
+(void)_saveDefaultTimerSound:(id)arg1 ;
+(void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2 ;
+(id)_loadDefaultAlarmSound;
+(long long)_alertTypeForCategory:(unsigned long long)arg1 ;
-(unsigned long long)soundType;
-(void)updatePreview:(id)arg1 ;
-(BOOL)isEqualToSound:(id)arg1 ;
-(id)unSoundForCategory:(unsigned long long)arg1 ;
-(id)initWithSound:(id)arg1 usingVolume:(id)arg2 ;
-(unsigned long long)hash;
-(id)soundByUpdatingVolume:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3 ;
-(id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3 ;
-(NSString *)vibrationIdentifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)soundByUpdatingVibrationIdentifier:(id)arg1 ;
-(NSString *)toneIdentifier;
-(BOOL)isSilent;
-(NSNumber *)soundVolume;
-(NSNumber *)mediaItemIdentifier;
-(BOOL)interruptAudio;
-(id)initWithCoder:(id)arg1 ;
-(id)previewWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)unSound;
@end
