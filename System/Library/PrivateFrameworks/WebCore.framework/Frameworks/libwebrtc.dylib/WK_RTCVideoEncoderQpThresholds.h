/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WK_RTCVideoEncoderQpThresholds : NSObject {

	long long _low;
	long long _high;

}

@property (nonatomic,readonly) long long low;               //@synthesize low=_low - In the implementation block
@property (nonatomic,readonly) long long high;              //@synthesize high=_high - In the implementation block
-(long long)high;
-(long long)low;
-(id)initWithThresholdsLow:(long long)arg1 high:(long long)arg2 ;
@end
