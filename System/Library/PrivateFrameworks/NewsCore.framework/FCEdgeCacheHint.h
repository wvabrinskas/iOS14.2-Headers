/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCEdgeCacheHint : NSObject <NSCopying> {

	NSString* _groupName;
	NSString* _cacheControlKey;

}

@property (nonatomic,copy,readonly) NSString * groupName;                    //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheControlKey;              //@synthesize cacheControlKey=_cacheControlKey - In the implementation block
+(id)edgeCacheHintForTopStories;
+(id)edgeCacheHintForSpotlight;
+(id)edgeCacheHintForFeaturedArticles;
+(id)edgeCacheHintForToday;
+(id)edgeCacheHintForLocalNews;
+(id)edgeCacheHintForTrending;
+(id)edgeCacheHintForEditorial;
+(id)edgeCacheHintForMagazineContent;
+(id)edgeCacheHintForEvergreenArticles;
+(id)edgeCacheHintForAudioContent;
+(id)edgeCacheHintForForYouConfig;
-(NSString *)groupName;
-(NSString *)cacheControlKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGroupName:(id)arg1 cacheControlKey:(id)arg2 ;
@end
