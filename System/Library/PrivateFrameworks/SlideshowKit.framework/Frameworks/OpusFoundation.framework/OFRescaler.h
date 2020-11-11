/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface OFRescaler : NSObject {

	NSArray* _segments;
	double _sharedCompressibility1;
	double _sharedCompressibility2;
	double _sharedExpandability1;
	double _sharedExpandability2;
	double _compressibility1Weight;
	double _compressibility2Weight;
	double _expandability1Weight;
	double _expandability2Weight;
	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;

}

@property (readonly) double defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) double minimumDuration;              //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (readonly) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
-(id)initWithSegments:(id)arg1 ;
-(double)defaultDuration;
-(double)maximumDuration;
-(void)dealloc;
-(double)minimumDuration;
-(double)computeSegmentDurations:(double*)arg1 forTotalDuration:(double)arg2 ;
-(double)computeSegmentDurations:(double*)arg1 forSpeedFactor:(double)arg2 ;
@end
