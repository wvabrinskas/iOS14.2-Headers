/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FigCaptureSessionPreviewTapDelegate;
#import <CMCapture/CMCapture-Structs.h>
@interface FigCaptureSessionProxy : NSObject {

	OpaqueFigCaptureSessionRef _session;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}

@property (readonly) long long identifier; 
+(void)initialize;
-(long long)identifier;
-(void)closePreviewTap;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 identifier:(long long)arg2 ;
-(void)dealloc;
@end

