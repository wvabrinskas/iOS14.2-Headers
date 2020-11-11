/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(void)flush;
-(OpaqueCMTimebaseRef)timebase;
-(BOOL)isReadyForMoreMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end
