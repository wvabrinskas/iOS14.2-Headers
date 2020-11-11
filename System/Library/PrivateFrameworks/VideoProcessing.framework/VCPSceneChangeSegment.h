/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSceneChangeSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC7 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC7 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(void)mergeSegment:(id)arg1 ;
-(id)init;
-(SCD_Struct_VC7)timeRange;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(unsigned long long)numOfFrames;
@end
