/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface TSUMutableWarningSet : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _warnings;

}

@property (readonly) unsigned long long count; 
-(id)initWithSet:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)unionSet:(id)arg1 ;
-(void)addWarning:(id)arg1 ;
-(id)warningsPassingTest:(/*^block*/id)arg1 ;
-(BOOL)containsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)popAllWarnings;
-(id)popAllWarningsIfContainsWarningPassingTest:(/*^block*/id)arg1 ;
-(id)warningsOfKind:(long long)arg1 ;
-(BOOL)hasWarningsOfKind:(long long)arg1 ;
@end
