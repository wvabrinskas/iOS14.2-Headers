/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class REMObjectID, NSDate;

@interface REMSmartListOrder : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding> {

	REMObjectID* _objectID;
	REMObjectID* _reminderID;
	double _start;
	double _end;
	NSDate* _lastModifiedDate;

}

@property (nonatomic,readonly) REMObjectID * objectID;                       //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain,readonly) REMObjectID * reminderID;              //@synthesize reminderID=_reminderID - In the implementation block
@property (assign,nonatomic) double start;                                   //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                                     //@synthesize end=_end - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                        //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(id)newObjectID;
+(BOOL)supportsSecureCoding;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
-(double)end;
-(REMObjectID *)objectID;
-(double)start;
-(id)changedKeys;
-(unsigned long long)hash;
-(REMObjectID *)remObjectID;
-(void)setStart:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnd:(double)arg1 ;
-(REMObjectID *)reminderID;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(id)initWithObjectID:(id)arg1 reminderID:(id)arg2 start:(double)arg3 end:(double)arg4 lastModifiedDate:(id)arg5 ;
-(id)initWithReminderID:(id)arg1 start:(double)arg2 end:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

