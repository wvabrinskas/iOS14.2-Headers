/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpotlightDaemon/SpotlightDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSObject;

@interface SDTraceItem : NSObject <NSCopying> {

	double _startTime;
	long long _identifier;
	double _duration;
	NSString* _label;
	NSObject* _data;
	NSString* _string;

}

@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSObject * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * string;                 //@synthesize string=_string - In the implementation block
+(void)appendDescription:(id)arg1 prefix:(id)arg2 toString:(id)arg3 ;
+(id)stringFromReferenceDate:(double)arg1 ;
-(NSString *)label;
-(void)setDuration:(double)arg1 ;
-(void)setData:(NSObject *)arg1 ;
-(double)startTime;
-(long long)identifier;
-(void)setStartTime:(double)arg1 ;
-(id)description;
-(NSObject *)data;
-(void)setString:(NSString *)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(double)duration;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
@end

