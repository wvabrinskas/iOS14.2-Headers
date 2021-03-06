/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface PKSelectActionHeader : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
@end

