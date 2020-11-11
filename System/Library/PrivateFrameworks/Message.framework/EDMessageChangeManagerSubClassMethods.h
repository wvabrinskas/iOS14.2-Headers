/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EDMessageChangeManagerSubClassMethods <NSObject>
@required
-(id)messageForDatabaseID:(long long)arg1;
-(long long)mailboxDatabaseIDForURL:(id)arg1;
-(id)accountForMailboxURL:(id)arg1;
-(id)messagesForRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
-(void)deletePersistedMessages:(id)arg1;
-(BOOL)haveCompleteMIMEForMessage:(id)arg1;
-(id)iterateMessagesInMailboxURLs:(id)arg1 excludingMessages:(id)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(id)arg4 handler:(/*^block*/id)arg5;
-(BOOL)persistNewMessages:(id)arg1 mailboxURL:(id)arg2 oldMessagesByNewMessage:(id)arg3 fromSyncing:(BOOL)arg4;
-(id)applyFlagChange:(id)arg1 toMessagesInDatabase:(id)arg2;
-(void)setData:(id)arg1 onMessage:(id)arg2;
-(void)resetStatusCountsForMailboxWithURL:(id)arg1;
-(id)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesInDatabase:(id)arg3;
-(void)setRemoteID:(id)arg1 onMessageWithDatabaseID:(long long)arg2;
-(void)checkForNewActionsInMailboxID:(long long)arg1;
-(void)actionHasChangedAccount:(id)arg1;
-(void)displayErrorForTransferAction:(id)arg1 withResults:(id)arg2;
-(void)messageWasAppended:(id)arg1;
-(BOOL)mailboxIsAllMail:(id)arg1;
-(BOOL)mailboxPartOfAllMail:(id)arg1;

@end
