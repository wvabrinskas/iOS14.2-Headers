/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBTableWelcomeController.h>

@class OBBoldTrayButton, CNContactStore, CNContact, NSLayoutConstraint;

@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController {

	OBBoldTrayButton* _confirmButton;
	CNContactStore* _contactStore;
	CNContact* _contact;
	NSLayoutConstraint* _tableViewHeightConstraint;

}

@property (nonatomic,retain) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tableViewHeightConstraint;              //@synthesize tableViewHeightConstraint=_tableViewHeightConstraint - In the implementation block
@property (nonatomic,retain) OBBoldTrayButton * confirmButton;                            //@synthesize confirmButton=_confirmButton - In the implementation block
+(id)headerText;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)handleConfirmButtonTapped;
-(CNContact *)contact;
-(void)viewDidLayoutSubviews;
-(CNContactStore *)contactStore;
-(void)viewDidLoad;
-(OBBoldTrayButton *)confirmButton;
-(id)confirmButtonTitle;
-(NSLayoutConstraint *)tableViewHeightConstraint;
-(void)setTableViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setConfirmButton:(OBBoldTrayButton *)arg1 ;
-(void)didTapDoneButton:(id)arg1 ;
-(void)updateForContentSizeCategoryChange;
@end
