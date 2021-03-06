/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDMediaDestinationControllerLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSUUID;

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging> {

	NSUUID* _stagedDestinationIdentifier;

}

@property (copy,readonly) NSUUID * stagedDestinationIdentifier;              //@synthesize stagedDestinationIdentifier=_stagedDestinationIdentifier - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithStagedDestinationIdentifier:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3 ;
-(NSUUID *)stagedDestinationIdentifier;
@end

