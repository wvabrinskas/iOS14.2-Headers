/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {

	CGPoint _framelocation;
	double _radiusInt;
	BOOL _unknownSeen;
	UILabel* _fingerLabel;
	_UIKBRTFingerDetectionFingerCircleView* _fingerDot;

}

@property (nonatomic,retain) UILabel * fingerLabel;                                           //@synthesize fingerLabel=_fingerLabel - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetectionFingerCircleView * fingerDot;              //@synthesize fingerDot=_fingerDot - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                                                //@synthesize unknownSeen=_unknownSeen - In the implementation block
-(void)setNeedsDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)radius;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(void)centerOn:(CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3 ;
-(void)setFingerLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setFingerDot:(_UIKBRTFingerDetectionFingerCircleView *)arg1 ;
-(_UIKBRTFingerDetectionFingerCircleView *)fingerDot;
-(BOOL)unknownSeen;
-(UILabel *)fingerLabel;
@end

