/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MailSupport/MSFlagChangeTriageAction.h>

@class EMMessage;

@interface MSConversationFlagChangeTriageAction : MSFlagChangeTriageAction

@property (nonatomic,readonly) EMMessage * referenceMessage; 
+(long long)conversationNotificationLevel;
-(id)_changeAction;
-(id)messageFlags;
-(EMMessage *)referenceMessage;
-(id)initWithReferenceMessage:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
@end

