/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _LTLocalePair, NSURL;

@interface _LTTranslationRequest : NSObject {

	BOOL _censorSpeech;
	BOOL _forcedOfflineTranslation;
	BOOL __forcedOnlineTranslation;
	BOOL _autodetectLanguage;
	NSString* _uniqueID;
	NSString* _sessionID;
	long long _taskHint;
	_LTLocalePair* _localePair;
	NSURL* _outputFileURL;
	NSURL* __offlineMTModelURL;
	long long __mtConfidenceThreshold;

}

@property (nonatomic,readonly) NSString * loggingType; 
@property (nonatomic,copy) NSString * uniqueID;                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) long long taskHint;                            //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,readonly) _LTLocalePair * localePair;                  //@synthesize localePair=_localePair - In the implementation block
@property (nonatomic,retain) NSURL * outputFileURL;                         //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) BOOL censorSpeech;                             //@synthesize censorSpeech=_censorSpeech - In the implementation block
@property (assign,nonatomic) BOOL forcedOfflineTranslation;                 //@synthesize forcedOfflineTranslation=_forcedOfflineTranslation - In the implementation block
@property (assign,nonatomic) BOOL _forcedOnlineTranslation;                 //@synthesize _forcedOnlineTranslation=__forcedOnlineTranslation - In the implementation block
@property (nonatomic,retain) NSURL * _offlineMTModelURL;                    //@synthesize _offlineMTModelURL=__offlineMTModelURL - In the implementation block
@property (assign,nonatomic) long long _mtConfidenceThreshold;              //@synthesize _mtConfidenceThreshold=__mtConfidenceThreshold - In the implementation block
@property (assign,nonatomic) BOOL autodetectLanguage;                       //@synthesize autodetectLanguage=_autodetectLanguage - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)requestContext;
-(long long)taskHint;
-(BOOL)censorSpeech;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)forcedOfflineTranslation;
-(BOOL)_forcedOnlineTranslation;
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(id)initWithLocalePair:(id)arg1 ;
-(NSURL *)_offlineMTModelURL;
-(NSString *)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(void)setForcedOfflineTranslation:(BOOL)arg1 ;
-(void)set_forcedOnlineTranslation:(BOOL)arg1 ;
-(void)set_offlineMTModelURL:(NSURL *)arg1 ;
-(long long)_mtConfidenceThreshold;
-(void)set_mtConfidenceThreshold:(long long)arg1 ;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(void)setTaskHint:(long long)arg1 ;
-(_LTLocalePair *)localePair;
-(id)initWithSourceLocale:(id)arg1 targetLocale:(id)arg2 ;
-(BOOL)autodetectLanguage;
-(void)setAutodetectLanguage:(BOOL)arg1 ;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(NSString *)uniqueID;
@end
