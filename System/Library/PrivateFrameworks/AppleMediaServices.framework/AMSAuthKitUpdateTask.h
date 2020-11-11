/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@protocol AMSAuthKitUpdateTaskDelegate;
@class ACAccount, AMSAuthenticateOptions, NSString;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate> {

	ACAccount* _account;
	AMSAuthenticateOptions* _options;
	id<AMSAuthKitUpdateTaskDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSAuthKitUpdateTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) AMSAuthenticateOptions * options;                            //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_updateAccountRawPasswordUsingSecondaryAccounts:(id)arg1 ;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(ACAccount *)account;
-(id<AMSAuthKitUpdateTaskDelegate>)delegate;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)performAuthKitUpdate;
-(AMSAuthenticateOptions *)options;
-(void)_configureAuthKitContext:(id)arg1 ;
-(id)_createAuthKitContext;
-(id)_createAuthKitController;
-(void)_logPromptSummaryForResults:(id)arg1 context:(id)arg2 ;
-(BOOL)_canPresentBackgroundPrompt;
-(void)_configureClientInfoForContext:(id)arg1 ;
-(void)_configureCompanionDeviceForContext:(id)arg1 ;
-(void)_configureIdentifiersForContext:(id)arg1 ;
-(void)_configureProxyIdentifiersForContext:(id)arg1 ;
-(void)_configureStringsForContext:(id)arg1 ;
-(void)setDelegate:(id<AMSAuthKitUpdateTaskDelegate>)arg1 ;
-(unsigned long long)_authenticationType;
@end
