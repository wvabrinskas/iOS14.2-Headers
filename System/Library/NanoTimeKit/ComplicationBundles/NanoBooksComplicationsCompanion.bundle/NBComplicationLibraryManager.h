/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NBComplicationLibraryItem, NSHashTable, NSObject, NSDate;

@interface NBComplicationLibraryManager : NSObject {

	NBComplicationLibraryItem* _recentAudiobook;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastFetchedDate;

}

@property (nonatomic,retain) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NBComplicationLibraryItem * recentAudiobook;              //@synthesize recentAudiobook=_recentAudiobook - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchedDate;                                 //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
+(id)sharedManager;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(NSHashTable *)observers;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSDate *)lastFetchedDate;
-(void)addObserver:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NBComplicationLibraryItem *)recentAudiobook;
-(void)setRecentAudiobook:(NBComplicationLibraryItem *)arg1 ;
-(void)q_updateMediaItem;
-(void)q_coalescedCheckForUpdates;
-(void)_notifyObserversWithLibraryItem:(id)arg1 ;
-(void)checkForUpdates:(BOOL)arg1 ;
@end

