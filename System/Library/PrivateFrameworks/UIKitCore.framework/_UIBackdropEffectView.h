/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CABackdropLayerDelegate.h>

@class CABackdropLayer, NSString;

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate> {

	CABackdropLayer* _backdropLayer;
	double _zoom;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer;              //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic) double zoom;                                  //@synthesize zoom=_zoom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)init;
-(CABackdropLayer *)backdropLayer;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
@end

