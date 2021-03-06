/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <Photos/PHMediaRequest.h>

@protocol OS_dispatch_semaphore, PHImageRequestDelegate;
@class PHImageDecoderAsyncDecodeRequestHandle, PHImageResult, PHImageResourceChooser, NSObject, NSURL, NSString, PLProgressFollower, PHImageDisplaySpec, PHImageRequestBehaviorSpec;

@interface PHImageRequest : PHMediaRequest {

	os_unfair_lock_s _lock;
	PHImageDecoderAsyncDecodeRequestHandle* _asyncDecodeRequestHandle;
	PHImageResult* _imageResult;
	PHImageResourceChooser* _chooser;
	CGSize _desiredImageSize;
	BOOL _forceIgnoreCache;
	NSObject*<OS_dispatch_semaphore> _syncDownloadWaitSemaphore;
	NSURL* _configuredImageURL;
	NSString* _configuredImageUTI;
	long long _configuredExifOrientation;
	PLProgressFollower* _progressFollower;
	id<PHImageRequestDelegate> _delegate;
	PHImageDisplaySpec* _displaySpec;
	PHImageRequestBehaviorSpec* _behaviorSpec;

}

@property (nonatomic,readonly) CGSize desiredImageSize;                                 //@synthesize desiredImageSize=_desiredImageSize - In the implementation block
@property (nonatomic,__weak,readonly) id<PHImageRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHImageDisplaySpec * displaySpec;                          //@synthesize displaySpec=_displaySpec - In the implementation block
@property (nonatomic,retain) PHImageRequestBehaviorSpec * behaviorSpec;                 //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
-(long long)downloadIntent;
-(void)setBehaviorSpec:(PHImageRequestBehaviorSpec *)arg1 ;
-(id<PHImageRequestDelegate>)delegate;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 chooser:(id)arg8 delegate:(id)arg9 ;
-(void)startRequest;
-(void)_decodeImageConfiguredWithURL:(id)arg1 isPrimaryFormat:(BOOL)arg2 exifOrientation:(long long)arg3 ;
-(BOOL)isSynchronous;
-(id)description;
-(CGSize)desiredImageSize;
-(BOOL)isNetworkAccessAllowed;
-(PHImageDisplaySpec *)displaySpec;
-(void)handleAvailabilityChangeForResource:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)setDisplaySpec:(PHImageDisplaySpec *)arg1 ;
-(PHImageRequestBehaviorSpec *)behaviorSpec;
-(void)cancel;
-(void)configureWithURL:(id)arg1 uniformTypeIdentifier:(id)arg2 exifOrientation:(int)arg3 ;
@end

