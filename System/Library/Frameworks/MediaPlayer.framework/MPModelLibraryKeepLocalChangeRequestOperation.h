/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryKeepLocalChangeRequest;

@interface MPModelLibraryKeepLocalChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	/*^block*/id _responseHandler;
	MPModelLibraryKeepLocalChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                          //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryKeepLocalChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(id)responseHandler;
-(void)execute;
-(void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 keepLocal:(long long)arg3 mediaLibrary:(id)arg4 ;
-(void)_handleKeepLocalUpdateStatus:(long long)arg1 forLibraryIdentifier:(long long)arg2 mediaType:(long long)arg3 completedWithError:(id)arg4 ;
-(MPModelLibraryKeepLocalChangeRequest *)request;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequest:(MPModelLibraryKeepLocalChangeRequest *)arg1 ;
@end

