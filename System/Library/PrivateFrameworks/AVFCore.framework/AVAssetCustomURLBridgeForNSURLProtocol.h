/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSMutableDictionary, NSObject;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject {

	NSMutableDictionary* _requestIDToDownload;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
-(void)_didReceiveData:(id)arg1 data:(CFDataRef)arg2 ;
-(void)_didFinish:(id)arg1 error:(CFErrorRef)arg2 ;
-(BOOL)_willSendRequest:(id)arg1 request:(CFURLRequestRef)arg2 redirectionResponse:(CFURLResponseRef)arg3 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_cancelRequestID:(unsigned long long)arg1 ;
-(void)_didReceiveResponse:(id)arg1 response:(CFURLResponseRef)arg2 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)dealloc;
@end
