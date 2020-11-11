/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputDeviceCommunicationChannelImpl;
@interface AVOutputDeviceCommunicationChannel : NSObject {

	id<AVOutputDeviceCommunicationChannelImpl> _impl;

}
-(void)close;
-(void)sendData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceCommunicationChannelImpl:(id)arg1 ;
-(void)dealloc;
@end
