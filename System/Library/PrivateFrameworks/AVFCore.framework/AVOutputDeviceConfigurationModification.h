/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceConfigurationModification <NSObject>
@required
-(void)setDevicePassword:(id)arg1;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)addPeerToHomeGroup:(id)arg1;
-(void)removePeerWithIDFromHomeGroup:(id)arg1;
-(void)setDeviceName:(id)arg1;

@end

