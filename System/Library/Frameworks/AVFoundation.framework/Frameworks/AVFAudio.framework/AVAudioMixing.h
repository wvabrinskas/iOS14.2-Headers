/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVAudioMixing <AVAudioStereoMixing,AVAudio3DMixing>
@property (assign,nonatomic) float volume; 
@required
-(void)setVolume:(float)arg1;
-(float)volume;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;

@end

