/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IDSXPCConnection;

@interface IDSXPCConnectionTimeoutProxy : NSObject {

	id _target;
	IDSXPCConnection* _connection;
	double _timeout;
	/*^block*/id _errorHandler;

}

@property (nonatomic,retain) id target;                                  //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) IDSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id errorHandler;                              //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)target;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 timeoutInSeconds:(double)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)setTimeout:(double)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setConnection:(IDSXPCConnection *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_invocationHasBlock:(id)arg1 ;
-(IDSXPCConnection *)connection;
-(double)timeout;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
@end
