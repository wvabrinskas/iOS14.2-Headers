/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient {

	CRRecentContact* _recent;

}
-(BOOL)isGroup;
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)initWithRecentContact:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)recentContact;
-(id)initWithCoder:(id)arg1 ;
@end
