/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@protocol SFContactAutoFillViewControllerFiller;
@class CNContact, NSArray;

@interface SFContactAutoFillViewController : UITableViewController {

	CNContact* _contact;
	NSArray* _matches;
	NSArray* _propertyValues;
	id<SFContactAutoFillViewControllerFiller> _autoFiller;

}

@property (assign,nonatomic,__weak) id<SFContactAutoFillViewControllerFiller> autoFiller;              //@synthesize autoFiller=_autoFiller - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)matchesForProperty:(id)arg1 ;
-(id)valuesFromPropertyMatches:(id)arg1 ;
-(id)_valueForProperty:(id)arg1 identifier:(id)arg2 ;
-(void)setAutoFiller:(id<SFContactAutoFillViewControllerFiller>)arg1 ;
-(void)_cancel:(id)arg1 ;
-(id)properties;
-(void)autoFill:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithMatches:(id)arg1 contact:(id)arg2 ;
-(id<SFContactAutoFillViewControllerFiller>)autoFiller;
@end

