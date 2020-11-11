/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@class NSArray;

@interface PSUICarrierSpaceServicesController : PSListController {

	NSArray* _appsList;

}

@property (nonatomic,retain) NSArray * appsList;              //@synthesize appsList=_appsList - In the implementation block
-(id)specifiers;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)simStatusChanged;
-(void)carrierSpaceChanged;
-(id)primaryAppSpecifier;
-(BOOL)shouldShowMoreApps;
-(void)moreAppsTapped:(id)arg1 ;
@end
