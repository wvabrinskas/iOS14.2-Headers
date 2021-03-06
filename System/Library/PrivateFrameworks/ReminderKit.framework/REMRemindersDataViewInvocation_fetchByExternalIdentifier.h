/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding> {

	NSArray* _externalIdentifiers;
	REMObjectID* _listObjectID;

}

@property (nonatomic,readonly) NSArray * externalIdentifiers;              //@synthesize externalIdentifiers=_externalIdentifiers - In the implementation block
@property (nonatomic,readonly) REMObjectID * listObjectID;                 //@synthesize listObjectID=_listObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)externalIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2 ;
-(REMObjectID *)listObjectID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

