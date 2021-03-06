/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HDHeartbeatDatum : NSObject {

	BOOL _precededByGap;
	double _timeSinceSequenceStart;

}

@property (nonatomic,readonly) double timeSinceSequenceStart;              //@synthesize timeSinceSequenceStart=_timeSinceSequenceStart - In the implementation block
@property (nonatomic,readonly) BOOL precededByGap;                         //@synthesize precededByGap=_precededByGap - In the implementation block
+(id)datumWithTimeSinceSequenceStart:(double)arg1 preceededByGap:(BOOL)arg2 ;
-(double)timeSinceSequenceStart;
-(BOOL)precededByGap;
@end

