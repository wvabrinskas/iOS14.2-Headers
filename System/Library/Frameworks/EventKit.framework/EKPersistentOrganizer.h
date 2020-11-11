/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentParticipant.h>

@class NSString;

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic,retain) NSString * displayNameRaw; 
@property (nonatomic,retain) NSString * emailAddress; 
@property (nonatomic,retain) NSString * URL; 
@property (assign,nonatomic) BOOL isCurrentUser; 
+(id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(id)relations;
-(int)entityType;
-(void)setScheduleAgent:(long long)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(id)description;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(BOOL)arg4 ;
-(BOOL)isCurrentUser;
-(long long)scheduleAgent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
@end
