/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {

	NSLayoutConstraint* _leadingConstraint;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * editableTextField;              //@synthesize textField=_textField - In the implementation block
-(void)layoutMarginsDidChange;
-(void)safeAreaInsetsDidChange;
-(UITextField *)editableTextField;
-(id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(void)updateConstraints;
@end

