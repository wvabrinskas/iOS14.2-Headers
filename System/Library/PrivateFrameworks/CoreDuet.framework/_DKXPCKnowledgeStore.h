/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSynchronizing.h>

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing> {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)XPCUserKnowledgeStore;
+(id)XPCKnowledgeStore;
-(id)init;
-(BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)deleteRemoteState:(id*)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)confirmConnectionWithError:(id*)arg1 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)deviceUUID;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(id)sourceDeviceIdentityFromObject:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)deleteObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)saveObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)synchronizeWithError:(id*)arg1 ;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)executeQuery:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(BOOL)arg2 error:(id*)arg3 responseQueue:(id)arg4 withCompletion:(/*^block*/id)arg5 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)sourceDeviceIdentityWithError:(id*)arg1 ;
-(NSXPCConnection *)connection;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

