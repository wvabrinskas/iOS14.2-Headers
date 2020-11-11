/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AEInvalidationRouterDelegate;
@class NSObject, NSError;

@interface AEInvalidationRouter : NSObject {

	BOOL _processedInvalidation;
	BOOL _forwardError;
	NSObject*<OS_dispatch_queue> _queue;
	id<AEInvalidationRouterDelegate> _delegate;
	long long _mode;
	NSError* _storedError;

}

@property (nonatomic,readonly) id invalidationHandler; 
-(id)init;
-(id)invalidationHandler;
-(void)setRouterMode:(long long)arg1 ;
-(void)fetchCapturedErrorWithCompletion:(/*^block*/id)arg1 ;
-(void)setRouterDelegate:(id)arg1 ;
@end
