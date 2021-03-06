/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SXScrollPosition;

@interface NUArticleScrollPosition : NSObject {

	SXScrollPosition* _position;
	long long _source;

}

@property (nonatomic,readonly) SXScrollPosition * position;              //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) long long source;                         //@synthesize source=_source - In the implementation block
-(long long)source;
-(SXScrollPosition *)position;
-(id)initWithPosition:(id)arg1 source:(long long)arg2 ;
@end

