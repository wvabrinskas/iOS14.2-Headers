//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol SBApplicationPlaceholderLifecycleObserver
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;
- (void)applicationPlaceholdersInstalled:(NSArray *)arg1;
- (void)applicationPlaceholdersCancelled:(NSArray *)arg1;
- (void)applicationPlaceholdersAdded:(NSArray *)arg1;
@end
