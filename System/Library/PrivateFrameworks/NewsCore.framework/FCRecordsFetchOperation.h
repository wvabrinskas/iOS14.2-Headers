/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCFetchOperation.h>

@class FCRecordSource, NSArray, NSDictionary, FCInterestToken;

@interface FCRecordsFetchOperation : FCFetchOperation {

	FCRecordSource* _recordSource;
	NSArray* _recordIdentifiers;
	NSArray* _ignoreCacheForRecordIDs;
	NSDictionary* _holdTokens;
	FCInterestToken* _fetchToken;
	FCInterestToken* _refreshToken;

}
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ;
-(id)initWithRecordSource:(id)arg1 recordIdentifiers:(id)arg2 ignoreCacheForRecordIDs:(id)arg3 ;
@end

