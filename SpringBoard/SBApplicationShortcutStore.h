//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSApplicationDataStore, NSArray, NSLock, NSString;
@protocol OS_dispatch_queue;

@interface SBApplicationShortcutStore : NSObject
{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    _Bool _isLoaded;
    _Bool _isDirty;
    FBSApplicationDataStore *_dataStore;
    NSString *_bundleIdentifier;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *languages;
@property(readonly, nonatomic) unsigned long long version;
@end
