/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUITopLevelPageElement;
@class NSString, UIView, RUITableView, RUIWebView, RUIPasscodeView, RUISpinnerView, UIToolbar, UIBarButtonItem, NSMutableArray, NSDictionary, RUIPageElement, RUIElement, RUIMultiChoiceElement, RUIStyle, RUIBarButtonItem, RUIObjectModel, UILabel, NSArray;

@interface RUIPage : UIViewController <UIWebViewDelegate> {

	NSString* _pageID;
	UIView* _containerView;
	RUITableView* _tableViewOM;
	RUIWebView* _webViewOM;
	RUIPasscodeView* _passcodeViewOM;
	RUISpinnerView* _spinnerViewOM;
	NSString* _validationFunction;
	NSString* _navTitle;
	NSString* _navSubTitle;
	BOOL _hidesBackButton;
	UIToolbar* _toolbar;
	UIBarButtonItem* _leftToolbarItem;
	UIBarButtonItem* _rightToolbarItem;
	UIBarButtonItem* _middleFlexSpace;
	UIBarButtonItem* _leftFlexSpace;
	RUIPage* _parentPage;
	NSMutableArray* _childPages;
	NSMutableArray* _didAppearCallbacks;
	BOOL _showsTitlesAsHeaderViews;
	BOOL _loading;
	NSDictionary* _attributes;
	RUIPageElement* _pageElement;
	RUIElement*<RUITopLevelPageElement> _primaryElement;
	RUIMultiChoiceElement* _multiChoiceElement;
	RUIStyle* _style;
	NSString* _backButtonTitle;
	RUIBarButtonItem* _rightNavigationBarButtonItem;
	RUIBarButtonItem* _leftNavigationBarButtonItem;
	RUIBarButtonItem* _rightToolbarButtonItem;
	RUIBarButtonItem* _leftToolbarButtonItem;
	RUIBarButtonItem* _middleToolbarButtonItem;
	UIBarButtonItem* _middleToolbarItem;
	RUIObjectModel* _objectModel;
	double _customMargin;
	NSString* _loadingTitle;
	UIEdgeInsets _customEdgeInsets;

}

@property (nonatomic,copy) NSDictionary * attributes;                                         //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * pageID;                                                 //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) RUIPageElement * pageElement;                                    //@synthesize pageElement=_pageElement - In the implementation block
@property (nonatomic,retain) RUIElement*<RUITopLevelPageElement> primaryElement;              //@synthesize primaryElement=_primaryElement - In the implementation block
@property (nonatomic,readonly) RUITableView * tableViewOM; 
@property (nonatomic,readonly) RUIWebView * webViewOM; 
@property (nonatomic,retain) RUIMultiChoiceElement * multiChoiceElement;                      //@synthesize multiChoiceElement=_multiChoiceElement - In the implementation block
@property (nonatomic,readonly) RUIPasscodeView * passcodeViewOM; 
@property (nonatomic,readonly) RUISpinnerView * spinnerViewOM; 
@property (nonatomic,retain) RUIStyle * style;                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * validationFunction;                                     //@synthesize validationFunction=_validationFunction - In the implementation block
@property (nonatomic,copy) NSString * navTitle;                                               //@synthesize navTitle=_navTitle - In the implementation block
@property (nonatomic,copy) NSString * navSubTitle;                                            //@synthesize navSubTitle=_navSubTitle - In the implementation block
@property (nonatomic,copy) NSString * backButtonTitle;                                        //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * activityIndicatorStyle; 
@property (assign,nonatomic) BOOL showsTitlesAsHeaderViews;                                   //@synthesize showsTitlesAsHeaderViews=_showsTitlesAsHeaderViews - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) BOOL hidesBackButton;                                            //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * rightNavigationBarButtonItem;                 //@synthesize rightNavigationBarButtonItem=_rightNavigationBarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * leftNavigationBarButtonItem;                  //@synthesize leftNavigationBarButtonItem=_leftNavigationBarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * rightToolbarButtonItem;                       //@synthesize rightToolbarButtonItem=_rightToolbarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * leftToolbarButtonItem;                        //@synthesize leftToolbarButtonItem=_leftToolbarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * middleToolbarButtonItem;                      //@synthesize middleToolbarButtonItem=_middleToolbarButtonItem - In the implementation block
@property (nonatomic,readonly) NSArray * buttonItems; 
@property (nonatomic,retain) UIBarButtonItem * rightToolbarItem;                              //@synthesize rightToolbarItem=_rightToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftToolbarItem;                               //@synthesize leftToolbarItem=_leftToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * middleToolbarItem;                             //@synthesize middleToolbarItem=_middleToolbarItem - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar;                                           //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,readonly) NSArray * childPages;                                          //@synthesize childPages=_childPages - In the implementation block
@property (nonatomic,__weak,readonly) RUIPage * parentPage;                                   //@synthesize parentPage=_parentPage - In the implementation block
@property (assign,nonatomic) double customMargin;                                             //@synthesize customMargin=_customMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets customEdgeInsets;                                   //@synthesize customEdgeInsets=_customEdgeInsets - In the implementation block
@property (nonatomic,readonly) BOOL navBarIndicatorHidesLeftButton; 
@property (nonatomic,copy) NSString * loadingTitle;                                           //@synthesize loadingTitle=_loadingTitle - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                   //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSDictionary * rightNavigationBarButton; 
@property (nonatomic,retain) NSDictionary * leftNavigationBarButton; 
@property (nonatomic,retain) NSDictionary * rightToolbarButton; 
@property (nonatomic,retain) NSDictionary * leftToolbarButton; 
@property (nonatomic,retain) NSDictionary * middleToolbarButton; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) NSArray * accessoryViews; 
@property (assign,nonatomic) UIEdgeInsets titleLabelPadding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)viewWillLayoutSubviews;
-(void)setLoading:(BOOL)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UIToolbar *)toolbar;
-(id)preferredFocusEnvironments;
-(NSArray *)accessoryViews;
-(id)init;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(BOOL)isLoading;
-(void)setPageID:(NSString *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(NSArray *)buttons;
-(NSString *)pageID;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(NSString *)loadingTitle;
-(void)populatePostbackDictionary:(id)arg1 ;
-(RUIPasscodeView *)passcodeViewOM;
-(unsigned long long)supportedInterfaceOrientations;
-(UIBarButtonItem *)middleToolbarItem;
-(UIView *)containerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasWebView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)navTitle;
-(void)viewDidLoad;
-(void)setNavTitle:(NSString *)arg1 ;
-(RUIWebView *)webViewOM;
-(BOOL)hasTableView;
-(BOOL)hasPasscodeView;
-(BOOL)hasSpinnerView;
-(RUISpinnerView *)spinnerViewOM;
-(UIBarButtonItem *)leftToolbarItem;
-(UIBarButtonItem *)rightToolbarItem;
-(UIEdgeInsets)customEdgeInsets;
-(RUIObjectModel *)objectModel;
-(RUIStyle *)style;
-(void)_setContentInset:(double)arg1 ;
-(void)setCustomMargin:(double)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(id)flexibleSpace;
-(BOOL)hidesBackButton;
-(NSString *)backButtonTitle;
-(NSDictionary *)attributes;
-(void)setButton:(id)arg1 enabled:(BOOL)arg2 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(RUITableView *)tableViewOM;
-(void)dealloc;
-(void)_updateToolbar;
-(NSArray *)buttonItems;
-(id)viewForElementIdentifier:(id)arg1 ;
-(NSString *)activityIndicatorStyle;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(id)elementsWithName:(id)arg1 ;
-(NSString *)navSubTitle;
-(void)setNavSubTitle:(NSString *)arg1 ;
-(void)setLeftNavigationBarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setShowsTitlesAsHeaderViews:(BOOL)arg1 ;
-(void)setTitleLabelPadding:(UIEdgeInsets)arg1 ;
-(RUIPageElement *)pageElement;
-(void)_updateLoadingUI;
-(void)_reloadTitleLabel;
-(BOOL)navBarIndicatorHidesLeftButton;
-(void)_rightNavigationBarButtonPressed:(id)arg1 ;
-(void)setRightNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_leftNavigationBarButtonPressed:(id)arg1 ;
-(void)setLeftNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_rightToolbarButtonPressed:(id)arg1 ;
-(void)setRightToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)_middleToolbarButtonPressed:(id)arg1 ;
-(void)setMiddleToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)_leftToolbarButtonPressed:(id)arg1 ;
-(void)setLeftToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setRightToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setMiddleToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setLeftToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setRightNavigationBarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)_barButtonPressed:(id)arg1 isRight:(BOOL)arg2 isNavbar:(BOOL)arg3 ;
-(void)_setParentPage:(id)arg1 ;
-(void)_updateWithCompletedChild:(id)arg1 ;
-(id)_childElements;
-(id)subElementWithID:(id)arg1 ;
-(BOOL)_shouldShowMultiChoiceElement;
-(double)customMargin;
-(UIEdgeInsets)titleLabelPadding;
-(void)setHasToolbar;
-(void)setRightToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)rightToolbarButton;
-(void)setMiddleToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)middleToolbarButton;
-(void)setLeftToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)leftToolbarButton;
-(void)setRightNavigationBarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)rightNavigationBarButton;
-(void)setLeftNavigationBarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)leftNavigationBarButton;
-(void)setPageElement:(RUIPageElement *)arg1 ;
-(void)_addChildPage:(id)arg1 ;
-(void)_updateParentPage;
-(void)setPrimaryElement:(RUIElement*<RUITopLevelPageElement>)arg1 ;
-(BOOL)hasChoiceView;
-(void)addDidAppearBlock:(/*^block*/id)arg1 ;
-(RUIElement*<RUITopLevelPageElement>)primaryElement;
-(RUIMultiChoiceElement *)multiChoiceElement;
-(void)setMultiChoiceElement:(RUIMultiChoiceElement *)arg1 ;
-(NSString *)validationFunction;
-(void)setValidationFunction:(NSString *)arg1 ;
-(BOOL)showsTitlesAsHeaderViews;
-(RUIBarButtonItem *)rightNavigationBarButtonItem;
-(RUIBarButtonItem *)leftNavigationBarButtonItem;
-(RUIBarButtonItem *)rightToolbarButtonItem;
-(RUIBarButtonItem *)leftToolbarButtonItem;
-(RUIBarButtonItem *)middleToolbarButtonItem;
-(NSArray *)childPages;
-(RUIPage *)parentPage;
-(void)setCustomEdgeInsets:(UIEdgeInsets)arg1 ;
@end

