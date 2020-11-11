/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;
@interface SBNumberPadWithDelegate : TPNumberPad {

	id<SBNumberPadDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBNumberPadDelegate>)delegate;
-(id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2 ;
-(BOOL)touchAtPoint:(CGPoint)arg1 isCloseToButton:(id)arg2 ;
-(void)buttonDown:(id)arg1 ;
-(void)buttonCancelled:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(void)setDelegate:(id<SBNumberPadDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
