/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPRemoteInterfaceProtocol <NSObject>
@optional
-(void)receiveNativeComplicationRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replyTimingData:(id)arg1;

@required
-(void)applicationDidBecomeActive:(id)arg1;
-(void)applicationWillResignActive:(id)arg1;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidFinishConnecting:(id)arg1;
-(void)dataInterfaceDidBecomeActive:(id)arg1;
-(void)dataInterfaceWillResignActive:(id)arg1;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidTerminate:(id)arg1;
-(void)applicationContentsDidReset:(id)arg1;
-(void)applicationIsStillActive;
-(void)applicationHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 clientIdentifier:(id)arg5;
-(void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)preferredContentSizeCategory:(id)arg1;
-(void)layoutDirection:(long long)arg1;

@end

