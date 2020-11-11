/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSString, NSURL;

@interface VCPEvent : NSObject <NSSecureCoding> {

	BOOL _allDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSString* _location;
	NSURL* _url;
	NSString* _notes;

}

@property (nonatomic,retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                        //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * notes;                   //@synthesize notes=_notes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSString *)location;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNotes:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(BOOL)allDay;
-(id)description;
-(NSTimeZone *)timeZone;
-(void)setAllDay:(BOOL)arg1 ;
-(NSString *)notes;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
