/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	BOOL _hasImage;
	id _surface;

}

@property (nonatomic,__weak,readonly) id surface; 
-(id)_initWithView:(id)arg1 displayConfiguration:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 ;
-(id)surface;
-(id)initWithView:(id)arg1 containingSceneSnapshot:(id)arg2 forDisplayConfiguration:(id)arg3 ;
-(id)initWithContainingBounds:(CGRect)arg1 contentFrame:(CGRect)arg2 statusBarFrame:(CGRect)arg3 snapshot:(id)arg4 snapshotOrientation:(long long)arg5 interfaceOrientation:(long long)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 forJail:(BOOL)arg11 ;
-(void)_addBlackBackground;
@end

