/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RBSServiceLocalProtocol;
#import <RunningBoardServices/RunningBoardServices-Structs.h>
@class RBSAssertion, RBSProcessMonitor, RBSTerminateContext, RBSProcessPredicate, NSHashTable;

@interface RBSTerminationAssertion : NSObject {

	os_unfair_lock_s _lock;
	RBSAssertion* _assertion;
	RBSProcessMonitor* _monitor;
	RBSTerminateContext* _terminateContext;
	RBSProcessPredicate* _predicate;
	id<RBSServiceLocalProtocol> _service;
	unsigned long long _state;
	BOOL _processExists;
	NSHashTable* _observers;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL processExists; 
-(void)removeObserver:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 ;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(id)initWithPredicate:(id)arg1 context:(id)arg2 service:(id)arg3 ;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithTarget:(id)arg1 context:(id)arg2 ;
-(BOOL)processExists;
-(void)invalidate;
-(BOOL)isValid;
@end

