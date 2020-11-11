/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKScribbleInteractionWrapperProvider.h>
#import <UIKit/UIInteraction.h>

@protocol PKScribbleInteractionWrapper, PKPencilTextInputElementInteractionDelegate;
@class UIView, NSString;

@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction> {

	id<PKScribbleInteractionWrapper> _cachedWrapper;
	id<PKPencilTextInputElementInteractionDelegate> _delegate;
	UIView* _view;

}

@property (assign,nonatomic,__weak) UIView * view;                                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) id<PKPencilTextInputElementInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pencilTextInputElementInteractionInView:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(id<PKPencilTextInputElementInteractionDelegate>)delegate;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setDelegate:(id<PKPencilTextInputElementInteractionDelegate>)arg1 ;
-(id)scribbleInteractionWrapper;
@end
