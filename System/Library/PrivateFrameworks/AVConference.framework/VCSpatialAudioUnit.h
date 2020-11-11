/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AudioToolboxCore/AUAudioUnit.h>

@class AVAudioFormat, AUAudioUnitBusArray, VCAudioIOControllerClient;

@interface VCSpatialAudioUnit : AUAudioUnit {

	AVAudioFormat* _format;
	AUAudioUnitBusArray* _outputBusArray;
	AUAudioUnitBusArray* _inputBusArray;
	VCAudioIOControllerIOState* _ioState;
	VCAudioIOControllerClient* _client;
	opaqueVCAudioBufferListRef _renderBuffer;
	opaqueVCAudioBufferListRef _tempBuffer;
	double _currentTempBufferSampleTime;

}

@property (assign) opaqueVCAudioBufferListRef renderBuffer;                   //@synthesize renderBuffer=_renderBuffer - In the implementation block
@property (assign) opaqueVCAudioBufferListRef tempBuffer;                     //@synthesize tempBuffer=_tempBuffer - In the implementation block
@property (assign) VCAudioIOControllerIOState* ioState;                       //@synthesize ioState=_ioState - In the implementation block
@property (nonatomic,retain) VCAudioIOControllerClient * client;              //@synthesize client=_client - In the implementation block
+(void)registerAudioUnitDescription;
+(void)instantiate:(/*^block*/id)arg1 ;
-(/*^block*/id)internalRenderBlock;
-(void)setClient:(VCAudioIOControllerClient *)arg1 ;
-(VCAudioIOControllerClient *)client;
-(opaqueVCAudioBufferListRef)tempBuffer;
-(VCAudioIOControllerIOState*)ioState;
-(id)inputBusses;
-(id)outputBusses;
-(BOOL)allocateRenderResourcesAndReturnError:(id*)arg1 ;
-(void)deallocateRenderResources;
-(void)dealloc;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(opaqueVCAudioBufferListRef)renderBuffer;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 error:(id*)arg3 client:(id)arg4 ;
-(void)setRenderBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setTempBuffer:(opaqueVCAudioBufferListRef)arg1 ;
-(void)setIoState:(VCAudioIOControllerIOState*)arg1 ;
@end
