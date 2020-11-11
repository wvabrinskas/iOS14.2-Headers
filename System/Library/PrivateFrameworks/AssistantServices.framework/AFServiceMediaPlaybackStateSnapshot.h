/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFServiceContextSnapshot.h>

@class NSDate, NSString;

@interface AFServiceMediaPlaybackStateSnapshot : AFServiceContextSnapshot {

	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;

}

@property (nonatomic,readonly) long long playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * nowPlayingTimestamp;              //@synthesize nowPlayingTimestamp=_nowPlayingTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)playbackState;
-(NSString *)groupIdentifier;
-(NSString *)mediaType;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)nowPlayingTimestamp;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDeliveryDate:(id)arg1 playbackState:(long long)arg2 nowPlayingTimestamp:(id)arg3 mediaType:(id)arg4 groupIdentifier:(id)arg5 ;
@end
