/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUI/PhotosUI-Structs.h>
@class UIImage, PXImportItemViewModel, UIView;

@interface PUImportOneUpTransitionItem : NSObject {

	UIImage* _snapshotImage;
	PXImportItemViewModel* _importItem;
	double _initialContentAlpha;
	UIView* _transitionView;
	double _targetContentAlpha;
	CGRect _initialFrame;
	PXSimpleIndexPath _indexPath;
	CGRect _targetFrame;

}

@property (assign,nonatomic) CGRect initialFrame;                               //@synthesize initialFrame=_initialFrame - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                           //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,readonly) PXImportItemViewModel * importItem;              //@synthesize importItem=_importItem - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) double initialContentAlpha;                        //@synthesize initialContentAlpha=_initialContentAlpha - In the implementation block
@property (nonatomic,retain) UIView * transitionView;                           //@synthesize transitionView=_transitionView - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                                //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) double targetContentAlpha;                         //@synthesize targetContentAlpha=_targetContentAlpha - In the implementation block
-(UIImage *)snapshotImage;
-(id)initWithInitialFrame:(CGRect)arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(double)initialContentAlpha;
-(void)setInitialContentAlpha:(double)arg1 ;
-(double)targetContentAlpha;
-(void)setTargetContentAlpha:(double)arg1 ;
-(PXSimpleIndexPath)indexPath;
-(void)setTargetFrame:(CGRect)arg1 ;
-(void)setTransitionView:(UIView *)arg1 ;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(UIView *)transitionView;
-(CGRect)targetFrame;
-(PXImportItemViewModel *)importItem;
@end

