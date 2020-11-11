/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject {

	SBButtonConsumerClient* _client;
	long long _buttonKind;
	unsigned long long _eventMask;
	long long _eventPriority;

}

@property (assign,nonatomic,__weak) SBButtonConsumerClient * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) long long buttonKind;                                //@synthesize buttonKind=_buttonKind - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                        //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long eventPriority;                             //@synthesize eventPriority=_eventPriority - In the implementation block
-(unsigned long long)hash;
-(void)setClient:(SBButtonConsumerClient *)arg1 ;
-(SBButtonConsumerClient *)client;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(long long)buttonKind;
-(void)setButtonKind:(long long)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
-(void)setEventMask:(unsigned long long)arg1 ;
-(unsigned long long)eventMask;
@end
