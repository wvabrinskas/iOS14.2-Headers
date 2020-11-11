/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary;

@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	opaqueCMFormatDescriptionRef sourceVideoFormat;
	opaqueCMFormatDescriptionRef sourceAudioFormat;
	NSDictionary* videoEncoderSpecification;
	SCD_Struct_AV6 sourceVideoAverageFrameDuration;
	SCD_Struct_AV6 sourceVideoMinFrameDuration;

}
@end
