/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetSharedViewModelChangeObserver.h>

@class PUAssetSharedViewModel, PUOperationStatus, UIView, UILabel, PLRoundProgressView, UIButton, NSString;

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver> {

	BOOL _needsUpdateStatus;
	BOOL _needsUpdateSizeClass;
	BOOL _needsUpdateStatusViews;
	BOOL _isProgressViewVisible;
	BOOL _willShowProgressAfterDelay;
	PUAssetSharedViewModel* _assetSharedViewModel;
	PUOperationStatus* _status;
	long long _sizeClass;
	UIView* _roundedBackgroundView;
	UILabel* _renderingLabel;
	PLRoundProgressView* _progressView;
	UIButton* _errorButton;
	double _renderLabelTextWidth;
	CGSize _progressIndicatorSize;

}

@property (assign,nonatomic) BOOL needsUpdateStatus;                                     //@synthesize needsUpdateStatus=_needsUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateSizeClass;                                  //@synthesize needsUpdateSizeClass=_needsUpdateSizeClass - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateStatusViews;                                //@synthesize needsUpdateStatusViews=_needsUpdateStatusViews - In the implementation block
@property (nonatomic,copy) PUOperationStatus * status;                                   //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long sizeClass;                                        //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) CGSize progressIndicatorSize;                               //@synthesize progressIndicatorSize=_progressIndicatorSize - In the implementation block
@property (nonatomic,retain) UIView * roundedBackgroundView;                             //@synthesize roundedBackgroundView=_roundedBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * renderingLabel;                                   //@synthesize renderingLabel=_renderingLabel - In the implementation block
@property (nonatomic,retain) PLRoundProgressView * progressView;                         //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) BOOL isProgressViewVisible;                                 //@synthesize isProgressViewVisible=_isProgressViewVisible - In the implementation block
@property (nonatomic,retain) UIButton * errorButton;                                     //@synthesize errorButton=_errorButton - In the implementation block
@property (assign,nonatomic) double renderLabelTextWidth;                                //@synthesize renderLabelTextWidth=_renderLabelTextWidth - In the implementation block
@property (assign,nonatomic) BOOL willShowProgressAfterDelay;                            //@synthesize willShowProgressAfterDelay=_willShowProgressAfterDelay - In the implementation block
@property (nonatomic,retain) PUAssetSharedViewModel * assetSharedViewModel;              //@synthesize assetSharedViewModel=_assetSharedViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1 ;
+(id)_loadErrorIconForSizeClass:(long long)arg1 ;
+(CGSize)renderIndicatorTileSizeForSizeClass:(long long)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)becomeReusable;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)_updateStatusIfNeeded;
-(long long)sizeClass;
-(PUAssetSharedViewModel *)assetSharedViewModel;
-(PUOperationStatus *)status;
-(void)_invalidateStatus;
-(void)setStatus:(PUOperationStatus *)arg1 ;
-(void)setProgressView:(PLRoundProgressView *)arg1 ;
-(void)_updateSubviewOrdering;
-(void)_updateStatusViewsIfNeeded;
-(void)_updateIfNeeded;
-(void)viewDidLoad;
-(void)setProgressIndicatorSize:(CGSize)arg1 ;
-(CGSize)progressIndicatorSize;
-(PLRoundProgressView *)progressView;
-(BOOL)_needsUpdate;
-(void)_handleErrorButtonTap:(id)arg1 ;
-(void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setSizeClass:(long long)arg1 ;
-(UIButton *)errorButton;
-(void)_invalidateStatusViews;
-(CGRect)_expandedBackgroundViewFrame;
-(void)_updateViewFramesForCollapseState:(BOOL)arg1 ;
-(void)setProgressViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)needsUpdateStatus;
-(void)setNeedsUpdateStatus:(BOOL)arg1 ;
-(void)setProgressViewVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)needsUpdateSizeClass;
-(void)setNeedsUpdateSizeClass:(BOOL)arg1 ;
-(BOOL)needsUpdateStatusViews;
-(void)setNeedsUpdateStatusViews:(BOOL)arg1 ;
-(UIView *)roundedBackgroundView;
-(void)setRoundedBackgroundView:(UIView *)arg1 ;
-(UILabel *)renderingLabel;
-(void)setRenderingLabel:(UILabel *)arg1 ;
-(BOOL)isProgressViewVisible;
-(void)setIsProgressViewVisible:(BOOL)arg1 ;
-(void)setErrorButton:(UIButton *)arg1 ;
-(double)renderLabelTextWidth;
-(void)setRenderLabelTextWidth:(double)arg1 ;
-(BOOL)willShowProgressAfterDelay;
-(void)setWillShowProgressAfterDelay:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(void)_invalidateSizeClass;
-(void)setProgressViewVisible:(BOOL)arg1 ;
-(void)_updateSizeClassIfNeeded;
-(void)setAssetSharedViewModel:(PUAssetSharedViewModel *)arg1 ;
@end

