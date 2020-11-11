/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DDSAssetProvidingDelegate <NSObject>
@required
-(void)didUpdateCatalogWithError:(id)arg1;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)didBeginUpdateCatalog;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;

@end
