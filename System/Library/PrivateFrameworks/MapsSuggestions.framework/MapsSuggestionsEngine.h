/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestionsObject.h>
#import <MapsSuggestions/MapsSuggestionsResourceDepot.h>

@protocol MapsSuggestionsResourceDepot, OS_dispatch_queue;
@class MapsSuggestionsManager, NSObject, GEOAutomobileOptions, NSString;

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot> {

	id<MapsSuggestionsResourceDepot> _resourceDepot;
	MapsSuggestionsManager* _entryManager;
	NSObject*<OS_dispatch_queue> _optionsSerialQueue;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;

}

@property (assign,nonatomic) int mapType;                                           //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;              //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)removeAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)attachSink:(id)arg1 ;
-(id)oneContacts;
-(id)oneFlightUpdater;
-(BOOL)oneShotTopSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(id)oneEventKit;
-(NSString *)uniqueName;
-(id)oneSourceDelegate;
-(id)oneVirtualGarage;
-(id)onePortrait;
-(BOOL)saveStorageToFile:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)strategy;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(id)initWithEntryManager:(id)arg1 resourceDepot:(id)arg2 ;
-(void)addAdditionalFilter:(id)arg1 forSink:(id)arg2 ;
-(void)hintRefreshOfType:(long long)arg1 ;
-(BOOL)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(/*^block*/id)arg4 onQueue:(id)arg5 ;
-(id)oneRoutine;
-(BOOL)loadStorageFromFile:(id)arg1 callback:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)oneNetworkRequester;
-(id)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)topSuggestionsFromStorageFile:(id)arg1 sink:(id)arg2 count:(unsigned long long)arg3 transportType:(int)arg4 callback:(/*^block*/id)arg5 onQueue:(id)arg6 ;
-(id)manager;
-(id)oneMapsSync;
-(void)detachSink:(id)arg1 ;
-(id)oneUser;
-(id)oneInsights;
-(BOOL)loadStorageFromFile:(id)arg1 ;
-(id)oneFavorites;
-(id)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 ;
@end

