/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RCWaveformSegment : NSObject <NSSecureCoding> {

	NSData* _averagePowerLevelData;
	BOOL _isRendered;
	SCD_Struct_RC7 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC7 timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL isRendered;                                  //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) const float* averagePowerLevels; 
@property (nonatomic,readonly) long long averagePowerLevelsCount; 
+(void)initialize;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1 ;
+(id)emptySegmentWithTimeRange:(SCD_Struct_RC7)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1 ;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3 ;
+(id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
+(id)_segmentByMergingMergableSegments:(id)arg1 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4 ;
-(id)segmentByClippingToTimeRange:(SCD_Struct_RC7)arg1 ;
-(long long)averagePowerLevelsCount;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelVector:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelData:(id)arg2 ;
-(SCD_Struct_RC7)timeRange;
-(id)description;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)_segmentWithValuesInContainedTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)verboseDescription;
-(id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)simpleDescription;
-(BOOL)isWaveformDataEqualToDataInSegment:(id)arg1 ;
-(void)setIsRendered:(BOOL)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 ;
-(BOOL)isRendered;
-(const float*)averagePowerLevels;
-(id)copyWithAdjustedTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)_initWithTimeRange:(SCD_Struct_RC7)arg1 averagePowerLevelData:(id)arg2 ;
@end

