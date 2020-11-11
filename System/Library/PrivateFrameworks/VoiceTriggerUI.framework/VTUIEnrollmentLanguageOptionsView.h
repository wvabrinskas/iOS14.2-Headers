/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentBaseView.h>

@class UIView, NSArray, NSMutableArray;

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentBaseView {

	UIView* _footerView;
	NSArray* _continueButtonsLanguages;
	NSMutableArray* _continueButtons;

}

@property (nonatomic,readonly) NSMutableArray * continueButtons;              //@synthesize continueButtons=_continueButtons - In the implementation block
-(id)footerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)continueButtons;
-(id)languageSelectionOfContinueButton:(id)arg1 ;
-(void)_setupContent;
-(void)setContinueButtonLanguages:(id)arg1 ;
-(BOOL)showPrivacyTextView;
-(void)_addContinueButtonsToFooter;
@end
