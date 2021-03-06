/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHLivePhotoResult, PHImageRequest, PHVideoRequest, PHLivePhotoRequestOptions;

@interface PHLivePhotoRequestContext : PHMediaRequestContext {

	NSProgress* _imageProgress;
	NSProgress* _videoProgress;
	PHLivePhotoResult* _livePhotoResult;
	PHImageRequest* _fastImageRequest;
	PHImageRequest* _highQualityImageRequest;
	PHVideoRequest* _videoRequest;
	os_unfair_lock_s _lock;
	BOOL _imagePartCompleted;
	BOOL _videoPartCompleted;
	PHLivePhotoRequestOptions* _livePhotoOptions;

}

@property (nonatomic,readonly) PHLivePhotoRequestOptions * livePhotoOptions;              //@synthesize livePhotoOptions=_livePhotoOptions - In the implementation block
-(/*^block*/id)progressHandler;
-(id)produceChildRequestsForRequest:(id)arg1 reportingIsLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3 result:(id)arg4 ;
-(id)initialRequests;
-(BOOL)isNetworkAccessAllowed;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(BOOL)_shouldRequestVideo;
-(id)_lazyImageProgress;
-(id)_lazyVideoProgress;
-(PHLivePhotoRequestOptions *)livePhotoOptions;
-(long long)type;
-(BOOL)representsShareableHighQualityResource;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)progresses;
-(BOOL)shouldReportProgress;
@end

