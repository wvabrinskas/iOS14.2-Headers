//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHIconDragAutoScrollAssistantDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragObserver-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString, SBHIconDragAutoScrollAssistant, SBHIconManager, SBIconDraggingEditContext;

@interface SBIconDragManager : NSObject <SBIconListViewDragObserver, SBHIconDragAutoScrollAssistantDelegate>
{
    NSMapTable *_iconDrags;
    NSMapTable *_uniqueIdentifiersPerDropSession;
    NSMapTable *_uniqueIdentifiersPerDragSession;
    NSMutableDictionary *_revertingReplacementIndexPaths;
    NSHashTable *_platterViews;
    SBHIconDragAutoScrollAssistant *_autoScrollAssistant;
    SBHIconManager *_iconManager;
    SBIconDraggingEditContext *_draggingEditContext;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) SBIconDraggingEditContext *draggingEditContext; // @synthesize draggingEditContext=_draggingEditContext;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isIconDragging) _Bool iconDragging;
@property(nonatomic) __weak SBHIconManager *iconManager; // @synthesize iconManager=_iconManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTrackingActiveOrDroppingIconDrags) _Bool trackingActiveOrDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingDroppingIconDrags) _Bool trackingDroppingIconDrags;
@property(readonly, nonatomic, getter=isTrackingMultipleIconDrags) _Bool trackingMultipleIconDrags;
@property(readonly, nonatomic, getter=isTrackingMultipleItemIconDrags) _Bool trackingMultipleItemIconDrags;
@property(readonly, nonatomic, getter=isTrackingUserActiveIconDrags) _Bool trackingUserActiveIconDrags;
@end
