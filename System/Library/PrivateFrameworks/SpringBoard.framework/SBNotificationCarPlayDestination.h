/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BNBannerHostMonitorListenerObserving.h>
#import <libobjc.A.dylib/BNPresentableObserving.h>
#import <libobjc.A.dylib/NCCarPlayBannerPresentableViewControllerDelegate.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>

@protocol BNPresentable, NCNotificationAlertDestinationDelegate;
@class DNDEventBehaviorResolutionService, BNBannerHostMonitorListener, NSHashTable, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NCCarPlayBannerSource, NSString, BSServiceConnectionEndpoint;

@interface SBNotificationCarPlayDestination : NSObject <BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, NCNotificationAlertDestination> {

	DNDEventBehaviorResolutionService* _dndEventBehaviorResolutionService;
	BNBannerHostMonitorListener* _bannerHostMonitorListener;
	NSHashTable* _presentables;
	CRCarPlayAppPolicyEvaluator* _appPolicyEvaluator;
	NSMutableDictionary* _appPolicyForBundleID;
	id<BNPresentable> _presentablePresentingAlertController;
	id<NCNotificationAlertDestinationDelegate> _delegate;
	NCCarPlayBannerSource* _carPlayBannerSource;

}

@property (getter=_carPlayBannerSource,nonatomic,readonly) NCCarPlayBannerSource * carPlayBannerSource;              //@synthesize carPlayBannerSource=_carPlayBannerSource - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
-(id)keyWindowForScreen:(id)arg1 ;
-(id)_removePresentable:(id)arg1 ;
-(void)postNotificationRequest:(id)arg1 ;
-(id)_allNotificationActionsForNotificationRequest:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(/*^block*/id)_ignoreActionForNotificationRequest:(id)arg1 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)bannerHostDidBecomeAvailableForMonitorListener:(id)arg1 ;
-(id)init;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(void)didSelectBannerOfPresentableViewController:(id)arg1 ;
-(id)_subActionsForNotificationRequest:(id)arg1 ;
-(id)_bulletinForNotificationRequest:(id)arg1 ;
-(NSString *)identifier;
-(long long)_effectiveDefaultActionTypeForNotificationRequest:(id)arg1 ;
-(BOOL)_notificationRequestSupportsSubActions:(id)arg1 ;
-(BOOL)presentableViewControllerClosesByDefault:(id)arg1 ;
-(BOOL)_setSuspended:(BOOL)arg1 forPresentingAlertControllerForPresentable:(id)arg2 ;
-(long long)_defaultActionTypeForNotificationRequest:(id)arg1 ;
-(void)setDelegate:(id<NCNotificationAlertDestinationDelegate>)arg1 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(BOOL)_inCallOrFaceTime;
-(BOOL)isActive;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)_newPresentableForNotificationRequest:(id)arg1 layoutDescription:(id)arg2 ;
-(id)_presentablesWithRequestIdentifier:(id)arg1 ;
-(id)_subActionLabelsForNotificationRequest:(id)arg1 ;
-(id)_appPolicyEvaluator;
-(id)_closeNotificationActionForNotificationRequest:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg1 ;
-(BOOL)_notificationRequestShouldShowModalSubActions:(id)arg1 ;
-(id)_policyForApp:(id)arg1 ;
-(id)_carPlayBannerSource;
-(void)_callOrFaceTimeStateChanged;
-(void)bannerHostDidBecomeUnavailableForMonitorListener:(id)arg1 ;
-(void)_addPresentable:(id)arg1 ;
-(id)_supplementaryActionsForNotificationRequest:(id)arg1 ;
-(BOOL)isAlertDestination;
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(/*^block*/id)_actionForNotificationRequest:(id)arg1 ;
-(void)didCancelBannerOfPresentableViewController:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
@end
