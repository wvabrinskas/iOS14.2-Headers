/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, QLThumbnailGenerationRequest, QLThumbnailRepresentation, NSError;

@interface QLThumbnailRequestOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	NSDate* _beginDate;
	/*^block*/id _requestUpdateBlock;
	/*^block*/id _requestCompletionBlock;
	NSObject*<OS_dispatch_queue> _serialResponseQueue;
	QLThumbnailGenerationRequest* _request;
	/*^block*/id _thumbnailRequestGenerationWillStartBlock;
	QLThumbnailRepresentation* _mostRepresentativeThumbnail;
	NSError* _thumbnailRequestInvalidError;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialResponseQueue;                     //@synthesize serialResponseQueue=_serialResponseQueue - In the implementation block
@property (retain) QLThumbnailGenerationRequest * request;                                         //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id thumbnailRequestGenerationWillStartBlock;                            //@synthesize thumbnailRequestGenerationWillStartBlock=_thumbnailRequestGenerationWillStartBlock - In the implementation block
@property (nonatomic,retain) QLThumbnailRepresentation * mostRepresentativeThumbnail;              //@synthesize mostRepresentativeThumbnail=_mostRepresentativeThumbnail - In the implementation block
@property (nonatomic,retain) NSError * thumbnailRequestInvalidError;                               //@synthesize thumbnailRequestInvalidError=_thumbnailRequestInvalidError - In the implementation block
@property (nonatomic,copy) id requestUpdateBlock;                                                  //@synthesize requestUpdateBlock=_requestUpdateBlock - In the implementation block
@property (nonatomic,copy) id requestCompletionBlock;                                              //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) double minimumDimension; 
@property (assign,nonatomic) unsigned long long requestedTypes; 
+(id)operationWithThumbnailRequest:(id)arg1 ;
-(BOOL)isExecuting;
-(QLThumbnailGenerationRequest *)request;
-(void)start;
-(BOOL)isAsynchronous;
-(double)minimumDimension;
-(unsigned long long)badgeType;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(void)setRequest:(QLThumbnailGenerationRequest *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)main;
-(void)_finish;
-(BOOL)isFinished;
-(BOOL)isConcurrent;
-(void)cancel;
-(void)setExecuting:(BOOL)arg1 ;
-(id)requestCompletionBlock;
-(void)setMinimumDimension:(double)arg1 ;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(BOOL)_finishIfNeeded;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(BOOL)wantsBaseline;
-(void)setWantsBaseline:(BOOL)arg1 ;
-(id)initWithThumbnailRequest:(id)arg1 ;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 ;
-(void)setRequestedTypes:(unsigned long long)arg1 ;
-(id)sharedSerialResponseQueue;
-(void)setGenerationBehavior:(long long)arg1 ;
-(long long)generationBehavior;
-(void)__finishWithError:(id)arg1 ;
-(void)setRequestUpdateBlock:(id)arg1 ;
-(id)requestUpdateBlock;
-(id)thumbnailRequestGenerationWillStartBlock;
-(unsigned long long)requestedTypes;
-(void)_finishIfRequestIsInvalid;
-(NSObject*<OS_dispatch_queue>)serialResponseQueue;
-(void)setSerialResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setThumbnailRequestGenerationWillStartBlock:(id)arg1 ;
-(QLThumbnailRepresentation *)mostRepresentativeThumbnail;
-(void)setMostRepresentativeThumbnail:(QLThumbnailRepresentation *)arg1 ;
-(NSError *)thumbnailRequestInvalidError;
-(void)setThumbnailRequestInvalidError:(NSError *)arg1 ;
@end
