/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BWAdaptiveBracketingParameters;
@class NSString, BWBracketSettings, NSArray, NSDictionary, NSMutableArray;

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {

	NSString* _portType;
	NSString* _sensorIDString;
	int _captureType;
	unsigned long long _captureFlags;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;
	SCD_Struct_BW8 _preferredTimeMachinePTS;
	int _timeMachineFrameCount;
	int _referenceFrameIndex;
	NSArray* _timeMachineBracketedCaptureParams;
	NSDictionary* _preBracketFrameCaptureParams;
	NSArray* _unifiedBracketedCaptureParams;
	BOOL _lensStabilizationEnabledForClientBracket;
	os_unfair_lock_s _adaptiveBracketingLock;
	id<BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
	NSMutableArray* _adaptivePreBracketFrameCaptureParams;
	NSMutableArray* _adaptiveUnifiedBracketedCaptureParams;
	BOOL _reachedEndOfAdaptiveBracketing;
	SCD_Struct_BW8 _adaptiveBracketingLastFramePTS;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSString * sensorIDString;                                     //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) unsigned long long captureFlags;                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (nonatomic,readonly) int timeMachineFrameCount;                                   //@synthesize timeMachineFrameCount=_timeMachineFrameCount - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) BOOL hasValidFrames; 
@property (nonatomic,readonly) int expectedFrameCount; 
@property (nonatomic,readonly) int expectedFrameCaptureCount; 
@property (assign,nonatomic) SCD_Struct_BW8 preferredTimeMachinePTS;                        //@synthesize preferredTimeMachinePTS=_preferredTimeMachinePTS - In the implementation block
@property (nonatomic,readonly) int expectedTimeMachineFrameCaptureCount; 
+(BOOL)supportsSecureCoding;
-(NSString *)portType;
-(void)setSensorIDString:(NSString *)arg1 ;
-(int)expectedTimeMachineFrameCaptureCount;
-(unsigned long long)hash;
-(void)setAdaptiveBracketingLastFramePTS:(SCD_Struct_BW8)arg1 ;
-(void)setPreferredTimeMachinePTS:(SCD_Struct_BW8)arg1 ;
-(int)expectedFrameCaptureCount;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(int)timeMachineFrameCount;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2 ;
-(NSString *)sensorIDString;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 adaptiveBracketingParameters:(id)arg5 ;
-(int)captureType;
-(id)unifiedBracketedCaptureParams;
-(id)adaptiveUnifiedBracketedCaptureParams;
-(int)currentExpectedAdaptiveBracketedFrameCaptureCount;
-(unsigned long long)captureFlags;
-(BOOL)isUnifiedBracketingErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 isReferenceFrame:(BOOL)arg2 ;
-(id)description;
-(BOOL)reachedEndOfAdaptiveBracketing;
-(id)preBracketFrameCaptureParams;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_BW8)adaptiveBracketingLastFramePTS;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasValidFrames;
-(void)setReachedEndOfAdaptiveBracketing:(BOOL)arg1 ;
-(id)adaptivePreBracketFrameCaptureParams;
-(id)timeMachineBracketedCaptureParams;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6 ;
-(int)adaptiveBracketingGroupCaptureCount;
-(BWBracketSettings *)bracketSettings;
-(id)adaptiveBracketingParameters;
-(int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1 ;
-(SCD_Struct_BW8)preferredTimeMachinePTS;
-(int)referenceFrameIndex;
-(void)dealloc;
-(int)expectedFrameCount;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
@end

