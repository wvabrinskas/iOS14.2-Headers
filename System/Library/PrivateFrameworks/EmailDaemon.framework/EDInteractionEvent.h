/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, NSDictionary;

@interface EDInteractionEvent : NSObject {

	long long _eventID;
	long long _version;
	NSDate* _date;
	NSString* _accountID;
	long long _mailboxID;
	long long _conversationID;
	long long _messageIDHash;
	long long _messagePersistentID;
	NSString* _name;
	NSDictionary* _data;

}

@property (assign,nonatomic) long long eventID;                          //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) long long version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * accountID;                         //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) long long mailboxID;                        //@synthesize mailboxID=_mailboxID - In the implementation block
@property (assign,nonatomic) long long conversationID;                   //@synthesize conversationID=_conversationID - In the implementation block
@property (assign,nonatomic) long long messageIDHash;                    //@synthesize messageIDHash=_messageIDHash - In the implementation block
@property (assign,nonatomic) long long messagePersistentID;              //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
-(void)setAccountID:(NSString *)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSString *)accountID;
-(long long)version;
-(id)debugDescription;
-(long long)conversationID;
-(NSDate *)date;
-(void)setEventID:(long long)arg1 ;
-(NSString *)name;
-(NSDictionary *)data;
-(void)setMessagePersistentID:(long long)arg1 ;
-(long long)mailboxID;
-(void)setMailboxID:(long long)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(long long)eventID;
-(void)setMessageIDHash:(long long)arg1 ;
-(long long)messageIDHash;
-(void)setName:(NSString *)arg1 ;
-(long long)messagePersistentID;
@end
