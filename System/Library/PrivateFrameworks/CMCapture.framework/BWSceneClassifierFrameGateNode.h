/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@interface BWSceneClassifierFrameGateNode : BWNode {

	BOOL _discardsBlurryFrames;
	int _maxFrameRate;
	SCD_Struct_BW8 _lastEmittedPTS;
	int _inputFrameCount;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithMaxOutputFrameRate:(int)arg1 ;
-(void)setDiscardsBlurryFrames:(BOOL)arg1 ;
-(BOOL)discardsBlurryFrames;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)dealloc;
@end

