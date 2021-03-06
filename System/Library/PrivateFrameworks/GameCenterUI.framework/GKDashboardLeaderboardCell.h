/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, GKLeaderboardSet, GKLeaderboard, UIImageView, UILabel, UIView, UIColor;

@interface GKDashboardLeaderboardCell : UICollectionViewCell {

	NSString* _bundleIdentifier;
	NSString* _imageName;
	GKLeaderboardSet* _leaderboardSet;
	GKLeaderboard* _leaderboard;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	UIView* _overlayView;
	UIColor* _titleLabelColor;

}

@property (nonatomic,retain) UIImageView * iconView;                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                           //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIColor * titleLabelColor;                      //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * imageName;                           //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;              //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                    //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,readonly) UIView * popoverSourceView; 
-(UILabel *)titleLabel;
-(UIImageView *)iconView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)updateRank;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(NSString *)bundleIdentifier;
-(UIView *)overlayView;
-(GKLeaderboardSet *)leaderboardSet;
-(void)updateOverlay;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(void)updateImage;
-(UILabel *)countLabel;
-(UIColor *)titleLabelColor;
-(NSString *)imageName;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(UIView *)popoverSourceView;
-(void)awakeFromNib;
-(GKLeaderboard *)leaderboard;
-(void)setHighlighted:(BOOL)arg1 ;
@end

