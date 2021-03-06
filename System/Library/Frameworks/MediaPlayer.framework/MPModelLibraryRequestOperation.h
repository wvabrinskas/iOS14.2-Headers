/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryRequest, NSOperationQueue;

@interface MPModelLibraryRequestOperation : MPAsyncOperation {

	MPModelLibraryRequest* _request;
	/*^block*/id _responseHandler;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _serialAccessQueue;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                 //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialAccessQueue;              //@synthesize serialAccessQueue=_serialAccessQueue - In the implementation block
@property (nonatomic,copy) MPModelLibraryRequest * request;                     //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)execute;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(MPModelLibraryRequest *)request;
-(NSOperationQueue *)operationQueue;
-(void)setResponseHandler:(id)arg1 ;
-(void)setRequest:(MPModelLibraryRequest *)arg1 ;
-(id)_itemProperties;
-(void)setSerialAccessQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serialAccessQueue;
-(id)_sectionProperties;
-(void)_sanityCheckRequest;
-(void)_executeRequest;
-(id)_libraryView;
-(void)_executeLegacyRequest;
@end

