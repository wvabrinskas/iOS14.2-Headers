/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsSource.h>

@interface CFPrefsPlistSource : CFPrefsSource {

	CFStringRef userIdentifier;
	CFStringRef domainIdentifier;
	CFStringRef container;
	A{__CFDictionary}* _locallySetDict;
	A* accessPath;
	AB _isByHost;
	AB _volatile;
	AB _readonly;
	AB _avoidsDaemonCache;
	AB _restrictedAccess;
	AB _checkedInvalidHome;
	AB _lastWriteFailed;
	AB _observing;
	AB _byteCountLimitExceeded;
	AB _directMode;
	AB _disableBackup;
	Ai _fileProtectionClass;

}
-(BOOL)isVolatile;
-(CFStringRef)userIdentifier;
-(int)alreadylocked_updateObservingRemoteChanges;
-(CFStringRef)domainIdentifier;
-(BOOL)isByHost;
-(BOOL)synchronize;
-(CFArrayRef)alreadylocked_copyKeyList;
-(id)createSynchronizeMessage;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2 ;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFStringRef)container;
-(long long)alreadylocked_generationCount;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)alreadylocked_clearCache;
-(void)setFileProtectionClass:(int)arg1 ;
-(BOOL)isDirectModeEnabled;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(long long)generationCount;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setBackupDisabled:(BOOL)arg1 ;
@end

