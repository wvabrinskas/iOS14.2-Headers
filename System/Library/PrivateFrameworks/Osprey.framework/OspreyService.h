/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OspreyRPC;
@interface OspreyService : NSObject {

	id<OspreyRPC> _channel;

}

@property (nonatomic,readonly) id<OspreyRPC> channel;              //@synthesize channel=_channel - In the implementation block
-(id<OspreyRPC>)channel;
-(id)initWithConnectionURL:(id)arg1 ;
@end

