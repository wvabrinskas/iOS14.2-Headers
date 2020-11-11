/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSMutableDictionary, BWNodeInput;

@interface BWInferenceSynchronizerNode : BWNode {

	NSMutableDictionary* _mostRecentEmittedCaptureIdentifierByPortType;
	int _indexOfInputProvidingOutputSampleBuffer;
	int _indexOfInputProvidingOnlyInferences;
	int _indexOfInputProvidingPreferredInferences;
	SCD_Struct_BW88 _contexts[2];
	os_unfair_lock_s _bufferServicingLock;
	unsigned char _maximumNumberOfInflightBuffers;
	unsigned short _errorHandlingModel;
	BOOL _synchronizesTopLevelAttachments;

}

@property (nonatomic,readonly) unsigned short errorHandlingModel;                            //@synthesize errorHandlingModel=_errorHandlingModel - In the implementation block
@property (nonatomic,readonly) BWNodeInput * inputProvidingOutputSampleBuffer; 
@property (nonatomic,readonly) BWNodeInput * inputProvidingOnlyInferences; 
@property (nonatomic,readonly) BWNodeInput * inputProvidingPreferredInferences; 
@property (assign,nonatomic) BOOL synchronizesTopLevelAttachments;                           //@synthesize synchronizesTopLevelAttachments=_synchronizesTopLevelAttachments - In the implementation block
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(id)init;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(id)nodeSubType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(id)initWithIndexOfInputProvidingOutputSampleBuffer:(int)arg1 indexOfInputProvidingPreferredInferences:(int)arg2 errorHandlingModel:(unsigned short)arg3 ;
-(unsigned short)errorHandlingModel;
-(void)_attemptBufferOrErrorEmission;
-(opaqueCMSampleBufferRef)_synchronizedBufferFromQueue:(id)arg1 withIdentifier:(unsigned)arg2 andPortType:(id)arg3 ;
-(BOOL)synchronizesTopLevelAttachments;
-(BWNodeInput *)inputProvidingOutputSampleBuffer;
-(BWNodeInput *)inputProvidingPreferredInferences;
-(BWNodeInput *)inputProvidingOnlyInferences;
-(id)_bufferArrayToString:(id)arg1 ;
-(void)setSynchronizesTopLevelAttachments:(BOOL)arg1 ;
-(void)dealloc;
@end
