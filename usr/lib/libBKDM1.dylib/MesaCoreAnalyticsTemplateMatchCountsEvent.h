/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libBKDM1.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libBKDM1.dylib/MesaCoreAnalyticsEvent.h>

@class NSNumber;

@interface MesaCoreAnalyticsTemplateMatchCountsEvent : MesaCoreAnalyticsEvent {

	NSNumber* _template1MatchCount;
	NSNumber* _template2MatchCount;
	NSNumber* _template3MatchCount;
	NSNumber* _template4MatchCount;
	NSNumber* _template5MatchCount;
	NSNumber* _enrolledUsersCount;
	NSNumber* _enrolledTemplatesCount;
	NSNumber* _activeUsersCount;
	NSNumber* _activeTemplatesCount;

}

@property (retain) NSNumber * template1MatchCount;                 //@synthesize template1MatchCount=_template1MatchCount - In the implementation block
@property (retain) NSNumber * template2MatchCount;                 //@synthesize template2MatchCount=_template2MatchCount - In the implementation block
@property (retain) NSNumber * template3MatchCount;                 //@synthesize template3MatchCount=_template3MatchCount - In the implementation block
@property (retain) NSNumber * template4MatchCount;                 //@synthesize template4MatchCount=_template4MatchCount - In the implementation block
@property (retain) NSNumber * template5MatchCount;                 //@synthesize template5MatchCount=_template5MatchCount - In the implementation block
@property (retain) NSNumber * enrolledUsersCount;                  //@synthesize enrolledUsersCount=_enrolledUsersCount - In the implementation block
@property (retain) NSNumber * enrolledTemplatesCount;              //@synthesize enrolledTemplatesCount=_enrolledTemplatesCount - In the implementation block
@property (retain) NSNumber * activeUsersCount;                    //@synthesize activeUsersCount=_activeUsersCount - In the implementation block
@property (retain) NSNumber * activeTemplatesCount;                //@synthesize activeTemplatesCount=_activeTemplatesCount - In the implementation block
-(NSNumber *)enrolledUsersCount;
-(void)setEnrolledUsersCount:(NSNumber *)arg1 ;
-(id)init;
-(NSNumber *)template1MatchCount;
-(void)setTemplate1MatchCount:(NSNumber *)arg1 ;
-(NSNumber *)template3MatchCount;
-(void)setActiveUsersCount:(NSNumber *)arg1 ;
-(void)setTemplate2MatchCount:(NSNumber *)arg1 ;
-(void)reset;
-(NSNumber *)template2MatchCount;
-(void)setActiveTemplatesCount:(NSNumber *)arg1 ;
-(NSNumber *)activeTemplatesCount;
-(void)setTemplate3MatchCount:(NSNumber *)arg1 ;
-(void)setTemplate4MatchCount:(NSNumber *)arg1 ;
-(NSNumber *)activeUsersCount;
-(NSNumber *)template4MatchCount;
-(NSNumber *)template5MatchCount;
-(void)setTemplate5MatchCount:(NSNumber *)arg1 ;
-(NSNumber *)enrolledTemplatesCount;
-(void)setMatchCounts:(id)arg1 ;
-(void)setEnrolledTemplatesCount:(NSNumber *)arg1 ;
@end

