/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <MetalKit/MTKView.h>

@protocol OS_dispatch_semaphore, MTLCommandQueue;
@class NSObject, MTLSAnimatablePathCollection, BKUIPearlCrossHairsManager, MTLSPathBufferData, MTLSplineRenderer;

@interface BKUIPearlCrossHairsRenderingView : MTKView {

	NSObject*<OS_dispatch_semaphore> _inFlightSemaphore;
	id<MTLCommandQueue> _commandQueue;
	double _time;
	float _pathBlend;
	float _pathBlendDest;
	unsigned long long _state;
	MTLSAnimatablePathCollection* _crosshairsPathCollection;
	BKUIPearlCrossHairsManager* _crosshairsInstanceManager;
	MTLSPathBufferData* _crosshairsData;
	MTLSAnimatablePathCollection* _checkMarkPathCollection;
	MTLSPathBufferData* _checkMarkData;
	MTLSplineRenderer* _renderer;
	 _axis;

}

@property (assign,nonatomic) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign)  axis;                                                                //@synthesize axis=_axis - In the implementation block
@property (retain) MTLSAnimatablePathCollection * crosshairsPathCollection;              //@synthesize crosshairsPathCollection=_crosshairsPathCollection - In the implementation block
@property (retain) BKUIPearlCrossHairsManager * crosshairsInstanceManager;               //@synthesize crosshairsInstanceManager=_crosshairsInstanceManager - In the implementation block
@property (retain) MTLSPathBufferData * crosshairsData;                                  //@synthesize crosshairsData=_crosshairsData - In the implementation block
@property (retain) MTLSAnimatablePathCollection * checkMarkPathCollection;               //@synthesize checkMarkPathCollection=_checkMarkPathCollection - In the implementation block
@property (retain) MTLSPathBufferData * checkMarkData;                                   //@synthesize checkMarkData=_checkMarkData - In the implementation block
@property (retain) MTLSplineRenderer * renderer;                                         //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL grayscale; 
-(void)setGrayscale:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(BOOL)grayscale;
-()axis;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setCrosshairsData:(MTLSPathBufferData *)arg1 ;
-(void)setAxis:;
-(void)setCrosshairsPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(MTLSplineRenderer *)renderer;
-(MTLSPathBufferData *)crosshairsData;
-(void)drawRect:(CGRect)arg1 ;
-(void)setCrosshairsInstanceManager:(BKUIPearlCrossHairsManager *)arg1 ;
-(MTLSPathBufferData *)checkMarkData;
-(void)setCheckMarkData:(MTLSPathBufferData *)arg1 ;
-(MTLSAnimatablePathCollection *)checkMarkPathCollection;
-(unsigned long long)state;
-(unsigned long long)getState;
-(MTLSAnimatablePathCollection *)crosshairsPathCollection;
-(void)setRenderer:(MTLSplineRenderer *)arg1 ;
-(void)setAxis:()arg1 ;
-(void)setCheckMarkPathCollection:(MTLSAnimatablePathCollection *)arg1 ;
-(BKUIPearlCrossHairsManager *)crosshairsInstanceManager;
@end
