/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol SearchUITableHeaderViewDelegate, SFFeedbackListener;
@class SFResultSection, TLKLabel, TLKTextButton, TLKStackView, NSString;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerViewDelegate> {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _isExpanded;
	id<SearchUITableHeaderViewDelegate> _delegate;
	id<SFFeedbackListener> _feedbackListener;
	unsigned long long _headerType;
	SFResultSection* _section;
	TLKLabel* _titleLabel;
	TLKTextButton* _headerOptionButton;
	TLKStackView* _stackView;

}

@property (nonatomic,retain) TLKLabel * titleLabel;                                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TLKTextButton * headerOptionButton;                               //@synthesize headerOptionButton=_headerOptionButton - In the implementation block
@property (nonatomic,retain) SFResultSection * section;                                        //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) TLKStackView * stackView;                                         //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) unsigned long long headerType;                                    //@synthesize headerType=_headerType - In the implementation block
@property (assign,nonatomic) BOOL isExpanded;                                                  //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUITableHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener;                   //@synthesize feedbackListener=_feedbackListener - In the implementation block
@property (readonly) NSString * title; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                               //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(TLKLabel *)titleLabel;
-(void)setHeaderType:(unsigned long long)arg1 ;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(void)setSection:(SFResultSection *)arg1 ;
-(BOOL)isExpanded;
-(unsigned long long)headerType;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setIsExpanded:(BOOL)arg1 ;
-(SFResultSection *)section;
-(void)setFloating:(BOOL)arg1 ;
-(id)init;
-(id<SearchUITableHeaderViewDelegate>)delegate;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setStackView:(TLKStackView *)arg1 ;
-(id<SFFeedbackListener>)feedbackListener;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)moreButtonPressed;
-(void)setDelegate:(id<SearchUITableHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateWithSection:(id)arg1 isExpanded:(BOOL)arg2 usesInsetRoundedSection:(BOOL)arg3 ;
-(NSString *)title;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(void)updateHeaderButtonVisibilityAnimated:(BOOL)arg1 ;
-(void)setHeaderOptionButton:(TLKTextButton *)arg1 ;
-(id)moreResultsPunchout;
-(BOOL)isSuggestedAppsHeader;
-(TLKTextButton *)headerOptionButton;
-(BOOL)supportsShowMoreInApp;
-(TLKStackView *)stackView;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
@end

