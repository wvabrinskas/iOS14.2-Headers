/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXBaseDisplayCollection.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray, NSMutableSet, NSString;

@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying> {

	NSObject*<OS_dispatch_queue> _assetQueue;
	NSMutableArray* _assetList;
	NSArray* _arrangedAssetList;
	NSMutableSet* _assetUUIDs;
	BOOL _needsSorting;
	BOOL _alreadyImportedGroup;
	NSString* _identifier;

}

@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL alreadyImportedGroup;              //@synthesize alreadyImportedGroup=_alreadyImportedGroup - In the implementation block
+(id)dayFormatter;
-(id)localizedTitle;
-(void)removeAllObjects;
-(id)init;
-(long long)indexOfItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(long long)numberOfItems;
-(NSString *)identifier;
-(id)arrangedObjects;
-(id)unsortedObjects;
-(void)setAlreadyImportedGroup:(BOOL)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)arrangedObjects:(/*^block*/id)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)alreadyImportedGroup;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
