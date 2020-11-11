/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSObject, NSHashTable;

@interface PKRendererVSyncController : NSObject {

	NSObject*<OS_dispatch_queue> _vSyncQueue;
	NSObject*<OS_dispatch_queue> _runloopQueue;
	NSHashTable* _rendererControllers;
	IOMobileFramebufferRef _ioMobileFramebuffer;

}
+(id)sharedController;
-(id)init;
-(void)createVSyncNotifications;
-(void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2 ;
-(void)addRendererController:(id)arg1 ;
-(void)removeRendererController:(id)arg1 ;
-(void)removeVSyncNotifications;
@end
