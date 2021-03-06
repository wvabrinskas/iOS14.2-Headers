/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol AVTPoseSelectionViewControllerDelegate, AVTTaskScheduler, AVTAvatarRecord, OS_dispatch_queue;
@class AVTUIStickerRenderer, AVTUIStickerGeneratorPool, AVTRecordingButton, AVTCircularButton, UIImage, AVTAnimojiPoseSelectionHeaderViewController, NSLayoutConstraint, UICollectionViewFlowLayout, UICollectionView, NSArray, AVTStickerGenerator, NSObject, UIView, UIBarButtonItem, NSString;

@interface AVTPoseSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	id<AVTPoseSelectionViewControllerDelegate> _delegate;
	unsigned long long _poseTypes;
	AVTUIStickerRenderer* _stickerRenderer;
	AVTUIStickerGeneratorPool* _generatorPool;
	id<AVTTaskScheduler> _scheduler;
	unsigned long long _mode;
	AVTRecordingButton* _captureButton;
	AVTCircularButton* _discardButton;
	UIImage* _placeholderImage;
	id<AVTAvatarRecord> _avatarRecord;
	AVTAnimojiPoseSelectionHeaderViewController* _headerViewController;
	NSLayoutConstraint* _headerHeightConstraint;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _poseCollectionView;
	NSArray* _stickerConfigurations;
	AVTStickerGenerator* _stickerGenerator;
	NSObject*<OS_dispatch_queue> _stickerGenerationQueue;
	UIView* _headerDropShadowView;
	UIView* _cameraCellView;
	UIBarButtonItem* _doneButton;
	UIView* _borderMaskView;

}

@property (assign,nonatomic) unsigned long long poseTypes;                                                    //@synthesize poseTypes=_poseTypes - In the implementation block
@property (nonatomic,retain) AVTUIStickerRenderer * stickerRenderer;                                          //@synthesize stickerRenderer=_stickerRenderer - In the implementation block
@property (nonatomic,retain) AVTUIStickerGeneratorPool * generatorPool;                                       //@synthesize generatorPool=_generatorPool - In the implementation block
@property (nonatomic,retain) id<AVTTaskScheduler> scheduler;                                                  //@synthesize scheduler=_scheduler - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) AVTRecordingButton * captureButton;                                              //@synthesize captureButton=_captureButton - In the implementation block
@property (nonatomic,retain) AVTCircularButton * discardButton;                                               //@synthesize discardButton=_discardButton - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                                                //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) AVTAnimojiPoseSelectionHeaderViewController * headerViewController;              //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * headerHeightConstraint;                                     //@synthesize headerHeightConstraint=_headerHeightConstraint - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                         //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * poseCollectionView;                                           //@synthesize poseCollectionView=_poseCollectionView - In the implementation block
@property (nonatomic,retain) NSArray * stickerConfigurations;                                                 //@synthesize stickerConfigurations=_stickerConfigurations - In the implementation block
@property (nonatomic,retain) AVTStickerGenerator * stickerGenerator;                                          //@synthesize stickerGenerator=_stickerGenerator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stickerGenerationQueue;                             //@synthesize stickerGenerationQueue=_stickerGenerationQueue - In the implementation block
@property (nonatomic,retain) UIView * headerDropShadowView;                                                   //@synthesize headerDropShadowView=_headerDropShadowView - In the implementation block
@property (nonatomic,retain) UIView * cameraCellView;                                                         //@synthesize cameraCellView=_cameraCellView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIView * borderMaskView;                                                         //@synthesize borderMaskView=_borderMaskView - In the implementation block
@property (assign,nonatomic,__weak) id<AVTPoseSelectionViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)borderMaskRectForContentRect:(CGRect)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)updateFlowLayoutItemSize;
-(id<AVTAvatarRecord>)avatarRecord;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id<AVTPoseSelectionViewControllerDelegate>)delegate;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)didTapCaptureButton:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(AVTUIStickerRenderer *)stickerRenderer;
-(unsigned long long)poseTypes;
-(id)initWithSelectedRecord:(id)arg1 poseTypes:(unsigned long long)arg2 ;
-(void)setCameraCellView:(UIView *)arg1 ;
-(void)didTapCancel:(id)arg1 ;
-(id)keyCommands;
-(void)didTapDone:(id)arg1 ;
-(void)updateHeaderHeightConstraint;
-(UIView *)cameraCellView;
-(void)updateForPoseSelectionAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(AVTAnimojiPoseSelectionHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(AVTAnimojiPoseSelectionHeaderViewController *)arg1 ;
-(void)returnPressed:(id)arg1 ;
-(UICollectionView *)poseCollectionView;
-(AVTCircularButton *)discardButton;
-(AVTRecordingButton *)captureButton;
-(void)createCaptureButtonIfNeeded;
-(void)createDiscardButtonIfNeeded;
-(void)setCaptureButton:(AVTRecordingButton *)arg1 ;
-(void)setDiscardButton:(AVTCircularButton *)arg1 ;
-(void)didTapDiscardButton:(id)arg1 ;
-(void)setScheduler:(id<AVTTaskScheduler>)arg1 ;
-(NSArray *)stickerConfigurations;
-(id)configurationForIndex:(long long)arg1 ;
-(void)setPoseTypes:(unsigned long long)arg1 ;
-(void)setStickerRenderer:(AVTUIStickerRenderer *)arg1 ;
-(AVTUIStickerGeneratorPool *)generatorPool;
-(void)setGeneratorPool:(AVTUIStickerGeneratorPool *)arg1 ;
-(void)setPoseCollectionView:(UICollectionView *)arg1 ;
-(void)setStickerConfigurations:(NSArray *)arg1 ;
-(AVTStickerGenerator *)stickerGenerator;
-(void)setStickerGenerator:(AVTStickerGenerator *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stickerGenerationQueue;
-(void)setStickerGenerationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<AVTTaskScheduler>)scheduler;
-(UIView *)borderMaskView;
-(void)setBorderMaskView:(UIView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)mode;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<AVTPoseSelectionViewControllerDelegate>)arg1 ;
-(UIImage *)placeholderImage;
-(void)viewDidLoad;
-(id)initWithSelectedRecord:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSLayoutConstraint *)headerHeightConstraint;
-(void)setHeaderHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)headerDropShadowView;
-(void)setHeaderDropShadowView:(UIView *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

