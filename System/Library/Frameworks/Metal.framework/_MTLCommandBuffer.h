/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLObjectWithLabel.h>

@protocol MTLCommandEncoder, MTLCommandQueue, MTLBuffer;
@class _MTLCommandQueue, NSError, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;

@interface _MTLCommandBuffer : _MTLObjectWithLabel {

	id<MTLCommandEncoder> _currentCommandEncoder;
	_MTLCommandQueue*<MTLCommandQueue> _queue;
	MTLDispatch* _scheduledDispatchList;
	MTLDispatch* _scheduledDispatchListTail;
	MTLDispatch* _completedDispatchList;
	MTLDispatch* _completedDispatchListTail;
	MTLSyncDispatch* _syncDispatchList;
	MTLSyncDispatch* _syncDispatchListTail;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	unsigned long long _creationTime;
	unsigned long long _enqueueTime;
	unsigned long long _commitTime;
	unsigned long long _submitToKernelTime;
	unsigned long long _submitToHardwareTime;
	unsigned long long _completionInterruptTime;
	unsigned long long _completionHandlerEnqueueTime;
	unsigned long long _completionHandlerExecutionTime;
	unsigned long long _status;
	NSError* _error;
	BOOL _skipRender;
	BOOL _profilingEnabled;
	BOOL _scheduledCallbacksDone;
	BOOL _completedCallbacksDone;
	BOOL _strongObjectReferences;
	NSDictionary* _profilingResults;
	BOOL _retainedReferences;
	BOOL _synchronousDebugMode;
	NSMutableDictionary* _userDictionary;
	unsigned long long _kernelStartTime;
	unsigned long long _kernelEndTime;
	unsigned long long _gpuStartTime;
	unsigned long long _gpuEndTime;
	unsigned long long _numEncoders;
	unsigned long long _numThisCommandBuffer;
	unsigned long long _listIndex;
	BOOL _ownedByParallelEncoder;
	BOOL _wakeOnCommit;
	NSMutableArray* _retainedObjects;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	BOOL _StatEnabled;
	/*^block*/id _perfSampleHandlerBlock;
	BOOL _hasPresent;
	id<MTLBuffer> _progressBuffer;
	unsigned _progressOffset;
	BOOL _creatingProgressEncoder;
	BOOL _needsFrameworkAssistedErrorTracking;
	NSMutableArray* _encoderInfos;
	NSMutableArray* _logs;
	unsigned long long _errorOptions;

}

@property (readonly) BOOL retainedReferences;                                                      //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (readonly) BOOL synchronousDebugMode;                                                    //@synthesize synchronousDebugMode=_synchronousDebugMode - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;                                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long status;                                                    //@synthesize status=_status - In the implementation block
@property (copy) NSString * label; 
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (readonly) unsigned long long globalTraceObjectID;                                       //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (readonly) NSMutableArray * logs;                                                        //@synthesize logs=_logs - In the implementation block
@property (nonatomic,readonly) double kernelStartTime; 
@property (nonatomic,readonly) double kernelEndTime; 
@property (nonatomic,readonly) double GPUStartTime; 
@property (nonatomic,readonly) double GPUEndTime; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;              //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numThisCommandBuffer;                              //@synthesize numThisCommandBuffer=_numThisCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numEncoders;                                       //@synthesize numEncoders=_numEncoders - In the implementation block
@property (getter=getListIndex,nonatomic,readonly) unsigned long long listIndex;                   //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,nonatomic) BOOL ownedByParallelEncoder;                                          //@synthesize ownedByParallelEncoder=_ownedByParallelEncoder - In the implementation block
@property (assign,nonatomic) unsigned long long errorOptions;                                      //@synthesize errorOptions=_errorOptions - In the implementation block
+(void)initialize;
-(unsigned long long)getListIndex;
-(void)commit;
-(BOOL)isProfilingEnabled;
-(NSMutableArray *)logs;
-(void)didSchedule:(unsigned long long)arg1 error:(id)arg2 ;
-(void)setOwnedByParallelEncoder:(BOOL)arg1 ;
-(double)GPUStartTime;
-(void)setErrorOptions:(unsigned long long)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)commitAndHold;
-(void)waitUntilScheduled;
-(BOOL)retainedReferences;
-(unsigned long long)errorOptions;
-(BOOL)synchronousDebugMode;
-(void)kernelSubmitTime;
-(void)processEncoderInfos;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(unsigned long long)numEncoders;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg1 ;
-(void)enqueue;
-(void)waitUntilCompleted;
-(void)setNumThisCommandBuffer:(unsigned long long)arg1 ;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(BOOL)skipRender;
-(double)GPUEndTime;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg1 ;
-(BOOL)ownedByParallelEncoder;
-(void)_addRetainedObject:(id)arg1 ;
-(BOOL)isCommitted;
-(id)progressTrackingRenderCommandEncoder;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(BOOL)commitAndWaitUntilSubmitted;
-(void)initProgressTracking;
-(void)commitAndReset;
-(BOOL)isStatEnabled;
-(void)popDebugGroup;
-(void)setCommitted:(BOOL)arg1 ;
-(unsigned long long)getAndIncrementNumEncoders;
-(void)getDriverEncoderInfoData:(id)arg1 ;
-(NSDictionary *)profilingResults;
-(void)setNumEncoders:(unsigned long long)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)setStatEnabled:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(unsigned long long)globalTraceObjectID;
-(unsigned long long)status;
-(unsigned long long)numThisCommandBuffer;
-(NSError *)error;
-(void)runPerfCounterCallbackWithBlock:(/*^block*/id)arg1 ;
-(id)progressTrackingComputeCommandEncoder;
-(id)description;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3 ;
-(double)kernelEndTime;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void*)debugBufferContentsWithLength:(unsigned long long*)arg1 ;
-(id)progressTrackingBlitCommandEncoder;
-(id)accelerationStructureCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg1 ;
-(NSMutableDictionary *)userDictionary;
-(void)pushDebugGroup:(id)arg1 ;
-(double)kernelStartTime;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
