/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore;
@class NSObject;

@interface BWMetadataTimeMachineRequest : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}
-(id)init;
-(void)complete;
-(void)waitForCompletionWithTimeout:(float)arg1 ;
-(void)dealloc;
@end

