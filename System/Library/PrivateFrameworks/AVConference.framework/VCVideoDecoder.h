/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCVideoDecoder : NSObject {

	long long _streamToken;
	tagHANDLE* _videoPlayerHandle;
	int _clientCount;

}

@property (readonly) tagHANDLE* videoPlayerHandle; 
+(id)streamTokenDecoderMap;
+(id)decoderForStreamToken:(long long)arg1 withConfig:(tagVideoDecoderConfig*)arg2 ;
+(void)releaseVideoDecoderForStreamToken:(long long)arg1 ;
-(id)initWithConfig:(tagVideoDecoderConfig*)arg1 ;
-(void)dealloc;
-(tagHANDLE*)videoPlayerHandle;
@end
