/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/AKAppleIDAuthenticationInAppContextPasswordDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class AKAppleIDAuthenticationController, UIActivityIndicatorView, UIBarButtonItem, PSSpecifier, NSString, NSTimer, RemoteUIController;

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate> {

	AKAppleIDAuthenticationController* _authController;
	/*^block*/id _passwordHandler;
	UIActivityIndicatorView* _spinner;
	UIBarButtonItem* _spinnerBarItem;
	UIBarButtonItem* _nextButtonBarItem;
	UIBarButtonItem* _cancelButtonBarItem;
	PSSpecifier* _createNewAccountButtonSpecifier;
	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	PSSpecifier* _passwordSpecifier;
	PSSpecifier* _userSpecifier;
	NSString* _username;
	NSString* _password;
	id _textFieldTextDidChangeObserver;
	BOOL _isPasswordDirty;
	BOOL _shouldHideBackButton;
	void* _powerAssertion;
	NSTimer* _idleJiggleTimer;
	RemoteUIController* _remoteUIController;
	/*^block*/id _remoteUICompletion;
	BOOL _isPresentedModally;
	BOOL _shouldShowCreateAppleIDButton;

}

@property (assign,setter=setPresentedModally:,nonatomic) BOOL isPresentedModally;                         //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (nonatomic,readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (assign,nonatomic) BOOL shouldShowCreateAppleIDButton;                                          //@synthesize shouldShowCreateAppleIDButton=_shouldShowCreateAppleIDButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(AKAppleIDAuthenticationController *)authenticationController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)serviceDescription;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(void)context:(id)arg1 needsPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)returnPressedAtEnd;
-(id)title;
-(id)serviceIcon;
-(id)_specifierForGroupWithiForgotLink;
-(id)_specifierForLoginUserForm;
-(id)_silhouetteMonogram;
-(id)_specifierForLoginPasswordForm;
-(id)_specifiersForSignInButton;
-(id)_usernameForSpecifier:(id)arg1 ;
-(id)_specifiersForCreateNewAccount;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)_runningInMail;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)_signInButtonWasTapped:(id)arg1 ;
-(void)_presentAppleIDPrivacyInformationPane;
-(void)_updateSignInButton;
-(void)_createNewAppleIDButtonWasTapped:(id)arg1 ;
-(void)_iForgotButtonWasTapped:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(BOOL)_shouldAnchorCreateAccountButton;
-(double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1 ;
-(void)_reloadPasswordSpecifier;
-(double)_heightForCreateNewAccountFooterWithWidth:(double)arg1 ;
-(void)willBeginAuthWithContext:(id)arg1 ;
-(void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(void)_signInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createNewAppleIDWithCompletion:(/*^block*/id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(BOOL)_shouldShowCancelDone;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(BOOL)isPresentedModally;
-(void)setPresentedModally:(BOOL)arg1 ;
-(void)setUsernameEnabled:(BOOL)arg1 ;
-(void)_presentInvalidUsernameAlert;
-(BOOL)shouldShowCreateAppleIDButton;
-(void)setShouldShowCreateAppleIDButton:(BOOL)arg1 ;
-(id)serviceName;
-(void)showBusyUI;
-(void)hideBusyUI;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)dealloc;
-(void)_cancelPasswordDelegateIfNecessary;
@end
