/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	const nstat_tcp_descriptor* _descriptor;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes; 
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned txRetransmittedBytes; 
@property (nonatomic,readonly) unsigned deltaRxDuplicateBytes; 
@property (nonatomic,readonly) unsigned deltaRxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned deltaTxRetransmittedBytes; 
@property (nonatomic,readonly) NSString * TCPState; 
@property (nonatomic,readonly) unsigned sendBufferSize; 
@property (nonatomic,readonly) unsigned sendBufferUsed; 
@property (nonatomic,readonly) unsigned txUnacked; 
@property (nonatomic,readonly) unsigned txWindow; 
@property (nonatomic,readonly) unsigned txCongestionWindow; 
@property (nonatomic,readonly) unsigned trafficManagementFlags; 
@property (nonatomic,readonly) NSString * congestionAlgorithm; 
@property (nonatomic,readonly) BOOL probeActivated; 
@property (nonatomic,readonly) BOOL connProbeFailed; 
@property (nonatomic,readonly) BOOL readProbeFailed; 
@property (nonatomic,readonly) BOOL writeProbeFailed; 
-(double)rttAverage;
-(double)rttVariation;
-(double)rttMinimum;
-(unsigned)deltaRxDuplicateBytes;
-(unsigned)connstatusReadProbeFailed;
-(BOOL)probeActivated;
-(unsigned)txWindow;
-(id)remoteAddress;
-(unsigned)trafficClass;
-(BOOL)flowUsesChannels;
-(BOOL)readProbeFailed;
-(unsigned)connstatusWriteProbeFailed;
-(unsigned)deltaTxRetransmittedBytes;
-(BOOL)interfaceCellularViaFallback;
-(unsigned)receiveBufferSize;
-(NSString *)TCPState;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)txCongestionWindow;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned)connstatusProbeActivated;
-(unsigned)txUnacked;
-(unsigned long long)networkActivityMapPart1;
-(unsigned)interfaceIndex;
-(unsigned)connstatusConnProbeFailed;
-(BOOL)interfaceCompanionLink;
-(BOOL)writeProbeFailed;
-(unsigned)trafficManagementFlags;
-(unsigned)rxDuplicateBytes;
-(id)vuuid;
-(id)localAddress;
-(BOOL)connProbeFailed;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCellular;
-(id)euuid;
-(BOOL)interfaceLoopback;
-(NSString *)congestionAlgorithm;
-(unsigned)receiveBufferUsed;
-(BOOL)interfaceUnknown;
-(unsigned)sendBufferSize;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)txRetransmittedBytes;
-(unsigned)sendBufferUsed;
-(int)epid;
-(BOOL)interfaceWired;
-(id)flowStartTimestamp;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(BOOL)failedSkywalkAction;
-(BOOL)interfaceWiFi;
-(id)processName;
-(int)processID;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(id)flowSnapshotTimestamp;
-(id)uuid;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(BOOL)failedRouteValuesLookup;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(BOOL)failedFlowswitchValuesLookup;
-(double)flowStartTimeIntervalSince1970;
-(double)flowSnapshotTimeIntervalSince1970;
-(id)descriptorDescription;
-(id)provider;
-(unsigned)deltaRxOutOfOrderBytes;
-(id)flowuuid;
@end

