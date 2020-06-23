//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRecentAppLayoutsDelegate-Protocol.h>

@class NSString, SBIconController, SBRecentAppLayouts;
@protocol SBAppSwitcherModelDelegate;

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate>
{
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id _recentsChangedNotificationObserver;
    id <SBAppSwitcherModelDelegate> _delegate;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBAppSwitcherModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
