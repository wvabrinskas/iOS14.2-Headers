/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISearchBarDelegate.h>

@class UISearchController, _UIDocumentSearchListController, NSLayoutConstraint, NSString;

@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate> {

	UISearchController* _searchController;
	_UIDocumentSearchListController* _resultsController;
	NSLayoutConstraint* _searchFieldLeftConstraint;
	NSLayoutConstraint* _searchFieldRightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * searchFieldLeftConstraint;                   //@synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * searchFieldRightConstraint;                  //@synthesize searchFieldRightConstraint=_searchFieldRightConstraint - In the implementation block
@property (nonatomic,retain) _UIDocumentSearchListController * resultsController;              //@synthesize resultsController=_resultsController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                            //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UIDocumentSearchListController *)resultsController;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setResultsController:(_UIDocumentSearchListController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(UISearchController *)searchController;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 resultsController:(id)arg2 ;
-(void)searchCanceled:(id)arg1 ;
-(NSLayoutConstraint *)searchFieldLeftConstraint;
-(void)setSearchFieldLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)searchFieldRightConstraint;
-(void)setSearchFieldRightConstraint:(NSLayoutConstraint *)arg1 ;
@end

