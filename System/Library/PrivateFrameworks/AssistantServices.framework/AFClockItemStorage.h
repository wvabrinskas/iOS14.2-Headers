/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol AFClockItemStorageDelegate;
@class NSDate, NSMutableDictionary, NSString, NSDictionary;

@interface AFClockItemStorage : NSObject <AFInvalidating> {

	id<AFClockItemStorageDelegate> _delegate;
	long long _groupingDepth;
	unsigned long long _workingGeneration;
	NSDate* _workingDate;
	NSMutableDictionary* _workingItemsByID;
	NSString* _identifier;
	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _itemsByID;

}

@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSDictionary * itemsByID;                     //@synthesize itemsByID=_itemsByID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)generation;
-(void)deleteAllItems;
-(void)setDate:(NSDate *)arg1 ;
-(void)setItemsByID:(NSDictionary *)arg1 ;
-(NSDictionary *)itemsByID;
-(NSString *)identifier;
-(NSDate *)date;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)itemWithID:(id)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(void)beginGrouping;
-(void)endGroupingWithOptions:(unsigned long long)arg1 ;
-(void)insertOrUpdateItems:(id)arg1 ;
-(void)deleteItemsWithIDs:(id)arg1 ;
-(void)invalidate;
@end

