/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSDate;

@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding> {

	NSData* _fetchData;
	NSDictionary* _token;
	NSDate* _date;
	long long _resultType;
	BOOL _delete;
	BOOL _transactionFromToken;
	unsigned long long _fetchLimit;
	unsigned long long _fetchOffset;
	unsigned long long _fetchBatchSize;
	unsigned long long _percentageOfDB;

}

@property (nonatomic,retain,readonly) NSData * fetchData;                      //@synthesize fetchData=_fetchData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,retain,readonly) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long resultType;                           //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL delete;                                    //@synthesize delete=_delete - In the implementation block
@property (nonatomic,readonly) BOOL transactionFromToken;                      //@synthesize transactionFromToken=_transactionFromToken - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchLimit;                  //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchOffset;                 //@synthesize fetchOffset=_fetchOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long fetchBatchSize;              //@synthesize fetchBatchSize=_fetchBatchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long percentageOfDB;              //@synthesize percentageOfDB=_percentageOfDB - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)fetchOffset;
-(unsigned long long)fetchBatchSize;
-(BOOL)delete;
-(long long)resultType;
-(BOOL)transactionFromToken;
-(unsigned long long)percentageOfDB;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(NSDictionary *)token;
-(NSDate *)date;
-(unsigned long long)fetchLimit;
-(NSData *)fetchData;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
