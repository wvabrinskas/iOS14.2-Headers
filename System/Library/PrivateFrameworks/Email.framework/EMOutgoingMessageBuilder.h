/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSData, EMMessageObjectID;


@protocol EMOutgoingMessageBuilder
@property (nonatomic,copy) NSData * messageData; 
@property (assign,nonatomic) long long action; 
@property (nonatomic,retain) EMMessageObjectID * originalMessageID; 
@property (assign,nonatomic) BOOL shouldSign; 
@property (assign,nonatomic) BOOL shouldEncrypt; 
@property (assign,nonatomic) long long conversationNotificationLevel; 
@required
-(void)setOriginalMessageID:(id)arg1;
-(EMMessageObjectID *)originalMessageID;
-(long long)conversationNotificationLevel;
-(void)setMessageData:(id)arg1;
-(BOOL)shouldSign;
-(void)setAction:(long long)arg1;
-(void)setConversationNotificationLevel:(long long)arg1;
-(void)setShouldSign:(BOOL)arg1;
-(void)setShouldEncrypt:(BOOL)arg1;
-(NSData *)messageData;
-(long long)action;
-(BOOL)shouldEncrypt;

@end
