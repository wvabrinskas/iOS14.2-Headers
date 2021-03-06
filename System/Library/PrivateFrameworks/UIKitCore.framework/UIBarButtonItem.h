/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIBarItem.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIBarButtonItemViewOwner;
@class NSString, NSSet, UIImage, UIView, _UIBarButtonItemAppearanceStorage, NSArray, NSDictionary, UIAction, UIMenu, UIBarButtonItemGroup, UINavigationItem, UILayoutGuide, UIToolbarButton, UIColor;

@interface UIBarButtonItem : UIBarItem <NSCoding> {

	NSString* _title;
	NSSet* _possibleTitles;
	SEL _action;
	id _target;
	UIImage* _image;
	UIImage* _landscapeImagePhone;
	UIEdgeInsets _imageInsets;
	UIEdgeInsets _landscapeImagePhoneInsets;
	double _width;
	UIView* _view;
	_UIBarButtonItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned menuIsPrimary : 2;
		unsigned imageHasEffects : 1;
		unsigned actsAsFakeBackButton : 1;
		unsigned springLoaded : 1;
		unsigned showsChevron : 1;
		unsigned wantsThreeUp : 1;
	}  _barButtonItemFlags;
	NSArray* _gestureRecognizers;
	NSArray* _interactions;
	BOOL _flexible;
	BOOL __viewWantsLetterpressImage;
	BOOL __needsViewUpdateForLetterpressImage;
	BOOL _groupRepresentative;
	BOOL __showsBackButtonIndicator;
	BOOL __hidden;
	double _minimumWidth;
	double _maximumWidth;
	NSSet* _possibleSystemItems;
	NSDictionary* _stylesForSizingTitles;
	/*^block*/id _secondaryActionsProvider;
	UIAction* _primaryAction;
	UIMenu* _menu;
	UIBarButtonItemGroup* _buttonGroup;
	UINavigationItem* __owningNavigationItem;
	UIBarButtonItemGroup* __owningButtonGroup;
	id<_UIBarButtonItemViewOwner> __viewOwner;
	/*^block*/id __autoValidationHandler;
	UILayoutGuide* __popoverLayoutGuide;
	NSArray* __backButtonAlternateTitles;
	double __toolbarCharge;
	UIBarButtonItem* __itemVariation;
	UIEdgeInsets _additionalSelectionInsets;

}

@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                                 //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (nonatomic,readonly) BOOL _viewWantsLetterpressImage;                                                                     //@synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage - In the implementation block
@property (nonatomic,__weak,readonly) UIBarButtonItemGroup * buttonGroup;                                                           //@synthesize buttonGroup=_buttonGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * _resolvedLargeContentSizeTitle; 
@property (setter=_setLargeContentSizeTitle:,nonatomic,copy) NSString * _largeContentSizeTitle; 
@property (nonatomic,readonly) BOOL _needsViewUpdateForLetterpressImage;                                                            //@synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage - In the implementation block
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,readonly) BOOL isCustomViewItem; 
@property (nonatomic,readonly) BOOL isSpaceItem; 
@property (assign,nonatomic) BOOL isMinibarView; 
@property (assign,setter=_setOwningNavigationItem:,nonatomic,__weak) UINavigationItem * _owningNavigationItem;                      //@synthesize _owningNavigationItem=__owningNavigationItem - In the implementation block
@property (assign,setter=_setOwningButtonGroup:,nonatomic,__weak) UIBarButtonItemGroup * _owningButtonGroup;                        //@synthesize _owningButtonGroup=__owningButtonGroup - In the implementation block
@property (assign,setter=_setViewOwner:,nonatomic,__weak) id<_UIBarButtonItemViewOwner> _viewOwner;                                 //@synthesize _viewOwner=__viewOwner - In the implementation block
@property (nonatomic,readonly) BOOL groupRepresentative;                                                                            //@synthesize groupRepresentative=_groupRepresentative - In the implementation block
@property (setter=_setAutoValidationHandler:,nonatomic,copy) id _autoValidationHandler;                                             //@synthesize _autoValidationHandler=__autoValidationHandler - In the implementation block
@property (setter=_setPopoverLayoutGuide:,nonatomic,retain) UILayoutGuide * _popoverLayoutGuide;                                    //@synthesize _popoverLayoutGuide=__popoverLayoutGuide - In the implementation block
@property (setter=_setBackButtonAlternateTitles:,nonatomic,copy) NSArray * _backButtonAlternateTitles;                              //@synthesize _backButtonAlternateTitles=__backButtonAlternateTitles - In the implementation block
@property (nonatomic,readonly) UIView * _viewForPresenting; 
@property (nonatomic,readonly) CGRect _rectForPresenting; 
@property (nonatomic,readonly) BOOL _menuIsPrimary; 
@property (assign,setter=_setActsAsFakeBackButton:,getter=_actsAsFakeBackButton,nonatomic) BOOL _actsAsFakeBackButton; 
@property (assign,setter=_setShowsChevron:,getter=_showsChevron,nonatomic) BOOL _showsChevron; 
@property (assign,setter=_setWantsThreeUp:,getter=_wantsThreeUp,nonatomic) BOOL _wantsThreeUp; 
@property (getter=_isFloatable,nonatomic,readonly) BOOL _floatable; 
@property (getter=_isFloating,nonatomic,readonly) BOOL _floating; 
@property (nonatomic,readonly) UIView * _configuredFloatableView; 
@property (nonatomic,readonly) UIView * _referenceView; 
@property (assign,setter=_setToolbarCharge:,nonatomic) double _toolbarCharge;                                                       //@synthesize _toolbarCharge=__toolbarCharge - In the implementation block
@property (assign,setter=_setMinimumWidth:,nonatomic) double _minimumWidth;                                                         //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,setter=_setMaximumWidth:,nonatomic) double _maximumWidth;                                                         //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setFlexible:,nonatomic) BOOL _flexible;                                                                   //@synthesize flexible=_flexible - In the implementation block
@property (assign,setter=_setShowsBackButtonIndicator:,nonatomic) BOOL _showsBackButtonIndicator;                                   //@synthesize _showsBackButtonIndicator=__showsBackButtonIndicator - In the implementation block
@property (assign,setter=_setHidden:,nonatomic) BOOL _hidden;                                                                       //@synthesize _hidden=__hidden - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) UIToolbarButton * _toolbarButton; 
@property (assign,setter=_setWidth:,getter=_width,nonatomic) double _width; 
@property (nonatomic,readonly) BOOL isSystemItem; 
@property (nonatomic,readonly) long long systemItem; 
@property (setter=_setPossibleSystemItems:,getter=_possibleSystemItems,nonatomic,copy) NSSet * possibleSystemItems;                 //@synthesize possibleSystemItems=_possibleSystemItems - In the implementation block
@property (setter=_setPossibleItemVariations:,nonatomic,copy) NSSet * _possibleItemVariations; 
@property (setter=_setItemVariation:,nonatomic,retain) UIBarButtonItem * _itemVariation;                                            //@synthesize _itemVariation=__itemVariation - In the implementation block
@property (assign,nonatomic) BOOL selected; 
@property (assign,setter=_setAdditionalSelectionInsets:,nonatomic) UIEdgeInsets _additionalSelectionInsets;                         //@synthesize additionalSelectionInsets=_additionalSelectionInsets - In the implementation block
@property (assign,setter=_setImageHasEffects:,nonatomic) BOOL _imageHasEffects; 
@property (setter=_setGestureRecognizers:,nonatomic,copy) NSArray * _gestureRecognizers;                                            //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (setter=_setInteractions:,nonatomic,copy) NSArray * _interactions;                                                        //@synthesize interactions=_interactions - In the implementation block
@property (nonatomic,copy) UIMenu * secondaryActions; 
@property (assign,nonatomic) BOOL secondaryActionsArePrimary; 
@property (setter=_setSecondaryActionsProvider:,nonatomic,copy) id _secondaryActionsProvider;                                       //@synthesize secondaryActionsProvider=_secondaryActionsProvider - In the implementation block
@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double width; 
@property (nonatomic,copy) NSSet * possibleTitles; 
@property (nonatomic,retain) UIView * customView; 
@property (assign,nonatomic) SEL action;                                                                                            //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                                                                      //@synthesize target=_target - In the implementation block
@property (nonatomic,copy) UIAction * primaryAction;                                                                                //@synthesize primaryAction=_primaryAction - In the implementation block
@property (nonatomic,copy) UIMenu * menu;                                                                                           //@synthesize menu=_menu - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
+(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10 ;
+(id)_appearanceBlindViewClasses;
+(Class)classForNavigationButton;
+(Class)classForToolbarButton;
+(id)fixedSpaceItemOfWidth:(double)arg1 ;
+(id)flexibleSpaceItem;
-(id)target;
-(UIEdgeInsets)_additionalSelectionInsets;
-(UIMenu *)menu;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)_width;
-(void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 ;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(BOOL)_hidden;
-(UIView *)customView;
-(void)setSelected:(BOOL)arg1 ;
-(void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(UIEdgeInsets*)arg1 forBarStyle:(long long)arg2 landscape:(BOOL)arg3 alwaysBordered:(BOOL)arg4 ;
-(id)_appearanceStorage;
-(NSDictionary *)_stylesForSizingTitles;
-(void)_setAdditionalSelectionInsets:(UIEdgeInsets)arg1 ;
-(id)nextResponder;
-(void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setWidth:(double)arg1 ;
-(double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(double)width;
-(BOOL)hasImage;
-(id)init;
-(void)setMenu:(UIMenu *)arg1 ;
-(id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIView *)view;
-(unsigned long long)hash;
-(BOOL)selected;
-(void)_getNavBarEdgeSizeAdjust:(CGSize*)arg1 imageInsets:(UIEdgeInsets*)arg2 landscape:(BOOL)arg3 ;
-(UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)setPossibleTitles:(NSSet *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_setOwningNavigationItem:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_flexible;
-(id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_applyPositionAdjustmentToSegmentedControl:(id)arg1 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 primaryAction:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(id)image;
-(BOOL)isSystemItem;
-(void)setTarget:(id)arg1 ;
-(UIEdgeInsets)imageInsets;
-(NSSet *)possibleTitles;
-(id<_UIBarButtonItemViewOwner>)_viewOwner;
-(id)description;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_foregroundColorForLetterpressWithView:(id)arg1 ;
-(void)_setWidth:(double)arg1 ;
-(id)_miniImage;
-(double)_rightImagePaddingForEdgeMarginInNavBar;
-(NSString *)_resolvedLargeContentSizeTitle;
-(double)_maximumWidth;
-(id)_backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3 ;
-(double)_leftImagePaddingForEdgeMarginInNavBar;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setButtonGroup:(id)arg1 isRepresentative:(BOOL)arg2 ;
-(id)initWithBarButtonSystemItem:(long long)arg1 menu:(id)arg2 ;
-(void)setAction:(SEL)arg1 ;
-(UIBarButtonItemGroup *)buttonGroup;
-(BOOL)hasTitle;
-(UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(BOOL)isSpaceItem;
-(id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4 ;
-(BOOL)_isFloatable;
-(BOOL)_isFloating;
-(UIEdgeInsets)largeContentSizeImageInsets;
-(long long)style;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(BOOL)_needsViewUpdateForLetterpressImage;
-(id)title;
-(NSArray *)_backButtonAlternateTitles;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(long long)systemItem;
-(void)setSecondaryActionsArePrimary:(BOOL)arg1 ;
-(void)_setBackButtonAlternateTitles:(id)arg1 ;
-(void)setLargeContentSizeImageInsets:(UIEdgeInsets)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)isSpringLoaded;
-(id)resolvedTitle;
-(BOOL)_showsChevron;
-(NSArray *)_interactions;
-(UIColor *)tintColor;
-(BOOL)_wantsThreeUp;
-(double)_minimumWidth;
-(id)itemVariation;
-(BOOL)isMinibarView;
-(void)_setFlexible:(BOOL)arg1 ;
-(UIAction *)primaryAction;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setLandscapeImagePhoneInsets:(UIEdgeInsets)arg1 ;
-(void)_setShowsBackButtonIndicator:(BOOL)arg1 ;
-(void)_setSecondaryActionsProvider:(/*^block*/id)arg1 ;
-(UIView *)_configuredFloatableView;
-(void)_setLargeContentSizeTitle:(id)arg1 ;
-(BOOL)_isImageBarButtonItem;
-(id)largeContentSizeImage;
-(BOOL)_viewWantsLetterpressImage;
-(BOOL)isEnabled;
-(void)_setOwningButtonGroup:(id)arg1 ;
-(id)window;
-(id)_autoValidationHandler;
-(void)_setAutoValidationHandler:(/*^block*/id)arg1 ;
-(void)_setToolbarCharge:(double)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
-(BOOL)_showsBackButtonIndicator;
-(void)_updateView;
-(id)initWithCustomView:(id)arg1 ;
-(id)_imageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3 ;
-(UIEdgeInsets)landscapeImagePhoneInsets;
-(BOOL)groupRepresentative;
-(BOOL)_resizesBackgroundImage;
-(NSArray *)_gestureRecognizers;
-(id)_secondaryActionsProvider;
-(void)_setViewOwner:(id)arg1 ;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_setSystemItem:(long long)arg1 ;
-(BOOL)_menuIsPrimary;
-(id)_possibleSystemItems;
-(double)_toolbarCharge;
-(void)_setMiniImage:(id)arg1 ;
-(UIToolbarButton *)_toolbarButton;
-(UIView *)_referenceView;
-(UIBarButtonItem *)_itemVariation;
-(UILayoutGuide *)_popoverLayoutGuide;
-(UIBarButtonItemGroup *)_owningButtonGroup;
-(void)setLandscapeImagePhone:(id)arg1 ;
-(void)_sendAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setLargeContentSizeImage:(id)arg1 ;
-(id)_itemForPresenting;
-(UIView *)_viewForPresenting;
-(UINavigationItem *)_owningNavigationItem;
-(BOOL)isCustomViewItem;
-(id)landscapeImagePhone;
-(void)_setEnclosingBar:(id)arg1 onItem:(id)arg2 ;
-(NSString *)_largeContentSizeTitle;
-(void)setStyle:(long long)arg1 ;
-(id)createViewForToolbar:(id)arg1 ;
-(id)initWithPrimaryAction:(id)arg1 ;
-(id)initWithTitle:(id)arg1 menu:(id)arg2 ;
-(id)initWithImage:(id)arg1 menu:(id)arg2 ;
-(CGRect)_rectForPresenting;
-(void)_setPossibleItemVariations:(id)arg1 ;
-(NSSet *)_possibleItemVariations;
-(void)setPrimaryAction:(UIAction *)arg1 ;
-(void)_setItemVariation:(id)arg1 ;
-(BOOL)_imageHasEffects;
-(void)_setWantsThreeUp:(BOOL)arg1 ;
-(void)_setInteractions:(id)arg1 ;
-(void)_setPossibleSystemItems:(id)arg1 ;
-(void)_setToolbarChange:(double)arg1 ;
-(UIEdgeInsets)_miniImageInsets;
-(UIMenu *)secondaryActions;
-(void)_setMiniImageInsets:(UIEdgeInsets)arg1 ;
-(void)setIsMinibarView:(BOOL)arg1 ;
-(void)_setImageHasEffects:(BOOL)arg1 ;
-(void)dealloc;
-(id)createViewForNavigationItem:(id)arg1 ;
-(void)_setGestureRecognizers:(id)arg1 ;
-(void)_connectInterfaceBuilderEventConnection:(id)arg1 ;
-(void)_setShowsChevron:(BOOL)arg1 ;
-(void)_setMinimumWidth:(double)arg1 ;
-(void)_triggerActionForEvent:(id)arg1 ;
-(SEL)action;
-(void)_executeValidationHandler;
-(void)_setMaximumWidth:(double)arg1 ;
-(void)_setPopoverLayoutGuide:(id)arg1 ;
-(void)setSecondaryActions:(UIMenu *)arg1 ;
-(BOOL)secondaryActionsArePrimary;
-(BOOL)_actsAsFakeBackButton;
-(void)_setActsAsFakeBackButton:(BOOL)arg1 ;
@end

