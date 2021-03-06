/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface GameCenterUI.EmptyStateView : UIView {

	 imageView;
	 primaryLabel;
	 secondaryLabel;
	 button;
	 disabled;
	 imageType;
	 addFriendsHandler;

}

@property (copy,nonatomic) id addFriendsHandler; 
+(id)addAdditionalFriendsEmptyStateView;
+(id)addFriendsEmptyStateView;
-(void)didTapButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(JUMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(void)layoutSubviews;
-(void)setAddFriendsHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)addFriendsHandler;
@end

