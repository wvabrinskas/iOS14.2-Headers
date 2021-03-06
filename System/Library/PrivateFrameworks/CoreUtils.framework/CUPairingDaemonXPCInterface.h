/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CUPairingDaemonXPCInterface
@required
-(void)startMonitoringWithOptions:(unsigned long long)arg1;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)showWithCompletion:(/*^block*/id)arg1;

@end

