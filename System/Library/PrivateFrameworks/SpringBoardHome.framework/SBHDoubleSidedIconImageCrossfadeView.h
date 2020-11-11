/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SBIconImageCrossfadeView.h>

@interface SBHDoubleSidedIconImageCrossfadeView : SBIconImageCrossfadeView {

	double _scaleX;
	double _scaleY;
	double _cornerRadius;

}
+(Class)layerClass;
+(Class)_containerViewClass;
-(void)prepareGeometry;
-(void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2 ;
-(void)_applyCornerRadius:(double)arg1 ;
-(void)cleanup;
-(void)layoutSubviews;
-(void)_setCornerRadiusEnabled:(BOOL)arg1 ;
-(BOOL)reparentsSourceView;
-(void)_applyCornerRadiusToViews;
-(void)_applyCornerRadiusToIconImageView;
-(void)_applyCornerRadiusToCrossfadeView;
@end
