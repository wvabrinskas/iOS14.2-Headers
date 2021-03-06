/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCReadingHistoryObserving.h>

@interface NewsUI2.AudioRecentlyPlayedStore : NSObject <FCReadingHistoryObserving> {

	 recentlyPlayedUpdatedSignal;
	 readingHistory;
	 headlineService;
	 headlineCache;
	 paidBundleConfigManager;

}
-(void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2 ;
-(void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2 ;
-(void)readingHistoryDidClear:(id)arg1 ;
-(id)init;
@end

