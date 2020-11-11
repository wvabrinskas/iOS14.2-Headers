/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable {

	BOOL _isPrepared;
	NSArray* _categories;
	NSDictionary* _assetsByCategory;
	unsigned long long _sampleLength;
	unsigned long long _sampleIndex;
	BOOL _running;
	unsigned long long _maximumAssetCount;
	double _updateInterval;
	PXPhotosDataSource* _dataSource;
	unsigned long long _dataSourceIndex;

}

@property (setter=_setDataSource:,nonatomic,retain) PXPhotosDataSource * dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,setter=_setDataSourceIndex:,nonatomic) unsigned long long dataSourceIndex;              //@synthesize dataSourceIndex=_dataSourceIndex - In the implementation block
@property (assign,nonatomic) unsigned long long maximumAssetCount;                                        //@synthesize maximumAssetCount=_maximumAssetCount - In the implementation block
@property (assign,nonatomic) double updateInterval;                                                       //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                               //@synthesize running=_running - In the implementation block
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(void)_prepare;
-(BOOL)isRunning;
-(PXPhotosDataSource *)dataSource;
-(id)_categoryForAsset:(id)arg1 ;
-(void)_setDataSourceIndex:(unsigned long long)arg1 ;
-(unsigned long long)maximumAssetCount;
-(void)setMaximumAssetCount:(unsigned long long)arg1 ;
-(unsigned long long)dataSourceIndex;
-(id)mutableChangeObject;
-(void)_updateDataSource;
-(void)_setDataSource:(id)arg1 ;
@end
