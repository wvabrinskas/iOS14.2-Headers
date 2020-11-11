/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPQuerySourceObserver.h>

@protocol OS_dispatch_queue;
@class _MSPQueryState, MSPQuerySource, NSObject, NSArray, NSString;

@interface MSPQuery : NSObject <MSPQuerySourceObserver> {

	_MSPQueryState* _lastState;
	MSPQuerySource* _source;
	/*^block*/id _changeHandler;
	NSObject*<OS_dispatch_queue> _changeHandlerQueue;
	NSArray* _unmappedContents;

}

@property (setter=_setLastState:,getter=_lastState,retain) _MSPQueryState * lastState; 
@property (getter=_visibleState,readonly) _MSPQueryState * visibleState; 
@property (readonly) NSArray * contents; 
@property (nonatomic,copy,readonly) id changeHandler;                                               //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> changeHandlerQueue;                     //@synthesize changeHandlerQueue=_changeHandlerQueue - In the implementation block
@property (nonatomic,readonly) NSArray * unmappedContents;                                          //@synthesize unmappedContents=_unmappedContents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeHandler;
-(NSArray *)contents;
-(void)_setLastState:(id)arg1 ;
-(id)_visibleState;
-(id)_initWithSource:(id)arg1 ;
-(id)_lastState;
-(void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3 ;
-(id)originalIdentifierForObject:(id)arg1 ;
-(id)originalIdentifierForObjectAtIndex:(unsigned long long)arg1 ;
-(void)setChangeHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)changeHandlerQueue;
-(NSArray *)unmappedContents;
@end
