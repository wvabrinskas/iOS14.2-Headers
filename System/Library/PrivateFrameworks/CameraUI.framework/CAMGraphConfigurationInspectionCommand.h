/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand {

	CAMCaptureGraphConfiguration* __knownGraphConfiguration;
	CAMCaptureGraphConfiguration* __resolvedGraphConfiguration;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _knownGraphConfiguration;                                                      //@synthesize _knownGraphConfiguration=__knownGraphConfiguration - In the implementation block
@property (setter=_setResolvedGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _resolvedGraphConfiguration;              //@synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration - In the implementation block
-(CAMCaptureGraphConfiguration *)_knownGraphConfiguration;
-(id)userInfo;
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(id)initWithKnownGraphConfiguration:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(long long)_resolvedVideoConfigurationFromContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

