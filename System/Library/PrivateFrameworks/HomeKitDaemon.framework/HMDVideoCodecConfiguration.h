/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray;

@interface HMDVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDVideoCodec* _videoCodec;
	HMDVideoCodecParameters* _codecParameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDVideoCodec * videoCodec;                             //@synthesize videoCodec=_videoCodec - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                              //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(id)initWithCoder:(id)arg1 ;
-(HMDVideoCodec *)videoCodec;
-(NSArray *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(HMDVideoCodecParameters *)codecParameters;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3 ;
@end

