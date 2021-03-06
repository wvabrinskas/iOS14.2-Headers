/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UIImage, NSArray, PUPhotoViewContentHelper, PXImageLayerModulator;


@protocol PUAssetTransitionInfoConfiguration <NSObject>
@property (nonatomic,retain) UIView * snapshotView; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) SCD_Struct_PH4 seekTime; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) BOOL allowAutoPlay; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) id<PUDisplayAsset> asset; 
@property (nonatomic,copy) NSArray * badgeTransitionInfos; 
@property (nonatomic,retain) PUPhotoViewContentHelper * contentHelper; 
@property (nonatomic,retain) PXImageLayerModulator * imageLayerModulator; 
@required
-(void)setImageLayerModulator:(id)arg1;
-(id<PUDisplayAsset>)asset;
-(PXImageLayerModulator *)imageLayerModulator;
-(UIView *)snapshotView;
-(void)setAsset:(id)arg1;
-(BOOL)allowAutoPlay;
-(void)setAllowAutoPlay:(BOOL)arg1;
-(void)setBadgeTransitionInfos:(id)arg1;
-(void)setContentHelper:(id)arg1;
-(void)setFrame:(CGRect)arg1;
-(void)setSnapshotView:(id)arg1;
-(void)setImage:(id)arg1;
-(UIImage *)image;
-(void)setSeekTime:(SCD_Struct_PH4)arg1;
-(NSArray *)badgeTransitionInfos;
-(CGRect)frame;
-(PUPhotoViewContentHelper *)contentHelper;
-(double)cornerRadius;
-(SCD_Struct_PH4)seekTime;
-(void)setCornerRadius:(double)arg1;

@end

