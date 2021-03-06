/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@protocol MKArtworkImageSource;
@class UIImageView, UIColor;

@interface MKArtworkImageView : UIImageView {

	UIImageView* _cachedBadgeView;
	id<MKArtworkImageSource> _imageSource;
	UIColor* _primaryTintColor;
	UIColor* _secondaryTintColor;

}

@property (nonatomic,readonly) UIImageView * badgeView; 
@property (nonatomic,retain) id<MKArtworkImageSource> imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) UIColor * primaryTintColor;                        //@synthesize primaryTintColor=_primaryTintColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTintColor;                      //@synthesize secondaryTintColor=_secondaryTintColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)badgeView;
-(UIColor *)primaryTintColor;
-(void)setPrimaryTintColor:(UIColor *)arg1 ;
-(UIColor *)secondaryTintColor;
-(void)setSecondaryTintColor:(UIColor *)arg1 ;
-(void)setImageSource:(id<MKArtworkImageSource>)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateImageView;
-(id<MKArtworkImageSource>)imageSource;
@end

