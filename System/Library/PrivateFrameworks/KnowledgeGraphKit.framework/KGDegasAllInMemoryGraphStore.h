/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KGMemoryGraphStore.h>

@class KGDatabase, NSURL;

@interface KGDegasAllInMemoryGraphStore : KGMemoryGraphStore {

	KGDatabase* _database;
	unsigned long long _transactionCounter;
	NSURL* _url;

}
+(id)_markerFilePathForPersistentStoreFileURL:(id)arg1 ;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)persistentStoreFileExtension;
+(BOOL)hasMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(BOOL)setMarkerForDiskRepresentationAtURL:(id)arg1 ;
+(void)deleteMarkerForDiskRepresentationAtURL:(id)arg1 ;
-(void)close;
-(void)beginTransaction;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2 ;
-(void)deleteMarker;
-(id)graphIdentifier;
-(void)commitTransaction;
-(void)setMarker;
-(id)_markerFilePath;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)graphVersion;
-(void)setGraphVersion:(unsigned long long)arg1 ;
-(BOOL)hasMarker;
-(unsigned long long)addNodeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)addEdgeWithLabels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(unsigned long long)arg4 targetNodeIdentifier:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)openWithMode:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateNodeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withWeight:(float)arg2 error:(id*)arg3 ;
-(BOOL)updateEdgeForIdentifier:(unsigned long long)arg1 withProperties:(id)arg2 error:(id*)arg3 ;
@end

