/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {

	NSError* _terminalError;

}
-(void)flush;
-(long long)status;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(id)error;
-(void)flushSegment;
-(void)finishWriting;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)dealloc;
@end
