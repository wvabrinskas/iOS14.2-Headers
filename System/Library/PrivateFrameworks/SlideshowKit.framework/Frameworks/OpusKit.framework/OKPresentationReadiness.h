/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OKPresentationReadiness <NSObject>
@required
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1;
-(void)removeAllReadyNotifications;
-(BOOL)isReady:(BOOL)arg1;
-(double)readyProgress:(BOOL)arg1;

@end

