/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl {

	long long _style;
	long long _direction;
	CAShapeLayer* __arrowLayer;
	CAShapeLayer* __compactBackgroundLayer;

}

@property (nonatomic,readonly) CAShapeLayer * _backingShapeLayer; 
@property (nonatomic,readonly) CAShapeLayer * _arrowLayer;                          //@synthesize _arrowLayer=__arrowLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * _compactBackgroundLayer;              //@synthesize _compactBackgroundLayer=__compactBackgroundLayer - In the implementation block
@property (nonatomic,readonly) long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long direction;                                   //@synthesize direction=_direction - In the implementation block
+(Class)layerClass;
+(CGSize)_compactBackgroundSize;
-(void)setSelected:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(void)setDirection:(long long)arg1 animated:(BOOL)arg2 ;
-(CAShapeLayer *)_backingShapeLayer;
-(void)_updateArrowColorAnimated:(BOOL)arg1 ;
-(void)_updateArrowShapeAnimated:(BOOL)arg1 ;
-(void)_updateCompactCirclePath;
-(CAShapeLayer *)_arrowLayer;
-(CAShapeLayer *)_compactBackgroundLayer;
@end
