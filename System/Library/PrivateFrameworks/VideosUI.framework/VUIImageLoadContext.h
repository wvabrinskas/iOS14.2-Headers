/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUIImageLoadingOperation;
@class NSOperation;

@interface VUIImageLoadContext : NSObject {

	NSOperation*<VUIImageLoadingOperation> _imageLoadOperation;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSOperation*<VUIImageLoadingOperation> imageLoadOperation;              //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                                        //@synthesize requestCount=_requestCount - In the implementation block
-(unsigned long long)requestCount;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(NSOperation*<VUIImageLoadingOperation>)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation*<VUIImageLoadingOperation>)arg1 ;
@end

