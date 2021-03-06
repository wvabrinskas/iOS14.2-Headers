/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView {

	BOOL _showContrastBorder;
	UIColor* _color;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) CAMShutterButtonSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL showContrastBorder;                //@synthesize showContrastBorder=_showContrastBorder - In the implementation block
@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)showContrastBorder;
-(UIEdgeInsets)alignmentRectInsets;
-(void)drawRect:(CGRect)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(CAMShutterButtonSpec)spec;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
@end

