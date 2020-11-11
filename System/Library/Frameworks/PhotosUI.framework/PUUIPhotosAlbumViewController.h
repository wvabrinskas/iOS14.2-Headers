/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <libobjc.A.dylib/PUPhotoPickerFileSizeToolbarProviderDelegate.h>
#import <libobjc.A.dylib/PUPhotosGridViewSupplementalToolbarDataSource.h>
#import <libobjc.A.dylib/PUPhotoPickerServicesConsumer.h>
#import <libobjc.A.dylib/PUPhotoPickerSelectionHandler.h>

@protocol PUPhotoPicker;
@class UIBarButtonItem, PUUIImagePickerControllerHelper, PUPhotoPickerFileSizeToolbarProvider, NSArray, PUPhotoPickerResizeTaskDescriptor, NSString, PUSessionInfo;

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController <PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler> {

	UIBarButtonItem* _imagePickerCancelButton;
	UIBarButtonItem* _imagePickerSelectionDoneButton;
	PUUIImagePickerControllerHelper* __imagePickerControllerHelper;
	PUPhotoPickerFileSizeToolbarProvider* _fileSizePickerToolbarProvider;
	BOOL _didDisappear;
	int __albumFilter;
	id<PUPhotoPicker> _photoPicker;
	NSArray* __imagePickerMediaTypes;
	double _lastKnownWidth;
	PUPhotoPickerResizeTaskDescriptor* _resizeTaskDescriptor;
	UIEdgeInsets _lastKnownSafeAreaInsets;

}

@property (readonly) PUUIImagePickerControllerHelper * _imagePickerControllerHelper; 
@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;              //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
@property (assign,setter=_setAlbumFilter:,nonatomic) int _albumFilter;                                      //@synthesize _albumFilter=__albumFilter - In the implementation block
@property (nonatomic,readonly) BOOL referenceValuesDidChange; 
@property (assign,nonatomic) BOOL didDisappear;                                                             //@synthesize didDisappear=_didDisappear - In the implementation block
@property (assign,nonatomic) double lastKnownWidth;                                                         //@synthesize lastKnownWidth=_lastKnownWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets lastKnownSafeAreaInsets;                                          //@synthesize lastKnownSafeAreaInsets=_lastKnownSafeAreaInsets - In the implementation block
@property (nonatomic,retain) PUPhotoPickerResizeTaskDescriptor * resizeTaskDescriptor;                      //@synthesize resizeTaskDescriptor=_resizeTaskDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAnyAssetSelected,nonatomic,readonly) BOOL anyAssetSelected; 
@property (nonatomic,readonly) NSArray * selectedAssets; 
@property (nonatomic,readonly) PUSessionInfo * sessionInfo; 
@property (getter=isAnyAssetDownloading,nonatomic,readonly) BOOL anyAssetDownloading; 
@property (assign,nonatomic,__weak) id<PUPhotoPicker> photoPicker;                                          //@synthesize photoPicker=_photoPicker - In the implementation block
-(void)viewWillLayoutSubviews;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canDragIn;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(BOOL)wantsGlobalFooter;
-(void)setPhotoPicker:(id<PUPhotoPicker>)arg1 ;
-(void)setPhotoPickerMediaTypes:(id)arg1 ;
-(void)setResizeTaskDescriptor:(PUPhotoPickerResizeTaskDescriptor *)arg1 ;
-(PUPhotoPickerResizeTaskDescriptor *)resizeTaskDescriptor;
-(BOOL)canDragOut;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(id)initWithSpec:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)photoPickerFileSizeToolbarProvider:(id)arg1 presentSizePickerViewController:(id)arg2 ;
-(BOOL)isAnyAssetDownloading;
-(void)photoPickerFileSizeToolbarProvider:(id)arg1 didSelectResizeTaskDescriptor:(id)arg2 ;
-(BOOL)shouldShowSectionHeaders;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)performPhotoPickerSelection;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)loadView;
-(id)filterPredicateForAlbum:(id)arg1 ;
-(BOOL)canBeginStackCollapseTransition;
-(PUUIImagePickerControllerHelper *)_imagePickerControllerHelper;
-(void)_handleImagePickerCancel:(id)arg1 ;
-(NSArray *)_imagePickerMediaTypes;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)_scrollToBottomIfNeeded;
-(BOOL)referenceValuesDidChange;
-(void)_handleImagePickerSelectionDone:(id)arg1 ;
-(void)_handleImagePickerMultipleSelectionDone;
-(BOOL)didDisappear;
-(void)_handleImagePickerSingleSelectionDone;
-(void)setDidDisappear:(BOOL)arg1 ;
-(double)lastKnownWidth;
-(void)setLastKnownWidth:(double)arg1 ;
-(UIEdgeInsets)lastKnownSafeAreaInsets;
-(void)setLastKnownSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(int)_albumFilter;
-(void)_setAlbumFilter:(int)arg1 ;
-(double)topMarginForPhotosGlobalFooterView:(id)arg1 ;
-(BOOL)shouldShowMenu;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg1 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(id<PUPhotoPicker>)photoPicker;
@end
