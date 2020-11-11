/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModelChange.h>

@interface PUToolbarViewModelChange : PUViewModelChange {

	BOOL _toolbarItemsChanged;
	BOOL _accessoryViewChanged;
	BOOL _accessoryViewTopOutsetChanged;
	BOOL _accessoryViewMaximumHeightChanged;
	BOOL _maximumHeightChanged;

}

@property (assign,setter=_setToolbarItemsChanged:,nonatomic) BOOL toolbarItemsChanged;                                          //@synthesize toolbarItemsChanged=_toolbarItemsChanged - In the implementation block
@property (assign,setter=_setAccessoryViewChanged:,nonatomic) BOOL accessoryViewChanged;                                        //@synthesize accessoryViewChanged=_accessoryViewChanged - In the implementation block
@property (assign,setter=_setAccessoryViewTopOutsetChanged:,nonatomic) BOOL accessoryViewTopOutsetChanged;                      //@synthesize accessoryViewTopOutsetChanged=_accessoryViewTopOutsetChanged - In the implementation block
@property (assign,setter=_setAccessoryViewMaximumHeightChanged:,nonatomic) BOOL accessoryViewMaximumHeightChanged;              //@synthesize accessoryViewMaximumHeightChanged=_accessoryViewMaximumHeightChanged - In the implementation block
@property (assign,setter=_setMaximumHeightChanged:,nonatomic) BOOL maximumHeightChanged;                                        //@synthesize maximumHeightChanged=_maximumHeightChanged - In the implementation block
-(BOOL)hasChanges;
-(BOOL)accessoryViewTopOutsetChanged;
-(BOOL)maximumHeightChanged;
-(void)_setAccessoryViewTopOutsetChanged:(BOOL)arg1 ;
-(void)_setAccessoryViewChanged:(BOOL)arg1 ;
-(BOOL)toolbarItemsChanged;
-(void)_setMaximumHeightChanged:(BOOL)arg1 ;
-(BOOL)accessoryViewChanged;
-(void)_setAccessoryViewMaximumHeightChanged:(BOOL)arg1 ;
-(void)_setToolbarItemsChanged:(BOOL)arg1 ;
-(BOOL)accessoryViewMaximumHeightChanged;
@end
