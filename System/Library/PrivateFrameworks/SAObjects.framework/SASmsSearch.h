/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray, SASmsGroupName;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,retain) SASmsGroupName * smsGroup; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(NSDate *)end;
-(NSString *)subject;
-(id)groupIdentifier;
-(NSDate *)start;
-(void)setMessage:(NSString *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)senders;
-(void)setStart:(NSDate *)arg1 ;
-(NSNumber *)outgoing;
-(NSNumber *)unread;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSString *)message;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(void)setUnread:(NSNumber *)arg1 ;
-(SASmsGroupName *)smsGroup;
-(void)setSenders:(NSArray *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
@end

