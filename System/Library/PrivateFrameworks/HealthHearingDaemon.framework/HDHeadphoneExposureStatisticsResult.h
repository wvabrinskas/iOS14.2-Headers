/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HDHeadphoneAudioExposureBucketCollection, NSNumber;

@interface HDHeadphoneExposureStatisticsResult : NSObject {

	BOOL _eligbleForUserNotification;
	BOOL _needsRebuildOnNextUnlock;
	HDHeadphoneAudioExposureBucketCollection* _cache;
	NSNumber* _prunedCount;

}

@property (nonatomic,readonly) HDHeadphoneAudioExposureBucketCollection * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) BOOL eligbleForUserNotification;                               //@synthesize eligbleForUserNotification=_eligbleForUserNotification - In the implementation block
@property (nonatomic,readonly) NSNumber * prunedCount;                                        //@synthesize prunedCount=_prunedCount - In the implementation block
@property (assign,nonatomic) BOOL needsRebuildOnNextUnlock;                                   //@synthesize needsRebuildOnNextUnlock=_needsRebuildOnNextUnlock - In the implementation block
+(id)resultWithCache:(id)arg1 prunedCount:(id)arg2 ;
+(id)resultWithCache:(id)arg1 eligbleForUserNotification:(BOOL)arg2 ;
+(id)resultForAppendedSamplesDuringStartup;
-(HDHeadphoneAudioExposureBucketCollection *)cache;
-(NSNumber *)prunedCount;
-(BOOL)eligbleForUserNotification;
-(BOOL)needsRebuildOnNextUnlock;
-(id)copyWithEligbleForUserNotificationOverride:(BOOL)arg1 ;
-(void)setNeedsRebuildOnNextUnlock:(BOOL)arg1 ;
-(id)_initWithCache:(id)arg1 eligbleForUserNotification:(BOOL)arg2 prunedCount:(id)arg3 ;
@end

