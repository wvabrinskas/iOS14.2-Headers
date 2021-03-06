/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, NSArray;

@interface PKImageSequenceView : UIView {

	BOOL _isAnimating;
	unsigned long long _animationContext;
	unsigned long long _activeImageIndex;
	UIImageView* _imageView;
	UIImageView* _fadeInImageView;
	NSArray* _images;

}
-(void)stopAnimation;
-(void)startAnimation;
-(void)_transitionToImage:(id)arg1 ;
-(void)_finishedTransitionToImage:(id)arg1 ;
-(id)initWitImages:(id)arg1 ;
-(void)updateImages:(id)arg1 ;
-(void)layoutSubviews;
@end

