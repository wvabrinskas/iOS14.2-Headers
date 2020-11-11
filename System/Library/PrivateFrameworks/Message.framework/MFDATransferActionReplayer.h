/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/ECTransferActionReplayer.h>
#import <libobjc.A.dylib/ECTransferActionReplayerSubclassMethods.h>

@class MFDAMessageStore, NSString;

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods> {

	MFDAMessageStore* _store;

}

@property (nonatomic,retain) MFDAMessageStore * store;              //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)replayActionUsingStore:(id)arg1 ;
-(BOOL)isRecoverableError:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)downloadFailed;
-(id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2 ;
-(id)appendItem:(id)arg1 mailboxURL:(id)arg2 ;
-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg1 ;
-(MFDAMessageStore *)store;
-(void)setStore:(MFDAMessageStore *)arg1 ;
@end
