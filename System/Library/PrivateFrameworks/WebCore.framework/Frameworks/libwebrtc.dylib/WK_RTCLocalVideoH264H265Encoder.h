/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WK_RTCVideoEncoderH264, WK_RTCVideoEncoderH265;

@interface WK_RTCLocalVideoH264H265Encoder : NSObject {

	WK_RTCVideoEncoderH264* m_h264Encoder;
	WK_RTCVideoEncoderH265* m_h265Encoder;

}
-(void)setCallback:(/*^block*/id)arg1 ;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)initWithCodecInfo:(id)arg1 ;
@end

