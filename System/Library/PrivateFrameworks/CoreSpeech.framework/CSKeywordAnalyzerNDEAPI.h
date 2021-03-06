/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;
@class NSMutableData;

@interface CSKeywordAnalyzerNDEAPI : NSObject {

	void* _ndeObject;
	NSMutableData* _currentBlob;
	unsigned long long _activeChannel;
	id<CSKeywordAnalyzerNDEAPIScoreDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long activeChannel;                                      //@synthesize activeChannel=_activeChannel - In the implementation block
@property (assign,nonatomic,__weak) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned long long)activeChannel;
-(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)delegate;
-(void)setDelegate:(id<CSKeywordAnalyzerNDEAPIScoreDelegate>)arg1 ;
-(void)reset;
-(void)setActiveChannel:(unsigned long long)arg1 ;
-(id)processAudioChunk:(id)arg1 ;
-(void)dealloc;
-(id)initWithBlob:(id)arg1 ;
-(id)checkForTriggerWithBytes:(const short*)arg1 withNumberOfSamples:(long long)arg2 ;
-(id)processAudioBytes:(void*)arg1 withNumberOfSamples:(long long)arg2 ;
@end

