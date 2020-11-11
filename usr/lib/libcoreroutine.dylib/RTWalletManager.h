/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager, PKUsageNotificationClient;

@interface RTWalletManager : RTService {

	RTDefaultsManager* _defaultsManager;
	double _maximumTransactionDistance;
	PKUsageNotificationClient* _passKitClient;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (assign,nonatomic) double maximumTransactionDistance;                      //@synthesize maximumTransactionDistance=_maximumTransactionDistance - In the implementation block
@property (nonatomic,retain) PKUsageNotificationClient * passKitClient;              //@synthesize passKitClient=_passKitClient - In the implementation block
+(long long)passUseSourceFromUsageNotificationSource:(long long)arg1 ;
-(void)_registerForNotifications;
-(void)_shutdown;
-(void)_setup;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(id)init;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(void)_unregisterForNotifications;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)setMaximumTransactionDistance:(double)arg1 ;
-(void)updateDoubleForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_unregisterPassUseCallbacks;
-(void)_unregisterPaymentUseCallbacks;
-(void)setPassKitClient:(PKUsageNotificationClient *)arg1 ;
-(void)_registerPassUseCallbacks;
-(void)_registerPaymentUseCallbacks;
-(PKUsageNotificationClient *)passKitClient;
-(void)passUsedWithTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(void)_passUsedWithTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
-(void)_paymentMadeWithIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3 ;
-(double)maximumTransactionDistance;
@end
