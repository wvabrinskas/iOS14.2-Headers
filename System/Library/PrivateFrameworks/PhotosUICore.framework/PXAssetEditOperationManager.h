/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSMapTable, NSMutableArray;

@interface PXAssetEditOperationManager : NSObject {

	NSMutableDictionary* _pendingPerformersByAsset;
	NSMutableDictionary* _operationStatusByAsset;
	NSMapTable* _observersWithContexts;
	NSMutableArray* _predicateRecords;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingPerformersByAsset;              //@synthesize pendingPerformersByAsset=_pendingPerformersByAsset - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * operationStatusByAsset;                //@synthesize operationStatusByAsset=_operationStatusByAsset - In the implementation block
@property (nonatomic,readonly) NSMapTable * observersWithContexts;                          //@synthesize observersWithContexts=_observersWithContexts - In the implementation block
@property (nonatomic,readonly) NSMutableArray * predicateRecords;                           //@synthesize predicateRecords=_predicateRecords - In the implementation block
+(id)sharedManager;
-(void)registerAdditionalPerformers;
-(id)init;
-(id)performEditOperationWithType:(id)arg1 asset:(id)arg2 delay:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerPerformerClass:(Class)arg1 withPredicate:(/*^block*/id)arg2 ;
-(long long)editOperationStatusForAsset:(id)arg1 ;
-(void)enumerateEditOperationsPerformedOnAsset:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)registerObserver:(id)arg1 context:(void*)arg2 ;
-(void)unregisterObserver:(id)arg1 context:(void*)arg2 ;
-(BOOL)canPerformEditOperationWithType:(id)arg1 onAsset:(id)arg2 ;
-(id)performEditOperationWithType:(id)arg1 asset:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_performerForEditOperationWithType:(id)arg1 onAsset:(id)arg2 ;
-(Class)_performerClassForEditOperationWithType:(id)arg1 onAsset:(id)arg2 ;
-(void)_enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_addPendingPerformer:(id)arg1 ;
-(void)_removePendingPerformer:(id)arg1 ;
-(void)_updateOperationStatusForAsset:(id)arg1 ;
-(void)_signalStatusChangeForAsset:(id)arg1 ;
-(void)_signalPendingPerformersChangeForAsset:(id)arg1 ;
-(NSMutableDictionary *)pendingPerformersByAsset;
-(NSMutableDictionary *)operationStatusByAsset;
-(NSMapTable *)observersWithContexts;
-(void)_handleCompletionOfPerformer:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 externalCompletionHandler:(/*^block*/id)arg4 ;
-(NSMutableArray *)predicateRecords;
@end
