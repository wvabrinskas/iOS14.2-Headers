/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVoiceControlItem.h>

@class _UIStatusBarPillView;

@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem {

	_UIStatusBarPillView* _pillView;
	CGSize _pillSize;

}

@property (nonatomic,retain) _UIStatusBarPillView * pillView;              //@synthesize pillView=_pillView - In the implementation block
@property (assign,nonatomic) CGSize pillSize;                              //@synthesize pillSize=_pillSize - In the implementation block
-(id)viewForIdentifier:(id)arg1 ;
-(BOOL)_pulsingForVoiceControlType:(long long)arg1 ;
-(CGSize)pillSize;
-(void)setPillSize:(CGSize)arg1 ;
-(double)imageOpacityForVoiceControlType:(long long)arg1 ;
-(_UIStatusBarPillView *)pillView;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(void)_create_pillView;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(void)setPillView:(_UIStatusBarPillView *)arg1 ;
-(id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2 ;
@end

