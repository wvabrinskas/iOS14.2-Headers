/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary, NSArray;

@interface PKCloudStoreRecord : NSObject {

	NSMutableDictionary* _records;
	NSDictionary* _cloudStoreSpecificKeys;

}

@property (nonatomic,copy) NSDictionary * cloudStoreSpecificKeys;              //@synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys - In the implementation block
@property (nonatomic,readonly) NSArray * records; 
-(id)initWithRecords:(id)arg1 ;
-(NSDictionary *)cloudStoreSpecificKeys;
-(void)setCloudStoreSpecificKeys:(NSDictionary *)arg1 ;
-(id)description;
-(void)addRecord:(id)arg1 ;
-(NSArray *)records;
-(id)recordsWithRecordType:(id)arg1 ;
@end
