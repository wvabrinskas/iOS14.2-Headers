/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUImportOneUpCell.h>
#import <libobjc.A.dylib/PUImportOneUpCellDisplayDelegate.h>

@class UIImage, PXImportMediaProvider, PUImportOneUpCellBadgeView, NSArray;

@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate> {

	UIImage* _startingImage;
	PXImportMediaProvider* _mediaProvider;
	PUImportOneUpCellBadgeView* _badgeView;
	NSArray* _badgeViewOffsetConstraints;
	double _initialPhotoViewAlpha;
	double _targetPhotoViewAlpha;
	CGRect _initialFrame;
	CGRect _targetFrame;

}

@property (nonatomic,retain) UIImage * startingImage;                               //@synthesize startingImage=_startingImage - In the implementation block
@property (nonatomic,retain) PXImportMediaProvider * mediaProvider;                 //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) PUImportOneUpCellBadgeView * badgeView;              //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) NSArray * badgeViewOffsetConstraints;                //@synthesize badgeViewOffsetConstraints=_badgeViewOffsetConstraints - In the implementation block
@property (assign,nonatomic) CGRect initialFrame;                                   //@synthesize initialFrame=_initialFrame - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                    //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) double initialPhotoViewAlpha;                          //@synthesize initialPhotoViewAlpha=_initialPhotoViewAlpha - In the implementation block
@property (assign,nonatomic) double targetPhotoViewAlpha;                           //@synthesize targetPhotoViewAlpha=_targetPhotoViewAlpha - In the implementation block
+(double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3 ;
-(void)setMediaProvider:(PXImportMediaProvider *)arg1 ;
-(PXImportMediaProvider *)mediaProvider;
-(void*)contextForObservingViewModelChanges;
-(void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2 ;
-(void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2 ;
-(long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3 ;
-(PUImportOneUpCellBadgeView *)badgeView;
-(UIImage *)startingImage;
-(void)updateBadgeView;
-(void)updateAlphaIfNeeded;
-(void)setInitialFrame:(CGRect)arg1 targetFrame:(CGRect)arg2 ;
-(void)setStartingImage:(UIImage *)arg1 ;
-(void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2 ;
-(NSArray *)badgeViewOffsetConstraints;
-(double)initialPhotoViewAlpha;
-(void)setInitialPhotoViewAlpha:(double)arg1 ;
-(double)targetPhotoViewAlpha;
-(void)setTargetPhotoViewAlpha:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTargetFrame:(CGRect)arg1 ;
-(double)currentProgress;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(CGRect)targetFrame;
-(void)updateConstraints;
@end
