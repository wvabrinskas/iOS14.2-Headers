/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAsset, PXDisplayAssetVideoContentProviderRequestDelegate;
@class PXMediaProvider;

@interface PXDisplayAssetVideoContentProviderRequest : NSObject {

	long long _requestID;
	id<PXDisplayAsset> _asset;
	PXMediaProvider* _mediaProvider;
	long long _priority;
	double _loadingProgress;
	id<PXDisplayAssetVideoContentProviderRequestDelegate> _delegate;

}

@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PXMediaProvider * mediaProvider;                                                  //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) long long priority;                                                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) double loadingProgress;                                                           //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) id<PXDisplayAssetVideoContentProviderRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)requestWithAsset:(id)arg1 mediaProvider:(id)arg2 priority:(long long)arg3 delegate:(id)arg4 ;
-(id<PXDisplayAsset>)asset;
-(PXMediaProvider *)mediaProvider;
-(void)_start;
-(id<PXDisplayAssetVideoContentProviderRequestDelegate>)delegate;
-(void)_handleLoadingProgress:(double)arg1 ;
-(void)_handleMediaProviderResult:(id)arg1 info:(id)arg2 ;
-(void)setDelegate:(id<PXDisplayAssetVideoContentProviderRequestDelegate>)arg1 ;
-(double)loadingProgress;
-(long long)_streamingVideoIntent;
-(long long)priority;
-(void)cancel;
-(void)dealloc;
@end
