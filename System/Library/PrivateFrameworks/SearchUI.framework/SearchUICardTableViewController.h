/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUITableViewController.h>

@protocol SearchUICardViewDelegate;
@class SFCard;

@interface SearchUICardTableViewController : SearchUITableViewController {

	BOOL _rowSelectionAppearanceEnabled;
	id<SearchUICardViewDelegate> _cardViewDelegate;
	SFCard* _card;

}

@property (assign,nonatomic,__weak) id<SearchUICardViewDelegate> cardViewDelegate;              //@synthesize cardViewDelegate=_cardViewDelegate - In the implementation block
@property (nonatomic,retain) SFCard * card;                                                     //@synthesize card=_card - In the implementation block
@property (assign,nonatomic) BOOL rowSelectionAppearanceEnabled;                                //@synthesize rowSelectionAppearanceEnabled=_rowSelectionAppearanceEnabled - In the implementation block
-(SFCard *)card;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)init;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)setTableModel:(id)arg1 ;
-(id<SearchUICardViewDelegate>)cardViewDelegate;
-(void)updateSelectionStyleForCell:(id)arg1 ;
-(void)updateTopPadding;
-(void)setShouldUseStandardSectionInsets:(BOOL)arg1 ;
-(BOOL)rowSelectionAppearanceEnabled;
-(BOOL)shouldDrawTopAndBottomSeparators;
-(void)setRowSelectionAppearanceEnabled:(BOOL)arg1 ;
-(void)setCardViewDelegate:(id<SearchUICardViewDelegate>)arg1 ;
-(void)showViewController:(id)arg1 ;
-(double)offScreenContentScrollDistance;
-(void)setCard:(SFCard *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
@end

