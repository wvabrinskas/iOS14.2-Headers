/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol QLPreviewCollectionServiceProtocol <QLPreviewCollectionProtocol>
@required
-(void)setNotificationCenter:(id)arg1;
-(void)getNetworkObserverWithCompletionBlock:(/*^block*/id)arg1;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(void)invalidateService;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(/*^block*/id)arg1;
-(void)setAllowInteractiveTransitions:(BOOL)arg1;

@end

