/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {

	NURenderPipeline* _renderPipeline;
	NUComposition* _composition;
	SCD_Struct_NU7 _pixelSize;

}
-(BOOL)load:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(SCD_Struct_NU7)pixelSizeWithSourceOptions:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
@end
