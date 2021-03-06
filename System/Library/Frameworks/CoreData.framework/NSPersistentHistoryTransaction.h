/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, NSString, NSPersistentHistoryToken;

@interface NSPersistentHistoryTransaction : NSObject <NSCopying>

@property (copy,readonly) NSDate * timestamp; 
@property (copy,readonly) NSArray * changes; 
@property (readonly) long long transactionNumber; 
@property (copy,readonly) NSString * storeID; 
@property (copy,readonly) NSString * bundleID; 
@property (copy,readonly) NSString * processID; 
@property (copy,readonly) NSString * contextName; 
@property (copy,readonly) NSString * author; 
@property (readonly) NSPersistentHistoryToken * token; 
+(id)entityDescription;
+(BOOL)supportsSecureCoding;
+(id)fetchRequest;
+(id)entityDescriptionWithContext:(id)arg1 ;
-(NSArray *)changes;
-(NSString *)storeID;
-(NSString *)bundleID;
-(id)postQueryGenerationToken;
-(NSString *)author;
-(NSString *)processID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)objectIDNotification;
-(NSPersistentHistoryToken *)token;
-(NSString *)contextName;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(long long)transactionNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initialQueryGenerationToken;
@end

