/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PXImportItemViewModel, PHImportAssetDataRequest;

@interface PXImportThumbnailLoadingRequest : NSObject {

	PXImportItemViewModel* _importItem;
	long long _requestID;
	unsigned long long _requestSize;
	/*^block*/id _completionBlock;
	PHImportAssetDataRequest* _assetDataRequest;

}

@property (nonatomic,__weak,readonly) PXImportItemViewModel * importItem;              //@synthesize importItem=_importItem - In the implementation block
@property (nonatomic,readonly) long long requestID;                                    //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) unsigned long long requestSize;                         //@synthesize requestSize=_requestSize - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) PHImportAssetDataRequest * assetDataRequest;                        //@synthesize assetDataRequest=_assetDataRequest - In the implementation block
-(id)completionBlock;
-(id)initWithImportItem:(id)arg1 requestID:(long long)arg2 requestSize:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(PHImportAssetDataRequest *)assetDataRequest;
-(void)setAssetDataRequest:(PHImportAssetDataRequest *)arg1 ;
-(long long)requestID;
-(unsigned long long)requestSize;
-(PXImportItemViewModel *)importItem;
@end

