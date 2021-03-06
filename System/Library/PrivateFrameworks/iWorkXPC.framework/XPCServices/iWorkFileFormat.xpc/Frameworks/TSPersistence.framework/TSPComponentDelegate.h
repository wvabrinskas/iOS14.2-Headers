/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSPComponentDelegate <NSObject>
@required
-(id)objectForIdentifier:(long long)arg1;
-(id)context;
-(BOOL)isActive;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(void)continueCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)performCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;

@end

