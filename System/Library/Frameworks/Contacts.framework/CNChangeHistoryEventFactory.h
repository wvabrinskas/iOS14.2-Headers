/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CNChangeHistoryEventFactory : NSObject
-(id)addSubgroupToGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
-(id)updateGroupEventWithGroup:(id)arg1 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg1 ;
-(id)addContactEventWithContact:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)preferredContactForImageEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)deleteGroupEventWithGroupIdentifier:(id)arg1 ;
-(id)deleteContactEventWithContactIdentifier:(id)arg1 externalURI:(id)arg2 externalModificationTag:(id)arg3 ;
-(id)addMemberToGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)differentMeCardEventWithContactIdentifier:(id)arg1 ;
-(id)removeSubgroupFromGroupEventWithSubgroup:(id)arg1 group:(id)arg2 ;
-(id)removeMemberFromGroupEventWithMember:(id)arg1 group:(id)arg2 ;
-(id)dropEverythingEvent;
-(id)linkContactsEventWithFromContact:(id)arg1 toContact:(id)arg2 ;
-(id)updateContactEventWithContact:(id)arg1 ;
-(id)addGroupEventWithGroup:(id)arg1 containerIdentifier:(id)arg2 ;
-(id)preferredContactForNameEventWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(id)unlinkContactEventWithContact:(id)arg1 ;
@end

