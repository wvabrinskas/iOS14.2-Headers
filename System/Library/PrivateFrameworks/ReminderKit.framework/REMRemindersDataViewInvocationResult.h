/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {

	NSArray* _accountStorages;
	NSArray* _listStorages;
	NSArray* _reminderStorages;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * accountStorages;               //@synthesize accountStorages=_accountStorages - In the implementation block
@property (nonatomic,readonly) NSArray * listStorages;                  //@synthesize listStorages=_listStorages - In the implementation block
@property (nonatomic,readonly) NSArray * reminderStorages;              //@synthesize reminderStorages=_reminderStorages - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDs;                     //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)accountStorages;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)listStorages;
-(NSArray *)reminderStorages;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)objectIDs;
@end

