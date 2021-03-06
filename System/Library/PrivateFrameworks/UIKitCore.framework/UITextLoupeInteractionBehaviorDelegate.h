/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UITextLoupeInteractionBehaviorDelegate <NSObject>
@required
-(CGPoint*)translationInView:(id)arg1 forLoupeGesture:(id)arg2;
-(void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(/*^block*/id)arg3 translation:(/*^block*/id)arg4 velocity:(/*^block*/id)arg5 modifierFlags:(long long)arg6 shouldCancel:(BOOL*)arg7;
-(void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;
-(void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;
-(Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;
-(CGPoint*)startPointForLoupeGesture:(id)arg1;
-(void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;
-(BOOL)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;
-(CGPoint*)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;
-(BOOL)usesTouchAlignment;
-(BOOL)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;

@end

