/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DDSAssetProviding <NSObject>
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@required
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)serverDidUpdateAssetsWithType:(id)arg1;
-(void)removeOldAssetsForAssertions:(id)arg1;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(void)removeAssetsForAssertions:(id)arg1;
-(void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(BOOL)arg2;
-(void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;

@end

