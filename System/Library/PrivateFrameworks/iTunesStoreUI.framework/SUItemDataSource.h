/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SUItemDataSource : NSObject
+(id)sharedDataSource;
+(void)setSharedDataSource:(id)arg1 ;
-(long long)itemTypeForItem:(id)arg1 ;
-(id)newItemWithItemDictionary:(id)arg1 ;
-(id)newExternalDownloadWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newPurchaseWithItem:(id)arg1 storeOffer:(id)arg2 ;
-(long long)itemTypeForTypeString:(id)arg1 ;
-(id)_newDownloadForDocumentItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)_newDownloadForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(id)_thumbnailImageForItem:(id)arg1 ;
-(id)_newTonePurchaseWithPurchase:(id)arg1 ;
-(id)_newDownloadMetadataForPodcastEpisode:(id)arg1 storeOffer:(id)arg2 ;
-(long long)estimatedDiskSpaceNeededForItem:(id)arg1 storeOffer:(id)arg2 ;
-(id)newDisplayItemValidationTestsForItem:(id)arg1 ;
-(id)typeStringForItemType:(long long)arg1 ;
@end

