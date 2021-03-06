/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNodeRenderDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSString, BWGraph, BWNodeInput, BWNodeOutput, NSArray;

@interface BWNode : NSObject {

	NSMutableArray* _inputs;
	NSMutableArray* _outputs;
	NSString* _name;
	NSString* _subgraphName;
	BOOL _supportsConcurrentLiveInputCallbacks;
	BOOL _supportsLiveReconfiguration;
	BOOL _singleInput;
	BOOL _singleOutput;
	BWGraph* _graph;
	int _deferredPreparePriority;
	id<BWNodeRenderDelegate> _renderDelegate;
	long long _configurationID;
	BWNodeInput* _input;
	BWNodeOutput* _output;

}

@property (assign,nonatomic) BOOL supportsConcurrentLiveInputCallbacks;              //@synthesize supportsConcurrentLiveInputCallbacks=_supportsConcurrentLiveInputCallbacks - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveReconfiguration;                       //@synthesize supportsLiveReconfiguration=_supportsLiveReconfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subgraphName;                                  //@synthesize subgraphName=_subgraphName - In the implementation block
@property (readonly) NSString * nodeType; 
@property (readonly) NSString * nodeSubType; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (assign,nonatomic) id<BWNodeRenderDelegate> renderDelegate;                //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasNonLiveConfigurationChanges; 
@property (assign,nonatomic) BWGraph * graph;                                        //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) int deferredPreparePriority;                            //@synthesize deferredPreparePriority=_deferredPreparePriority - In the implementation block
+(void)initialize;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BWNodeOutput *)output;
-(BWGraph *)graph;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setConfigurationID:(long long)arg1 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setRenderDelegate:(id<BWNodeRenderDelegate>)arg1 ;
-(void)setGraph:(BWGraph *)arg1 ;
-(void)addOutput:(id)arg1 ;
-(long long)configurationID;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(id)init;
-(BWNodeInput *)input;
-(void)setSupportsConcurrentLiveInputCallbacks:(BOOL)arg1 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)makeCurrentConfigurationLive;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(NSString *)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(NSArray *)outputs;
-(NSString *)nodeSubType;
-(NSString *)name;
-(id<BWNodeRenderDelegate>)renderDelegate;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)description;
-(void)addInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)setSupportsLiveReconfiguration:(BOOL)arg1 ;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(BOOL)supportsConcurrentLiveInputCallbacks;
-(BOOL)supportsLiveReconfiguration;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)allInputsHaveReachedState:(int)arg1 ;
-(NSString *)subgraphName;
-(void)setSubgraphName:(NSString *)arg1 ;
-(int)deferredPreparePriority;
-(void)setDeferredPreparePriority:(int)arg1 ;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 ;
-(NSArray *)inputs;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end

