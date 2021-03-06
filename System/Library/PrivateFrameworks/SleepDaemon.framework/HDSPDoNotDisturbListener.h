/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HDSPDoNotDisturbListenerDelegate;
@class HDSPContextStoreManager;

@interface HDSPDoNotDisturbListener : NSObject {

	id<HDSPDoNotDisturbListenerDelegate> _delegate;
	HDSPContextStoreManager* _contextStoreManager;

}

@property (nonatomic,readonly) HDSPContextStoreManager * contextStoreManager;                   //@synthesize contextStoreManager=_contextStoreManager - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPDoNotDisturbListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startListening;
-(id<HDSPDoNotDisturbListenerDelegate>)delegate;
-(id)initWithContextStoreManager:(id)arg1 ;
-(void)setDelegate:(id<HDSPDoNotDisturbListenerDelegate>)arg1 ;
-(void)_processCoreDuetCallbackWithNewDNDState:(id)arg1 oldDNDState:(id)arg2 ;
-(HDSPContextStoreManager *)contextStoreManager;
@end

