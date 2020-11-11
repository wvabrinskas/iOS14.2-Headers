/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying> {

	NSTimeZone* _nsTimeZone;

}

@property (nonatomic,retain) NSTimeZone * nsTimeZone;              //@synthesize nsTimeZone=_nsTimeZone - In the implementation block
+(id)timeZoneWithNSTimeZone:(id)arg1 ;
+(id)timeZoneWithName:(id)arg1 ;
-(double)secondsFromGMTForAbsoluteTime:(double)arg1 ;
-(id)NSTimeZone;
-(unsigned long long)hash;
-(double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1 ;
-(void)setNsTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)nsTimeZone;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNSTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
