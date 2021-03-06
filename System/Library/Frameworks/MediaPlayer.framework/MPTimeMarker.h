/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject {

	double _duration;
	unsigned long long _index;
	double _time;
	NSString* _title;
	NSURL* _url;
	long long _markerType;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) double comparableTime; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long index;                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkAtPlaybackTime; 
@property (assign,nonatomic) double time;                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double maxTime; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long markerType;                       //@synthesize markerType=_markerType - In the implementation block
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(double)maxTime;
-(long long)markerType;
-(NSURL *)url;
-(id)initWithMarkerType:(long long)arg1 ;
-(double)comparableTime;
-(BOOL)hasArtworkAtPlaybackTime;
-(id)urlTitleTrimmingCharacterSet;
-(NSDictionary *)metadata;
-(void)setUrl:(NSURL *)arg1 ;
-(id)description;
-(unsigned long long)index;
-(NSString *)title;
-(void)setTime:(double)arg1 ;
-(double)time;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
@end

