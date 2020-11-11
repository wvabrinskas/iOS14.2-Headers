/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPHomeKitAnalysisSessionClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface VCPHomeKitAnalysisSession : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	CF<const opaqueCMFormatDescription *>* _formatDescription;
	/*^block*/id _resultsHandler;

}
+(id)sessionWithProperties:(id)arg1 andResultsHandler:(/*^block*/id)arg2 ;
-(id)initWithProperties:(id)arg1 andResultsHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andErrorHandler:(/*^block*/id)arg3 ;
-(void)processVideoFragmentAssetData:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(id)connection;
-(void)processMessageWithOptions:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
@end
