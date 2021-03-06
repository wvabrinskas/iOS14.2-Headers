/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCDraftIssuesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _issueListID;

}

@property (nonatomic,readonly) NSString * issueListID;              //@synthesize issueListID=_issueListID - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(NSString *)issueListID;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 issueListID:(id)arg5 ;
@end

