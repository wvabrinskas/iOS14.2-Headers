/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {

	double _minimumClusteringTimeInSeconds;
	unsigned long long _algorithm;

}

@property (assign,nonatomic) double minimumClusterTimeInSeconds;              //@synthesize minimumClusteringTimeInSeconds=_minimumClusteringTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)algorithm;
-(double)minimumClusterTimeInSeconds;
-(void)setMinimumClusterTimeInSeconds:(double)arg1 ;
@end

