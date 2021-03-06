/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation : HMDBackingStoreOperation {

	HMDBackingStoreCacheGroup* _record;
	CKRecordZoneSubscription* _subscription;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecordZoneSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
-(void)setRecord:(HMDBackingStoreCacheGroup *)arg1 ;
-(HMDBackingStoreCacheGroup *)record;
-(void)setSubscription:(CKRecordZoneSubscription *)arg1 ;
-(CKRecordZoneSubscription *)subscription;
-(id)mainReturningError;
-(id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

