/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber, NSDate, NSDictionary;

@interface EDSearchableIndexVerificationData : NSObject <NSCopying> {

	NSString* _subject;
	NSArray* _toEmailAddresses;
	NSString* _deleted;
	NSNumber* _transactionID;
	NSNumber* _flags;
	NSNumber* _indexedAsEmptySubject;
	NSDate* _dateReceived;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * subject;                              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * toEmailAddresses;                      //@synthesize toEmailAddresses=_toEmailAddresses - In the implementation block
@property (nonatomic,copy) NSString * deleted;                              //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSNumber * transactionID;                      //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * indexedAsEmptySubject;              //@synthesize indexedAsEmptySubject=_indexedAsEmptySubject - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)subject;
-(NSDictionary *)userInfo;
-(void)setSubject:(NSString *)arg1 ;
-(NSNumber *)transactionID;
-(NSNumber *)flags;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)deleted;
-(void)setFlags:(NSNumber *)arg1 ;
-(void)setDeleted:(NSString *)arg1 ;
-(void)setTransactionID:(NSNumber *)arg1 ;
-(NSDate *)dateReceived;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setToEmailAddresses:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)toEmailAddresses;
-(NSNumber *)indexedAsEmptySubject;
-(void)setIndexedAsEmptySubject:(NSNumber *)arg1 ;
@end

