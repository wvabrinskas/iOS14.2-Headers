/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSUUID;


@protocol EMMessageBuilder <EMMutableContentItem,EMMutableMessageListItem>
@property (nonatomic,retain) id<ECEmailAddressConvertible> senderAddress; 
@property (nonatomic,copy) NSArray * bccList; 
@property (nonatomic,copy) NSUUID * documentID; 
@required
-(NSUUID *)documentID;
-(void)setDocumentID:(id)arg1;
-(NSArray *)bccList;
-(void)setSenderAddress:(id)arg1;
-(id<ECEmailAddressConvertible>)senderAddress;
-(void)setBccList:(id)arg1;

@end

