/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SFPasswordServiceViewController.h>
#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_ASPasswordCredentialAuthenticationViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>
#import <libobjc.A.dylib/_SFAuthenticationContextDelegate.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialServiceViewControllerProtocol.h>

@class _SFAuthenticationContext, _ASPasswordCredentialAuthenticationViewController, NSString;

@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController <SFCredentialProviderExtensionManagerObserver, _ASPasswordCredentialAuthenticationViewControllerDelegate, _SFAuthenticationClient, _SFAuthenticationContextDelegate, SFExternalPasswordCredentialServiceViewControllerProtocol> {

	_SFAuthenticationContext* _authenticationContext;
	_ASPasswordCredentialAuthenticationViewController* _extensionController;
	long long _completionAction;
	/*^block*/id _getCredentialCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)_dismiss;
-(id)_authenticationContext;
-(id)passcodePromptForContext:(id)arg1 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(void)_finishRequestToAutoFillCredential:(id)arg1 extensionShowedUI:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_finishRequestToReturnCredential:(id)arg1 extensionShowedUI:(BOOL)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)authenticationMessageForContext:(id)arg1 ;
-(void)autoFillWithCredentialIdentity:(id)arg1 ;
-(BOOL)displayMessageAsTitleForContext:(id)arg1 ;
-(void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1 ;
-(void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)contextRequiresSessionBasedAuthentication:(id)arg1 ;
-(BOOL)contextShouldAllowPasscodeFallback:(id)arg1 ;
-(BOOL)contextShouldAllowMultipleBiometricFailures:(id)arg1 ;
-(void)getCredentialForCredentialIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
