/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/Email-Structs.h>
#import <Email/EMCollection.h>
#import <libobjc.A.dylib/EMThreadBuilder.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EMMessageListItem.h>

@protocol EMMailboxTypeResolver, EMCollectionItemID;
@class EMMailboxScope, NSArray, NSDate, ECSubject, NSString, ECMessageFlags, NSIndexSet, EFQuery, EMMessageRepository, EMObjectID, EFFuture;

@interface EMThread : EMCollection <EMThreadBuilder, EFLoggable, NSCopying, NSSecureCoding, EMMessageListItem> {

	unsigned long long _isEditable;
	EMMailboxScope* _mailboxScope;
	id<EMMailboxTypeResolver> _mailboxTypeResolver;
	NSArray* _mailboxes;
	NSArray* _mailboxObjectIDs;
	os_unfair_lock_s _mailboxScopeLock;
	os_unfair_lock_s _mailboxTypeResolverLock;
	os_unfair_lock_s _mailboxesLock;
	BOOL _hasUnflagged;
	BOOL _isVIP;
	BOOL _isBocked;
	BOOL _hasAttachments;
	BOOL _isToMe;
	BOOL _isCCMe;
	NSDate* _date;
	ECSubject* _subject;
	NSString* _summary;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	ECMessageFlags* _flags;
	NSIndexSet* _flagColors;
	long long _conversationNotificationLevel;
	unsigned long long _count;
	id<EMCollectionItemID> _displayMessageItemID;
	EFQuery* _originatingQuery;

}

@property (nonatomic,readonly) EMMessageRepository * repository; 
@property (nonatomic,readonly) EFQuery * originatingQuery;                     //@synthesize originatingQuery=_originatingQuery - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * mailboxScope; 
@property (retain) id<EMMailboxTypeResolver> mailboxTypeResolver; 
@property (retain) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (retain) ECSubject * subject;                                        //@synthesize subject=_subject - In the implementation block
@property (copy) NSString * summary;                                           //@synthesize summary=_summary - In the implementation block
@property (copy) NSArray * senderList;                                         //@synthesize senderList=_senderList - In the implementation block
@property (copy) NSArray * toList;                                             //@synthesize toList=_toList - In the implementation block
@property (copy) NSArray * ccList;                                             //@synthesize ccList=_ccList - In the implementation block
@property (assign) BOOL isToMe;                                                //@synthesize isToMe=_isToMe - In the implementation block
@property (assign) BOOL isCCMe;                                                //@synthesize isCCMe=_isCCMe - In the implementation block
@property (retain) ECMessageFlags * flags;                                     //@synthesize flags=_flags - In the implementation block
@property (assign) BOOL hasUnflagged;                                          //@synthesize hasUnflagged=_hasUnflagged - In the implementation block
@property (copy) NSIndexSet * flagColors;                                      //@synthesize flagColors=_flagColors - In the implementation block
@property (assign) BOOL isVIP;                                                 //@synthesize isVIP=_isVIP - In the implementation block
@property (assign) BOOL isBlocked;                                             //@synthesize isBocked=_isBocked - In the implementation block
@property (assign) BOOL hasAttachments;                                        //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (assign) long long conversationNotificationLevel;                    //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (assign) unsigned long long count;                                   //@synthesize count=_count - In the implementation block
@property (assign) long long conversationID; 
@property (copy) NSArray * mailboxObjectIDs;                                   //@synthesize mailboxObjectIDs=_mailboxObjectIDs - In the implementation block
@property (copy) NSArray * mailboxes; 
@property (retain) id<EMCollectionItemID> displayMessageItemID;                //@synthesize displayMessageItemID=_displayMessageItemID - In the implementation block
@property (assign) long long _internalID; 
@property (readonly) EMObjectID * displayMessageObjectID; 
@property (readonly) EFFuture * displayMessage; 
@property (readonly) BOOL deleteMovesToTrash; 
@property (readonly) BOOL supportsArchiving; 
@property (readonly) BOOL shouldArchiveByDefault; 
@property (readonly) BOOL isEditable; 
@property (nonatomic,readonly) id<EMCollectionItemID> itemID; 
@property (nonatomic,copy,readonly) EMObjectID * objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(NSString *)summary;
-(BOOL)isEditable;
-(void)setCount:(unsigned long long)arg1 ;
-(ECSubject *)subject;
-(BOOL)isVIP;
-(EMMailboxScope *)mailboxScope;
-(BOOL)isBlocked;
-(id)query;
-(id)ef_publicDescription;
-(void)setSubject:(ECSubject *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)mailboxObjectIDs;
-(void)_commonInitWithOriginatingQuery:(id)arg1 builder:(/*^block*/id)arg2 ;
-(EFQuery *)originatingQuery;
-(id<EMMailboxTypeResolver>)mailboxTypeResolver;
-(void)setMailboxTypeResolver:(id<EMMailboxTypeResolver>)arg1 ;
-(id)initWithObjectID:(id)arg1 originatingQuery:(id)arg2 builder:(/*^block*/id)arg3 ;
-(NSArray *)toList;
-(NSArray *)ccList;
-(ECMessageFlags *)flags;
-(BOOL)isToMe;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)conversationID;
-(BOOL)isCCMe;
-(void)setRepository:(EMMessageRepository *)arg1 ;
-(unsigned long long)count;
-(NSDate *)date;
-(long long)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(NSArray *)arg1 ;
-(BOOL)hasUnflagged;
-(NSIndexSet *)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(BOOL)deleteMovesToTrash;
-(void)setHasUnflagged:(BOOL)arg1 ;
-(void)setFlagColors:(NSIndexSet *)arg1 ;
-(void)setDisplayMessageItemID:(id<EMCollectionItemID>)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(EMObjectID *)displayMessageObjectID;
-(NSString *)description;
-(BOOL)shouldArchiveByDefault;
-(id<EMCollectionItemID>)itemID;
-(EFFuture *)displayMessage;
-(EMMessageRepository *)repository;
-(id)initWithCoder:(id)arg1 ;
-(long long)_internalID;
-(BOOL)hasAttachments;
-(void)setMailboxes:(NSArray *)arg1 ;
-(BOOL)supportsArchiving;
-(void)setConversationID:(long long)arg1 ;
-(NSArray *)senderList;
-(void)setSummary:(NSString *)arg1 ;
-(void)setHasAttachments:(BOOL)arg1 ;
-(void)setConversationNotificationLevel:(long long)arg1 ;
-(void)set_internalID:(long long)arg1 ;
-(void)setIsToMe:(BOOL)arg1 ;
-(void)setIsCCMe:(BOOL)arg1 ;
-(NSArray *)mailboxes;
-(id)itemIDForObjectID:(id)arg1 ;
-(void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1 ;
-(BOOL)objectIDBelongsToCollection:(id)arg1 ;
-(id)objectIDForItemID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsVIP:(BOOL)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
@end

