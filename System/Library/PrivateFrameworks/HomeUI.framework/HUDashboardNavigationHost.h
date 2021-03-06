/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, HFWallpaperSlice, HUNavigationBarLayoutOptions;


@protocol HUDashboardNavigationHost <NSObject>
@property (nonatomic,retain) NSArray * leftDashboardNavigationButtons; 
@property (nonatomic,retain) NSArray * rightDashboardNavigationButtons; 
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice; 
@property (nonatomic,copy) HUNavigationBarLayoutOptions * layoutOptions; 
@required
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(id)arg1;
-(void)setLayoutOptions:(id)arg1;
-(HUNavigationBarLayoutOptions *)layoutOptions;
-(NSArray *)leftDashboardNavigationButtons;
-(void)setLeftDashboardNavigationButtons:(id)arg1;
-(void)setRightDashboardNavigationButtons:(id)arg1;
-(NSArray *)rightDashboardNavigationButtons;

@end

