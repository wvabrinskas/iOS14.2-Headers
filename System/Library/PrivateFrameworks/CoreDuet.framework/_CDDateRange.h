/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_CDDateRangeProtocol.h>

@class NSDate;

@interface _CDDateRange : NSObject <_CDDateRangeProtocol> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)contains:(id)arg1 ;
-(id)description;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
-(double)duration;
@end

