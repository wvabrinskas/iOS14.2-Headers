/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, HKClinicalAuthorizationDisplayController, UITableView, HKClinicalAuthorizationBinaryChoiceFooterView, NSArray, HKLookUpAppPrivacyPolicyURLOperation, NSString;

@interface HKClinicalAuthorizationSettingsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate, HKHealthPrivacyServicePromptController> {

	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	long long _style;
	HKClinicalAuthorizationSequenceContext* _context;
	HKClinicalAuthorizationDisplayController* _displayController;
	long long _authorizationMode;
	UITableView* _tableView;
	HKClinicalAuthorizationBinaryChoiceFooterView* _allowButtonsFooterView;
	NSArray* _sections;
	NSArray* _appInformationSectionCells;
	HKLookUpAppPrivacyPolicyURLOperation* _lookUpAppPrivacyPolicyURLOperation;

}

@property (nonatomic,readonly) HKClinicalAuthorizationDisplayController * displayController;                         //@synthesize displayController=_displayController - In the implementation block
@property (assign,nonatomic) long long authorizationMode;                                                            //@synthesize authorizationMode=_authorizationMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * readUsageDescription; 
@property (nonatomic,readonly) UITableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationBinaryChoiceFooterView * allowButtonsFooterView;               //@synthesize allowButtonsFooterView=_allowButtonsFooterView - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * appInformationSectionCells;                                                     //@synthesize appInformationSectionCells=_appInformationSectionCells - In the implementation block
@property (getter=shouldCommitUpdatesImmediately,nonatomic,readonly) BOOL commitUpdatesImmediately; 
@property (nonatomic,readonly) BOOL isPrompting; 
@property (nonatomic,retain) HKLookUpAppPrivacyPolicyURLOperation * lookUpAppPrivacyPolicyURLOperation;              //@synthesize lookUpAppPrivacyPolicyURLOperation=_lookUpAppPrivacyPolicyURLOperation - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)_reloadSections;
-(id)init;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)_finishWithError:(id)arg1 ;
-(void)_updateForCurrentContentSizeCategory;
-(id)initWithContext:(id)arg1 style:(long long)arg2 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(HKClinicalAuthorizationSequenceContext *)context;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)source;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)style;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)authorizationMode;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)_privacyPolicyURL;
-(void)dealloc;
-(NSString *)readUsageDescription;
-(void)_configureTableView;
-(id)authorizationController;
-(void)setAuthorizationMode:(long long)arg1 ;
-(id)_indexPathForShareAuthorizationMode:(long long)arg1 ;
-(long long)_shareAuthorizationModeForIndexPath:(id)arg1 ;
-(HKClinicalAuthorizationDisplayController *)displayController;
-(id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1 ;
-(id)_visibleShareAuthorizationModeCellForMode:(long long)arg1 ;
-(void)_updateShareAuthorizationModeSectionFooter;
-(id)_shareAuthorizationModeCellForIndexPath:(id)arg1 ;
-(id)_titleForShareAuthorizationModeFooter;
-(void)_shareAuthorizationModeCellPressed:(id)arg1 ;
-(BOOL)isPrompting;
-(void)reloadAuthorizationSettings;
-(id)_createHeaderViewWithSource:(id)arg1 ;
-(id)_createAllowButtonsFooterView;
-(void)_configureNavigationItemWithSource:(id)arg1 ;
-(void)_configureInitialAuthorizationSettingsForPrompting;
-(void)_fetchPrivacyPolicyURLForSource:(id)arg1 ;
-(HKLookUpAppPrivacyPolicyURLOperation *)lookUpAppPrivacyPolicyURLOperation;
-(id)_createAppInformationSectionCells;
-(void)setAppInformationSectionCells:(NSArray *)arg1 ;
-(id)_sectionsForAuthorizationController:(id)arg1 ;
-(BOOL)shouldCommitUpdatesImmediately;
-(void)_updateFooterButtonsTitles;
-(void)_updateAllowButtonEnabledStateAnimated:(BOOL)arg1 ;
-(long long)_defaultShareAuthorizationMode;
-(id)_doNotAllowButtonTitle;
-(HKClinicalAuthorizationBinaryChoiceFooterView *)allowButtonsFooterView;
-(void)_updateTableViewBottomPadding;
-(void)_allowButtonPressed:(id)arg1 ;
-(void)_doNotAllowButtonPressed:(id)arg1 ;
-(long long)_sectionForTableViewSection:(long long)arg1 ;
-(BOOL)_shouldDisplayAppInformationSection;
-(BOOL)_shouldDisplayShareDataTypes;
-(BOOL)_shouldDisplayShareAuthorizationModeSection;
-(NSArray *)appInformationSectionCells;
-(void)_presentConfirmationForStopSharingIfNeededWithAcceptHandler:(/*^block*/id)arg1 ;
-(void)_presentViewAppPrivacyPolicyURLErrorAlert;
-(id)_typeForIndexPath:(id)arg1 ;
-(void)_updateShareAuthorizationModeSectionVisibilityIfNeeded;
-(BOOL)_isShowingShareAuthorizationModeSection;
-(void)_verifySections:(id)arg1 isEqualToSections:(id)arg2 afterInsertingSection:(id)arg3 ;
-(void)_showShareAuthorizationModeSectionIfNeeded;
-(void)_hideShareAuthorizationModeSectionIfNeeded;
-(long long)_tableViewSectionForSection:(long long)arg1 ;
-(BOOL)_tableViewSection:(long long)arg1 isEqualToSection:(long long)arg2 ;
-(BOOL)_cellAtIndexPathIsViewAppPrivacyPolicyCell:(id)arg1 ;
-(BOOL)_shouldHighlightViewAppPrivacyPolicyCellAtIndexPath:(id)arg1 ;
-(id)_shareUsageDescriptionCellForIndexPath:(id)arg1 ;
-(id)_viewAppPrivacyPolicyCellForIndexPath:(id)arg1 ;
-(id)_indexPathForViewAppPrivacyPolicyCell;
-(BOOL)_shouldPresentStopSharingDialogueBeforeDisallowing;
-(id)_messageForStopSharingConfirmation;
-(void)setLookUpAppPrivacyPolicyURLOperation:(HKLookUpAppPrivacyPolicyURLOperation *)arg1 ;
-(void)_reloadViewAppPrivacyPolicyCell;
-(id)_appInformationCellForIndexPath:(id)arg1 ;
-(id)_shareDataTypeCellForIndexPath:(id)arg1 ;
-(id)_titleForAppInformationFooter;
-(id)_titleForShareDataTypesFooter;
-(BOOL)_shouldHighlightAppInformationCellAtIndexPath:(id)arg1 ;
-(void)_viewAppPrivacyPolicyCellPressed:(id)arg1 ;
@end
