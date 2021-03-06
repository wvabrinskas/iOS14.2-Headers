/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <VisualLocalization/VisualLocalization-Structs.h>
@class NSURL, NSObject;

@interface VLTraceRecorder : NSObject {

	NSURL* _destinationDirectory;
	NSObject*<OS_dispatch_queue> _queue;
	GEOOnce_s _began;
	GEOOnce_s _finished;
	NSURL* _baseDirectory;
	NSURL* _imagesDirectory;
	NSURL* _parametersDirectory;
	NSURL* _resultsDirectory;

}
+(id)defaultDirectory;
-(void)finish;
-(void)start;
-(id)initWithDirectory:(id)arg1 ;
-(void)_beginTraceIfNecessary;
-(void)_finishOnIsolationQueue;
-(void)_recordAttemptOnIsolationQueue:(id)arg1 ;
-(void)recordAttempt:(id)arg1 ;
@end

