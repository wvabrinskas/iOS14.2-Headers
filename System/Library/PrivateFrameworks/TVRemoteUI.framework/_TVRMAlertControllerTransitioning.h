/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, NSString;

@interface _TVRMAlertControllerTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _isPresentation;
	UIView* _contentView;
	UIView* _dimmingView;

}

@property (assign,nonatomic) BOOL isPresentation;                   //@synthesize isPresentation=_isPresentation - In the implementation block
@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(BOOL)isPresentation;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(UIView *)dimmingView;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setIsPresentation:(BOOL)arg1 ;
@end

