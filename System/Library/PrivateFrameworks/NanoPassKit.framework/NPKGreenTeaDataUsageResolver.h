/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface NPKGreenTeaDataUsageResolver : NSObject {

	BOOL _currentlyResolving;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) BOOL currentlyResolving;                                 //@synthesize currentlyResolving=_currentlyResolving - In the implementation block
+(void)resolveGreenTeaDataUsageIfNecessary;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)resolveGreenTeaDataUsageIfNecessary;
-(void)_resolveGreenTeaDataUsageIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)currentlyResolving;
-(void)setCurrentlyResolving:(BOOL)arg1 ;
@end

