/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSceneManager.h>
#import <libobjc.A.dylib/SBIdleTimerCoordinating.h>
#import <libobjc.A.dylib/SBSuspendedUnderLockManagerDelegate.h>
#import <libobjc.A.dylib/SBIdleTimerProviding.h>

@protocol BSInvalidatable, SBIdleTimerCoordinating;
@class SBMainDisplayPolicyAggregator, UIApplicationSceneClientSettingsDiffInspector, FBSSceneClientSettingsDiffInspector, SBFaceContactExpectationManager, SBMedusaHostedKeyboardWindow, NSMutableSet, SBSuspendedUnderLockManager, NSHashTable, NSMutableDictionary, SBMainDisplayLayoutStateManager, NSArray, UIWindow, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, NSString;

@interface SBMainDisplaySceneManager : SBSceneManager <SBIdleTimerCoordinating, SBSuspendedUnderLockManagerDelegate, SBIdleTimerProviding> {

	SBMainDisplayPolicyAggregator* _policyAggregator;
	UIApplicationSceneClientSettingsDiffInspector* _internalClientSettingsDiffInspector;
	UIApplicationSceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _externalClientSettingsDiffInspector;
	FBSSceneClientSettingsDiffInspector* _keyboardLayersClientSettingsDiffInspector;
	long long _validInterfaceOrientation;
	unsigned long long _validInterfaceOrientationChangeCount;
	unsigned long long _processedValidInterfaceOrientationChangeCount;
	SBFaceContactExpectationManager* _faceContactExpectationManager;
	SBMedusaHostedKeyboardWindow* _medusaHostedKeyboardWindow;
	NSMutableSet* _requiredContextIdentifiersForMedusaDraggingDestination;
	BOOL _didAddSceneLayoutViewControllerWindowContextIdentifier;
	SBSuspendedUnderLockManager* _lazy_suspendedUnderLockManager;
	NSHashTable* _preventAdditionalMedusaSnapshotsAssertions;
	NSMutableDictionary* _sceneIdentifierToIgnoreSuspendedUnderLockAssertions;
	id<BSInvalidatable> stateCaptureInvalidatable;
	BOOL _isUsingMedusaHostedKeyboardWindow;
	id<SBIdleTimerCoordinating> _idleTimerCoordinator;

}

@property (nonatomic,readonly) SBMainDisplayLayoutStateManager * _layoutStateManager; 
@property (nonatomic,readonly) NSArray * _requiredContextIdentifiersForMedusaDraggingDestination; 
@property (getter=_isKeyboardVisibleForSpringBoard,nonatomic,readonly) BOOL _isKeyboardVisibleForSpringBoard; 
@property (getter=_isUsingMedusaHostedKeyboardWindow,nonatomic,readonly) BOOL _isUsingMedusaHostedKeyboardWindow;              //@synthesize isUsingMedusaHostedKeyboardWindow=_isUsingMedusaHostedKeyboardWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * _medusaHostedKeyboardWindow;                                                         //@synthesize medusaHostedKeyboardWindow=_medusaHostedKeyboardWindow - In the implementation block
@property (nonatomic,readonly) SBMainDisplayPolicyAggregator * policyAggregator; 
@property (nonatomic,readonly) SBMainDisplayLayoutState * currentLayoutState; 
@property (nonatomic,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController; 
@property (nonatomic,readonly) BOOL hasIdleTimerBehaviors; 
@property (assign,getter=isSuspendedUnderLock,nonatomic) BOOL suspendedUnderLock; 
@property (assign,nonatomic,__weak) id<SBIdleTimerCoordinating> idleTimerCoordinator;                                          //@synthesize idleTimerCoordinator=_idleTimerCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutStateManagerClass;
+(Class)_sceneLayoutWindowClass;
+(Class)_applicationSceneHandleClass;
-(BOOL)isSuspendedUnderLock;
-(void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6 ;
-(id)externalApplicationSceneHandles;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg1 ;
-(id)_snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 ;
-(id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3 ;
-(SBMainDisplayPolicyAggregator *)policyAggregator;
-(void)setIdleTimerCoordinator:(id<SBIdleTimerCoordinating>)arg1 ;
-(id<SBIdleTimerCoordinating>)idleTimerCoordinator;
-(BOOL)hasIdleTimerBehaviors;
-(BOOL)_isKeyboardVisibleForSpringBoard;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(id)_proposeIdleTimerBehaviorForReason:(id)arg1 ;
-(BOOL)_isUsingMedusaHostedKeyboardWindow;
-(void)_scene:(id)arg1 willUpdateWithSettings:(id)arg2 transitionContext:(id)arg3 ;
-(id)existingSceneHandleForScene:(id)arg1 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)fetchOrCreateApplicationSceneHandleForRequest:(id)arg1 ;
-(id)acquireIgnoreSuspendedUnderLockAssertionForSceneIdentifier:(id)arg1 reason:(id)arg2 ;
-(id)_internalClientSettingsDiffInspector;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(id)sceneIdentityForApplication:(id)arg1 excludingIdentifiers:(id)arg2 ;
-(BOOL)_shouldTrackScenesForDeactivation;
-(id)sceneIdentityForApplication:(id)arg1 ;
-(void)_updateDeviceOrientation:(long long)arg1 ifNeededForScene:(id)arg2 ;
-(id)_appClientSettingsDiffInspector;
-(BOOL)suspendedUnderLockManager:(id)arg1 shouldPreventSuspendUnderLockForScene:(id)arg2 ;
-(id)initWithReference:(id)arg1 ;
-(BOOL)_shouldAutoHostScene:(id)arg1 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 supportsMultiwindow:(BOOL)arg2 ;
-(id)existingSceneHandleForSceneIdentity:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)_newSceneLayoutViewController;
-(void)_userInterfaceStyleArbiterStyleChanged:(id)arg1 ;
-(void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(BOOL)arg2 prefersTouchCancellationDisabled:(BOOL)arg3 validator:(/*^block*/id)arg4 ;
-(void)_scene:(id)arg1 interceptUpdateWithNewSettings:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(id)_externalClientSettingsDiffInspector;
-(void)_addMedusaDraggingDestinationWindow:(id)arg1 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 ;
-(id)_identifierForApplication:(id)arg1 ;
-(void)_updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(BOOL*)arg2 ;
-(void)_updateLevelAndBackgroundSettingsForScene:(id)arg1 transitionContext:(id)arg2 ;
-(id)preventTakingAdditionalMedusaSnapshotsForBackgroundingScenesWithReason:(id)arg1 ;
-(id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1 ;
-(UIWindow *)_medusaHostedKeyboardWindow;
-(id)_sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 targetContentIdentifier:(id)arg3 allowCanMatches:(BOOL)arg4 preferNewScene:(BOOL)arg5 visibleIdentifiers:(id)arg6 excludingIdentifiers:(id)arg7 ;
-(BOOL)_shouldRequestSnapshotActionsForScene:(id)arg1 ;
-(id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(unsigned long long)arg1 windowLevel:(double)arg2 ;
-(id)_sceneIdentifierForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(NSArray *)_requiredContextIdentifiersForMedusaDraggingDestination;
-(void)createSceneForApplication:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)newSceneIdentityForApplication:(id)arg1 ;
-(void)setSuspendedUnderLock:(BOOL)arg1 alongsideWillChangeBlock:(/*^block*/id)arg2 alongsideDidChangeBlock:(/*^block*/id)arg3 ;
-(id)window;
-(id)runningApplicationScenes:(id)arg1 ;
-(id)_keyboardLayersClientSettingsDiffInspector;
-(void)_noteDidChangeToVisibility:(unsigned long long)arg1 previouslyExisted:(BOOL)arg2 forScene:(id)arg3 ;
-(id)_sceneIdentityForApplication:(id)arg1 createPrimaryIfRequired:(BOOL)arg2 ;
-(void)_deviceOrientationChanged:(id)arg1 ;
-(void)_attemptAutorotationOfExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 ;
-(id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2 ;
-(BOOL)_animateGeometryChangesForExternalForegroundApplicationScenes;
-(void)_noteDidCommitUpdateForScene:(id)arg1 ;
-(void)_updateValidInterfaceOrientationForTransitionContext:(id)arg1 ;
-(id)sceneIdentityForApplication:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_createRootWindowScenePresentationBinder;
-(id)sceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 allowCanMatches:(BOOL)arg3 preferNewScene:(BOOL)arg4 visibleIdentifiers:(id)arg5 ;
-(id)suspendedUnderLockManagerVisibleScenesInLayoutState:(id)arg1 ;
-(BOOL)_isExternalForegroundScene:(id)arg1 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)existingSceneHandleForPersistenceIdentifier:(id)arg1 ;
-(id)externalForegroundApplicationSceneHandles;
-(void)_removeMedusaDraggingDestinationWindow:(id)arg1 ;
-(void)dealloc;
-(void)_updateMedusaHostedKeyboardWindow;
@end

