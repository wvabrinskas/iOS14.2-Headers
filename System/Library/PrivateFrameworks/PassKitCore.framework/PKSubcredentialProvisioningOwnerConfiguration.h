/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningLocalDeviceConfiguration.h>

@class PKAppletSubcredentialPairingSession, NSString;

@interface PKSubcredentialProvisioningOwnerConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {

	PKAppletSubcredentialPairingSession* _session;
	NSString* _pairingPassword;
	NSString* _keyName;
	NSString* _issuerName;
	NSString* _appIdentifier;

}

@property (nonatomic,__weak,readonly) PKAppletSubcredentialPairingSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSString * pairingPassword;                                        //@synthesize pairingPassword=_pairingPassword - In the implementation block
@property (nonatomic,readonly) NSString * keyName;                                                //@synthesize keyName=_keyName - In the implementation block
@property (nonatomic,readonly) NSString * issuerName;                                             //@synthesize issuerName=_issuerName - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier;                                            //@synthesize appIdentifier=_appIdentifier - In the implementation block
-(NSString *)appIdentifier;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)pairingPassword;
-(NSString *)issuerName;
-(id)transitionTable;
-(long long)startingState;
-(id)initWithSession:(id)arg1 pairingPassword:(id)arg2 keyName:(id)arg3 issuerName:(id)arg4 webService:(id)arg5 registrationMetadata:(id)arg6 ;
-(id)description;
-(NSString *)keyName;
-(PKAppletSubcredentialPairingSession *)session;
@end

