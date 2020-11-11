/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libprequelite.dylib/PQLConnection.h>

@class br_pacer;

@interface BRCPQLConnection : PQLConnection {

	br_pacer* _batchingPacer;
	int _changeCount;
	double _flushInterval;
	BOOL _flushImmediately;
	BOOL _autovacuumInProgress;
	long long _changesOverride;
	BOOL _isReadonly;
	unsigned long long _vmStepsExecuted;

}

@property (assign,nonatomic) BOOL profilingEnabled; 
@property (nonatomic,readonly) unsigned long long vmStepsExecuted;              //@synthesize vmStepsExecuted=_vmStepsExecuted - In the implementation block
@property (nonatomic,copy) id lockedHandler; 
@property (nonatomic,readonly) BOOL isReadonly;                                 //@synthesize isReadonly=_isReadonly - In the implementation block
-(long long)changes;
-(id)init;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(BOOL)profilingEnabled;
-(void)autovacuumIfNeeded;
-(id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3 ;
-(BOOL)_shouldFlushWithChangeCount:(int)arg1 ;
-(void)_setErrorHandlerWithDBCorruptionHandler:(/*^block*/id)arg1 ;
-(long long)sizeInBytes;
-(id)initWithLabel:(id)arg1 dbCorruptionHandler:(/*^block*/id)arg2 ;
-(BOOL)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3 ;
-(void)setProfilingHook:(/*^block*/id)arg1 ;
-(BOOL)executeWithExpectedIndex:(id)arg1 sql:(id)arg2 ;
-(void)disableProfilingForQueriesInBlock:(/*^block*/id)arg1 ;
-(BOOL)isReadonly;
-(id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(BOOL)executeWithErrorHandler:(/*^block*/id)arg1 sql:(id)arg2 ;
-(BOOL)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2 ;
-(void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3 ;
-(void)flushToMakeEditsVisibleToIPCReaders;
-(BOOL)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id*)arg3 ;
-(void)brc_close;
-(void)_setLockedHandler;
-(unsigned long long)vmStepsExecuted;
-(BOOL)needsAutovacuum;
@end
