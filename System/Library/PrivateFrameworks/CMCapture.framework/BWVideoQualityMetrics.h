/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BWVideoQualityMetrics : NSObject {

	long long _totalLux;
	int _frames;

}

@property (nonatomic,readonly) unsigned qualityScoringVersion; 
+(id)filterMetadata:(id)arg1 ;
+(void)initialize;
+(double)_luxThreshold;
+(double)_luxTransition;
-(void)processMetadata:(id)arg1 ;
-(double)computeQualityScore;
-(unsigned)qualityScoringVersion;
-(void)reset;
-(double)_computeLuxScore;
@end
