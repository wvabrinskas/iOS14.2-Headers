/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSSubscribeStreamsProtocolDelegate <MSStreamsProtocolDelegate>
@required
-(void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(BOOL)arg3 metadata:(id)arg4;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;
-(void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;
-(void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;

@end

