/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HUSearchableViewController <UITextFieldDelegate>
@property (nonatomic,readonly) UIView*<HUSearchBar> searchBar; 
@property (nonatomic,readonly) unsigned long long searchBarPosition; 
@required
-(UIView*<HUSearchBar>)searchBar;
-(void)updateForSearch;
-(unsigned long long)searchBarPosition;

@end
