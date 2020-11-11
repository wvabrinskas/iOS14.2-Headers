/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults;

@interface SNUserDefaults : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)userDefaults;
+(id)instance;
+(unsigned)builtInMicrophoneAnalysisChannelNumberOrDefault:(unsigned)arg1 ;
+(id)builtInMicrophoneAnalysisChannelNumber;
+(BOOL)enableSecondPassRecordingInDaemon;
+(id)daemonRecordingPath;
+(long long)recordingDirectoryMaximumSizeBytes;
+(double)recordingTimeToLiveSeconds;
+(BOOL)deleteRecordingsWithoutDetection;
+(BOOL)enableFileServer;
+(id)fileServerRootDirectory;
-(NSUserDefaults *)userDefaults;
-(id)init;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
@end
