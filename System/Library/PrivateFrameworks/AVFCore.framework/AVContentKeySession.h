/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVContentKeySessionInternal, AVContentKeyReportGroup, NSURL, NSString, NSData;

@interface AVContentKeySession : NSObject {

	AVContentKeySessionInternal* _session;

}

@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (readonly) AVContentKeyReportGroup * defaultContentKeyGroup; 
@property (__weak,readonly) id<AVContentKeySessionDelegate> delegate; 
@property (readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) NSURL * storageURL; 
@property (readonly) NSString * keySystem; 
@property (readonly) NSData * contentProtectionSessionIdentifier; 
+(void)initialize;
+(id)contentKeySessionWithKeySystem:(id)arg1 ;
+(OpaqueFigSecureStopManagerRef)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
+(id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
+(void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
-(id)makeContentKeyGroup;
-(NSString *)keySystem;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(int)setAppIdentifier:(id)arg1 ;
-(const OpaqueFigCPECryptorRef)copyCryptorForInitializationData:(id)arg1 ;
-(void)_setWeakReferenceForContentKeyRequest:(id)arg1 withCryptorUUID:(id)arg2 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 willHandleRequest:(BOOL*)arg4 ;
-(BOOL)hasProtector;
-(id)init;
-(void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2 ;
-(NSData *)contentProtectionSessionIdentifier;
-(void)issueContentKeyRequests:(id)arg1 forInitializationData:(id)arg2 ;
-(id<AVContentKeySessionDelegate>)delegate;
-(void)issueContentKeyRequest:(id)arg1 toDelegateWithCallbackSelector:(SEL)arg2 ;
-(void)renewExpiringResponseDataForContentKeyRequest:(id)arg1 ;
-(void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_willDeallocOrFinalize;
-(void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 ;
-(void)addContentKeyRecipient:(id)arg1 ;
-(void)setDelegate:(id<AVContentKeySessionDelegate>)arg1 ;
-(void)_invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 synchronouslyWhenDelegateQueueIsNULL:(BOOL)arg2 ;
-(id)description;
-(void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3 ;
-(void)removeContentKeyRecipient:(id)arg1 ;
-(void)issueContentKeyRequestWithCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 identifier:(id)arg2 requestInfo:(CFDictionaryRef)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(BOOL)arg5 ;
-(id)_contentKeyGroups;
-(void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(BOOL)arg4 ;
-(void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:(id)arg1 ;
-(void)_handleSecureStopDidFinalizeRecordCallback;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(id)contentKeyRecipients;
-(void)_sendFinishLoadingForPreloadedKeyRequest:(CFDictionaryRef)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(OpaqueFigCustomURLHandlerRef)arg3 ;
-(AVContentKeyReportGroup *)defaultContentKeyGroup;
-(int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(OpaqueFigCustomURLHandler*)arg2 ;
-(void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(id)initWithStorageDirectoryAtURL:(id)arg1 ;
-(void)issueRenewableContentKeyRequest:(id)arg1 ;
-(void)issueContentKeyRequest:(id)arg1 ;
-(id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(BOOL)arg3 ;
-(id)issueContentKeyRequestForInitializationData:(id)arg1 ;
-(NSURL *)storageURL;
-(id)_internalQueue;
-(void)_handleContentProtectionSessionIdentifierDidChange:(id)arg1 ;
-(void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)issuePersistableContentKeyRequest:(id)arg1 ;
-(BOOL)clientCanReceivePersistableContentKeyRequest;
-(BOOL)isInternal;
-(void)expire;
-(id)_weakReference;
-(id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2 ;
-(void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3 ;
-(const OpaqueFigCPECryptorRef)createCryptorIfNecessaryForInitializationData:(id)arg1 formatDescription:(opaqueCMFormatDescriptionRef)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end
