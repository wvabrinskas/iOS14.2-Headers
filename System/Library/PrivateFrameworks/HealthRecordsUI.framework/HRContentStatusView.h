/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString;

@interface HRContentStatusView : UIView {

	 titleLabel;
	 subtitleLabel;
	 spinnerView;
	 title;
	 subtitle;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * subtitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)startAnimating;
-(void)setTitle:(NSString *)arg1 ;
-(void)stopAnimating;
@end
