/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _prebufferLength;
	unsigned long long _eventTriggerOptions;
	NSArray* _mediaContainerConfigurations;

}

@property (nonatomic,copy,readonly) NSNumber * prebufferLength;                          //@synthesize prebufferLength=_prebufferLength - In the implementation block
@property (nonatomic,readonly) unsigned long long eventTriggerOptions;                   //@synthesize eventTriggerOptions=_eventTriggerOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaContainerConfigurations;              //@synthesize mediaContainerConfigurations=_mediaContainerConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSNumber *)prebufferLength;
-(unsigned long long)eventTriggerOptions;
-(NSArray *)mediaContainerConfigurations;
-(id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3 ;
@end

