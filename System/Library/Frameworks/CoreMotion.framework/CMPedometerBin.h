/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMPedometerBin : NSObject <NSSecureCoding> {

	double _valueOut;
	double _begin;
	double _end;
	long long _state;

}

@property (nonatomic,readonly) double valueOut;                   //@synthesize valueOut=_valueOut - In the implementation block
@property (nonatomic,readonly) double begin;                      //@synthesize begin=_begin - In the implementation block
@property (nonatomic,readonly) double lowerQuartile; 
@property (nonatomic,readonly) double center; 
@property (nonatomic,readonly) double upperQuartile; 
@property (nonatomic,readonly) double end;                        //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long state;                   //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)end;
-(double)center;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)state;
-(double)valueOut;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)begin;
-(double)upperQuartile;
-(id)initWithCoder:(id)arg1 ;
-(double)lowerQuartile;
-(id)initWithValueOut:(double)arg1 begin:(double)arg2 end:(double)arg3 state:(long long)arg4 ;
-(void)dealloc;
@end
