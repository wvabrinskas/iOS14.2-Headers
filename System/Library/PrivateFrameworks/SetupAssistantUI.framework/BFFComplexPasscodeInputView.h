/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface BFFComplexPasscodeInputView : BFFPasscodeInputView <UITextFieldDelegate> {

	UITextField* _passcodeField;

}

@property (nonatomic,retain) UITextField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layout;
-(void)setPasscode:(id)arg1 ;
-(id)passcode;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UITextField *)passcodeField;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPasscodeField:(UITextField *)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numericOnly:(BOOL)arg2 ;
-(id)passcodeDisplayView;
@end
