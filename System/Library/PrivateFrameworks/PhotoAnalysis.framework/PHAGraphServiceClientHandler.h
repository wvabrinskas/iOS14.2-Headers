/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAServiceClientHandler, PGManager, PFDispatchQueue, NSString;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling> {

	PHAServiceClientHandler* _serviceClientHandler;
	PGManager* _pgGraphManager;
	PFDispatchQueue* _requestQueue;
	unsigned long long _requestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsGraphUpdateNotifications;
-(void)handleOperation:(id)arg1 ;
-(void)runCurationWithItems:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_endGraphOperation;
-(id)initWithServiceClientHandler:(id)arg1 ;
-(void)requestSignalModelInfosWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)operationWillStart:(id)arg1 ;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)currentlyUnavailableError;
-(void)operationDidFinish:(id)arg1 ;
-(void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3 withOptions:(id)arg4 context:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)_beginGraphOperation:(id)arg1 ;
-(void)graphUpdateIsConsistent;
-(id)phaGraphManager;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)wantsLiveGraphUpdates;
-(void)graphUpdateDidStop;
-(unsigned char)suggestionProfileFromSuggestionType:(unsigned short)arg1 subtype:(unsigned short)arg2 ;
@end

