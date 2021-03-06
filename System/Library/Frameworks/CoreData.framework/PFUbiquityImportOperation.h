/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSString, NSPersistentStore, PFUbiquityLocation, NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {

	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _store;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSLock* _delegateLock;
	BOOL _lockedDelegateLock;
	NSObject* _delegate;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (assign) NSObject * delegate; 
-(id)init;
-(NSObject *)delegate;
-(void)storeWillBeRemoved:(id)arg1 ;
-(void)unlockDelegateLock;
-(void)lockDelegateLock;
-(id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(NSString *)storeName;
-(void)setDelegate:(NSObject *)arg1 ;
-(id)description;
-(NSString *)localPeerID;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(NSPersistentStore *)store;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)cancel;
-(id)retainedDelegate;
-(void)dealloc;
@end

