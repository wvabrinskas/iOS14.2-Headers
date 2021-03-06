/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolControllerSpec.h>

@class UIColor, PXLabelSpec;

@interface PUCropToolControllerSpec : PUPhotoEditToolControllerSpec

@property (nonatomic,readonly) double cropRectMargin; 
@property (nonatomic,readonly) double minimumCropInset; 
@property (nonatomic,readonly) CGSize minimumCropSize; 
@property (nonatomic,readonly) CGSize minimumCropHandleViewSize; 
@property (nonatomic,readonly) CGSize cropActionButtonSize; 
@property (nonatomic,readonly) double cropHandleViewLineThickness; 
@property (nonatomic,readonly) double cropHandleViewLineMargin; 
@property (nonatomic,readonly) double standardBottomBarWidth; 
@property (nonatomic,readonly) double standardSideBarHeight; 
@property (nonatomic,readonly) double leftInsetForiPad; 
@property (nonatomic,readonly) double cropTopBarHeight; 
@property (nonatomic,readonly) double cropAspectRatioScrollHeight; 
@property (nonatomic,readonly) double cropAspectFlipperWidth; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioScrollContentInset; 
@property (nonatomic,readonly) UIEdgeInsets cropAspectRatioButtonTitleInset; 
@property (nonatomic,readonly) UIColor * cropAspectButtonColor; 
@property (nonatomic,readonly) UIColor * cropAspectButtonSelectedColor; 
@property (nonatomic,readonly) PXLabelSpec * cropHeaderLabelSpec; 
-(UIEdgeInsets)cropAspectRatioScrollContentInset;
-(UIColor *)cropAspectButtonSelectedColor;
-(UIColor *)cropAspectButtonColor;
-(CGSize)minimumCropSize;
-(double)standardBottomBarHeight;
-(double)cropTopBarHeight;
-(double)minimumCropInset;
-(double)cropAspectFlipperWidth;
-(double)cropAspectRatioScrollHeight;
-(double)standardSideBarWidth;
-(double)cropRectMargin;
-(CGSize)minimumCropHandleViewSize;
-(CGSize)cropActionButtonSize;
-(double)cropHandleViewLineMargin;
-(double)leftInsetForiPad;
-(double)cropHandleViewLineThickness;
-(double)standardBottomBarWidth;
-(double)standardSideBarHeight;
-(PXLabelSpec *)cropHeaderLabelSpec;
-(UIEdgeInsets)cropAspectRatioButtonTitleInset;
@end

