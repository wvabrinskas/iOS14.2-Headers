/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PINEntryView <UITextFieldDelegate>
@required
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1;
-(void)setStringValue:(id)arg1;
-(void)hideError;
-(void)deleteLastCharacter;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(id)stringValue;
-(void)setBlocked:(BOOL)arg1;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(double)getCurrentTitleFontSize;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)hidePasscodeField:(BOOL)arg1;
-(void)setShowsOptionsButton:(BOOL)arg1;
-(void)setDelegate:(id)arg1;

@end

