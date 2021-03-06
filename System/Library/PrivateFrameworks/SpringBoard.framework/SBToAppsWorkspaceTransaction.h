/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>
#import <libobjc.A.dylib/SBUIAnimationControllerObserver.h>

@class UIApplicationSceneDeactivationAssertion, SBAppRepairTransaction, SBUIAnimationController, NSCountedSet, SBSceneLayoutWorkspaceTransaction, SBFloatingDockBehaviorAssertion, NSSet, NSString;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate, SBUIAnimationControllerObserver> {

	/*^block*/id _transitionCompletion;
	UIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	/*^block*/id _layoutTransitionContinuation;
	SBAppRepairTransaction* _appRepairTransaction;
	SBUIAnimationController* _animationController;
	NSCountedSet* _completionDelayRequesters;
	BOOL _underLockScreenInForeground;
	BOOL _gestureInitiated;
	unsigned long long _preactivationForegroundRunningApplicationCount;
	BOOL _toAndFromApplicationsDiffer;
	BOOL _retriedAfterVoluntaryExit;
	BOOL _applicationStateNeedsCapture;
	BOOL _dismissedOverlays;
	BOOL _shouldSerialDismissOverlays;
	BOOL _touchCancellationDisabled;
	SBSceneLayoutWorkspaceTransaction* _layoutTransaction;
	SBFloatingDockBehaviorAssertion* _floatingDockBehaviorAssertion;

}

@property (nonatomic,retain) SBFloatingDockBehaviorAssertion * floatingDockBehaviorAssertion;              //@synthesize floatingDockBehaviorAssertion=_floatingDockBehaviorAssertion - In the implementation block
@property (nonatomic,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,readonly) NSSet * fromApplicationSceneEntities; 
@property (nonatomic,readonly) SBSceneLayoutWorkspaceTransaction * layoutTransaction;                      //@synthesize layoutTransaction=_layoutTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canInterruptTransaction:(id)arg1 forTransitionRequest:(id)arg2 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(NSSet *)fromApplicationSceneEntities;
-(void)_willBegin;
-(BOOL)_shouldResignActiveForAnimation;
-(void)_noteAnimationFinished;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(id)_transitionContext;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_fireAndClearResultBlockIfNecessaryForFailure:(BOOL)arg1 ;
-(BOOL)isGoingToLauncher;
-(void)_didComplete;
-(id)createSceneEntityForHandle:(id)arg1 ;
-(void)_animationWillBegin:(BOOL)arg1 ;
-(void)_acquireResignActiveAssertion;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(id)_customizedDescriptionProperties;
-(double)watchdogTimeout;
-(BOOL)_canBeInterrupted;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(void)_animationDidFinish;
-(void)activateApplications;
-(BOOL)_transitionWasCancelled;
-(void)_synchronizeWithSceneUpdates;
-(void)_completeCurrentTransition;
-(void)_relinquishResignActiveAssertion;
-(void)_performPreAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(void)_beginAnimationIfNecessary;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)_beginAnimation;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(BOOL)_hasPostAnimationTasks;
-(void)_stopDelayingTransitionCompletionForRequester:(id)arg1 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(BOOL)shouldRestoreSpringBoardContentOnCleanup;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationControllerDidRevealApplication:(id)arg1 ;
-(BOOL)toAndFromAppsDiffer;
-(void)setFloatingDockBehaviorAssertion:(SBFloatingDockBehaviorAssertion *)arg1 ;
-(id)_setupAnimation;
-(SBFloatingDockBehaviorAssertion *)floatingDockBehaviorAssertion;
-(void)_delayTransitionCompletionForRequester:(id)arg1 ;
-(void)performToAppStateCleanup;
-(void)_endTransition;
-(id)animationController;
-(BOOL)isFromMainSwitcher;
-(void)_captureApplicationState;
-(void)_willFailWithReason:(id)arg1 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_clearAnimation;
-(void)_animationDidRevealApplication;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(BOOL)isGoingToCoverSheet;
-(unsigned long long)_concurrentOverlayDismissalOptions;
-(unsigned long long)_serialOverlayPreDismissalOptions;
-(BOOL)_shouldSerialDismissOverlays;
-(id)_scenesToBackground;
-(void)_beginTransition;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)_configureAnimation;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_checkForAnimationCompletion;
-(BOOL)isGoingToMainSwitcher;
-(BOOL)_hasPreAnimationTasks;
-(void)_setShouldSerialDismissOverlays:(BOOL)arg1 ;
-(void)_handleApplicationDidNotChange:(id)arg1 ;
-(void)_performPostAnimationTasksWithCompletion:(/*^block*/id)arg1 ;
-(SBSceneLayoutWorkspaceTransaction *)layoutTransaction;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(NSSet *)toApplicationSceneEntities;
-(void)dealloc;
@end

