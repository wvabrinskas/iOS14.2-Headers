/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CorePDF/CorePDF-Structs.h>
@class UIWindow, UIView, CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFMagnifierController : NSObject {

	UIWindow* _textEffectsWindow;
	UIView* _textEffectsSubView;
	CALayer* _loLayer;
	CALayer* _hiLayer;
	CALayer* _imageContainer;
	CALayer* _imageLayer;
	CAShapeLayer* _selectionLayer;
	CALayer* _maskLayer;
	double _power;
	CGSize _magnifierSize;
	BOOL _loupe;
	CGPoint _touchPoint;
	CGPoint _pointToMagnify;
	double _enlargementScale;
	CALayer* _leftBar;
	CALayer* _leftGrabber;
	CALayer* _rightBar;
	CALayer* _rightGrabber;
	CGSize _controlPointSize;
	CGColorRef _grabberColor;
	unsigned long long _pageRotation;
	BOOL _visible;
	UIPDFPageView* pageView;

}

@property (assign,nonatomic) UIPDFPageView * pageView; 
-(void)showMagnifier;
-(UIPDFPageView *)pageView;
-(BOOL)visible;
-(id)init;
-(void)move;
-(void)_show;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)hide;
-(void)dealloc;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(void)setPosition:(CGPoint)arg1 viewPoint:(CGPoint)arg2 ;
-(void)showLoupe;
-(void)tearDownLayers;
-(void)placeImage;
-(void)setImageContainerMask;
-(void)setImageContainerPositionLoupe;
-(void)setImageContainerPositionMagnifier;
-(void)setTextRangeHandlePositions;
-(void)setSelectionPath;
-(void)setLayerPositions;
-(CGRect)convertRectToRotatedPage:(CGRect)arg1 ;
-(CGPoint)convertPointToRotatedPage:(CGPoint)arg1 ;
-(CGPoint)viewPointInTextEffectsSpace;
-(CGPoint)pointToMagnifyInPDFSpace;
-(CGPoint)convertPointToEnlargedSpace:(CGPoint)arg1 ;
-(CGRect)convertRectToEnlargedSpace:(CGRect)arg1 ;
-(void)setSelectionPath:(CGPathRef)arg1 bounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 ;
-(void)setPower;
-(id)imageReceived:(id)arg1 data:(id)arg2 ;
-(void)addBling;
-(void)addTextRangeHandles;
-(BOOL)isSelectionUniformlyRotated:(double*)arg1 ;
-(CGPoint)convertViewPointToEnlargedSpace:(CGPoint)arg1 ;
@end
