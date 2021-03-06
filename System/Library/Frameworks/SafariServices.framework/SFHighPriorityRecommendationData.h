/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFHighPriorityRecommendationDataDelegate;
@class SFPasswordCellData, WBSPasswordWarning, NSExtension, NSArray;

@interface SFHighPriorityRecommendationData : NSObject {

	BOOL _isUpgradeToSignInWithAppleAvailable;
	BOOL _didUpgradeToSignInWithApple;
	BOOL _didUpgradeToStrongPassword;
	SFPasswordCellData* _passwordCellData;
	WBSPasswordWarning* _warning;
	unsigned long long _eligibleAccountModificationActions;
	NSExtension* _extension;
	id<SFHighPriorityRecommendationDataDelegate> _delegate;

}

@property (nonatomic,readonly) SFPasswordCellData * passwordCellData;                                   //@synthesize passwordCellData=_passwordCellData - In the implementation block
@property (nonatomic,readonly) WBSPasswordWarning * warning;                                            //@synthesize warning=_warning - In the implementation block
@property (nonatomic,readonly) unsigned long long eligibleAccountModificationActions;                   //@synthesize eligibleAccountModificationActions=_eligibleAccountModificationActions - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) NSExtension * extension;                                                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) BOOL isUpgradeToSignInWithAppleAvailable;                                //@synthesize isUpgradeToSignInWithAppleAvailable=_isUpgradeToSignInWithAppleAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<SFHighPriorityRecommendationDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL didUpgradeToSignInWithApple;                                          //@synthesize didUpgradeToSignInWithApple=_didUpgradeToSignInWithApple - In the implementation block
@property (assign,nonatomic) BOOL didUpgradeToStrongPassword;                                           //@synthesize didUpgradeToStrongPassword=_didUpgradeToStrongPassword - In the implementation block
-(void)_fetchEligibleAccountModificationActionsForSavedPassword:(id)arg1 ;
-(unsigned long long)eligibleAccountModificationActions;
-(id<SFHighPriorityRecommendationDataDelegate>)delegate;
-(void)setDelegate:(id<SFHighPriorityRecommendationDataDelegate>)arg1 ;
-(WBSPasswordWarning *)warning;
-(NSArray *)items;
-(SFPasswordCellData *)passwordCellData;
-(id)initWithPasswordCellData:(id)arg1 warning:(id)arg2 delegate:(id)arg3 ;
-(id)cellForTableView:(id)arg1 forCellType:(id)arg2 ;
-(void)setDidUpgradeToStrongPassword:(BOOL)arg1 ;
-(BOOL)didUpgradeToSignInWithApple;
-(BOOL)didUpgradeToStrongPassword;
-(NSExtension *)extension;
-(BOOL)isUpgradeToSignInWithAppleAvailable;
-(void)setDidUpgradeToSignInWithApple:(BOOL)arg1 ;
@end

