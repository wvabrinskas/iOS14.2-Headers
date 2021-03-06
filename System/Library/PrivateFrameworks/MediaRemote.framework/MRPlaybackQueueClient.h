/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRPlaybackQueueClient : NSObject {

	NSMutableDictionary* _controllers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithQueue:(id)arg1 ;
-(id)subscriptionControllerForPlayerPath:(id)arg1 ;
-(void)_handlePlayerPathRemovedNotification:(id)arg1 ;
-(void)_handleOriginRemovedNotification:(id)arg1 ;
-(void)_handleApplicationRemovedNotification:(id)arg1 ;
-(void)dealloc;
@end

