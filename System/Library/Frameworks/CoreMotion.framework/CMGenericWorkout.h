/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMWorkout.h>

@interface CMGenericWorkout : CMWorkout {

	unsigned long long fWorkoutLabel;

}

@property (nonatomic,readonly) unsigned long long workoutLabel; 
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
+(id)genericWorkoutInstance:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)workoutLabel;
-(id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

