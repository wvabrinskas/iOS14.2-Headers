/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VFXREManager : NSObject {

	 entityManager;
	 rootEntity;
	 cameraEntity;
	 device;
	 lock;
	 remappingTable;
	 registeredBindings;
	 transientDrawCall;

}

@property (readonly,nonatomic) float deltaTime; 
-(void)clear;
-(id)init;
-(void)tick:(void*)arg1 ;
-(float)deltaTime;
-(id)generateMaterialsAndReturnError:(id*)arg1 ;
-(/*^block*/id)recycleBuffersGetCompletion;
-(void)setRootEntityTransform:::;
-(void)setCameraEntityTransformProjection:::::::;
-(void)withPointerToValueAtPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDevice:(id)arg1 modelManager:(id)arg2 ;
-(BOOL)loadWithUrl:(id)arg1 loadScriptSymbols:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)registerBindingWithPath:(id)arg1 type:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)unregisterBindingWithPath:(id)arg1 ;
-(void)forEachDrawCall:(/*^block*/id)arg1 ;
@end
