/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, PHFetchResult, NSString;

@interface PXSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver> {

	BOOL _needsAlbumsVocabularyUpdate;
	BOOL _needsPeopleVocabularyUpdate;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	PHFetchResult* _albumFetchResult;
	PHFetchResult* _peopleFetchResult;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (assign,nonatomic) BOOL needsAlbumsVocabularyUpdate;                          //@synthesize needsAlbumsVocabularyUpdate=_needsAlbumsVocabularyUpdate - In the implementation block
@property (assign,nonatomic) BOOL needsPeopleVocabularyUpdate;                          //@synthesize needsPeopleVocabularyUpdate=_needsPeopleVocabularyUpdate - In the implementation block
@property (nonatomic,retain) PHFetchResult * albumFetchResult;                          //@synthesize albumFetchResult=_albumFetchResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * peopleFetchResult;                         //@synthesize peopleFetchResult=_peopleFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)updateVocabulary;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)_localizedTitlesForAssetCollectionFetchResult:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PHFetchResult *)peopleFetchResult;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_onQueueUpdateAlbumVocabulary;
-(BOOL)needsAlbumsVocabularyUpdate;
-(void)setNeedsAlbumsVocabularyUpdate:(BOOL)arg1 ;
-(void)_onQueueUpdatePeopleVocabulary;
-(void)setAlbumFetchResult:(PHFetchResult *)arg1 ;
-(BOOL)needsPeopleVocabularyUpdate;
-(PHFetchResult *)albumFetchResult;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPeopleFetchResult:(PHFetchResult *)arg1 ;
-(void)setNeedsPeopleVocabularyUpdate:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(void)dealloc;
@end
