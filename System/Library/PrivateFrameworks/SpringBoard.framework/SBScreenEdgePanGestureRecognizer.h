/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIScreenEdgePanGestureRecognizer.h>

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {

	double _grabberActiveZoneWidth;

}

@property (assign,nonatomic) double grabberActiveZoneWidth;                                      //@synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemGestureRecognizerDelegate> delegate; 
-(void)setGrabberActiveZoneWidth:(double)arg1 ;
-(double)grabberActiveZoneWidth;
-(void)sb_commonInitScreenEdgePanGestureRecognizer;
-(BOOL)isLocationWithinGrabberActiveZone;
-(long long)_touchInterfaceOrientation;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end

