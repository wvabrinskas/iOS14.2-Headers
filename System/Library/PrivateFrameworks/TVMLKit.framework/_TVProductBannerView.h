/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSString;

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	double _height;
	UIView* _backgroundImageView;
	UIView* _infoListView;
	UIView* _stackView;
	UIView* _heroImageView;

}

@property (nonatomic,retain) UIView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIView * infoListView;                     //@synthesize infoListView=_infoListView - In the implementation block
@property (nonatomic,retain) UIView * stackView;                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * heroImageView;                    //@synthesize heroImageView=_heroImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(UIView *)backgroundImageView;
-(id)preferredFocusEnvironments;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStackView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setBackgroundImageView:(UIView *)arg1 ;
-(UIView *)stackView;
-(UIView *)heroImageView;
-(void)setHeroImageView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIView *)infoListView;
-(void)setInfoListView:(UIView *)arg1 ;
@end

