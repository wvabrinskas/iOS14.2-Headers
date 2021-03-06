/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface ICHTMLConverterClient : NSObject {

	NSXPCConnection* _connectionToService;
	NSObject*<OS_dispatch_queue> _requestCountQueue;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestCountQueue;              //@synthesize requestCountQueue=_requestCountQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                             //@synthesize requestCount=_requestCount - In the implementation block
+(id)sharedClient;
-(id)init;
-(unsigned long long)requestCount;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)attributedStringFromHTMLString:(id)arg1 ;
-(void)resumeConnectionIfNeeded;
-(void)suspendConnectionIfNeeded;
-(NSObject*<OS_dispatch_queue>)requestCountQueue;
-(void)setRequestCountQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

