/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {

	CalLocation* _start;
	CalLocation* _end;
	double _duration;
	NSString* _route;

}

@property (retain) CalLocation * start;              //@synthesize start=_start - In the implementation block
@property (retain) CalLocation * end;                //@synthesize end=_end - In the implementation block
@property (assign) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (copy) NSString * route;                   //@synthesize route=_route - In the implementation block
+(BOOL)supportsSecureCoding;
-(CalLocation *)end;
-(NSString *)route;
-(CalLocation *)start;
-(void)setDuration:(double)arg1 ;
-(void)setRoute:(NSString *)arg1 ;
-(void)setStart:(CalLocation *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnd:(CalLocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
@end

