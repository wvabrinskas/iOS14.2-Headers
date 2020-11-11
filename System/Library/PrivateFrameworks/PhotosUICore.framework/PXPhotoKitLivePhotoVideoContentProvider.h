/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotoKitVideoContentProvider.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class PXVideoStabilizeOperation, NSString, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {

	PXVideoStabilizeOperation* _stabilizeOperation;
	NSString* _contentIdentifier;
	PXPhotoKitLivePhotoVideoContentProviderSpec* _spec;

}

@property (nonatomic,readonly) PXPhotoKitLivePhotoVideoContentProviderSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)postProcessingOperationQueue;
-(void)cancelLoading;
-(id)contentIdentifier;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 spec:(id)arg3 ;
-(void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)needsPostprocessing;
-(void)postprocessPlayerItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PXPhotoKitLivePhotoVideoContentProviderSpec *)spec;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dealloc;
@end
