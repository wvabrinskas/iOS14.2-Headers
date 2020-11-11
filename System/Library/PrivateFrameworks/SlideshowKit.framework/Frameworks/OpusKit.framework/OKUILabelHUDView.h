/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface OKUILabelHUDView : UIView {

	UILabel* _label;

}

@property (retain,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
-(UILabel *)label;
-(void)updateShadowPath;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)sizeToFit;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
@end
