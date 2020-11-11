/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {

	BWRingBuffer* _ringBuffer;
	double _maxDuration;
	int _maxCount;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW116*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(SCD_Struct_BW122*)lastSample;
-(unsigned long long)count;
-(id)initWithMaxDuration:(double)arg1 ;
-(void)addMotionDataToRingBuffer:(SCD_Struct_BW122*)arg1 withSampleCount:(int)arg2 ;
-(double)duration;
-(void)dealloc;
@end
