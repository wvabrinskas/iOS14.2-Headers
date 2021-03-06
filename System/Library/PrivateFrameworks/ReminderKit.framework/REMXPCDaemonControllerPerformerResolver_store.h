/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver {

	REMStoreContainerToken* _storeContainerToken;

}

@property (nonatomic,readonly) REMStoreContainerToken * storeContainerToken;              //@synthesize storeContainerToken=_storeContainerToken - In the implementation block
-(id)name;
-(void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(REMStoreContainerToken *)storeContainerToken;
-(id)initWithStoreContainerToken:(id)arg1 ;
@end

