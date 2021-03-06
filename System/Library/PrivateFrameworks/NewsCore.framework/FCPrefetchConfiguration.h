/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NTPBPrefetchConfig, NSDictionary;

@interface FCPrefetchConfiguration : NSObject {

	NTPBPrefetchConfig* _pbConfig;
	NSDictionary* _configDict;
	BOOL _backgroundFetchEnabled;
	BOOL _shouldPrefetchForYouFeed;
	double _minimumBackgroundFetchInterval;
	unsigned long long _maximumFavoritesFeedsToPrefetch;
	double _prefetchedForYouExpiration;

}

@property (getter=isBackgroundFetchEnabled,nonatomic,readonly) BOOL backgroundFetchEnabled;              //@synthesize backgroundFetchEnabled=_backgroundFetchEnabled - In the implementation block
@property (nonatomic,readonly) double minimumBackgroundFetchInterval;                                    //@synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrefetchForYouFeed;                                            //@synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumFavoritesFeedsToPrefetch;                       //@synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch - In the implementation block
@property (nonatomic,readonly) double prefetchedForYouExpiration;                                        //@synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)shouldPrefetchForYouFeed;
-(id)initWithPBPrefetchConfig:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)maximumFavoritesFeedsToPrefetch;
-(id)initWithDefaults;
-(BOOL)isBackgroundFetchEnabled;
-(double)minimumBackgroundFetchInterval;
-(double)prefetchedForYouExpiration;
@end

