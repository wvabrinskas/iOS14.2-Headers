/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCChannelProviding;
@class FCCloudContext, FCTopStoriesOperationResult, FCForYouConfig, NSError;

@interface FCTopStoriesOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	id<FCChannelProviding> _topStoriesChannel;
	FCTopStoriesOperationResult* _topStoriesResult;
	FCForYouConfig* _forYouConfig;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (copy) id<FCChannelProviding> topStoriesChannel;                      //@synthesize topStoriesChannel=_topStoriesChannel - In the implementation block
@property (retain) FCTopStoriesOperationResult * topStoriesResult;              //@synthesize topStoriesResult=_topStoriesResult - In the implementation block
@property (retain) FCForYouConfig * forYouConfig;                               //@synthesize forYouConfig=_forYouConfig - In the implementation block
@property (retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                          //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                   //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)catchUpCompletionHandler;
-(id<FCChannelProviding>)topStoriesChannel;
-(void)setForYouConfig:(FCForYouConfig *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(FCCloudContext *)context;
-(FCForYouConfig *)forYouConfig;
-(void)setContext:(FCCloudContext *)arg1 ;
-(void)setTopStoriesChannel:(id<FCChannelProviding>)arg1 ;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(void)setTopStoriesResult:(FCTopStoriesOperationResult *)arg1 ;
-(void)_checkShouldShowTopStoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
@end

