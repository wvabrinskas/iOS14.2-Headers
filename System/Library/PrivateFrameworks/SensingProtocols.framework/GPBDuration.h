/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Transparency/GPBMessage.h>

@interface GPBDuration : GPBMessage

@property (assign,nonatomic) double timeInterval; 
@property (assign,nonatomic) double timeIntervalSince1970; 
@property (assign,nonatomic) long long seconds; 
@property (assign,nonatomic) int nanos; 
+(id)descriptor;
-(id)initWithTimeInterval:(double)arg1 ;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(double)timeInterval;
-(double)timeIntervalSince1970;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
@end
