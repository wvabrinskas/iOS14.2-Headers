/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemManager.h>

@class HFStaticItem, HMAccessory, NSMutableArray;

@interface HUAccessoryDiagnosticsItemManager : HFItemManager {

	HFStaticItem* _generateLogsButtonItem;
	HFStaticItem* _logCollectionFailedItem;
	HMAccessory* _sourceAccessory;
	NSMutableArray* _downloadedLogs;

}

@property (nonatomic,retain) NSMutableArray * downloadedLogs;                       //@synthesize downloadedLogs=_downloadedLogs - In the implementation block
@property (assign,nonatomic) BOOL collectionInProgress; 
@property (assign,nonatomic) BOOL collectionFailed; 
@property (nonatomic,readonly) HFStaticItem * generateLogsButtonItem;               //@synthesize generateLogsButtonItem=_generateLogsButtonItem - In the implementation block
@property (nonatomic,readonly) HFStaticItem * logCollectionFailedItem;              //@synthesize logCollectionFailedItem=_logCollectionFailedItem - In the implementation block
@property (nonatomic,readonly) HMAccessory * sourceAccessory;                       //@synthesize sourceAccessory=_sourceAccessory - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)availableLogs;
-(HMAccessory *)sourceAccessory;
-(BOOL)collectionInProgress;
-(BOOL)collectionFailed;
-(void)_loadDownloadedLogs;
-(HFStaticItem *)generateLogsButtonItem;
-(HFStaticItem *)logCollectionFailedItem;
-(void)didChangeNotification:(id)arg1 ;
-(void)setCollectionInProgress:(BOOL)arg1 ;
-(void)setCollectionFailed:(BOOL)arg1 ;
-(void)recordDownloadedLog:(id)arg1 ;
-(NSMutableArray *)downloadedLogs;
-(void)beginDiagnosticCollection;
-(void)setDownloadedLogs:(NSMutableArray *)arg1 ;
@end
