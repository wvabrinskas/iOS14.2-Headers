/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CAMPanoramaProcessorDelegate;
#import <CameraUI/CameraUI-Structs.h>
@class CAMPanoramaCaptureRequest, NSMutableDictionary;

@interface CAMPanoramaProcessor : NSObject {

	BOOL _capturingPanorama;
	id<CAMPanoramaProcessorDelegate> _delegate;
	CAMPanoramaCaptureRequest* _request;
	long long _photoEncodingBehavior;
	long long _direction;
	NSMutableDictionary* __initialMetadataByRequestUUID;
	OpaqueFigSampleBufferProcessorRef __processor;
	CGSize _previewSize;

}

@property (assign,setter=_setCapturingPanorama:,getter=isCapturingPanorama,nonatomic) BOOL capturingPanorama;              //@synthesize capturingPanorama=_capturingPanorama - In the implementation block
@property (setter=_setRequest:,nonatomic,retain) CAMPanoramaCaptureRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _initialMetadataByRequestUUID;                                        //@synthesize _initialMetadataByRequestUUID=__initialMetadataByRequestUUID - In the implementation block
@property (nonatomic,readonly) OpaqueFigSampleBufferProcessorRef _processor;                                               //@synthesize _processor=__processor - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMPanoramaProcessorDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long photoEncodingBehavior;                                                            //@synthesize photoEncodingBehavior=_photoEncodingBehavior - In the implementation block
@property (nonatomic,readonly) CGSize previewSize;                                                                         //@synthesize previewSize=_previewSize - In the implementation block
@property (assign,nonatomic) long long direction;                                                                          //@synthesize direction=_direction - In the implementation block
-(CAMPanoramaCaptureRequest *)request;
-(long long)direction;
-(id<CAMPanoramaProcessorDelegate>)delegate;
-(void)startPanoramaCaptureWithRequest:(id)arg1 ;
-(void)setDirection:(long long)arg1 ;
-(OpaqueFigSampleBufferProcessorRef)_processor;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)isCapturingPanorama;
-(CGSize)previewSize;
-(void)_setRequest:(id)arg1 ;
-(long long)photoEncodingBehavior;
-(void)invalidate;
-(void)dealloc;
-(NSMutableDictionary *)_initialMetadataByRequestUUID;
-(void)_setCapturingPanorama:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 encodingBehavior:(long long)arg2 ;
-(void)stopPanoramaCapture;
-(void)processPanoramaCaptureWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
