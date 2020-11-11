/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol MTUISelectionTableViewControllerDelegate;
@class NSArray, NSIndexPath;

@interface MTUISelectionTableViewController : UITableViewController {

	BOOL _allowsNone;
	NSArray* _selectionData;
	id<MTUISelectionTableViewControllerDelegate> _delegate;
	NSIndexPath* _parentIndexPath;

}

@property (nonatomic,retain) NSArray * selectionData;                                                   //@synthesize selectionData=_selectionData - In the implementation block
@property (assign,nonatomic,__weak) id<MTUISelectionTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * parentIndexPath;                                             //@synthesize parentIndexPath=_parentIndexPath - In the implementation block
@property (assign,nonatomic) BOOL allowsNone;                                                           //@synthesize allowsNone=_allowsNone - In the implementation block
-(id<MTUISelectionTableViewControllerDelegate>)delegate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<MTUISelectionTableViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSelectionData:(NSArray *)arg1 ;
-(void)setParentIndexPath:(NSIndexPath *)arg1 ;
-(void)setAllowsNone:(BOOL)arg1 ;
-(NSArray *)selectionData;
-(BOOL)allowsNone;
-(void)deselectRowsExcluding:(unsigned long long)arg1 ;
-(NSIndexPath *)parentIndexPath;
-(id)initWithStyle:(long long)arg1 title:(id)arg2 selectionData:(id)arg3 parentIndexPath:(id)arg4 allowsMultiple:(BOOL)arg5 allowsNone:(BOOL)arg6 delegate:(id)arg7 ;
@end
