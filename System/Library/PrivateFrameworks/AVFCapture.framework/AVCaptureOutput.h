/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {

	AVCaptureOutputInternal* _outputInternal;

}

@property (nonatomic,readonly) NSArray * connections; 
+(id)allOutputSubclasses;
+(void)initialize;
+(id)availableVideoCodecTypesForSourceDevice:(id)arg1 sourceFormat:(id)arg2 outputDimensions:(SCD_Struct_AV19)arg3 fileType:(id)arg4 videoCodecTypesWhiteList:(id)arg5 ;
+(long long)dataDroppedReasonFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)bumpChangeSeed;
-(int)changeSeed;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(id)sinkID;
-(void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(void)setSinkID:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(BOOL)hasRequiredOutputFormatForConnection:(id)arg1 ;
-(id)_inputForConnection:(id)arg1 ;
-(CGSize)outputSizeForSourceFormat:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)safelyHandleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodec:(id)arg3 isIris:(BOOL)arg4 ;
-(id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3 ;
-(void)performBlockOnSessionNotifyingThread:(/*^block*/id)arg1 ;
-(void)handleServerConnectionDeathForFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)liveConnections;
-(unsigned)requiredOutputFormatForConnection:(id)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2 ;
-(id)firstEnabledConnectionForMediaType:(id)arg1 ;
-(id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 videoCodecType:(id)arg3 fileType:(id)arg4 isIris:(BOOL)arg5 ;
-(BOOL)updateVideoSettingsForConnection:(id)arg1 ;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(NSArray *)connections;
-(void)setSession:(id)arg1 ;
-(id)session;
-(void)removeConnection:(id)arg1 ;
-(id)connectionWithMediaType:(id)arg1 ;
-(id)initSubclass;
-(void)updateMetadataTransformForSourceFormat:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(void)dealloc;
@end

