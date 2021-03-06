/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;


@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@optional
-(BOOL)transitionInProgress;
-(void)setTwoFingerTapTimestamp:(double)arg1;
-(void)willBeginGesture;
-(BOOL)shouldAllowTwoFingerSelectionGestureOnView:(id)arg1;
-(BOOL)hasMarkedText;
-(void)didEndGesture;
-(double)timestampOfLastTouchesEnded;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3;

@required
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(UIKeyboardTaskQueue *)taskQueue;

@end

