/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	long long _status;
	int _basicInspectionFailureCode;
	NSURL* _URL;

}
-(void)cancelLoading;
-(BOOL)hasProtectedContent;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(BOOL)isPlayable;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)lyrics;
-(id)initWithURL:(id)arg1 ;
-(BOOL)_isStreaming;
-(BOOL)isReadable;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)figChapterGroupInfo;
-(long long)_status;
-(BOOL)isExportable;
-(id)assetInspector;
-(long long)firstFragmentSequenceNumber;
-(OpaqueFigFormatReaderRef)_formatReader;
-(SCD_Struct_AV6)duration;
-(BOOL)isComposable;
-(void)_setStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(BOOL)_inspectionRequiresAFormatReader;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(long long)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(BOOL)_updateStatusWhileMutexLocked:(long long)arg1 figErrorCode:(int)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(BOOL)_providesAccurateTiming;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)fragmentCount;
-(id)URL;
-(void)dealloc;
@end
