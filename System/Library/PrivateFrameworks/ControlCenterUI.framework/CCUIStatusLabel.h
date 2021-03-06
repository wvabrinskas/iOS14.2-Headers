/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class MTVisualStylingProvider;

@interface CCUIStatusLabel : UILabel {

	MTVisualStylingProvider* _visualStylingProvider;
	unsigned long long _verticalAlignment;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) unsigned long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
-(void)_contentSizeCategoryDidChange;
-(UIEdgeInsets)edgeInsets;
-(id)init;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)verticalAlignment;
-(void)didMoveToWindow;
-(void)_updateVisualStyling;
-(void)drawTextInRect:(CGRect)arg1 ;
@end

