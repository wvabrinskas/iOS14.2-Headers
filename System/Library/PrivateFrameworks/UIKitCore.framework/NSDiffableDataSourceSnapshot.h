/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class __UIDiffableDataSourceSnapshot, NSArray;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying> {

	__UIDiffableDataSourceSnapshot* _impl;

}

@property (nonatomic,readonly) __UIDiffableDataSourceSnapshot * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(NSArray *)itemIdentifiers;
-(id)initWithState:(id)arg1 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)deleteAllItems;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(id)init;
-(long long)numberOfSections;
-(long long)numberOfItems;
-(id)initWithDataSource:(id)arg1 ;
-(id)state;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_identifierAfterIdentifier:(id)arg1 ;
-(id)_identifierBeforeIdentifier:(id)arg1 ;
-(__UIDiffableDataSourceSnapshot *)impl;
-(id)identifierForIndexPath:(id)arg1 ;
-(id)indexPathForIdentifier:(id)arg1 ;
-(NSRange)sectionGlobalItemRangeForSection:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
