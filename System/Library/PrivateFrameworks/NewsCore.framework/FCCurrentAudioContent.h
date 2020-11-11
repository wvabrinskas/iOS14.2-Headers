/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FCCurrentAudioContent : NSObject <NSCopying> {

	NSArray* _recentHeadlines;
	NSArray* _featuredHeadlines;

}

@property (nonatomic,copy,readonly) NSArray * recentHeadlines;                //@synthesize recentHeadlines=_recentHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featuredHeadlines;              //@synthesize featuredHeadlines=_featuredHeadlines - In the implementation block
-(NSArray *)recentHeadlines;
-(NSArray *)featuredHeadlines;
-(id)initWithRecentHeadlines:(id)arg1 featuredHeadlines:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
