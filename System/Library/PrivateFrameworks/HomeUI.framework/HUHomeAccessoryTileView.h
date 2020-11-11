/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HUGridServiceCell;

@interface HUHomeAccessoryTileView : UIView {

	BOOL _iconOnlyTile;
	UIImageView* _homeView;
	HUGridServiceCell* _tileView;

}

@property (nonatomic,readonly) UIImageView * homeView;                       //@synthesize homeView=_homeView - In the implementation block
@property (nonatomic,readonly) HUGridServiceCell * tileView;                 //@synthesize tileView=_tileView - In the implementation block
@property (nonatomic,readonly) BOOL iconOnlyTile;                            //@synthesize iconOnlyTile=_iconOnlyTile - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) double aspectRatio; 
-(HFItem*<HFServiceLikeItem>)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(double)aspectRatio;
-(void)layoutSubviews;
-(HUGridServiceCell *)tileView;
-(UIImageView *)homeView;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 iconOnlyTile:(BOOL)arg3 ;
-(BOOL)iconOnlyTile;
-(id)initWithFrame:(CGRect)arg1 categoryType:(id)arg2 ;
@end
