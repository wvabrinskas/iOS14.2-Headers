/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, NSArray, NSDate, NSString;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding> {

	BOOL _completed;
	long long _type;
	REMObjectID* _listID;
	REMObjectID* _parentReminderID;
	NSArray* _objectIDs;
	NSDate* _startingDueDate;
	NSDate* _endingDueDate;
	NSArray* _descriptors;
	NSString* _text;
	long long _textMatching;

}

@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) REMObjectID * listID;                        //@synthesize listID=_listID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentReminderID;              //@synthesize parentReminderID=_parentReminderID - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                         //@synthesize objectIDs=_objectIDs - In the implementation block
@property (nonatomic,retain) NSDate * startingDueDate;                    //@synthesize startingDueDate=_startingDueDate - In the implementation block
@property (nonatomic,retain) NSDate * endingDueDate;                      //@synthesize endingDueDate=_endingDueDate - In the implementation block
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSArray * descriptors;                       //@synthesize descriptors=_descriptors - In the implementation block
@property (nonatomic,retain) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long textMatching;                      //@synthesize textMatching=_textMatching - In the implementation block
+(id)andPredicateDescriptorWithDescriptors:(id)arg1 ;
+(id)orPredicateDescriptorWithDescriptors:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithListID:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithParentReminderID:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithObjectIDs:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg1 and:(id)arg2 ;
+(id)predicateDescriptorForRemindersWithCompleted:(BOOL)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleEquals:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleContains:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)arg1 ;
+(id)predicateDescriptorForRemindersWithTitleEndsWith:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)descriptors;
-(void)setText:(NSString *)arg1 ;
-(void)setStartingDueDate:(NSDate *)arg1 ;
-(void)setEndingDueDate:(NSDate *)arg1 ;
-(NSDate *)endingDueDate;
-(void)setTextMatching:(long long)arg1 ;
-(NSDate *)startingDueDate;
-(long long)textMatching;
-(unsigned long long)hash;
-(void)setParentReminderID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentReminderID;
-(void)setListID:(REMObjectID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(id)initWithType:(long long)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
-(REMObjectID *)listID;
-(long long)type;
-(BOOL)completed;
-(id)initWithCoder:(id)arg1 ;
-(void)setDescriptors:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)objectIDs;
@end
