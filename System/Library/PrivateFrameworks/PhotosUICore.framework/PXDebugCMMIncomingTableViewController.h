/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>

@class PXCMMInvitationsDataSourceManager, PXCMMInvitationsDataSource, NSString;

@interface PXDebugCMMIncomingTableViewController : UITableViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver> {

	PXCMMInvitationsDataSourceManager* _dataSourceManager;
	PXCMMInvitationsDataSource* _dataSource;

}

@property (nonatomic,retain) PXCMMInvitationsDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) PXCMMInvitationsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXCMMInvitationsDataSourceManager *)dataSourceManager;
-(void)setDataSource:(PXCMMInvitationsDataSource *)arg1 ;
-(PXCMMInvitationsDataSource *)dataSource;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
@end

