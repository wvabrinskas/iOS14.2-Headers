/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@protocol CKBrowserDragViewControllerDelegate;
@class UILongPressGestureRecognizer, UIPanGestureRecognizer, CKAnimatedImage, NSMutableDictionary, UIImage, NSArray, UIView, CALayer, CADisplayLink, CKElasticFunction, NSString;

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKAnimationTimerObserver> {

	BOOL _canScale;
	BOOL _canRotate;
	BOOL _canPeel;
	BOOL _pressed;
	BOOL _scaledDown;
	BOOL _hasMovedToWindow;
	id<CKBrowserDragViewControllerDelegate> _delegate;
	double _dragViewScale;
	UILongPressGestureRecognizer* _gestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CKAnimatedImage* _dragImage;
	NSMutableDictionary* _peelMaskImageCache;
	UIImage* _currentFrameImage;
	NSArray* _dragImageFrames;
	UIView* _dragView;
	UIView* _plusImageView;
	UIView* _whiteBackground;
	CALayer* _peelImageLayer;
	CALayer* _peelMaskLayer;
	double _initialScale;
	double _rotationAngle;
	CALayer* _shineLayer;
	CALayer* _shadowLayer;
	CALayer* _dropShadowLayer;
	CALayer* _peelLayer;
	CALayer* _meshLayer;
	CALayer* _perspectiveLayer;
	CADisplayLink* _displayLink;
	double _elasticLastTime;
	double _elasticRemainingTime;
	CKElasticFunction* _elasticFunctionPositionX;
	CKElasticFunction* _elasticFunctionPositionY;
	CKElasticFunction* _elasticFunctionRotation;
	double _elasticRotationAngle;
	CKElasticFunction* _elasticFunctionScaleX;
	CKElasticFunction* _elasticFunctionScaleY;
	double _elasticScaleX;
	double _elasticScaleY;
	CGPoint _anchorOffset;
	CGSize _initialSize;
	CGPoint _initialDragStartPosition;
	CGSize _rasterizedImageSize;
	CGPoint _previousPanLocationInView;
	CGPoint _meshLayerStartPosition;
	CGPoint _peelLayerStartPosition;
	CGPoint _shineLayerStartPosition;
	CGPoint _shadowLayerStartPosition;
	CGPoint _dropShadowLayerStartPosition;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                     //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                        //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * dragImage;                                          //@synthesize dragImage=_dragImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peelMaskImageCache;                             //@synthesize peelMaskImageCache=_peelMaskImageCache - In the implementation block
@property (nonatomic,retain) UIImage * currentFrameImage;                                          //@synthesize currentFrameImage=_currentFrameImage - In the implementation block
@property (nonatomic,retain) NSArray * dragImageFrames;                                            //@synthesize dragImageFrames=_dragImageFrames - In the implementation block
@property (nonatomic,retain) UIView * dragView;                                                    //@synthesize dragView=_dragView - In the implementation block
@property (nonatomic,retain) UIView * plusImageView;                                               //@synthesize plusImageView=_plusImageView - In the implementation block
@property (nonatomic,retain) UIView * whiteBackground;                                             //@synthesize whiteBackground=_whiteBackground - In the implementation block
@property (nonatomic,retain) CALayer * peelImageLayer;                                             //@synthesize peelImageLayer=_peelImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * peelMaskLayer;                                              //@synthesize peelMaskLayer=_peelMaskLayer - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                    //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) CGPoint anchorOffset;                                                 //@synthesize anchorOffset=_anchorOffset - In the implementation block
@property (assign,nonatomic) CGSize initialSize;                                                   //@synthesize initialSize=_initialSize - In the implementation block
@property (assign,nonatomic) double initialScale;                                                  //@synthesize initialScale=_initialScale - In the implementation block
@property (assign,nonatomic) CGPoint initialDragStartPosition;                                     //@synthesize initialDragStartPosition=_initialDragStartPosition - In the implementation block
@property (assign,nonatomic) CGSize rasterizedImageSize;                                           //@synthesize rasterizedImageSize=_rasterizedImageSize - In the implementation block
@property (assign,nonatomic) double dragViewScale;                                                 //@synthesize dragViewScale=_dragViewScale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                                 //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,nonatomic) CGPoint previousPanLocationInView;                                    //@synthesize previousPanLocationInView=_previousPanLocationInView - In the implementation block
@property (assign,nonatomic) CALayer * shineLayer;                                                 //@synthesize shineLayer=_shineLayer - In the implementation block
@property (assign,nonatomic) CALayer * shadowLayer;                                                //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (assign,nonatomic) CALayer * dropShadowLayer;                                            //@synthesize dropShadowLayer=_dropShadowLayer - In the implementation block
@property (assign,nonatomic) CALayer * peelLayer;                                                  //@synthesize peelLayer=_peelLayer - In the implementation block
@property (assign,nonatomic) CALayer * meshLayer;                                                  //@synthesize meshLayer=_meshLayer - In the implementation block
@property (assign,nonatomic) CALayer * perspectiveLayer;                                           //@synthesize perspectiveLayer=_perspectiveLayer - In the implementation block
@property (assign,nonatomic) CGPoint meshLayerStartPosition;                                       //@synthesize meshLayerStartPosition=_meshLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint peelLayerStartPosition;                                       //@synthesize peelLayerStartPosition=_peelLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint shineLayerStartPosition;                                      //@synthesize shineLayerStartPosition=_shineLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint shadowLayerStartPosition;                                     //@synthesize shadowLayerStartPosition=_shadowLayerStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint dropShadowLayerStartPosition;                                 //@synthesize dropShadowLayerStartPosition=_dropShadowLayerStartPosition - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                          //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double elasticLastTime;                                               //@synthesize elasticLastTime=_elasticLastTime - In the implementation block
@property (assign,nonatomic) double elasticRemainingTime;                                          //@synthesize elasticRemainingTime=_elasticRemainingTime - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionPositionX;                         //@synthesize elasticFunctionPositionX=_elasticFunctionPositionX - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionPositionY;                         //@synthesize elasticFunctionPositionY=_elasticFunctionPositionY - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionRotation;                          //@synthesize elasticFunctionRotation=_elasticFunctionRotation - In the implementation block
@property (assign,nonatomic) double elasticRotationAngle;                                          //@synthesize elasticRotationAngle=_elasticRotationAngle - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionScaleX;                            //@synthesize elasticFunctionScaleX=_elasticFunctionScaleX - In the implementation block
@property (nonatomic,retain) CKElasticFunction * elasticFunctionScaleY;                            //@synthesize elasticFunctionScaleY=_elasticFunctionScaleY - In the implementation block
@property (assign,nonatomic) double elasticScaleX;                                                 //@synthesize elasticScaleX=_elasticScaleX - In the implementation block
@property (assign,nonatomic) double elasticScaleY;                                                 //@synthesize elasticScaleY=_elasticScaleY - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                        //@synthesize pressed=_pressed - In the implementation block
@property (assign,getter=isScaledDown,nonatomic) BOOL scaledDown;                                  //@synthesize scaledDown=_scaledDown - In the implementation block
@property (assign,nonatomic) BOOL hasMovedToWindow;                                                //@synthesize hasMovedToWindow=_hasMovedToWindow - In the implementation block
@property (assign,nonatomic,__weak) id<CKBrowserDragViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canScale;                                                        //@synthesize canScale=_canScale - In the implementation block
@property (assign,nonatomic) BOOL canRotate;                                                       //@synthesize canRotate=_canRotate - In the implementation block
@property (assign,nonatomic) BOOL canPeel;                                                         //@synthesize canPeel=_canPeel - In the implementation block
@property (nonatomic,readonly) CGPoint dragViewCenter; 
@property (nonatomic,readonly) double dragViewRotation; 
@property (nonatomic,readonly) double absoluteScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)springAnimationWithKeyPath:(id)arg1 speed:(float)arg2 ;
+(BOOL)supportsForceTouch;
+(id)meshTransform;
-(double)rotationAngle;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(BOOL)canPeel;
-(void)setRotationAngle:(double)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(UIView *)dragView;
-(BOOL)canScale;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id<CKBrowserDragViewControllerDelegate>)delegate;
-(void)commitDrag;
-(CALayer *)shineLayer;
-(CKAnimatedImage *)dragImage;
-(CALayer *)meshLayer;
-(CALayer *)peelLayer;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDragView:(UIView *)arg1 ;
-(BOOL)isPressed;
-(CALayer *)shadowLayer;
-(void)setDragImage:(CKAnimatedImage *)arg1 ;
-(void)setAnchorOffset:(CGPoint)arg1 ;
-(void)setPeelMaskImageCache:(NSMutableDictionary *)arg1 ;
-(double)dragViewScale;
-(UIView *)plusImageView;
-(BOOL)isScaledDown;
-(void)reversePeelAnimationToPoint:(CGPoint)arg1 forPlacement:(BOOL)arg2 shouldShrink:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(UIView *)whiteBackground;
-(void)setPlusImageView:(UIView *)arg1 ;
-(void)setWhiteBackground:(UIView *)arg1 ;
-(void)setDragImageFrames:(NSArray *)arg1 ;
-(void)setRasterizedImageSize:(CGSize)arg1 ;
-(void)setCurrentFrameImage:(UIImage *)arg1 ;
-(void)setUpPeelLayers;
-(void)panGestureRecognized:(id)arg1 ;
-(void)animatePeelWithCompletion:(/*^block*/id)arg1 ;
-(void)_attachElasticEffectsForLocation:(CGPoint)arg1 ;
-(void)setHasMovedToWindow:(BOOL)arg1 ;
-(BOOL)hasMovedToWindow;
-(void)_updateElasticEffectsForLocation:(CGPoint)arg1 ;
-(BOOL)_orbScalingEnabled;
-(void)setDragViewScale:(double)arg1 ;
-(CGPoint)dragViewCenter;
-(double)dragViewRotation;
-(void)_detachElasticEffects;
-(void)setPreviousPanLocationInView:(CGPoint)arg1 ;
-(CGPoint)previousPanLocationInView;
-(void)setScaledDown:(BOOL)arg1 ;
-(void)_displayLinkCallback:(id)arg1 ;
-(void)animateScaleDown;
-(CGPoint)anchorOffset;
-(void)applyTransforms;
-(CGSize)rasterizedImageSize;
-(double)dragViewScaleUp;
-(NSArray *)dragImageFrames;
-(CALayer *)peelImageLayer;
-(NSMutableDictionary *)peelMaskImageCache;
-(id)peelMaskImageFromImage:(id)arg1 ;
-(CALayer *)peelMaskLayer;
-(UIImage *)currentFrameImage;
-(void)setPerspectiveLayer:(CALayer *)arg1 ;
-(void)setMeshLayer:(CALayer *)arg1 ;
-(void)setMeshLayerStartPosition:(CGPoint)arg1 ;
-(void)setPeelLayer:(CALayer *)arg1 ;
-(void)setPeelLayerStartPosition:(CGPoint)arg1 ;
-(void)setPeelImageLayer:(CALayer *)arg1 ;
-(void)setPeelMaskLayer:(CALayer *)arg1 ;
-(void)setShineLayer:(CALayer *)arg1 ;
-(void)setShineLayerStartPosition:(CGPoint)arg1 ;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(double)elasticScaleX;
-(void)setShadowLayerStartPosition:(CGPoint)arg1 ;
-(void)setDropShadowLayer:(CALayer *)arg1 ;
-(void)setDropShadowLayerStartPosition:(CGPoint)arg1 ;
-(CALayer *)dropShadowLayer;
-(CGPoint)dropShadowLayerStartPosition;
-(CGPoint)meshLayerStartPosition;
-(CGPoint)peelLayerStartPosition;
-(CGPoint)shineLayerStartPosition;
-(CGPoint)shadowLayerStartPosition;
-(void)manuallyInitializeDragAtPoint:(CGPoint)arg1 ;
-(CGPoint)initialDragStartPosition;
-(void)manuallyUpdateDragPositionToPoint:(CGPoint)arg1 ;
-(void)setInitialDragStartPosition:(CGPoint)arg1 ;
-(CALayer *)perspectiveLayer;
-(double)elasticLastTime;
-(void)setElasticLastTime:(double)arg1 ;
-(double)elasticRemainingTime;
-(void)setElasticRemainingTime:(double)arg1 ;
-(CKElasticFunction *)elasticFunctionPositionX;
-(void)setElasticScaleX:(double)arg1 ;
-(void)setDelegate:(id<CKBrowserDragViewControllerDelegate>)arg1 ;
-(void)setElasticFunctionPositionX:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionPositionY;
-(void)setElasticFunctionPositionY:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionRotation;
-(void)setElasticFunctionRotation:(CKElasticFunction *)arg1 ;
-(double)elasticRotationAngle;
-(void)setElasticRotationAngle:(double)arg1 ;
-(CKElasticFunction *)elasticFunctionScaleX;
-(double)elasticScaleY;
-(void)setElasticFunctionScaleX:(CKElasticFunction *)arg1 ;
-(CKElasticFunction *)elasticFunctionScaleY;
-(void)setElasticFunctionScaleY:(CKElasticFunction *)arg1 ;
-(void)setElasticScaleY:(double)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setInitialSize:(CGSize)arg1 ;
-(BOOL)canRotate;
-(void)updateAnimationTimerObserving;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)scaleImage:(id)arg1 toSize:(CGSize)arg2 ;
-(void)viewDidLoad;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(void)setInitialScale:(double)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)initialSize;
-(double)initialScale;
-(id)initWithDragImage:(id)arg1 inSourceRect:(CGRect)arg2 withSourcePoint:(CGPoint)arg3 withGestureRecognizer:(id)arg4 ;
-(void)setCanScale:(BOOL)arg1 ;
-(void)setCanRotate:(BOOL)arg1 ;
-(void)setCanPeel:(BOOL)arg1 ;
-(void)setPlusImageViewHidden:(BOOL)arg1 ;
-(void)animateBackToSourceCompletionBlock:(/*^block*/id)arg1 ;
-(void)animatePlacementAtPoint:(CGPoint)arg1 shouldShrink:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)gestureRecognized:(id)arg1 ;
-(double)absoluteScale;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
@end
