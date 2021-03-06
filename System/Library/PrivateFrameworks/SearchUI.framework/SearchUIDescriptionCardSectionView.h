/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/TLKDescriptionViewDelegate.h>

@class TLKDescriptionView, NSString;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate> {

	BOOL _expanded;

}

@property (nonatomic,retain) TLKDescriptionView * contentView; 
@property (assign,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(BOOL)supportsCustomUserReportRequestAfforance;
+(id)dragTitleForCardSection:(id)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)expanded;
-(void)didPressMoreButton;
-(void)didPressFootnoteButton;
-(void)didPressTrailingFootnoteButton;
-(id)setupContentView;
@end

