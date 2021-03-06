/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection, NSDictionary;

@interface ICSceneClassificationsHandler : NSObject {

	NSXPCConnection* _xpcConnection;
	NSDictionary* _cachedRequestContextDictionary;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                            //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedRequestContextDictionary;              //@synthesize cachedRequestContextDictionary=_cachedRequestContextDictionary - In the implementation block
+(id)sharedHandler;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)requestContextDictionary;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)cancelOperationsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)requestContextDictionaryWithOperationId:(BOOL)arg1 ;
-(id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2 ;
-(void)setupXpcConnection;
-(void)configureXPCConnection;
-(NSDictionary *)cachedRequestContextDictionary;
-(void)setCachedRequestContextDictionary:(NSDictionary *)arg1 ;
@end

