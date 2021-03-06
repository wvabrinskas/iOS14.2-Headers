/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, FCEdgeCacheHint, NSError;

@interface FCCKOrderFeedQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _feedRequests;
	NSArray* _desiredKeys;
	unsigned long long _resultsLimit;
	unsigned long long _queryPriority;
	NSArray* _articleLinkKeys;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _networkEvents;
	/*^block*/id _queryCompletionHandler;
	NSArray* _resultFeedItemAndArticleRecords;
	NSArray* _resultTagRecords;
	NSArray* _resultIssueRecords;
	NSArray* _resultFeedResponses;
	NSError* _resultError;

}

@property (nonatomic,retain) NSArray * resultFeedItemAndArticleRecords;              //@synthesize resultFeedItemAndArticleRecords=_resultFeedItemAndArticleRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultTagRecords;                             //@synthesize resultTagRecords=_resultTagRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultIssueRecords;                           //@synthesize resultIssueRecords=_resultIssueRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultFeedResponses;                          //@synthesize resultFeedResponses=_resultFeedResponses - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                  //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                                  //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                   //@synthesize feedRequests=_feedRequests - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) unsigned long long queryPriority;                       //@synthesize queryPriority=_queryPriority - In the implementation block
@property (nonatomic,copy) NSArray * articleLinkKeys;                                //@synthesize articleLinkKeys=_articleLinkKeys - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;              //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                          //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(BOOL)validateOperation;
-(FCEdgeCacheHint *)edgeCacheHint;
-(NSArray *)networkEvents;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;
-(NSArray *)desiredKeys;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(NSError *)resultError;
-(void)setResultFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(void)setArticleLinkKeys:(NSArray *)arg1 ;
-(void)setResultTagRecords:(NSArray *)arg1 ;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(NSArray *)feedRequests;
-(void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3 issueRecords:(id)arg4 ;
-(NSArray *)resultFeedResponses;
-(void)setResultFeedResponses:(NSArray *)arg1 ;
-(NSArray *)resultTagRecords;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(unsigned long long)queryPriority;
-(NSArray *)articleLinkKeys;
-(id)_requiredKeys;
-(unsigned long long)resultsLimit;
-(NSArray *)resultIssueRecords;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(id)_constructFeedQuery;
-(id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)_feedRelativeDictionaryFromResultsArray:(id)arg1 ;
-(void)setResultIssueRecords:(NSArray *)arg1 ;
-(NSArray *)resultFeedItemAndArticleRecords;
-(void)setQueryPriority:(unsigned long long)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setResultError:(NSError *)arg1 ;
-(id)queryCompletionHandler;
@end

