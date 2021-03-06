/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SBUIPasscodeLockViewLongNumericKeypad.h>

@class SBUIButton;

@interface SBUIPasscodeLockViewInstallTonightLongNumericKeypad : SBUIPasscodeLockViewLongNumericKeypad {

	SBUIButton* _actionButton;

}
-(id)initWithLightStyle:(BOOL)arg1 ;
-(void)_layoutStatusView;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)_actionButtonHit;
-(void)_layoutActionButton;
-(void)_setShowsEmergencyCallButton:(BOOL)arg1 fromCancelButton:(BOOL)arg2 ;
-(void)_setShowsCancelButton:(BOOL)arg1 fromEmergencyCallButton:(BOOL)arg2 ;
-(void)_configureActionButton;
-(void)_sizeLabel:(id)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
@end

