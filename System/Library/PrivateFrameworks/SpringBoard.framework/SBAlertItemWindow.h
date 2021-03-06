/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {

	SBAlertLayoutPresentationVerifier* _alertLayoutPresentationVerifier;

}

@property (assign,nonatomic,__weak) SBAlertLayoutPresentationVerifier * alertLayoutPresentationVerifier;              //@synthesize alertLayoutPresentationVerifier=_alertLayoutPresentationVerifier - In the implementation block
-(BOOL)_canBecomeKeyWindow;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(SBAlertLayoutPresentationVerifier *)alertLayoutPresentationVerifier;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithDebugName:(id)arg1 alertLayoutPresentationVerifier:(id)arg2 ;
-(void)setAlertLayoutPresentationVerifier:(SBAlertLayoutPresentationVerifier *)arg1 ;
@end

