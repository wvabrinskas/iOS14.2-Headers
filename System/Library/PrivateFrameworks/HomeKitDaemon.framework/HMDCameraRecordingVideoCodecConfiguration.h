/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray;

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingVideoCodec* _codec;
	HMDCameraRecordingVideoCodecParameters* _parameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                                        //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingVideoCodec *)codec;
-(HMDCameraRecordingVideoCodecParameters *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3 ;
@end

