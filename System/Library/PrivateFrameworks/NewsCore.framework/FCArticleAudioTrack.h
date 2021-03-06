/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying> {

	long long _type;
	FCAVAsset* _asset;
	double _duration;

}

@property (nonatomic,readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) FCAVAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) double duration;                //@synthesize duration=_duration - In the implementation block
-(FCAVAsset *)asset;
-(id)init;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 asset:(id)arg2 duration:(double)arg3 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

