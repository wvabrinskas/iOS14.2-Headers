/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCacheReserved, NSObject;

@interface GEOTileCache : NSObject {

	GEOTileCacheReserved* _reserved;
	NSObject*<OS_dispatch_source> _memoryNotificationEventSource;

}

@property (nonatomic,readonly) unsigned long long currentCount; 
@property (nonatomic,readonly) unsigned long long currentCost; 
@property (assign) unsigned long long maxCapacity; 
@property (assign) unsigned long long maxCost; 
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesMatchingPredicate:(/*^block*/id)arg1 ;
-(void)_enteredBackground:(id)arg1 ;
-(id)_description;
-(void)_removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(void)_evictWithMaxCost:(unsigned long long)arg1 maxCapacity:(unsigned long long)arg2 ;
-(id)init;
-(void)removeTilesWithKeys:(id)arg1 ;
-(unsigned long long)maxCost;
-(unsigned long long)maxCapacity;
-(id)description;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
-(void)_receivedMemoryNotification;
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(void)setMaxCost:(unsigned long long)arg1 ;
-(void)enumerate:(/*^block*/id)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned long long*)arg2 ;
-(unsigned long long)currentCount;
-(unsigned long long)currentCost;
-(void)dealloc;
@end

