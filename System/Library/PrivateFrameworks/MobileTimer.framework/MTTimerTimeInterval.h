/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTTimerTime.h>

@class NSString;

@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime> {

	double _remainingTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double remainingTime;                //@synthesize remainingTime=_remainingTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTimeInterval:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(double)remainingTime;
-(BOOL)isEqualToTime:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

