/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LAUIDelegate.h>

@protocol NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate, OS_dispatch_queue;
@class NSObject, LAContext, NSData, NSError, NSMutableArray, NSNumber;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject <LAUIDelegate> {

	id<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> _credentialDelegate;
	NSObject*<OS_dispatch_queue> _localAuthenticationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	LAContext* _completedContext;
	NSData* _completedCredential;
	NSError* _completedError;
	LAContext* _inProgressContext;
	NSMutableArray* _pendingLocalAuthenticationEvents;
	NSNumber* _activeLocalAuthenticationEvent;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> localAuthenticationQueue;                                                             //@synthesize localAuthenticationQueue=_localAuthenticationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                                                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) LAContext * completedContext;                                                                                      //@synthesize completedContext=_completedContext - In the implementation block
@property (nonatomic,retain) NSData * completedCredential;                                                                                      //@synthesize completedCredential=_completedCredential - In the implementation block
@property (nonatomic,retain) NSError * completedError;                                                                                          //@synthesize completedError=_completedError - In the implementation block
@property (nonatomic,retain) LAContext * inProgressContext;                                                                                     //@synthesize inProgressContext=_inProgressContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingLocalAuthenticationEvents;                                                                 //@synthesize pendingLocalAuthenticationEvents=_pendingLocalAuthenticationEvents - In the implementation block
@property (nonatomic,retain) NSNumber * activeLocalAuthenticationEvent;                                                                         //@synthesize activeLocalAuthenticationEvent=_activeLocalAuthenticationEvent - In the implementation block
@property (assign,nonatomic,__weak) id<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> credentialDelegate;              //@synthesize credentialDelegate=_credentialDelegate - In the implementation block
-(id)initWithCallbackQueue:(id)arg1 ;
-(id)completionHandler;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)event:(long long)arg1 params:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)beginLocalAuthenticationWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateLocalAuthenticationContexts;
-(void)_invokeCompletionHandlerForInvalidationWithError:(id)arg1 ;
-(void)_handleLocalAuthenticationPolicyEvaluatedWithContext:(id)arg1 error:(id)arg2 ;
-(id)_nameForLocalAuthenticationEvent:(long long)arg1 ;
-(void)_activateLocalAuthenticationEvent:(long long)arg1 ;
-(void)_deactivateLocalAuthenticationEvent:(long long)arg1 ;
-(NSMutableArray *)pendingLocalAuthenticationEvents;
-(void)setPendingLocalAuthenticationEvents:(NSMutableArray *)arg1 ;
-(void)_presentNextLocalAuthenticationEvent;
-(NSNumber *)activeLocalAuthenticationEvent;
-(id<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate>)credentialDelegate;
-(long long)_credentialTypeForEvent:(long long)arg1 ;
-(void)setActiveLocalAuthenticationEvent:(NSNumber *)arg1 ;
-(LAContext *)inProgressContext;
-(void)_cancelLocalAuthentication;
-(void)setInProgressContext:(LAContext *)arg1 ;
-(void)setCredentialDelegate:(id<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)localAuthenticationQueue;
-(void)setLocalAuthenticationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(LAContext *)completedContext;
-(void)setCompletedContext:(LAContext *)arg1 ;
-(NSData *)completedCredential;
-(void)setCompletedCredential:(NSData *)arg1 ;
-(NSError *)completedError;
-(void)setCompletedError:(NSError *)arg1 ;
@end

