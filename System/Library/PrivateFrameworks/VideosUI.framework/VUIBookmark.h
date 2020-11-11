/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VUIBookmarkKey, NSDate;

@interface VUIBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _hasBeenPlayed;
	BOOL _hasBeenRented;
	BOOL _isMarkedAsUnwatched;
	BOOL _hasFakeTimestamp;
	VUIBookmarkKey* _key;
	double _bookmarkTime;
	NSDate* _bookmarkTimestamp;
	unsigned long long _playCount;

}

@property (assign,nonatomic) BOOL hasFakeTimestamp;                       //@synthesize hasFakeTimestamp=_hasFakeTimestamp - In the implementation block
@property (nonatomic,readonly) VUIBookmarkKey * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) double bookmarkTime;                       //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,readonly) NSDate * bookmarkTimestamp;                //@synthesize bookmarkTimestamp=_bookmarkTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long playCount;              //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenPlayed;                        //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenRented;                        //@synthesize hasBeenRented=_hasBeenRented - In the implementation block
@property (nonatomic,readonly) BOOL isMarkedAsUnwatched;                  //@synthesize isMarkedAsUnwatched=_isMarkedAsUnwatched - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)playCount;
-(VUIBookmarkKey *)key;
-(id)init;
-(double)bookmarkTime;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)bookmarkTimestamp;
-(BOOL)hasBeenPlayed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasBeenRented;
-(BOOL)isMarkedAsUnwatched;
-(BOOL)hasFakeTimestamp;
-(id)_copyWithResultClass:(Class)arg1 ;
-(void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg1 ;
-(void)_setBookmarkTimestamp:(id)arg1 ;
-(void)_setPlayCount:(unsigned long long)arg1 ;
-(void)_setHasBeenPlayed:(BOOL)arg1 ;
-(void)_setHasBeenRented:(BOOL)arg1 ;
-(void)_setIsMarkedAsUnwatched:(BOOL)arg1 ;
-(BOOL)hasRemoteData;
-(void)setHasFakeTimestamp:(BOOL)arg1 ;
@end
