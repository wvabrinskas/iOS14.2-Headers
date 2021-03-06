/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol SSRSpeakerRecognizer <NSObject>
@property (nonatomic,readonly) NSDictionary * lastScoreCard; 
@required
-(id)initWithContext:(id)arg1 delegate:(id)arg2;
-(void)endAudio;
-(void)resetWithContext:(id)arg1;
-(void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
-(NSDictionary *)lastScoreCard;

@end

