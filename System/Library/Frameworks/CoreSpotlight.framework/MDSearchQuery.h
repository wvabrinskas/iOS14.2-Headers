/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MDSearchQueryDelegate, OS_dispatch_queue;
@class NSPredicate, NSObject, CSSearchQuery, NSString, NSDictionary;

@interface MDSearchQuery : NSObject {

	unsigned long long _status;
	NSPredicate* _predicate;
	id<MDSearchQueryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSSearchQuery* _query;
	NSString* _clientBundleID;

}

@property (copy) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (assign) unsigned long long status; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                           //@synthesize query=_query - In the implementation block
@property (retain) NSString * clientBundleID;                                 //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (copy,readonly) NSDictionary * options; 
@property (__weak) id<MDSearchQueryDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(id)queryString;
-(id)initWithPredicate:(id)arg1 options:(id)arg2 ;
-(void)start;
-(CSSearchQuery *)query;
-(void)_didFinishWithError:(id)arg1 ;
-(id<MDSearchQueryDelegate>)delegate;
-(unsigned long long)status;
-(id)initWithQueryString:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)options;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setDelegate:(id<MDSearchQueryDelegate>)arg1 ;
-(NSString *)clientBundleID;
-(void)_didReturnItems:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)queue;
@end

