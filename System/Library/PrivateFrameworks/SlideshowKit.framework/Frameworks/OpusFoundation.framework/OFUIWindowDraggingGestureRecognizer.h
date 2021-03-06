/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {

	BOOL _allowDragging;
	CGPoint _initialPoint;

}

@property (nonatomic,readonly) CGPoint translation; 
@property (nonatomic,readonly) CGPoint initialPoint;              //@synthesize initialPoint=_initialPoint - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)translation;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)initialPoint;
-(void)cancelDragging;
-(void)beginDragging;
-(void)_beginDraggingIfNecessary;
-(void)_stopDraggingIfNecessary:(BOOL)arg1 ;
@end

