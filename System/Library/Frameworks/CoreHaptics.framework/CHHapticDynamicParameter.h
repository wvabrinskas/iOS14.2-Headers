/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CHHapticDynamicParameter : NSObject {

	NSString* _param;
	float _value;
	double _time;

}

@property (readonly) NSString * parameterID;              //@synthesize param=_param - In the implementation block
@property (assign) float value;                           //@synthesize value=_value - In the implementation block
@property (assign) double relativeTime;                   //@synthesize time=_time - In the implementation block
-(NSString *)parameterID;
-(id)init;
-(id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(double)relativeTime;
-(void)setRelativeTime:(double)arg1 ;
@end
