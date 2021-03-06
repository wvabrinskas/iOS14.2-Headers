/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UILabel;

@interface TUIAutofillExtraCandidateCell : TUICandidateBaseCell {

	TIKeyboardCandidate* _candidate;
	UILabel* _textLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(id)reuseIdentifier;
+(id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(TIKeyboardCandidate *)candidate;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)updateLabel;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setStyle:(id)arg1 ;
@end

