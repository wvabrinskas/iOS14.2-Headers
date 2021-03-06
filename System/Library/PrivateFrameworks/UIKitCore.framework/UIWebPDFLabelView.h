/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, _UIBackdropView, NSTimer;

@interface UIWebPDFLabelView : UIView {

	UILabel* _label;
	_UIBackdropView* _backdropView;
	NSTimer* _timer;
	unsigned long long currentPageIndex;

}

@property (getter=isTimerInstalled,nonatomic,readonly) BOOL timerInstalled; 
@property (assign,nonatomic) unsigned long long currentPageIndex; 
-(void)setText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(void)sizeToFit;
-(unsigned long long)currentPageIndex;
-(double)_fadeOutDuration;
-(BOOL)isTimerInstalled;
-(void)showNowInSuperView:(id)arg1 atOrigin:(CGPoint)arg2 withText:(id)arg3 animated:(BOOL)arg4 ;
-(void)fadeOut;
-(void)clearTimer;
-(double)_fadeOutDelay;
-(void)_makeRoundedCorners;
-(void)_fadeOutAnimationDidStop;
-(void)dealloc;
@end

