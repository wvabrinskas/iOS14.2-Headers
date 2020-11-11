/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FCStreamingResults;

@interface FCTagSearchOperationResult : NSObject {

	FCStreamingResults* _channels;
	FCStreamingResults* _topics;

}

@property (nonatomic,retain) FCStreamingResults * channels;              //@synthesize channels=_channels - In the implementation block
@property (nonatomic,retain) FCStreamingResults * topics;                //@synthesize topics=_topics - In the implementation block
-(FCStreamingResults *)channels;
-(FCStreamingResults *)topics;
-(void)setTopics:(FCStreamingResults *)arg1 ;
-(void)setChannels:(FCStreamingResults *)arg1 ;
@end
