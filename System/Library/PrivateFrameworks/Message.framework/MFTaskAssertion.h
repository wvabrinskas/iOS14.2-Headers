/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class EFProcessTransaction, BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	EFProcessTransaction* _transaction;
	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
+(id)log;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
-(BOOL)isValid;
-(void)dealloc;
@end

