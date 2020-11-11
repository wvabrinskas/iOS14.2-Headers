/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DisplayAndBrightnessSettings/DisplayAndBrightnessSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface DBSCheckmarkView : UIView {

	BOOL _selected;
	UIImageView* __checkmarkImageView;
	UIImageView* __circleImageView;

}

@property (nonatomic,retain) UIImageView * _checkmarkImageView;              //@synthesize _checkmarkImageView=__checkmarkImageView - In the implementation block
@property (nonatomic,retain) UIImageView * _circleImageView;                 //@synthesize _circleImageView=__circleImageView - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(UIImageView *)_checkmarkImageView;
-(UIImageView *)_circleImageView;
-(void)_configureView;
-(void)_updateViewState;
-(void)set_checkmarkImageView:(UIImageView *)arg1 ;
-(void)set_circleImageView:(UIImageView *)arg1 ;
@end
