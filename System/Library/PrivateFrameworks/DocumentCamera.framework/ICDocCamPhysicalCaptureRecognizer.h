/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSArray;

@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer {

	BOOL _suspended;
	long long _activeButton;
	NSArray* _desiredButtons;
	long long _physicalButtonType;

}

@property (assign,nonatomic) long long physicalButtonType;                   //@synthesize physicalButtonType=_physicalButtonType - In the implementation block
@property (assign,nonatomic) long long activeButton;                         //@synthesize activeButton=_activeButton - In the implementation block
@property (nonatomic,copy) NSArray * desiredButtons;                         //@synthesize desiredButtons=_desiredButtons - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)setDesiredButtons:(NSArray *)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSArray *)desiredButtons;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isSuspended;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_updateApplicationButtonStatus;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(long long)activeButton;
-(long long)_captureButtonForPhysicalButtonType:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setActiveButton:(long long)arg1 ;
-(long long)physicalButtonType;
@end
