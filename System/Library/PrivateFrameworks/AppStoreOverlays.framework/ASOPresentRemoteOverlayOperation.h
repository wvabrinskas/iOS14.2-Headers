/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	ASORemoteOverlay* _remoteOverlay;

}

@property (assign) BOOL isExecuting;                                        //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) ASORemoteOverlay * remoteOverlay;              //@synthesize remoteOverlay=_remoteOverlay - In the implementation block
-(BOOL)isExecuting;
-(void)start;
-(void)setIsExecuting:(BOOL)arg1 ;
-(BOOL)isFinished;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)cancel;
-(void)finishExecuting;
-(ASORemoteOverlay *)remoteOverlay;
-(id)initWithRemoteOverlay:(id)arg1 ;
-(void)setRemoteOverlay:(ASORemoteOverlay *)arg1 ;
@end
