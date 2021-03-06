/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, FTBeginTextToSpeechStreamingResponse, FTPartialTextToSpeechStreamingResponse, FTFinalTextToSpeechStreamingResponse;

@interface FTTextToSpeechRouterStreamingStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRouterStreamingStreamingResponse* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) FTBeginTextToSpeechStreamingResponse * contentAsFTBeginTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) FTPartialTextToSpeechStreamingResponse * contentAsFTPartialTextToSpeechStreamingResponse; 
@property (nonatomic,readonly) FTFinalTextToSpeechStreamingResponse * contentAsFTFinalTextToSpeechStreamingResponse; 
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRouterStreamingStreamingResponse*)arg2 ;
-(FTBeginTextToSpeechStreamingResponse *)contentAsFTBeginTextToSpeechStreamingResponse;
-(FTPartialTextToSpeechStreamingResponse *)contentAsFTPartialTextToSpeechStreamingResponse;
-(FTFinalTextToSpeechStreamingResponse *)contentAsFTFinalTextToSpeechStreamingResponse;
-(long long)content_type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

