/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SXComponentAnimationController, SXComponentBehaviorController, SXPresentationAttributes;


@protocol SXPresentationDelegate <NSObject>
@property (readonly,nonatomic) id<SXComponentController> componentController; 
@property (readonly,nonatomic) SXComponentAnimationController * animationController; 
@property (readonly,nonatomic) SXComponentBehaviorController * behaviorController; 
@property (readonly,nonatomic) SXPresentationAttributes * presentationAttributes; 
@required
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(void)dismissFullscreenCanvasForComponent:(id)arg1;
-(SXComponentBehaviorController *)behaviorController;
-(void)updateBehaviorForComponentView:(id)arg1;
-(void)updateBehaviorForComponentView:(id)arg1;
-(SXComponentAnimationController *)animationController;
-(BOOL)isScrolling;
-(id)presentingContentViewController;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(void)removeInteractivityFocusForComponent:(id)arg1;
-(id<SXComponentController>)componentController;
-(SXPresentationAttributes *)presentationAttributes;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1;
-(BOOL)allowInteractivityFocusForComponent:(id)arg1;
-(void)willDismissFullscreenCanvasForComponent:(id)arg1;
-(void)willDismissFullscreenCanvasForComponent:(id)arg1;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(BOOL)addInteractivityFocusForComponent:(id)arg1;
-(void)willReturnToFullscreenForComponent:(id)arg1;
-(void)willReturnToFullscreenForComponent:(id)arg1;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;
-(void)scrollToRect:(CGRect)arg1 animated:(BOOL)arg2;

@end

