/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <NeutrinoKit/NURenderView.h>

@class UILongPressGestureRecognizer, CMMotionManager;

@interface NUDebugRenderView : NURenderView {

	UILongPressGestureRecognizer* _doubleTap;
	BOOL _showDebug;
	CMMotionManager* _motionManager;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)debugMode;
-(void)dealloc;
-(void)_debugToggle:(id)arg1 ;
-(void)_orientWithX:(double)arg1 andY:(double)arg2 ;
-(void)_resetOrientation:(id)arg1 ;
-(void)_startDeviceMotion;
-(void)_stopDeviceMotion;
-(void)_setupDeviceMotion;
@end

