/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSApplicationDataStore, NSString;

@interface BKSApplicationDataStore : NSObject {

	FBSApplicationDataStore* _fbsApplicationDataStore;

}

@property (nonatomic,readonly) NSString * bundleID; 
+(void)synchronize;
+(id)storeForApplication:(id)arg1 ;
+(id)applicationsWithAvailableStores;
+(void)setPrefetchedKeys:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)bundleID;
-(void)removeAllObjects;
-(id)init;
-(void)removeObjectForKey:(id)arg1 ;
-(id)_initWithFBSApplicationDataStore:(id)arg1 ;
-(void)objectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(id)archivedObjectForKey:(id)arg1 ;
-(void)archivedObjectForKey:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(/*^block*/id)arg3 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)dealloc;
@end
