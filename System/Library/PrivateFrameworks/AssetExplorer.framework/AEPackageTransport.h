/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol AEPackageTransportDelegate;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface AEPackageTransport : PXObservable {

	id<AEPackageTransportDelegate> _delegate;
	NSMutableArray* __stagedIdentifiersInOrder;
	NSMutableDictionary* __stagedPackagesByIdentifier;
	NSMutableSet* __pendingPackageIdentifiers;

}

@property (nonatomic,readonly) NSMutableArray * _stagedIdentifiersInOrder;                     //@synthesize _stagedIdentifiersInOrder=__stagedIdentifiersInOrder - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _stagedPackagesByIdentifier;              //@synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingPackageIdentifiers;                      //@synthesize _pendingPackageIdentifiers=__pendingPackageIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<AEPackageTransportDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * expectedPackageIdentifiers; 
@property (nonatomic,readonly) long long expectedPackageCount; 
-(id)init;
-(id<AEPackageTransportDelegate>)delegate;
-(void)reportError:(id)arg1 ;
-(void)setDelegate:(id<AEPackageTransportDelegate>)arg1 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_addPackageToStaging:(id)arg1 ;
-(void)_removePackageFromStagingWithIdentifier:(id)arg1 ;
-(void)commitPackage:(id)arg1 ;
-(void)stagePackage:(id)arg1 ;
-(void)stagePackages:(id)arg1 ;
-(void)stagePackages:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)unstagePackageWithIdentifier:(id)arg1 ;
-(void)unstagePackageWithIdentifier:(id)arg1 andNotify:(BOOL)arg2 ;
-(void)unstagePackagesWithIdentifiers:(id)arg1 ;
-(id)orderedStagedIdentifiers;
-(id)stagedPackageForIdentifier:(id)arg1 ;
-(id)stagedPackages;
-(long long)expectedPackageCount;
-(NSSet *)expectedPackageIdentifiers;
-(void)addPendingPackageIdentifier:(id)arg1 ;
-(void)removePendingPackageIdentifier:(id)arg1 ;
-(NSMutableArray *)_stagedIdentifiersInOrder;
-(NSMutableDictionary *)_stagedPackagesByIdentifier;
-(NSMutableSet *)_pendingPackageIdentifiers;
-(id)packagesWithLivePhotoContent;
@end
