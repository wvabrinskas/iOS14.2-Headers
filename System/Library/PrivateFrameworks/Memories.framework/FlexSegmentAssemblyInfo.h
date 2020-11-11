/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject {

	FlexSegment* _segment;
	long long _barsUsed;
	NSURL* _url;
	long long _offset;
	long long _duration;

}

@property (nonatomic,retain) FlexSegment * segment;              //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) long long barsUsed;                 //@synthesize barsUsed=_barsUsed - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                 //@synthesize duration=_duration - In the implementation block
-(void)setSegment:(FlexSegment *)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(NSURL *)url;
-(long long)offset;
-(void)setUrl:(NSURL *)arg1 ;
-(id)description;
-(void)setOffset:(long long)arg1 ;
-(FlexSegment *)segment;
-(long long)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)barsUsed;
-(void)setBarsUsed:(long long)arg1 ;
@end
