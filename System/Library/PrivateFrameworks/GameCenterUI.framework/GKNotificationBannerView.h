/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, GKDashboardPlayerPhotoView, UIView;

@interface GKNotificationBannerView : UIView {

	BOOL _canTransitionToPlayerAvatar;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	double _duration;
	/*^block*/id _completionHandler;
	/*^block*/id _touchHandler;
	GKDashboardPlayerPhotoView* _playerAvatarView;
	UILabel* _messageLabel2;
	UILabel* _actionLabel;
	UIView* _centeringView;
	double _preferredBannerWidth;

}

@property (nonatomic,retain) GKDashboardPlayerPhotoView * playerAvatarView;              //@synthesize playerAvatarView=_playerAvatarView - In the implementation block
@property (assign,nonatomic) BOOL canTransitionToPlayerAvatar;                           //@synthesize canTransitionToPlayerAvatar=_canTransitionToPlayerAvatar - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                     //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel2;                                    //@synthesize messageLabel2=_messageLabel2 - In the implementation block
@property (nonatomic,retain) UILabel * actionLabel;                                      //@synthesize actionLabel=_actionLabel - In the implementation block
@property (nonatomic,retain) UIView * centeringView;                                     //@synthesize centeringView=_centeringView - In the implementation block
@property (nonatomic,readonly) double preferredBannerWidth;                              //@synthesize preferredBannerWidth=_preferredBannerWidth - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id touchHandler;                                              //@synthesize touchHandler=_touchHandler - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(UILabel *)messageLabel;
-(void)hideBanner;
-(id)completionHandler;
-(GKDashboardPlayerPhotoView *)playerAvatarView;
-(void)setPlayerAvatarView:(GKDashboardPlayerPhotoView *)arg1 ;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setCompletionHandler:(id)arg1 ;
-(void)createBackdropView;
-(void)createTitleLabel:(id)arg1 withTextStyle:(id)arg2 ;
-(void)createMessageLabel:(id)arg1 withTextStyle:(id)arg2 ;
-(id)initWithTitle:(id)arg1 player:(id)arg2 imageView:(id)arg3 message:(id)arg4 ;
-(BOOL)canTransitionToPlayerAvatar;
-(void)transitionToPlayerAvatar;
-(void)setCanTransitionToPlayerAvatar:(BOOL)arg1 ;
-(void)startLoadingPlayerAvatar;
-(void)setTouchHandler:(id)arg1 ;
-(id)touchHandler;
-(id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3 ;
-(void)showPlayerAvatarAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithTouchHandler:(/*^block*/id)arg1 ;
-(void)_wasTouched:(id)arg1 ;
-(void)callCompletionHandler;
-(void)fadeInWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fadeOutQuickly:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIView *)centeringView;
-(void)setCenteringView:(UIView *)arg1 ;
-(double)preferredBannerWidth;
-(double)duration;
-(UILabel *)actionLabel;
-(void)setActionLabel:(UILabel *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)messageLabel2;
-(void)setMessageLabel2:(UILabel *)arg1 ;
-(void)dealloc;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
@end
