//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSFastEnumeration-Protocol.h>
#import <SpringBoardHome/SBIconIndexMutableListObserver-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>
#import <SpringBoardHome/SBTreeNode-Protocol.h>

@class NSArray, NSDate, NSHashTable, NSMutableArray, NSString, SBFolder, SBIcon, SBIconIndexMutableList;
@protocol SBIconListModelIconValidator, SBTreeNode;

@interface SBIconListModel : NSObject <SBIconIndexMutableListObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    struct SBHIconGridSize _gridSize;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    NSMutableArray *_nodeObserverTransactionStack;
    _Bool _iconStateIsDirty;
    struct SBHIconGridSizeClassSizes _gridSizeClassSizes;
    id <SBTreeNode> _parent;
    NSString *_uniqueIdentifier;
    SBFolder *_folder;
    id <SBIconListModelIconValidator> _iconValidator;
    NSDate *_hiddenDate;
    unsigned long long _overflowSlotCount;
}


// Remaining properties
@property(readonly, nonatomic) NSArray *children;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBIcon *firstIcon;
@property(readonly, nonatomic) __weak SBFolder *folder; // @synthesize folder=_folder;
@property(readonly, nonatomic) struct SBHIconGridSize gridSize; // @synthesize gridSize=_gridSize;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(copy, nonatomic) NSDate *hiddenDate; // @synthesize hiddenDate=_hiddenDate;
@property(readonly, nonatomic) struct SBHIconGridSizeClassSizes iconGridSizeClassSizes; // @synthesize iconGridSizeClassSizes=_gridSizeClassSizes;
@property(nonatomic) __weak id <SBIconListModelIconValidator> iconValidator; // @synthesize iconValidator=_iconValidator;
@property(copy, nonatomic) NSArray *icons;
@property(readonly, nonatomic) SBIcon *lastIcon;
@property(readonly, copy, nonatomic) NSString *layoutDescription;
@property(readonly, nonatomic) unsigned long long maxNumberOfIcons;
@property(readonly, nonatomic) unsigned long long numberOfIcons;
@property(readonly, nonatomic) unsigned long long numberOfNonPlaceholderIcons;
@property(readonly, nonatomic) unsigned long long numberOfUsedColumns;
@property(readonly, nonatomic) unsigned long long numberOfUsedRows;
@property(readonly, nonatomic) unsigned long long numberOfUsedSlots;
@property(nonatomic) unsigned long long overflowSlotCount; // @synthesize overflowSlotCount=_overflowSlotCount;
@property(nonatomic) __weak id <SBTreeNode> parent; // @synthesize parent=_parent;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@end
