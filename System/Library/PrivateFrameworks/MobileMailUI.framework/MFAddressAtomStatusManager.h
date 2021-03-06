/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFAddressBookClient.h>

@protocol MFAddressAtomProvider;
@class MFMessageLoadingContext, EMAccount, MailAccount, EMSecurityInformation, NSError, NSString;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient> {

	id<MFAddressAtomProvider> _atomProvider;
	MFMessageLoadingContext* _context;
	EMAccount* _account;
	MailAccount* _legacyAccount;
	EMSecurityInformation* _securityInformation;
	NSError* _smimeError;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) EMAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MailAccount * legacyAccount;                                //@synthesize legacyAccount=_legacyAccount - In the implementation block
@property (nonatomic,retain) EMSecurityInformation * securityInformation;                //@synthesize securityInformation=_securityInformation - In the implementation block
@property (setter=setSMIMEError:,nonatomic,retain) NSError * smimeError;                 //@synthesize smimeError=_smimeError - In the implementation block
@property (assign,nonatomic,__weak) id<MFAddressAtomProvider> atomProvider;              //@synthesize atomProvider=_atomProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EMAccount *)account;
-(void)setSecurityInformation:(EMSecurityInformation *)arg1 ;
-(void)setAccount:(EMAccount *)arg1 ;
-(id)otherSigners;
-(MFMessageLoadingContext *)context;
-(id)initWithAccount:(id)arg1 ;
-(void)_commonInit;
-(NSError *)smimeError;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(void)addressBookManager:(id)arg1 addressBookDidChange:(void*)arg2 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg1 ;
-(EMSecurityInformation *)securityInformation;
-(void)dealloc;
-(void)_trustDidChange:(id)arg1 ;
-(void)_legacyAccountsDidChange:(id)arg1 ;
-(void)_vipSendersDidChange:(id)arg1 ;
-(void)updateTrustForDisplayedAtoms;
-(void)_invalidateAtoms;
-(id<MFAddressAtomProvider>)atomProvider;
-(void)setSMIMEError:(id)arg1 ;
-(void)_updateAtomsInList:(id)arg1 ;
-(int)actionForTrustInformation:(id)arg1 ;
-(void)_updateOtherSignersList:(id)arg1 ;
-(BOOL)_atomContainsVIPSender:(id)arg1 ;
-(MailAccount *)legacyAccount;
-(void)setLegacyAccount:(MailAccount *)arg1 ;
-(void)_updateVIPStatus;
-(void)setAtomProvider:(id<MFAddressAtomProvider>)arg1 ;
-(void)updateWithSecurityInformation:(id)arg1 ;
@end

