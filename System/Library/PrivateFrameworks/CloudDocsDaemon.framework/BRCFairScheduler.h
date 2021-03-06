/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_workloop;
@class NSObject, NSString, NSMutableDictionary;

@interface BRCFairScheduler : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSString* _name;
	unsigned long long _maxRegistedSourceBit;
	unsigned long long _lastVisitedBit;
	NSMutableDictionary* _sourceForBitIndex;
	BOOL _resumed;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> workloop; 
-(void)close;
-(void)schedule;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)addSource:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)initWithWorkloop:(id)arg1 name:(id)arg2 ;
-(id)sourceForBitIndex:(unsigned long long)arg1 ;
-(void)unregisterSources;
-(void)signalSourceForBitIndex:(unsigned long long)arg1 ;
@end

