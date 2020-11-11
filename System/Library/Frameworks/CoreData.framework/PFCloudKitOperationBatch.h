/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSArray, NSSet, NSDictionary;

@interface PFCloudKitOperationBatch : NSObject {

	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _recordTypeToDeletedRecordID;
	NSMutableArray* _records;
	NSMutableSet* _recordIDs;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) NSArray * records;                                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSSet * recordIDs;                                       //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,readonly) NSSet * deletedRecordIDs;                                //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSDictionary * recordTypeToDeletedRecordID;              //@synthesize recordTypeToDeletedRecordID=_recordTypeToDeletedRecordID - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;                          //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long totalObjectCount; 
-(NSSet *)recordIDs;
-(id)init;
-(NSSet *)deletedRecordIDs;
-(unsigned long long)sizeInBytes;
-(void)addDeletedRecordID:(id)arg1 forRecordOfType:(id)arg2 ;
-(unsigned long long)totalObjectCount;
-(NSDictionary *)recordTypeToDeletedRecordID;
-(void)addRecord:(id)arg1 ;
-(NSArray *)records;
-(void)dealloc;
@end
