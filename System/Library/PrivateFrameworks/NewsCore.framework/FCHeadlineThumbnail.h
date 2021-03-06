/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NewsCore/NewsCore-Structs.h>
@class FCAssetHandle;

@interface FCHeadlineThumbnail : NSObject {

	FCAssetHandle* _thumbnailAssetHandle;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) FCAssetHandle * thumbnailAssetHandle;              //@synthesize thumbnailAssetHandle=_thumbnailAssetHandle - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                              //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
+(id)headlineThumbnailWithAssetHandle:(id)arg1 thumbnailSize:(CGSize)arg2 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(FCAssetHandle *)thumbnailAssetHandle;
-(void)setThumbnailAssetHandle:(FCAssetHandle *)arg1 ;
@end

