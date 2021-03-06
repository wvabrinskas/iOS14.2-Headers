/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PXImportItemViewModel, PXImportMediaProvider, PUImportOneUpTransitionView;

@interface PUImportOneUpPreviewingViewController : UIViewController {

	PXImportItemViewModel* _importItemViewModel;
	PXImportMediaProvider* _mediaProvider;
	PUImportOneUpTransitionView* _previewView;

}

@property (nonatomic,retain) PXImportItemViewModel * importItemViewModel;              //@synthesize importItemViewModel=_importItemViewModel - In the implementation block
@property (nonatomic,retain) PXImportMediaProvider * mediaProvider;                    //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PUImportOneUpTransitionView * previewView;                //@synthesize previewView=_previewView - In the implementation block
-(void)setMediaProvider:(PXImportMediaProvider *)arg1 ;
-(void)setPreviewView:(PUImportOneUpTransitionView *)arg1 ;
-(PXImportMediaProvider *)mediaProvider;
-(void)updatePreferredContentSize;
-(id)initWithImportItemViewModel:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3 ;
-(CGSize)sizeForImportItemViewModel:(id)arg1 ;
-(PXImportItemViewModel *)importItemViewModel;
-(void)setImportItemViewModel:(PXImportItemViewModel *)arg1 ;
-(PUImportOneUpTransitionView *)previewView;
-(void)viewDidLoad;
@end

