/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LPFetcherResponse.h>

@class LPVideo;

@interface LPFetcherVideoResponse : LPFetcherResponse {

	LPVideo* _video;

}

@property (nonatomic,retain,readonly) LPVideo * video;              //@synthesize video=_video - In the implementation block
+(id)videoPropertiesForFetcher:(id)arg1 ;
-(LPVideo *)video;
-(id)initWithVideo:(id)arg1 fetcher:(id)arg2 ;
@end

