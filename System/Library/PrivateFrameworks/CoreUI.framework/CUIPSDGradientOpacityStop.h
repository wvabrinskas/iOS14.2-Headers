/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

	double opacity;

}
+(void)initialize;
+(id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2 ;
-(id)initWithLocation:(double)arg1 opacity:(double)arg2 ;
-(double)opacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOpacityStop;
-(double)opacityLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
