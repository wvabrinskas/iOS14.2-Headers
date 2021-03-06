/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView, EMFEmojiToken;

@interface TUIEmojiVariantCell : UIView {

	BOOL _highlighted;
	UILabel* _labelView;
	UIView* _backgroundView;
	EMFEmojiToken* _emojiToken;

}

@property (nonatomic,readonly) UILabel * labelView;                              //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) EMFEmojiToken * emojiToken;                       //@synthesize emojiToken=_emojiToken - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(UILabel *)labelView;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(EMFEmojiToken *)emojiToken;
-(id)initWithFrame:(CGRect)arg1 token:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

