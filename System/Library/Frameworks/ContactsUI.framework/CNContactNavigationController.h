/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegateInternal.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAccountsAndGroupsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>

@protocol CNScheduler;
@class CNContactListViewController, CNContactStyle, CNContactStore, CNContactViewController, NSNumber, CNAccountsAndGroupsViewController, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, UIKeyCommand, UIAlertController, CNUIUserActivityManager, CNContactListStyleApplier, NSArray, UIBarButtonItem, NSString;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter> {

	CNContactListViewController* _contactListViewController;
	BOOL _allowsCardEditing;
	BOOL _allowsCardDeletion;
	BOOL _allowsCanceling;
	BOOL _allowsDone;
	BOOL _allowsContactBlocking;
	BOOL _hasPendingShowCard;
	BOOL _ignoresMapsData;
	BOOL _hideGroupsButton;
	CNContactStyle* _contactStyle;
	CNContactStore* _contactStore;
	CNContactViewController* _reusableContactViewController;
	NSNumber* _shouldShowAccountsAndGroupsCachedValue;
	CNAccountsAndGroupsViewController* _accountsAndGroupsViewController;
	CNAccountsAndGroupsDataSource* _accountsAndGroupsDataSource;
	long long _leftButtonBehavior;
	long long _rightButtonBehavior;
	CNContactStoreDataSource* _nonServerDataSource;
	CNContactViewController* _presentedContactViewController;
	UIKeyCommand* _addKeyCommand;
	UIAlertController* _facebookContactsAlertController;
	id<CNScheduler> _backgroundScheduler;
	id<CNScheduler> _mainThreadScheduler;
	CNUIUserActivityManager* _activityManager;
	CNContactListStyleApplier* _contactListStyleApplier;
	NSArray* _prohibitedPropertyKeys;
	UIBarButtonItem* _addContactBarButtonItem;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactViewController * reusableContactViewController;                          //@synthesize reusableContactViewController=_reusableContactViewController - In the implementation block
@property (nonatomic,retain) NSNumber * shouldShowAccountsAndGroupsCachedValue;                                //@synthesize shouldShowAccountsAndGroupsCachedValue=_shouldShowAccountsAndGroupsCachedValue - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsViewController * accountsAndGroupsViewController;              //@synthesize accountsAndGroupsViewController=_accountsAndGroupsViewController - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;                      //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) long long leftButtonBehavior;                                                     //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) long long rightButtonBehavior;                                                    //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                                   //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * presentedContactViewController;                  //@synthesize presentedContactViewController=_presentedContactViewController - In the implementation block
@property (nonatomic,retain) UIKeyCommand * addKeyCommand;                                                     //@synthesize addKeyCommand=_addKeyCommand - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * facebookContactsAlertController;                       //@synthesize facebookContactsAlertController=_facebookContactsAlertController - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundScheduler;                                            //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> mainThreadScheduler;                                            //@synthesize mainThreadScheduler=_mainThreadScheduler - In the implementation block
@property (assign,nonatomic) BOOL hasPendingShowCard;                                                          //@synthesize hasPendingShowCard=_hasPendingShowCard - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * activityManager;                                        //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                              //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL ignoresMapsData;                                                             //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (assign,nonatomic) BOOL hideGroupsButton;                                                            //@synthesize hideGroupsButton=_hideGroupsButton - In the implementation block
@property (nonatomic,retain) NSArray * prohibitedPropertyKeys;                                                 //@synthesize prohibitedPropertyKeys=_prohibitedPropertyKeys - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addContactBarButtonItem;                                        //@synthesize addContactBarButtonItem=_addContactBarButtonItem - In the implementation block
@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                                    //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCardEditing;                                                           //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCardDeletion;                                                          //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCanceling;                                                             //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                                  //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                       //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)moveViewController:(id)arg1 toParent:(id)arg2 ;
+(id)keyCommandForNewContact;
+(id)newContactFormatter;
-(void)cancelSearch:(id)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setActivityManager:(CNUIUserActivityManager *)arg1 ;
-(void)setRightButtonBehavior:(long long)arg1 ;
-(BOOL)hidesSearchableSources;
-(BOOL)shouldShowLeftDoneAndRightAddButton;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)contactStoreDidChange:(id)arg1 ;
-(void)_cnui_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)setAccountsAndGroupsViewController:(CNAccountsAndGroupsViewController *)arg1 ;
-(id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1 ;
-(CNContactViewController *)presentedContactViewController;
-(BOOL)hideGroupsButton;
-(id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(BOOL)arg3 environment:(id)arg4 allowsLargeTitles:(BOOL)arg5 ;
-(void)applicationDidResume;
-(BOOL)allowsContactBlocking;
-(id)checkShouldShowAccountsAndGroups;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)contactStyleCurrentStyleDidChange:(id)arg1 ;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(BOOL)allowsCanceling;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldShowLeftCancelAndRightAddButton;
-(CNAccountsAndGroupsViewController *)accountsAndGroupsViewController;
-(void)setAllowsCanceling:(BOOL)arg1 ;
-(void)showCardForContactBeforeIndexPath:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(BOOL)arg3 ;
-(void)addContact:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)shouldShowAccountsAndGroups;
-(UIBarButtonItem *)addContactBarButtonItem;
-(void)showCardForContact:(id)arg1 animated:(BOOL)arg2 ;
-(id<CNScheduler>)mainThreadScheduler;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(long long)rightButtonBehavior;
-(void)showCardForContactAfterIndexPath:(id)arg1 ;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)done:(id)arg1 ;
-(void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(BOOL)arg2 ;
-(BOOL)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(id)nextResponderForContactListViewController:(id)arg1 ;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(id<CNScheduler>)backgroundScheduler;
-(void)cancel:(id)arg1 ;
-(BOOL)isPresentedContactViewControllerVisible;
-(void)addContact:(id)arg1 ;
-(CNContactStore *)contactStore;
-(BOOL)shouldShowRightCancelButton;
-(UIAlertController *)facebookContactsAlertController;
-(NSArray *)prohibitedPropertyKeys;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(BOOL)shouldShowRightAddButton;
-(id<CNContactDataSource>)dataSource;
-(void)setIgnoresMapsData:(BOOL)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(void)setProhibitedPropertyKeys:(NSArray *)arg1 ;
-(id)addContactPresenter;
-(void)clearServerSearchIfNeeded:(id)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)allowsDone;
-(void)setAddContactBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)accountsAndGroupsViewControllerDidUpdateSelection:(id)arg1 ;
-(CNContactViewController *)reusableContactViewController;
-(void)setHasPendingShowCard:(BOOL)arg1 ;
-(void)setAddKeyCommand:(UIKeyCommand *)arg1 ;
-(void)setAllowsDone:(BOOL)arg1 ;
-(void)showCardForContact:(id)arg1 resetFilter:(BOOL)arg2 resetSearch:(BOOL)arg3 fallbackToFirstContact:(BOOL)arg4 scrollToContact:(BOOL)arg5 animated:(BOOL)arg6 ;
-(BOOL)allowsCardEditing;
-(BOOL)canAddContacts;
-(void)searchForString:(id)arg1 ;
-(void)startEditingPresentedContact;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(BOOL)allowsCardDeletion;
-(id)userActivityRepresentingCurrentlyDisplayedContact;
-(void)setLeftButtonBehavior:(long long)arg1 ;
-(void)checkShouldShowAccountsAndGroupsDidChange;
-(UIKeyCommand *)addKeyCommand;
-(void)checkForInfoContentWithContext:(id)arg1 ;
-(long long)leftButtonBehavior;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(BOOL)ignoresMapsData;
-(void)beginSearch:(id)arg1 ;
-(void)notifyOtherFacebookContactsAlertDidSelectAction;
-(id)initWithDataSource:(id)arg1 allowsLargeTitles:(BOOL)arg2 ;
-(BOOL)shouldFlipDirectionWhenChangingSelectionWithKey:(id)arg1 ;
-(void)setHideGroupsButton:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CNContactStoreDataSource *)nonServerDataSource;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)setPresentedContactViewController:(CNContactViewController *)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)selectPreviousContact:(id)arg1 ;
-(NSNumber *)shouldShowAccountsAndGroupsCachedValue;
-(void)executeAddContact;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(void)presentGroupsViewController:(id)arg1 ;
-(void)setFacebookContactsAlertController:(UIAlertController *)arg1 ;
-(void)setReusableContactViewController:(CNContactViewController *)arg1 ;
-(void)showCardForContactIfPossible:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(BOOL)shouldShowLeftCancelAndRightDoneButton;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(BOOL)arg3 ;
-(BOOL)shouldShowRightAddAndCancelButton;
-(void)observeOtherFacebookContactsAlert;
-(id)contactListViewController;
-(void)setShouldShowAccountsAndGroupsCachedValue:(NSNumber *)arg1 ;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(BOOL)shouldShowGroupsButton;
-(void)selectNextContact:(id)arg1 ;
-(BOOL)hasPendingShowCard;
-(void)dealloc;
-(void)popToContactListAndSaveChanges:(BOOL)arg1 ;
-(void)setAllowsCardDeletion:(BOOL)arg1 ;
@end
