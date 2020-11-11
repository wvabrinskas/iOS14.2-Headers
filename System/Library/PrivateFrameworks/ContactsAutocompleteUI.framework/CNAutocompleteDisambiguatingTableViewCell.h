/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsAutocompleteUI/CNComposeTableViewCell.h>

@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell {

	BOOL _checkmarkVisible;
	UIImageView* _checkmarkImageView;

}

@property (retain) UIImageView * checkmarkImageView;                                       //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (assign,getter=isCheckmarkVisible,nonatomic) BOOL checkmarkVisible;              //@synthesize checkmarkVisible=_checkmarkVisible - In the implementation block
@property (readonly) UIView * checkmarkView; 
+(id)identifier;
+(id)createCheckmarkView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)titleTextStyle;
-(void)setRecipient:(id)arg1 ;
-(UIView *)checkmarkView;
-(BOOL)canCollapseRecipient;
-(void)setCheckmarkVisible:(BOOL)arg1 ;
-(UIImageView *)checkmarkImageView;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(BOOL)isCheckmarkVisible;
@end
