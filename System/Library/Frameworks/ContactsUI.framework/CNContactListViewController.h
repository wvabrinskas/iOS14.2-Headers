/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CNContactListBannerViewDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <UIKit/UITableViewDragSourceDelegate.h>
#import <UIKit/UITableViewDragDestinationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerPresentationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewControllerDelegate.h>
#import <libobjc.A.dylib/TPKContentControllerDelegate.h>

@protocol CNContactDataSource, CNContactListViewControllerDelegate, CNHealthStoreManagerToken, CNCancelable;
@class CNContact, NSObject, _UIContentUnavailableView, NSString, CNContactFormatter, CNAvatarCardController, UISearchController, UISearchBar, UIView, TPKContentController, TPKContent, CNContactListBannerView, CNUIContactsEnvironment, CNAvatarViewController, NSArray, CNVCardImportController, NSSet, CNContactListStyleApplier;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate, TPKContentControllerDelegate> {

	CNContact* _preferredForNameMeContact;
	BOOL _shouldDisplayMeContactBanner;
	BOOL _shouldAutoHideMeContactBanner;
	BOOL _shouldDisplayTipContentView;
	BOOL _presentsSearchUI;
	BOOL _isHandlingSearch;
	BOOL _pendingSearchControllerActivation;
	BOOL _shouldUseLargeTitle;
	BOOL _pendingRefreshNoContactsView;
	BOOL _shouldDisplayGroupsGrid;
	BOOL _shouldDisplayCount;
	BOOL _shouldAllowDrags;
	BOOL _shouldAllowDrops;
	BOOL _shouldDisplayEmergencyContacts;
	NSObject*<CNContactDataSource> _dataSource;
	_UIContentUnavailableView* _noContactsView;
	id<CNContactListViewControllerDelegate> _delegate;
	NSString* _meContactBannerFootnoteLabel;
	NSString* _meContactBannerFootnoteValue;
	CNContactFormatter* _contactFormatter;
	CNAvatarCardController* _cardController;
	UISearchController* _searchController;
	UISearchBar* _searchBar;
	/*^block*/id _searchCompletionBlock;
	UIView* _tipContentView;
	TPKContentController* _tipContentController;
	TPKContent* _tipContent;
	CNContactListBannerView* _meContactBanner;
	double _contentOffsetDueToMeContactBanner;
	CNUIContactsEnvironment* _environment;
	CNAvatarViewController* _meBannerAvatarController;
	NSArray* _pendingLayoutBlocks;
	NSArray* _tableViewHeaderConstraints;
	NSString* _pendingSearchQuery;
	CNVCardImportController* _vCardImportController;
	NSSet* _emergencyContactIdentifiers;
	id<CNHealthStoreManagerToken> _medicalIDLookupRegistrationToken;
	id<CNCancelable> _medicalIDLookupToken;
	CNContactListStyleApplier* _defaultContactListStyleApplier;
	CNContactListViewController* _searchResultsController;
	CNContactListStyleApplier* _contactListStyleApplier;

}

@property (nonatomic,retain) CNAvatarCardController * cardController;                                     //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                       //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) id searchCompletionBlock;                                                      //@synthesize searchCompletionBlock=_searchCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayTipContentView;                                            //@synthesize shouldDisplayTipContentView=_shouldDisplayTipContentView - In the implementation block
@property (nonatomic,retain) UIView * tipContentView;                                                     //@synthesize tipContentView=_tipContentView - In the implementation block
@property (nonatomic,retain) TPKContentController * tipContentController;                                 //@synthesize tipContentController=_tipContentController - In the implementation block
@property (nonatomic,retain) TPKContent * tipContent;                                                     //@synthesize tipContent=_tipContent - In the implementation block
@property (nonatomic,retain) CNContactListBannerView * meContactBanner;                                   //@synthesize meContactBanner=_meContactBanner - In the implementation block
@property (nonatomic,readonly) CNContact * preferredForNameMeContact; 
@property (nonatomic,readonly) double contentOffsetDueToMeContactBanner;                                  //@synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner - In the implementation block
@property (nonatomic,readonly) _UIContentUnavailableView * noContactsView;                                //@synthesize noContactsView=_noContactsView - In the implementation block
@property (nonatomic,readonly) BOOL presentsSearchUI;                                                     //@synthesize presentsSearchUI=_presentsSearchUI - In the implementation block
@property (assign,nonatomic) BOOL isHandlingSearch;                                                       //@synthesize isHandlingSearch=_isHandlingSearch - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * meBannerAvatarController;                           //@synthesize meBannerAvatarController=_meBannerAvatarController - In the implementation block
@property (nonatomic,retain) NSArray * pendingLayoutBlocks;                                               //@synthesize pendingLayoutBlocks=_pendingLayoutBlocks - In the implementation block
@property (nonatomic,retain) NSArray * tableViewHeaderConstraints;                                        //@synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints - In the implementation block
@property (nonatomic,retain) NSString * pendingSearchQuery;                                               //@synthesize pendingSearchQuery=_pendingSearchQuery - In the implementation block
@property (assign,nonatomic) BOOL pendingSearchControllerActivation;                                      //@synthesize pendingSearchControllerActivation=_pendingSearchControllerActivation - In the implementation block
@property (nonatomic,retain) CNVCardImportController * vCardImportController;                             //@synthesize vCardImportController=_vCardImportController - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLargeTitle;                                                  //@synthesize shouldUseLargeTitle=_shouldUseLargeTitle - In the implementation block
@property (nonatomic,retain) NSSet * emergencyContactIdentifiers;                                         //@synthesize emergencyContactIdentifiers=_emergencyContactIdentifiers - In the implementation block
@property (nonatomic,retain) id<CNHealthStoreManagerToken> medicalIDLookupRegistrationToken;              //@synthesize medicalIDLookupRegistrationToken=_medicalIDLookupRegistrationToken - In the implementation block
@property (nonatomic,retain) id<CNCancelable> medicalIDLookupToken;                                       //@synthesize medicalIDLookupToken=_medicalIDLookupToken - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * defaultContactListStyleApplier;                  //@synthesize defaultContactListStyleApplier=_defaultContactListStyleApplier - In the implementation block
@property (assign,nonatomic) BOOL pendingRefreshNoContactsView;                                           //@synthesize pendingRefreshNoContactsView=_pendingRefreshNoContactsView - In the implementation block
@property (nonatomic,retain) CNContactListViewController * searchResultsController;                       //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayGroupsGrid;                                                //@synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCount;                                                     //@synthesize shouldDisplayCount=_shouldDisplayCount - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrags;                                                       //@synthesize shouldAllowDrags=_shouldAllowDrags - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrops;                                                       //@synthesize shouldAllowDrops=_shouldAllowDrops - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayEmergencyContacts;                                         //@synthesize shouldDisplayEmergencyContacts=_shouldDisplayEmergencyContacts - In the implementation block
@property (nonatomic,retain) CNContactListStyleApplier * contactListStyleApplier;                         //@synthesize contactListStyleApplier=_contactListStyleApplier - In the implementation block
@property (nonatomic,readonly) id<CNContactDataSource> originalDataSource; 
@property (assign,nonatomic,__weak) id<CNContactListViewControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<CNContactDataSource> dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMeContactBanner;                                           //@synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoHideMeContactBanner;                                          //@synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteLabel;                                       //@synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteValue;                                       //@synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue - In the implementation block
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) NSArray * selectedContacts; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                       //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyContact;
+(id)descriptorForRequiredKeysForPreferredForNameMeContact;
-(void)cancelSearch:(id)arg1 ;
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(void)vCardImportControllerDidCompleteQueue:(id)arg1 ;
-(CNContactListBannerView *)meContactBanner;
-(void)didDismissSearchController:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)refreshNoContactsViewIfVisible;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)performDelayedRefreshNoContactsView;
-(void)setShouldDisplayCount:(BOOL)arg1 ;
-(void)_contactCountTelemetry:(unsigned long long)arg1 ;
-(CNAvatarCardController *)cardController;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)hasNoContacts;
-(void)setIsHandlingSearch:(BOOL)arg1 ;
-(void)refreshTableViewHeaderIfVisibleWithSize:(CGSize)arg1 ;
-(NSArray *)tableViewHeaderConstraints;
-(BOOL)shouldAutoHideMeContactBanner;
-(void)_applicationEnteringForeground:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id<CNContactListViewControllerDelegate>)delegate;
-(double)contentOffsetDueToMeContactBanner;
-(BOOL)refreshNoContactsViewIfNeeded;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)contactDataSourceDidChangeDisplayName:(id)arg1 ;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)reloadContacts;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)meContactBannerFootnoteValue;
-(NSSet *)emergencyContactIdentifiers;
-(void)setShouldDisplayGroupsGrid:(BOOL)arg1 ;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(void)setSearchResultsController:(CNContactListViewController *)arg1 ;
-(CNVCardImportController *)vCardImportController;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(CNContactListViewController *)searchResultsController;
-(void)startSearchingForString:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setPendingSearchQuery:(NSString *)arg1 ;
-(BOOL)canShowNoContactsView;
-(void)setMedicalIDLookupToken:(id<CNCancelable>)arg1 ;
-(void)setupForMultiSelection;
-(id)_sections;
-(id)createTableView;
-(void)setContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(BOOL)isSearching;
-(id<CNContactDataSource>)originalDataSource;
-(BOOL)selectContact:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)contactDataSourceMeContactDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(void)setTipContentController:(TPKContentController *)arg1 ;
-(void)setDataSource:(NSObject*<CNContactDataSource>)arg1 ;
-(void)setShouldAllowDrags:(BOOL)arg1 ;
-(void)_searchBarDidEndEditing:(id)arg1 ;
-(BOOL)canSelectContactAtIndexPath:(id)arg1 ;
-(void)setShouldDisplayTipContentView:(BOOL)arg1 ;
-(UIView *)tipContentView;
-(id)contactStore;
-(id)_contactAtIndexPath:(id)arg1 ;
-(void)contentController:(id)arg1 contentViewNeedsLayout:(id)arg2 ;
-(void)setDelegate:(id<CNContactListViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 shouldUseLargeTitle:(BOOL)arg4 ;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1 ;
-(CNContactListStyleApplier *)defaultContactListStyleApplier;
-(void)setMeContactBannerFootnoteValue:(NSString *)arg1 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(BOOL)pendingRefreshNoContactsView;
-(NSObject*<CNContactDataSource>)dataSource;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)contentController:(id)arg1 didFinishWithContent:(id)arg2 animated:(BOOL)arg3 ;
-(NSArray *)selectedContacts;
-(void)setTipContent:(TPKContent *)arg1 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(BOOL)shouldDisplayGroupsGrid;
-(void)willDismissSearchController:(id)arg1 ;
-(TPKContentController *)tipContentController;
-(BOOL)shouldDisplayMeContactBanner;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setMeBannerAvatarController:(CNAvatarViewController *)arg1 ;
-(void)setEmergencyContactIdentifiers:(NSSet *)arg1 ;
-(void)performWhenViewIsLaidOut:(/*^block*/id)arg1 ;
-(id)searchCompletionBlock;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(void)contentController:(id)arg1 contentDidBecomeAvailable:(id)arg2 animated:(BOOL)arg3 ;
-(void)startSearching;
-(CNUIContactsEnvironment *)environment;
-(BOOL)shouldDisplayEmergencyContacts;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setDefaultContactListStyleApplier:(CNContactListStyleApplier *)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)setMedicalIDLookupRegistrationToken:(id<CNHealthStoreManagerToken>)arg1 ;
-(CNAvatarViewController *)meBannerAvatarController;
-(BOOL)isHandlingSearch;
-(void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2 ;
-(id<CNCancelable>)medicalIDLookupToken;
-(NSString *)meContactBannerFootnoteLabel;
-(void)setShouldAllowDrops:(BOOL)arg1 ;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)setShouldDisplayEmergencyContacts:(BOOL)arg1 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)_updateTableViewRowHeight;
-(void)setTipContentView:(UIView *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(BOOL)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)dragItemsForIndexPath:(id)arg1 ;
-(void)applyStyle;
-(void)disableSearchUI;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(BOOL)shouldDisplayCount;
-(UISearchBar *)searchBar;
-(void)checkForInfoContentWithContext:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)setShouldAutoHideMeContactBanner:(BOOL)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(_UIContentUnavailableView *)noContactsView;
-(TPKContent *)tipContent;
-(BOOL)shouldAllowDrops;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)refreshTableViewHeaderIfVisible;
-(void)setTableViewHeaderConstraints:(NSArray *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldUseLargeTitle;
-(void)loadView;
-(void)startHandlingEmergencyContacts;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setMeContactBanner:(CNContactListBannerView *)arg1 ;
-(BOOL)presentsSearchUI;
-(void)_updateCountStringNow:(BOOL)arg1 ;
-(BOOL)isContactWithIdentifierEmergencyContact:(id)arg1 ;
-(void)searchForString:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id<CNHealthStoreManagerToken>)medicalIDLookupRegistrationToken;
-(void)setPendingSearchControllerActivation:(BOOL)arg1 ;
-(void)refreshTableViewHeaderWithSize:(CGSize)arg1 ;
-(void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)shouldAllowDrags;
-(void)didUpdateContentForAvatarViewController:(id)arg1 ;
-(NSString *)pendingSearchQuery;
-(NSArray *)pendingLayoutBlocks;
-(UISearchController *)searchController;
-(void)setMeContactBannerFootnoteLabel:(NSString *)arg1 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(CNContactFormatter *)contactFormatter;
-(void)setVCardImportController:(CNVCardImportController *)arg1 ;
-(CNContactListStyleApplier *)contactListStyleApplier;
-(id)getVisibleIndexPaths;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(CNContact *)preferredForNameMeContact;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(BOOL)shouldDisplayTipContentView;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setPendingLayoutBlocks:(NSArray *)arg1 ;
-(void)setPendingRefreshNoContactsView:(BOOL)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)setSearchCompletionBlock:(id)arg1 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)configureNavigationBarForLargeTitles;
-(void)dealloc;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)pendingSearchControllerActivation;
-(void)refreshTableViewHeader;
@end

