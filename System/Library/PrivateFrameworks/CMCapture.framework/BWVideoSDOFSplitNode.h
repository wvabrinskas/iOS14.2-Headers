/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {

	opaqueCMFormatDescriptionRef _originalVideoFormatDescription;
	BWNodeOutput* _originalOutput;
	BWNodeOutput* _sdofOutput;

}

@property (nonatomic,readonly) BWNodeOutput * originalOutput;              //@synthesize originalOutput=_originalOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sdofOutput;                  //@synthesize sdofOutput=_sdofOutput - In the implementation block
+(void)initialize;
-(id)init;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(BWNodeOutput *)originalOutput;
-(BWNodeOutput *)sdofOutput;
-(void)dealloc;
@end

