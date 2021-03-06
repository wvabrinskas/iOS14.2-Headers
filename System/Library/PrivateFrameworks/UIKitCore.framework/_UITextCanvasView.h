/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UITextTiledLayerDelegate.h>
#import <UIKitCore/_UIDrawsTextInRect.h>

@protocol _UITextCanvasViewContext;
@class NSMutableSet, NSArray, _UISceneDisplayLink, _UITextTiledLayer, NSString;

@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UIDrawsTextInRect> {

	NSMutableSet* _ghostedRanges;
	NSMutableSet* _invisibleRanges;
	NSArray* _maskedRects;
	_UISceneDisplayLink* _sceneDisplayLink;
	id<_UITextCanvasViewContext> _context;

}

@property (nonatomic,readonly) _UITextTiledLayer * layer; 
@property (assign,nonatomic,__weak) id<_UITextCanvasViewContext> context;                            //@synthesize context=_context - In the implementation block
@property (assign,getter=isTilingEnabled,nonatomic) BOOL tilingEnabled; 
@property (assign,nonatomic) double maxTileHeight; 
@property (assign,setter=_setDrawsDebugBaselines:,nonatomic) BOOL _drawsDebugBaselines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)resumeTiling;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_enableAutoConstraining;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)maxTileHeight;
-(void)addGhostedRange:(NSRange)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMaxTileHeight:(double)arg1 ;
-(id<_UITextCanvasViewContext>)context;
-(void)suspendTiling;
-(void)removeAllGhostedRanges;
-(void)didMoveToWindow;
-(void)_windowDidMoveToScreen;
-(void)_updateTilingViewportBookkeeping;
-(void)_updateTilingViewportLayer;
-(void)_setDrawsDebugBaselines:(BOOL)arg1 ;
-(BOOL)_drawsDebugBaselines;
-(id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(CGRect)arg2 ;
-(void)setTilingEnabled:(BOOL)arg1 ;
-(BOOL)isTilingEnabled;
-(void)addInvisibleRange:(NSRange)arg1 ;
-(void)removeInvisibleRange:(NSRange)arg1 ;
-(void)setNeedsLayout;
-(void)setContext:(id<_UITextCanvasViewContext>)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
@end

