/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction, OS_dispatch_source;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGXpcTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	atomic_flag _done;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)transactionWithName:(const void*)arg1 ;
-(void)done;
-(id)init;
-(void)setTimeout:(double)arg1 ;
-(id)initWithName:(const void*)arg1 ;
-(BOOL)doneReturningWasDone;
-(void)dealloc;
@end
