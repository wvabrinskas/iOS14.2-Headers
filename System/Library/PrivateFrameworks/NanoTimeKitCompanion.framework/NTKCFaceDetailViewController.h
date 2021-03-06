/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/NTKFaceObserver.h>
#import <libobjc.A.dylib/NTKFaceCollectionObserver.h>
#import <libobjc.A.dylib/NTKCFaceDetailDescriptionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailEditOptionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailPhotosSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailComplicationSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailOtherSectionDelegate.h>
#import <libobjc.A.dylib/NTKCFaceDetailActionSectionDelegate.h>
#import <libobjc.A.dylib/NTKCTableViewProviding.h>
#import <libobjc.A.dylib/NTKCFaceDetailComplicationPickerViewControllerDelegate.h>

@protocol NTKCFaceDetailViewControllerDelegate;
@class UITableView, NTKFace, NTKFaceCollection, NTKCompanionFaceViewController, NSArray, _NTKCDetailHeaderView, UILabel, _NTKCDetailActionButton, UIActivityIndicatorView, UIView, NSMutableArray, NTKCFaceDetailDescriptionSectionController, NTKCFaceDetailPhotosSectionController, NTKCFaceDetailKaleidoscopeContentSectionController, NTKCFaceDetailKaleidoscopeStyleSectionController, NTKCFaceDetailOtherSectionController, UITableViewCell, UIBarButtonItem, NTKGreenfieldCompanionShareController, UIViewController, NTKCFaceContainerView, NSString;

@interface NTKCFaceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCFaceDetailDescriptionSectionDelegate, NTKCFaceDetailEditOptionSectionDelegate, NTKCFaceDetailPhotosSectionDelegate, NTKCFaceDetailComplicationSectionDelegate, NTKCFaceDetailOtherSectionDelegate, NTKCFaceDetailActionSectionDelegate, NTKCTableViewProviding, NTKCFaceDetailComplicationPickerViewControllerDelegate> {

	BOOL _shared;
	BOOL _inGallery;
	BOOL _faceHasBeenEdited;
	NTKFace* _face;
	id<NTKCFaceDetailViewControllerDelegate> _delegate;
	NTKFaceCollection* _library;
	NTKCompanionFaceViewController* _faceVC;
	NSArray* _externalAssets;
	double _intrinsicHeaderHeight;
	_NTKCDetailHeaderView* _headerView;
	UILabel* _faceName;
	_NTKCDetailActionButton* _addButton;
	UIActivityIndicatorView* _addSpinner;
	UIView* _headerSeparator;
	UITableView* _tableView;
	NSMutableArray* _currentSections;
	NTKCFaceDetailDescriptionSectionController* _descriptionSection;
	NSMutableArray* _editOptionSections;
	NSMutableArray* _dynamicEditOptionSections;
	NTKCFaceDetailPhotosSectionController* _photosSection;
	NTKCFaceDetailKaleidoscopeContentSectionController* _kaleidoscopeContentSection;
	NTKCFaceDetailKaleidoscopeStyleSectionController* _kaleidoscopeStyleSection;
	NTKCFaceDetailOtherSectionController* _otherSection;
	/*^block*/id _selectionFinishedHandler;
	UITableViewCell* _editOptionToMakeFullyVisible;
	UIBarButtonItem* _shareNavButton;
	NTKGreenfieldCompanionShareController* _shareController;
	UIViewController* _modalViewControllerPresentedByThisViewController;
	NTKCFaceContainerView* _faceContainer;
	CGSize _headerFaceSize;

}

@property (nonatomic,retain) NTKFaceCollection * library;                                                                  //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                               //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKCompanionFaceViewController * faceVC;                                                      //@synthesize faceVC=_faceVC - In the implementation block
@property (assign,nonatomic) CGSize headerFaceSize;                                                                        //@synthesize headerFaceSize=_headerFaceSize - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                               //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,copy) NSArray * externalAssets;                                                                       //@synthesize externalAssets=_externalAssets - In the implementation block
@property (assign,nonatomic) double intrinsicHeaderHeight;                                                                 //@synthesize intrinsicHeaderHeight=_intrinsicHeaderHeight - In the implementation block
@property (nonatomic,retain) _NTKCDetailHeaderView * headerView;                                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UILabel * faceName;                                                                           //@synthesize faceName=_faceName - In the implementation block
@property (nonatomic,retain) _NTKCDetailActionButton * addButton;                                                          //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * addSpinner;                                                         //@synthesize addSpinner=_addSpinner - In the implementation block
@property (nonatomic,retain) UIView * headerSeparator;                                                                     //@synthesize headerSeparator=_headerSeparator - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSections;                                                             //@synthesize currentSections=_currentSections - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailDescriptionSectionController * descriptionSection;                              //@synthesize descriptionSection=_descriptionSection - In the implementation block
@property (nonatomic,retain) NSMutableArray * editOptionSections;                                                          //@synthesize editOptionSections=_editOptionSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * dynamicEditOptionSections;                                                   //@synthesize dynamicEditOptionSections=_dynamicEditOptionSections - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailPhotosSectionController * photosSection;                                        //@synthesize photosSection=_photosSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailKaleidoscopeContentSectionController * kaleidoscopeContentSection;              //@synthesize kaleidoscopeContentSection=_kaleidoscopeContentSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailKaleidoscopeStyleSectionController * kaleidoscopeStyleSection;                  //@synthesize kaleidoscopeStyleSection=_kaleidoscopeStyleSection - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailOtherSectionController * otherSection;                                          //@synthesize otherSection=_otherSection - In the implementation block
@property (nonatomic,copy) id selectionFinishedHandler;                                                                    //@synthesize selectionFinishedHandler=_selectionFinishedHandler - In the implementation block
@property (nonatomic,retain) UITableViewCell * editOptionToMakeFullyVisible;                                               //@synthesize editOptionToMakeFullyVisible=_editOptionToMakeFullyVisible - In the implementation block
@property (nonatomic,readonly) BOOL faceHasBeenEdited;                                                                     //@synthesize faceHasBeenEdited=_faceHasBeenEdited - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareNavButton;                                                             //@synthesize shareNavButton=_shareNavButton - In the implementation block
@property (nonatomic,retain) NTKGreenfieldCompanionShareController * shareController;                                      //@synthesize shareController=_shareController - In the implementation block
@property (nonatomic,retain) UIViewController * modalViewControllerPresentedByThisViewController;                          //@synthesize modalViewControllerPresentedByThisViewController=_modalViewControllerPresentedByThisViewController - In the implementation block
@property (nonatomic,retain) NTKCFaceContainerView * faceContainer;                                                        //@synthesize faceContainer=_faceContainer - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shared;                                                                                  //@synthesize shared=_shared - In the implementation block
@property (nonatomic,readonly) NSString * reasonFaceCanNotBeAddedToLibrary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITableView * ntk_tableView; 
-(NTKFace *)face;
-(BOOL)shared;
-(_NTKCDetailHeaderView *)headerView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setHeaderView:(_NTKCDetailHeaderView *)arg1 ;
-(void)_updateAddButton;
-(_NTKCDetailActionButton *)addButton;
-(id<NTKCFaceDetailViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(NTKFaceCollection *)library;
-(id)initWithFace:(id)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setShared:(BOOL)arg1 ;
-(void)setLibrary:(NTKFaceCollection *)arg1 ;
-(NTKCompanionFaceViewController *)faceVC;
-(void)setAddButton:(_NTKCDetailActionButton *)arg1 ;
-(void)setDelegate:(id<NTKCFaceDetailViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_addTapped;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)_isEditable;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)dealloc;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setInGallery:(BOOL)arg1 ;
-(BOOL)inGallery;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)faceResourceDirectoryDidChange:(id)arg1 ;
-(void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2 ;
-(void)actionSectionDidSelect:(id)arg1 ;
-(void)actionSectionDidDelete:(id)arg1 ;
-(id)initWithFace:(id)arg1 inGallery:(BOOL)arg2 externalAssets:(id)arg3 ;
-(void)setFaceVC:(NTKCompanionFaceViewController *)arg1 ;
-(void)setExternalAssets:(NSArray *)arg1 ;
-(void)_loadLibrary;
-(void)setHeaderFaceSize:(CGSize)arg1 ;
-(void)setFaceContainer:(NTKCFaceContainerView *)arg1 ;
-(void)setFaceName:(UILabel *)arg1 ;
-(void)setAddSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setHeaderSeparator:(UIView *)arg1 ;
-(void)setCurrentSections:(NSMutableArray *)arg1 ;
-(void)setDescriptionSection:(NTKCFaceDetailDescriptionSectionController *)arg1 ;
-(void)setEditOptionSections:(NSMutableArray *)arg1 ;
-(id)_sectionForEditOptionCollection:(id)arg1 ;
-(void)_ensureOtherSection;
-(void)_updateShareButton;
-(void)_faceDidChange;
-(void)_addOrRemoveDynamicSectionsWithCollection:(id)arg1 ;
-(void)setEditOptionToMakeFullyVisible:(UITableViewCell *)arg1 ;
-(void)setPhotosSection:(NTKCFaceDetailPhotosSectionController *)arg1 ;
-(void)setKaleidoscopeContentSection:(NTKCFaceDetailKaleidoscopeContentSectionController *)arg1 ;
-(void)setKaleidoscopeStyleSection:(NTKCFaceDetailKaleidoscopeStyleSectionController *)arg1 ;
-(void)setOtherSection:(NTKCFaceDetailOtherSectionController *)arg1 ;
-(void)_dismissModalViewControllerPresentedByThisViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalViewControllerPresentedByThisViewController:(UIViewController *)arg1 ;
-(UIViewController *)modalViewControllerPresentedByThisViewController;
-(void)_setFaceHasBeenEdited;
-(NSString *)reasonFaceCanNotBeAddedToLibrary;
-(id)_errorMessageForErrorCode:(long long)arg1 ;
-(BOOL)_hasRemovedSystemApp;
-(void)_addFace;
-(void)_addFaceEndedForFace:(id)arg1 ;
-(BOOL)_cellIsHiddenBehindHeader:(id)arg1 ;
-(void)_faceChangedOptionsForEditMode:(long long)arg1 ;
-(void)_faceDidChangeResourceDirectory;
-(BOOL)_isEditOptionFullyVisible:(id)arg1 ;
-(void)_setEditOption:(id)arg1 forMode:(long long)arg2 slot:(id)arg3 ;
-(id)_pruneRemovedOrRestrictedComplications:(id)arg1 ;
-(id)_pruneComplicationsNotAvailableOnGizmo:(id)arg1 ;
-(void)_setComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)_didTapShareButton;
-(void)setShareNavButton:(UIBarButtonItem *)arg1 ;
-(void)descriptionSection:(id)arg1 didExpand:(BOOL)arg2 ;
-(void)editOptionSection:(id)arg1 didSelectOptionAtIndex:(long long)arg2 ;
-(void)editOptionSection:(id)arg1 didSelectActionForOptionAtIndex:(long long)arg2 ;
-(void)photoSectionDidUpdate:(id)arg1 ;
-(id)complicationSection:(id)arg1 allowedComplicationsForSlot:(id)arg2 ;
-(void)complicationSection:(id)arg1 didChangeToComplication:(id)arg2 forSlot:(id)arg3 ;
-(void)complicationSection:(id)arg1 wantsToPresentPickerForSlot:(id)arg2 selectedComplication:(id)arg3 ;
-(void)otherSection:(id)arg1 didToggleMonogram:(id)arg2 forSlot:(id)arg3 ;
-(void)otherSectionDidSelectMonogramEdit:(id)arg1 ;
-(void)otherSection:(id)arg1 didChangeShowSeconds:(id)arg2 forMode:(long long)arg3 ;
-(UITableView *)ntk_tableView;
-(void)faceDetailComplicationPickerViewController:(id)arg1 didSelectComplication:(id)arg2 ;
-(id)initWithFace:(id)arg1 externalAssets:(id)arg2 ;
-(id)initWithFace:(id)arg1 inGallery:(BOOL)arg2 ;
-(void)attemptToAddFace;
-(CGSize)headerFaceSize;
-(NSArray *)externalAssets;
-(double)intrinsicHeaderHeight;
-(void)setIntrinsicHeaderHeight:(double)arg1 ;
-(UILabel *)faceName;
-(UIActivityIndicatorView *)addSpinner;
-(UIView *)headerSeparator;
-(NSMutableArray *)currentSections;
-(NTKCFaceDetailDescriptionSectionController *)descriptionSection;
-(NSMutableArray *)editOptionSections;
-(NSMutableArray *)dynamicEditOptionSections;
-(void)setDynamicEditOptionSections:(NSMutableArray *)arg1 ;
-(NTKCFaceDetailPhotosSectionController *)photosSection;
-(NTKCFaceDetailKaleidoscopeContentSectionController *)kaleidoscopeContentSection;
-(NTKCFaceDetailKaleidoscopeStyleSectionController *)kaleidoscopeStyleSection;
-(NTKCFaceDetailOtherSectionController *)otherSection;
-(id)selectionFinishedHandler;
-(void)setSelectionFinishedHandler:(id)arg1 ;
-(UITableViewCell *)editOptionToMakeFullyVisible;
-(BOOL)faceHasBeenEdited;
-(UIBarButtonItem *)shareNavButton;
-(NTKGreenfieldCompanionShareController *)shareController;
-(void)setShareController:(NTKGreenfieldCompanionShareController *)arg1 ;
-(NTKCFaceContainerView *)faceContainer;
@end

