/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSString, NSLayoutConstraint;

@interface HKListItemLabel : UIView {

	BOOL _centerItemViewToFirstLine;
	BOOL _boldText;
	UIView* _itemView;
	UILabel* _textLabel;
	NSString* _text;
	NSLayoutConstraint* _itemViewTextAlignmentConstraint;
	NSLayoutConstraint* _topToTextLabelFirstBaselineConstraint;
	CGSize _itemViewSize;

}

@property (assign,nonatomic) CGSize itemViewSize;                                                     //@synthesize itemViewSize=_itemViewSize - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIView * itemView;                                                       //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                     //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * itemViewTextAlignmentConstraint;                    //@synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToTextLabelFirstBaselineConstraint;              //@synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint - In the implementation block
@property (assign,nonatomic) BOOL centerItemViewToFirstLine;                                          //@synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine - In the implementation block
@property (assign,nonatomic) BOOL boldText;                                                           //@synthesize boldText=_boldText - In the implementation block
+(id)createListItem:(id)arg1 itemNumber:(int)arg2 ;
-(BOOL)boldText;
-(void)setText:(NSString *)arg1 ;
-(void)setBoldText:(BOOL)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(NSString *)text;
-(UIView *)itemView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_textLabelFont;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)_setUpConstraints;
-(void)_setUpUI;
-(void)_updateItemViewTextAlignmentConstraint;
-(void)_updateTextLabelFont;
-(id)initWithView:(id)arg1 size:(CGSize)arg2 text:(id)arg3 ;
-(void)setCenterItemViewToFirstLine:(BOOL)arg1 ;
-(CGSize)itemViewSize;
-(double)_topToTextLabelFirstBaseline;
-(double)_textLabelLastBaselineToBottom;
-(id)_textLabelBoldFont;
-(NSLayoutConstraint *)itemViewTextAlignmentConstraint;
-(void)setItemViewTextAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)centerItemViewToFirstLine;
-(id)_textLabelFontStyle;
-(void)setItemView:(UIView *)arg1 ;
-(void)setItemViewSize:(CGSize)arg1 ;
-(NSLayoutConstraint *)topToTextLabelFirstBaselineConstraint;
-(void)setTopToTextLabelFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
@end

