/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _EARLanguageDetectorDelegate <NSObject>
@optional
-(void)languageDetector:(id)arg1 confidences:(id)arg2;
-(void)languageDetector:(id)arg1 result:(id)arg2;

@required
-(void)languageDetectorDidCompleteProcessing:(id)arg1 loggingInfo:(id)arg2;

@end
