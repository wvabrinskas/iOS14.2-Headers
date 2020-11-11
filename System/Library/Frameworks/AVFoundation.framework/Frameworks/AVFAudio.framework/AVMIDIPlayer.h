/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVMIDIPlayer : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double currentPosition; 
-(id)initBase;
-(void)finalize;
-(void)play:(/*^block*/id)arg1 ;
-(BOOL)isPlaying;
-(void)setRate:(float)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeForBeats:(double)arg1 ;
-(double)beatsForHostTime:(unsigned long long)arg1 ;
-(void)setCurrentPosition:(double)arg1 ;
-(void)destroyBase;
-(void)stop;
-(MIDIPlayerImpl*)impl;
-(double)currentPosition;
-(double)duration;
-(float)rate;
-(void)prepareToPlay;
-(void)dealloc;
@end
