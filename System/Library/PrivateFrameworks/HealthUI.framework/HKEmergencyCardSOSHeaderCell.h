/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell {

	UILabel* _headerLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
-(void)tintColorDidChange;
-(void)setupSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(void)_updateTextColor;
@end
