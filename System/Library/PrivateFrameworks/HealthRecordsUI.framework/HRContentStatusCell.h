/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface HRContentStatusCell : UITableViewCell {

	 spinner;
	 titleLabel;

}

@property (readonly,nonatomic) UIActivityIndicatorView * spinner; 
@property (readonly,nonatomic) UILabel * titleLabel; 
-(UILabel *)titleLabel;
-(id)init;
-(UIActivityIndicatorView *)spinner;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end
