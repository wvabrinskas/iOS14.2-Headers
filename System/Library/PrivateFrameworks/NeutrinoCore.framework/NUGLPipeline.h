/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>

@class NSError, NUGLContext, NSMutableDictionary, NSMutableSet, NSArray, NSDictionary, NSOrderedSet;

@interface NUGLPipeline : NUGLObject {

	long long _buildStatus;
	NSError* _buildError;
	NUGLContext* _currentContext;
	NSMutableDictionary* _uniformValues;
	NSMutableDictionary* _uniformSamplers;
	NSMutableSet* _dirtyKeys;
	NSArray* _stages;
	NSDictionary* _uniforms;
	NSDictionary* _attributes;
	NSArray* _orderedAttributes;
	NSOrderedSet* _samplers;

}

@property (nonatomic,readonly) NSArray * stages;                         //@synthesize stages=_stages - In the implementation block
@property (nonatomic,readonly) NSDictionary * uniforms;                  //@synthesize uniforms=_uniforms - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSArray * orderedAttributes;              //@synthesize orderedAttributes=_orderedAttributes - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * samplers;                  //@synthesize samplers=_samplers - In the implementation block
-(void)end:(id)arg1 ;
-(void)delete;
-(id)init;
-(void)begin:(id)arg1 ;
-(NSDictionary *)uniforms;
-(void)generate:(id)arg1 ;
-(NSArray *)stages;
-(void)_build:(id)arg1 ;
-(NSDictionary *)attributes;
-(NSOrderedSet *)samplers;
-(void)run:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)build:(id)arg1 error:(out id*)arg2 ;
-(id)initWithStages:(id)arg1 ;
-(id)valueForUniform:(id)arg1 ;
-(void)setValue:(id)arg1 forUniform:(id)arg2 ;
-(id)samplerForUniform:(id)arg1 ;
-(void)setSampler:(id)arg1 forUniform:(id)arg2 ;
-(void)drawVertexArray:(id)arg1 range:(NSRange)arg2 mode:(long long)arg3 ;
-(void)_drawVertexArray:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_validate:(id)arg1 ;
-(void)_beginDrawing:(id)arg1 ;
-(void)_endDrawing:(id)arg1 ;
-(NSArray *)orderedAttributes;
@end

