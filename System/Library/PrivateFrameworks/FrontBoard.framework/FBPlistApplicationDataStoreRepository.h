/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBApplicationDataStoreRepository.h>

@protocol FBApplicationDataStoreRepositoryDelegate, OS_dispatch_queue;
@class NSURL, NSMutableDictionary, NSObject, NSString;

@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {

	NSURL* _storeURL;
	NSMutableDictionary* _state;
	BOOL _dirty;
	unsigned long long _batchCount;
	int _autoFlushDuration;
	id<FBApplicationDataStoreRepositoryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (assign,nonatomic,__weak) id<FBApplicationDataStoreRepositoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)_load;
-(id<FBApplicationDataStoreRepositoryDelegate>)delegate;
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 ;
-(id)location;
-(BOOL)isDirty;
-(id)keysForApplication:(id)arg1 ;
-(id)initWithStorePath:(id)arg1 ;
-(id)allObjectsForKeys:(id)arg1 ;
-(BOOL)_isEligibleForSaving:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 ;
-(void)flushSynchronously;
-(void)setDelegate:(id<FBApplicationDataStoreRepositoryDelegate>)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2 ;
-(void)removeAllObjectsForApplication:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 ;
-(void)beginBatchedUpdate;
-(BOOL)containsKey:(id)arg1 forApplication:(id)arg2 ;
-(id)applicationIdentifiersWithState;
-(void)dealloc;
-(void)endBatchedUpdate;
-(id)_stateQueue_storeForIdentifier:(id)arg1 ;
-(id)_stateQueue_objectForKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_stateQueue_objectsForKeys:(id)arg1 ;
-(id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg1 ;
-(void)_stateQueue_markDirty;
-(void)_stateQueue_removeStoreForIdentifier:(id)arg1 ;
-(void)_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2 ;
-(void)_writeQueue_flushSynchronously;
-(void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1 ;
@end
