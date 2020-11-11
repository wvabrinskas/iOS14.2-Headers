/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, MXCPUMetric, MXGPUMetric, MXCellularConditionMetric, MXAppRunTimeMetric, MXLocationActivityMetric, MXNetworkTransferMetric, MXAppLaunchMetric, MXAppResponsivenessMetric, MXDiskIOMetric, MXMemoryMetric, MXDisplayMetric, MXAnimationMetric, MXAppExitMetric, NSArray, MXMetaData;

@interface MXMetricPayload : NSObject <NSSecureCoding> {

	BOOL _includesMultipleApplicationVersions;
	NSString* _latestApplicationVersion;
	NSDate* _timeStampBegin;
	NSDate* _timeStampEnd;
	MXCPUMetric* _cpuMetrics;
	MXGPUMetric* _gpuMetrics;
	MXCellularConditionMetric* _cellularConditionMetrics;
	MXAppRunTimeMetric* _applicationTimeMetrics;
	MXLocationActivityMetric* _locationActivityMetrics;
	MXNetworkTransferMetric* _networkTransferMetrics;
	MXAppLaunchMetric* _applicationLaunchMetrics;
	MXAppResponsivenessMetric* _applicationResponsivenessMetrics;
	MXDiskIOMetric* _diskIOMetrics;
	MXMemoryMetric* _memoryMetrics;
	MXDisplayMetric* _displayMetrics;
	MXAnimationMetric* _animationMetrics;
	MXAppExitMetric* _applicationExitMetrics;
	NSArray* _signpostMetrics;
	MXMetaData* _metaData;

}

@property (retain) MXCPUMetric * cpuMetrics;                                                  //@synthesize cpuMetrics=_cpuMetrics - In the implementation block
@property (retain) MXGPUMetric * gpuMetrics;                                                  //@synthesize gpuMetrics=_gpuMetrics - In the implementation block
@property (retain) MXCellularConditionMetric * cellularConditionMetrics;                      //@synthesize cellularConditionMetrics=_cellularConditionMetrics - In the implementation block
@property (retain) MXAppRunTimeMetric * applicationTimeMetrics;                               //@synthesize applicationTimeMetrics=_applicationTimeMetrics - In the implementation block
@property (retain) MXLocationActivityMetric * locationActivityMetrics;                        //@synthesize locationActivityMetrics=_locationActivityMetrics - In the implementation block
@property (retain) MXNetworkTransferMetric * networkTransferMetrics;                          //@synthesize networkTransferMetrics=_networkTransferMetrics - In the implementation block
@property (retain) MXAppLaunchMetric * applicationLaunchMetrics;                              //@synthesize applicationLaunchMetrics=_applicationLaunchMetrics - In the implementation block
@property (retain) MXAppResponsivenessMetric * applicationResponsivenessMetrics;              //@synthesize applicationResponsivenessMetrics=_applicationResponsivenessMetrics - In the implementation block
@property (retain) MXDiskIOMetric * diskIOMetrics;                                            //@synthesize diskIOMetrics=_diskIOMetrics - In the implementation block
@property (retain) MXMemoryMetric * memoryMetrics;                                            //@synthesize memoryMetrics=_memoryMetrics - In the implementation block
@property (retain) MXDisplayMetric * displayMetrics;                                          //@synthesize displayMetrics=_displayMetrics - In the implementation block
@property (retain) MXAnimationMetric * animationMetrics;                                      //@synthesize animationMetrics=_animationMetrics - In the implementation block
@property (retain) MXAppExitMetric * applicationExitMetrics;                                  //@synthesize applicationExitMetrics=_applicationExitMetrics - In the implementation block
@property (retain) NSArray * signpostMetrics;                                                 //@synthesize signpostMetrics=_signpostMetrics - In the implementation block
@property (retain) MXMetaData * metaData;                                                     //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * latestApplicationVersion;                                     //@synthesize latestApplicationVersion=_latestApplicationVersion - In the implementation block
@property (readonly) BOOL includesMultipleApplicationVersions;                                //@synthesize includesMultipleApplicationVersions=_includesMultipleApplicationVersions - In the implementation block
@property (readonly) NSDate * timeStampBegin;                                                 //@synthesize timeStampBegin=_timeStampBegin - In the implementation block
@property (readonly) NSDate * timeStampEnd;                                                   //@synthesize timeStampEnd=_timeStampEnd - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(MXDisplayMetric *)displayMetrics;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(MXMetaData *)metaData;
-(void)setDisplayMetrics:(MXDisplayMetric *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)JSONRepresentation;
-(void)setMetaData:(MXMetaData *)arg1 ;
-(NSArray *)signpostMetrics;
-(MXCPUMetric *)cpuMetrics;
-(MXDiskIOMetric *)diskIOMetrics;
-(void)setApplicationTimeMetrics:(MXAppRunTimeMetric *)arg1 ;
-(void)setCpuMetrics:(MXCPUMetric *)arg1 ;
-(void)setGpuMetrics:(MXGPUMetric *)arg1 ;
-(void)setNetworkTransferMetrics:(MXNetworkTransferMetric *)arg1 ;
-(void)setLocationActivityMetrics:(MXLocationActivityMetric *)arg1 ;
-(void)setCellularConditionMetrics:(MXCellularConditionMetric *)arg1 ;
-(void)setDiskIOMetrics:(MXDiskIOMetric *)arg1 ;
-(void)setMemoryMetrics:(MXMemoryMetric *)arg1 ;
-(void)setApplicationLaunchMetrics:(MXAppLaunchMetric *)arg1 ;
-(void)setApplicationResponsivenessMetrics:(MXAppResponsivenessMetric *)arg1 ;
-(void)setAnimationMetrics:(MXAnimationMetric *)arg1 ;
-(void)setApplicationExitMetrics:(MXAppExitMetric *)arg1 ;
-(void)setSignpostMetrics:(NSArray *)arg1 ;
-(id)DictionaryRepresentation;
-(id)initWithPayloadData:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 withMetaData:(id)arg5 withMetrics:(id)arg6 ;
-(id)initWithAppVersion:(id)arg1 withMutipleAppVersions:(BOOL)arg2 withTimeStampBegin:(id)arg3 withTimeStampEnd:(id)arg4 ;
-(NSString *)latestApplicationVersion;
-(BOOL)includesMultipleApplicationVersions;
-(NSDate *)timeStampBegin;
-(NSDate *)timeStampEnd;
-(MXGPUMetric *)gpuMetrics;
-(MXCellularConditionMetric *)cellularConditionMetrics;
-(MXAppRunTimeMetric *)applicationTimeMetrics;
-(MXLocationActivityMetric *)locationActivityMetrics;
-(MXNetworkTransferMetric *)networkTransferMetrics;
-(MXAppLaunchMetric *)applicationLaunchMetrics;
-(MXAppResponsivenessMetric *)applicationResponsivenessMetrics;
-(MXMemoryMetric *)memoryMetrics;
-(MXAnimationMetric *)animationMetrics;
-(MXAppExitMetric *)applicationExitMetrics;
@end
