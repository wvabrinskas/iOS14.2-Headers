/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUAssetTransitionInfoConfiguration.h>

@protocol PUDisplayAsset;
@class UIView, UIImage, NSArray, PUPhotoViewContentHelper, PXImageLayerModulator, NSString;

@interface PUAssetTransitionInfo : NSObject <PUAssetTransitionInfoConfiguration> {

	BOOL _allowAutoPlay;
	UIView* _snapshotView;
	UIImage* _image;
	double _cornerRadius;
	id<PUDisplayAsset> _asset;
	NSArray* _badgeTransitionInfos;
	PUPhotoViewContentHelper* _contentHelper;
	PXImageLayerModulator* _imageLayerModulator;
	SCD_Struct_PH4 _seekTime;
	CGRect _frame;

}

@property (nonatomic,retain) UIView * snapshotView;                                    //@synthesize snapshotView=_snapshotView - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 seekTime;                                  //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic) CGRect frame;                                             //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL allowAutoPlay;                                       //@synthesize allowAutoPlay=_allowAutoPlay - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) id<PUDisplayAsset> asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSArray * badgeTransitionInfos;                             //@synthesize badgeTransitionInfos=_badgeTransitionInfos - In the implementation block
@property (nonatomic,retain) PUPhotoViewContentHelper * contentHelper;                 //@synthesize contentHelper=_contentHelper - In the implementation block
@property (nonatomic,retain) PXImageLayerModulator * imageLayerModulator;              //@synthesize imageLayerModulator=_imageLayerModulator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetTransitionInfoWithConfigurationBlock:(/*^block*/id)arg1 ;
-(void)setImageLayerModulator:(PXImageLayerModulator *)arg1 ;
-(id<PUDisplayAsset>)asset;
-(PXImageLayerModulator *)imageLayerModulator;
-(UIView *)snapshotView;
-(void)setAsset:(id<PUDisplayAsset>)arg1 ;
-(BOOL)allowAutoPlay;
-(void)setAllowAutoPlay:(BOOL)arg1 ;
-(void)setBadgeTransitionInfos:(NSArray *)arg1 ;
-(void)setContentHelper:(PUPhotoViewContentHelper *)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setSeekTime:(SCD_Struct_PH4)arg1 ;
-(NSArray *)badgeTransitionInfos;
-(CGRect)frame;
-(PUPhotoViewContentHelper *)contentHelper;
-(double)cornerRadius;
-(SCD_Struct_PH4)seekTime;
-(void)setCornerRadius:(double)arg1 ;
@end
