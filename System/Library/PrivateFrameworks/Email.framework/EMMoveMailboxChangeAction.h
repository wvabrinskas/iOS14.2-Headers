/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction {

	EMMailboxObjectID* _parentMailboxID;

}

@property (nonatomic,copy,readonly) EMMailboxObjectID * parentMailboxID;              //@synthesize parentMailboxID=_parentMailboxID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2 ;
-(id)initWithMailbox:(id)arg1 newParent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(EMMailboxObjectID *)parentMailboxID;
@end

