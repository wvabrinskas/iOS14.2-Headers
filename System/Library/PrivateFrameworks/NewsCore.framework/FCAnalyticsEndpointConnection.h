/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCEndpointConnection, FCAsyncSerialQueue;

@interface FCAnalyticsEndpointConnection : NSObject {

	FCEndpointConnection* _endpointConnection;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) FCEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * serialQueue;                       //@synthesize serialQueue=_serialQueue - In the implementation block
-(FCAsyncSerialQueue *)serialQueue;
-(FCEndpointConnection *)endpointConnection;
-(void)setSerialQueue:(FCAsyncSerialQueue *)arg1 ;
-(id)initWithSourceApplicationBundleIdentifier:(id)arg1 ;
-(void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 priority:(float)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setEndpointConnection:(FCEndpointConnection *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 ;
-(void)uploadEnvelopeBatch:(id)arg1 withURL:(id)arg2 valuesByHTTPHeaderField:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
