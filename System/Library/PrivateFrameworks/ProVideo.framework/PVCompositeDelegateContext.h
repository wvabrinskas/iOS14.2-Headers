/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PVInstructionGraphSourceNode, PVColorSpace;

@interface PVCompositeDelegateContext : NSObject {

	PVInstructionGraphSourceNode* _sourceNode;
	id _preprocessData;
	PVColorSpace* _renderingColorSpace;

}

@property (nonatomic,__weak,readonly) PVInstructionGraphSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,readonly) id preprocessData;                                             //@synthesize preprocessData=_preprocessData - In the implementation block
@property (nonatomic,readonly) PVColorSpace * renderingColorSpace;                            //@synthesize renderingColorSpace=_renderingColorSpace - In the implementation block
-(PVInstructionGraphSourceNode *)sourceNode;
-(id)initWithNode:(id)arg1 ;
-(id)preprocessData;
-(void)setPreprocessData:(id)arg1 ;
-(void)setRenderColorSpace:(id)arg1 ;
-(PVColorSpace *)renderingColorSpace;
@end
