/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSURL, NSOperationQueue, NSSet;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@optional
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg1;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(NSSet *)observedPresentedItemUbiquityAttributes;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedItemDidChange;
-(NSURL *)primaryPresentedItemURL;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

