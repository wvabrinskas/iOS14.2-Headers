/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _INVocabularyStoreManager, _INVocabularyGenerationDocument;

@interface _INSyncTransaction : NSObject {

	NSString* _pathToLatestVocabularyDocument;
	NSString* _pathToStagedVocabularyDocument;
	NSString* _pathToSentVocabularyDocument;
	NSString* _syncSlot;
	_INVocabularyStoreManager* _storeManager;
	BOOL _deleteExistingVocabulary;
	BOOL _vocabularyUpdatesEnabled;
	BOOL _fullResetRequired;
	_INVocabularyGenerationDocument* _latest;
	_INVocabularyGenerationDocument* _sent;

}

@property (nonatomic,readonly) _INVocabularyGenerationDocument * latestVocabularyDocument;              //@synthesize latest=_latest - In the implementation block
@property (nonatomic,readonly) _INVocabularyGenerationDocument * sentVocabularyDocument;                //@synthesize sent=_sent - In the implementation block
@property (assign,nonatomic) BOOL fullResetRequired;                                                    //@synthesize fullResetRequired=_fullResetRequired - In the implementation block
+(id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3 ;
-(id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(BOOL)arg3 ;
-(void)_saveAndCleanup;
-(_INVocabularyGenerationDocument *)sentVocabularyDocument;
-(void)endTransactionWithFinalAnchor:(id)arg1 ;
-(id)_emptySentDocument;
-(void)_deleteInvalidSavedData;
-(BOOL)_isMissingLatestFileError:(id)arg1 ;
-(_INVocabularyGenerationDocument *)latestVocabularyDocument;
-(BOOL)fullResetRequired;
-(void)setFullResetRequired:(BOOL)arg1 ;
-(id)calculateDiff;
-(void)_beginTransaction;
@end
