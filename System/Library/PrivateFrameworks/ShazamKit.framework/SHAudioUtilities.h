/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SHAudioUtilities : NSObject
+(unsigned long long)convertMachTimeToMillisecods:(unsigned long long)arg1 ;
+(id)bufferTail:(id)arg1 length:(double)arg2 ;
+(double)lengthOfBuffer:(id)arg1 ;
+(id)extractFromBuffer:(id)arg1 atPosition:(unsigned)arg2 length:(unsigned)arg3 ;
+(id)splitBuffer:(id)arg1 fromStartPosition:(unsigned)arg2 intoLengthsOfSize:(double)arg3 ;
+(id)splitBuffer:(id)arg1 atPosition:(unsigned)arg2 ;
+(BOOL)isAudioFormatSupported:(id)arg1 ;
+(id)audioBufferFromData:(void*)arg1 byteSize:(unsigned long long)arg2 inFormat:(id)arg3 ;
@end

