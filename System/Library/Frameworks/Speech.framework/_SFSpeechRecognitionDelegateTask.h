/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Speech/SFSpeechRecognitionTask.h>

@protocol _SFSpeechRecognitionTaskDelegatePrivate;
@class SFSpeechRecognitionResult;

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask {

	id<_SFSpeechRecognitionTaskDelegatePrivate> _delegate;
	SFSpeechRecognitionResult* _recognitionResultToReportAfterFinalSearchResults;
	_SFSpeechRecognitionDelegateTask* _selfReference;
	BOOL _waitForVoiceSearchResult;
	BOOL _hasSentRealSearchResults;

}
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5 ;
-(void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3 ;
-(void)_tellDelegateDidFinishSuccessfully:(BOOL)arg1 ;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5 ;
@end

