/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTTextToSpeechRouterStreamingStreamingRequest.h>

@class FTStartTextToSpeechStreamingRequest;

@interface FTMutableTextToSpeechRouterStreamingStreamingRequest : FTTextToSpeechRouterStreamingStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTStartTextToSpeechStreamingRequest * contentAsFTStartTextToSpeechStreamingRequest; 
-(id)init;
-(FTStartTextToSpeechStreamingRequest *)contentAsFTStartTextToSpeechStreamingRequest;
-(void)setContentAsFTStartTextToSpeechStreamingRequest:(FTStartTextToSpeechStreamingRequest *)arg1 ;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

