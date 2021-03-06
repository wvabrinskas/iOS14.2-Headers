/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol WFContentClassesViewControllerDelegate;
@class NSOrderedSet, NSMutableOrderedSet, UIBarButtonItem, NSArray;

@interface WFContentClassesViewController : UITableViewController {

	id<WFContentClassesViewControllerDelegate> _delegate;
	NSOrderedSet* _contentClasses;
	NSMutableOrderedSet* _selectedClassesSet;
	UIBarButtonItem* _selectButtonItem;

}

@property (nonatomic,readonly) NSOrderedSet * contentClasses;                                         //@synthesize contentClasses=_contentClasses - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * selectedClassesSet;                              //@synthesize selectedClassesSet=_selectedClassesSet - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * selectButtonItem;                                      //@synthesize selectButtonItem=_selectButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFContentClassesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * selectedClasses; 
-(void)done;
-(id<WFContentClassesViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setDelegate:(id<WFContentClassesViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSOrderedSet *)contentClasses;
-(void)updateSelectButton;
-(void)notifyChanged;
-(void)selectAction;
-(void)selectContentClasses:(id)arg1 ;
-(void)setSelectedClasses:(NSArray *)arg1 ;
-(NSArray *)selectedClasses;
-(NSMutableOrderedSet *)selectedClassesSet;
-(UIBarButtonItem *)selectButtonItem;
-(void)setSelectButtonItem:(UIBarButtonItem *)arg1 ;
@end

